/*
** Automatically generated from `llds.m'
** by the Mercury compiler,
** version rotd-2007-12-21, configured for i686-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__ll_backend__llds__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 145 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 27 "ll_backend.llds.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 31 "ll_backend.llds.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 35 "ll_backend.llds.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 39 "ll_backend.llds.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "ll_backend.llds.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 47 "ll_backend.llds.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 51 "ll_backend.llds.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 55 "ll_backend.llds.c"
#line 56 "ll_backend.llds.c"
#include "ll_backend.llds.mh"

#line 59 "ll_backend.llds.c"
#line 60 "ll_backend.llds.c"
#ifndef LL_BACKEND__LLDS_DECL_GUARD
#define LL_BACKEND__LLDS_DECL_GUARD

#line 64 "ll_backend.llds.c"
#line 65 "ll_backend.llds.c"

#endif
#line 68 "ll_backend.llds.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_0[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__llds__type_ctor_info_vector_common_data_array_0,
	mercury_data_ll_backend__llds__type_ctor_info_type_num_0,
	mercury_data_ll_backend__llds__type_ctor_info_temp_frame_type_0,
	mercury_data_ll_backend__llds__type_ctor_info_tag_0,
	mercury_data_ll_backend__llds__type_ctor_info_tabling_info_struct_0,
	mercury_data_ll_backend__llds__type_ctor_info_stack_incr_kind_0,
	mercury_data_ll_backend__llds__type_ctor_info_scalar_common_data_array_0,
	mercury_data_ll_backend__llds__type_ctor_info_rval_const_0,
	mercury_data_ll_backend__llds__type_ctor_info_rval_0,
	mercury_data_ll_backend__llds__type_ctor_info_reset_trail_reason_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__llds__type_ctor_info_removed_at_start_of_else_0,
	mercury_data_ll_backend__llds__type_ctor_info_region_use_frame_op_0,
	mercury_data_ll_backend__llds__type_ctor_info_region_stack_id_0,
	mercury_data_ll_backend__llds__type_ctor_info_region_set_fixed_op_0,
	mercury_data_ll_backend__llds__type_ctor_info_region_ite_kind_0,
	mercury_data_ll_backend__llds__type_ctor_info_region_fill_frame_op_0,
	mercury_data_ll_backend__llds__type_ctor_info_reg_type_0,
	mercury_data_ll_backend__llds__type_ctor_info_nondet_tail_call_0,
	mercury_data_ll_backend__llds__type_ctor_info_nondet_frame_info_0,
	mercury_data_ll_backend__llds__type_ctor_info_mem_ref_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__llds__type_ctor_info_may_alter_rtti_0,
	mercury_data_ll_backend__llds__type_ctor_info_main_stack_0,
	mercury_data_ll_backend__llds__type_ctor_info_lval_or_any_reg_0,
	mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	mercury_data_ll_backend__llds__type_ctor_info_llds_type_0,
	mercury_data_ll_backend__llds__type_ctor_info_llds_proc_id_0,
	mercury_data_ll_backend__llds__type_ctor_info_llds_inst_0,
	mercury_data_ll_backend__llds__type_ctor_info_liveinfo_0,
	mercury_data_ll_backend__llds__type_ctor_info_live_value_type_0,
	mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__llds__type_ctor_info_label_0,
	mercury_data_ll_backend__llds__type_ctor_info_instruction_0,
	mercury_data_ll_backend__llds__type_ctor_info_instr_0,
	mercury_data_ll_backend__llds__type_ctor_info_ho_call_variant_0,
	mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_type_0,
	mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_struct_0,
	mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_output_0,
	mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_input_0,
	mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_decl_0,
	mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_component_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__llds__type_ctor_info_foreign_interface_info_0,
	mercury_data_ll_backend__llds__type_ctor_info_entry_label_type_0,
	mercury_data_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0,
	mercury_data_ll_backend__llds__type_ctor_info_data_name_0,
	mercury_data_ll_backend__llds__type_ctor_info_data_addr_0,
	mercury_data_ll_backend__llds__type_ctor_info_comp_gen_c_module_0,
	mercury_data_ll_backend__llds__type_ctor_info_common_cell_value_0,
	mercury_data_ll_backend__llds__type_ctor_info_common_cell_type_0,
	mercury_data_ll_backend__llds__type_ctor_info_common_cell_arg_group_0,
	mercury_data_ll_backend__llds__type_ctor_info_code_tree_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__llds__type_ctor_info_code_addr_0,
	mercury_data_ll_backend__llds__type_ctor_info_can_branch_away_0,
	mercury_data_ll_backend__llds__type_ctor_info_call_model_0,
	mercury_data_ll_backend__llds__type_ctor_info_c_procedure_0,
	mercury_data_ll_backend__llds__type_ctor_info_c_global_var_ref_0,
	mercury_data_ll_backend__llds__type_ctor_info_c_file_0,
	mercury_data_ll_backend__llds__type_ctor_info_c_code_live_lvals_0,
	mercury_data_ll_backend__llds__type_ctor_info_add_trail_ops_0,
	mercury_data_ll_backend__llds__type_ctor_info_add_region_ops_0;
MR_decl_label4(ll_backend__llds__binop_return_type_2_0, 14,34,42,4)
MR_decl_label1(ll_backend__llds__break_up_local_label_3_0, 3)
MR_decl_label8(ll_backend__llds__const_type_2_0, 4,6,7,8,9,11,12,13)
MR_decl_label8(ll_backend__llds__lval_type_2_0, 4,11,14,35,16,17,23,25)
MR_decl_label1(ll_backend__llds__lval_type_2_0, 29)
MR_decl_label1(ll_backend__llds__register_type_2_0, 3)
MR_decl_label7(ll_backend__llds__rval_type_2_0, 4,6,9,18,14,12,10)
MR_decl_label2(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_108_118_97_108_95_95_91_49_44_32_50_93_95_48_2_0, 5,4)
MR_decl_label5(fn__ll_backend__llds__abs_locn_to_lval_1_0, 4,6,7,8,9)
MR_decl_label5(fn__ll_backend__llds__abs_locn_to_lval_or_any_reg_1_0, 4,5,6,7,8)
MR_decl_label2(fn__ll_backend__llds__code_model_to_main_stack_1_0, 3,4)
MR_decl_label2(fn__ll_backend__llds__region_stack_id_to_string_1_0, 3,4)
MR_decl_label1(fn__ll_backend__llds__stack_slot_num_to_lval_2_0, 3)
MR_decl_label1(fn__ll_backend__llds__stack_slot_num_to_lval_ref_2_0, 3)
MR_decl_label2(fn__ll_backend__llds__stack_slot_to_lval_1_0, 5,4)
MR_decl_label3(__Unify___ll_backend__llds__c_code_live_lvals_0_0, 12,5,1)
MR_decl_label8(__Unify___ll_backend__llds__c_file_0_0, 4,6,8,10,12,14,16,18)
MR_decl_label5(__Unify___ll_backend__llds__c_file_0_0, 20,22,24,28,1)
MR_decl_label1(__Unify___ll_backend__llds__c_global_var_ref_0_0, 4)
MR_decl_label6(__Unify___ll_backend__llds__c_procedure_0_0, 4,6,8,10,14,1)
MR_decl_label3(__Unify___ll_backend__llds__call_model_0_0, 6,16,1)
MR_decl_label8(__Unify___ll_backend__llds__code_addr_0_0, 12,13,17,21,22,24,50,1)
MR_decl_label3(__Unify___ll_backend__llds__common_cell_arg_group_0_0, 18,5,1)
MR_decl_label3(__Unify___ll_backend__llds__common_cell_type_0_0, 16,5,1)
MR_decl_label3(__Unify___ll_backend__llds__common_cell_value_0_0, 16,5,1)
MR_decl_label2(__Unify___ll_backend__llds__comp_gen_c_module_0_0, 6,1)
MR_decl_label5(__Unify___ll_backend__llds__data_addr_0_0, 15,10,6,29,1)
MR_decl_label7(__Unify___ll_backend__llds__data_name_0_0, 18,11,13,6,10,31,1)
MR_decl_label2(__Unify___ll_backend__llds__embedded_stack_frame_id_0_0, 4,1)
MR_decl_label7(__Unify___ll_backend__llds__foreign_interface_info_0_0, 4,6,8,10,12,16,1)
MR_decl_label8(__Unify___ll_backend__llds__foreign_proc_component_0_0, 6,7,11,15,18,16,22,20)
MR_decl_label2(__Unify___ll_backend__llds__foreign_proc_component_0_0, 46,1)
MR_decl_label4(__Unify___ll_backend__llds__foreign_proc_decl_0_0, 7,16,5,1)
MR_decl_label6(__Unify___ll_backend__llds__foreign_proc_input_0_0, 4,6,8,10,12,1)
MR_decl_label6(__Unify___ll_backend__llds__foreign_proc_output_0_0, 4,6,8,10,12,1)
MR_decl_label2(__Unify___ll_backend__llds__foreign_proc_struct_0_0, 6,1)
MR_decl_label2(__Unify___ll_backend__llds__foreign_proc_type_0_0, 6,1)
MR_decl_label3(__Unify___ll_backend__llds__ho_call_variant_0_0, 10,5,1)
MR_decl_label8(__Unify___ll_backend__llds__instr_0_0, 6,8,10,14,15,19,21,25)
MR_decl_label8(__Unify___ll_backend__llds__instr_0_0, 27,31,33,35,37,39,41,45)
MR_decl_label8(__Unify___ll_backend__llds__instr_0_0, 47,51,55,59,61,65,67,69)
MR_decl_label8(__Unify___ll_backend__llds__instr_0_0, 71,75,79,83,85,87,89,91)
MR_decl_label8(__Unify___ll_backend__llds__instr_0_0, 95,99,103,107,111,113,115,117)
MR_decl_label8(__Unify___ll_backend__llds__instr_0_0, 119,123,125,129,131,135,139,141)
MR_decl_label8(__Unify___ll_backend__llds__instr_0_0, 143,147,151,153,155,157,159,161)
MR_decl_label8(__Unify___ll_backend__llds__instr_0_0, 163,165,167,169,171,173,175,177)
MR_decl_label4(__Unify___ll_backend__llds__instr_0_0, 181,183,299,1)
MR_decl_label3(__Unify___ll_backend__llds__instruction_0_0, 4,6,1)
MR_decl_label3(__Unify___ll_backend__llds__label_0_0, 17,5,1)
MR_decl_label4(__Unify___ll_backend__llds__layout_locn_0_0, 16,5,10,1)
MR_decl_label5(__Unify___ll_backend__llds__live_value_type_0_0, 6,20,22,45,1)
MR_decl_label4(__Unify___ll_backend__llds__liveinfo_0_0, 4,6,10,1)
MR_decl_label3(__Unify___ll_backend__llds__llds_inst_0_0, 12,5,1)
MR_decl_label8(__Unify___ll_backend__llds__lval_0_0, 12,13,15,17,18,20,22,24)
MR_decl_label8(__Unify___ll_backend__llds__lval_0_0, 28,32,36,40,44,46,48,52)
MR_decl_label4(__Unify___ll_backend__llds__lval_0_0, 56,61,105,1)
MR_decl_label3(__Unify___ll_backend__llds__lval_or_any_reg_0_0, 12,5,1)
MR_decl_label5(__Unify___ll_backend__llds__mem_ref_0_0, 10,12,6,30,1)
MR_decl_label3(__Unify___ll_backend__llds__nondet_frame_info_0_0, 14,5,1)
MR_decl_label3(__Unify___ll_backend__llds__region_fill_frame_op_0_0, 6,22,1)
MR_decl_label4(__Unify___ll_backend__llds__region_use_frame_op_0_0, 8,6,27,1)
MR_decl_label8(__Unify___ll_backend__llds__rval_0_0, 107,6,10,14,18,27,29,31)
MR_decl_label4(__Unify___ll_backend__llds__rval_0_0, 23,19,60,1)
MR_decl_label8(__Unify___ll_backend__llds__rval_const_0_0, 6,8,10,12,13,15,17,21)
MR_decl_label4(__Unify___ll_backend__llds__rval_const_0_0, 25,27,51,1)
MR_decl_label5(__Unify___ll_backend__llds__scalar_common_data_array_0_0, 4,6,8,12,1)
MR_decl_label8(__Unify___ll_backend__llds__tabling_info_struct_0_0, 4,6,8,10,12,14,16,18)
MR_decl_label2(__Unify___ll_backend__llds__tabling_info_struct_0_0, 20,1)
MR_decl_label1(__Unify___ll_backend__llds__type_num_0_0, 4)
MR_decl_label6(__Unify___ll_backend__llds__vector_common_data_array_0_0, 4,6,8,9,12,1)
MR_decl_label8(__Index___ll_backend__llds__instr_0_0, 4,5,6,7,8,9,10,11)
MR_decl_label8(__Index___ll_backend__llds__instr_0_0, 12,13,14,15,16,17,18,19)
MR_decl_label8(__Index___ll_backend__llds__instr_0_0, 20,21,22,23,24,25,26,27)
MR_decl_label8(__Index___ll_backend__llds__instr_0_0, 28,29,30,31,32,33,34,35)
MR_decl_label4(__Index___ll_backend__llds__instr_0_0, 36,37,38,39)
MR_decl_label8(__Index___ll_backend__llds__lval_0_0, 4,5,6,7,8,9,10,11)
MR_decl_label8(__Index___ll_backend__llds__lval_0_0, 12,13,14,15,16,17,18,19)
MR_decl_label6(__Index___ll_backend__llds__lval_0_0, 20,21,22,23,24,25)
MR_decl_label4(__Compare___ll_backend__llds__c_code_live_lvals_0_0, 18,7,5,9)
MR_decl_label8(__Compare___ll_backend__llds__c_file_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label6(__Compare___ll_backend__llds__c_file_0_0, 29,33,37,41,45,101)
MR_decl_label2(__Compare___ll_backend__llds__c_global_var_ref_0_0, 3,2)
MR_decl_label8(__Compare___ll_backend__llds__c_procedure_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label3(__Compare___ll_backend__llds__c_procedure_0_0, 29,33,77)
MR_decl_label5(__Compare___ll_backend__llds__call_model_0_0, 26,7,14,6,18)
MR_decl_label8(__Compare___ll_backend__llds__code_addr_0_0, 6,7,10,19,20,22,25,34)
MR_decl_label8(__Compare___ll_backend__llds__code_addr_0_0, 35,37,40,49,50,52,55,64)
MR_decl_label8(__Compare___ll_backend__llds__code_addr_0_0, 65,67,70,79,80,82,85,91)
MR_decl_label8(__Compare___ll_backend__llds__code_addr_0_0, 94,95,97,107,110,111,113,124)
MR_decl_label8(__Compare___ll_backend__llds__code_addr_0_0, 126,297,129,133,142,130,149,158)
MR_decl_label7(__Compare___ll_backend__llds__code_addr_0_0, 159,200,146,164,173,174,202)
MR_decl_label8(__Compare___ll_backend__llds__common_cell_arg_group_0_0, 3,2,9,13,7,5,20,22)
MR_decl_label1(__Compare___ll_backend__llds__common_cell_arg_group_0_0, 63)
MR_decl_label5(__Compare___ll_backend__llds__common_cell_type_0_0, 3,2,7,5,10)
MR_decl_label5(__Compare___ll_backend__llds__common_cell_value_0_0, 3,2,7,5,10)
MR_decl_label4(__Compare___ll_backend__llds__comp_gen_c_module_0_0, 3,2,5,21)
MR_decl_label8(__Compare___ll_backend__llds__data_addr_0_0, 3,2,23,12,16,6,38,11)
MR_decl_label2(__Compare___ll_backend__llds__data_addr_0_0, 9,75)
MR_decl_label8(__Compare___ll_backend__llds__data_name_0_0, 3,2,33,17,21,23,6,49)
MR_decl_label4(__Compare___ll_backend__llds__data_name_0_0, 16,9,11,93)
MR_decl_label5(__Compare___ll_backend__llds__embedded_stack_frame_id_0_0, 3,2,5,9,29)
MR_decl_label8(__Compare___ll_backend__llds__foreign_interface_info_0_0, 3,2,5,9,13,17,21,53)
MR_decl_label8(__Compare___ll_backend__llds__foreign_proc_component_0_0, 6,9,12,13,15,19,22,23)
MR_decl_label8(__Compare___ll_backend__llds__foreign_proc_component_0_0, 25,30,32,169,35,42,45,49)
MR_decl_label8(__Compare___ll_backend__llds__foreign_proc_component_0_0, 36,62,63,66,70,74,56,86)
MR_decl_label4(__Compare___ll_backend__llds__foreign_proc_component_0_0, 87,110,88,90)
MR_decl_label8(__Compare___ll_backend__llds__foreign_proc_decl_0_0, 3,2,9,13,7,5,20,22)
MR_decl_label1(__Compare___ll_backend__llds__foreign_proc_decl_0_0, 63)
MR_decl_label8(__Compare___ll_backend__llds__foreign_proc_input_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label1(__Compare___ll_backend__llds__foreign_proc_input_0_0, 61)
MR_decl_label8(__Compare___ll_backend__llds__foreign_proc_output_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label1(__Compare___ll_backend__llds__foreign_proc_output_0_0, 61)
MR_decl_label5(__Compare___ll_backend__llds__foreign_proc_struct_0_0, 3,2,5,9,29)
MR_decl_label4(__Compare___ll_backend__llds__foreign_proc_type_0_0, 3,2,5,21)
MR_decl_label4(__Compare___ll_backend__llds__ho_call_variant_0_0, 18,7,5,9)
MR_decl_label8(__Compare___ll_backend__llds__instr_0_0, 4,5,6,7,11,13,16,19)
MR_decl_label8(__Compare___ll_backend__llds__instr_0_0, 20,23,27,33,36,41,44,49)
MR_decl_label8(__Compare___ll_backend__llds__instr_0_0, 52,56,60,64,68,77,80,85)
MR_decl_label8(__Compare___ll_backend__llds__instr_0_0, 88,91,94,99,102,106,112,115)
MR_decl_label8(__Compare___ll_backend__llds__instr_0_0, 120,123,126,129,133,137,141,145)
MR_decl_label8(__Compare___ll_backend__llds__instr_0_0, 149,159,162,165,168,171,176,179)
MR_decl_label8(__Compare___ll_backend__llds__instr_0_0, 183,187,191,199,202,206,212,215)
MR_decl_label8(__Compare___ll_backend__llds__instr_0_0, 220,223,226,231,234,237,240,244)
MR_decl_label8(__Compare___ll_backend__llds__instr_0_0, 250,253,256,259,263,267,271,275)
MR_decl_label8(__Compare___ll_backend__llds__instr_0_0, 279,283,287,299,302,307,310,315)
MR_decl_label3(__Compare___ll_backend__llds__instr_0_0, 318,8,327)
MR_decl_label4(__Compare___ll_backend__llds__instruction_0_0, 3,2,5,21)
MR_decl_label8(__Compare___ll_backend__llds__label_0_0, 3,2,9,7,5,15,17,54)
MR_decl_label7(__Compare___ll_backend__llds__layout_locn_0_0, 3,2,7,5,10,12,45)
MR_decl_label8(__Compare___ll_backend__llds__live_value_type_0_0, 7,23,39,55,71,87,103,119)
MR_decl_label8(__Compare___ll_backend__llds__live_value_type_0_0, 135,151,167,183,198,6,212,213)
MR_decl_label5(__Compare___ll_backend__llds__live_value_type_0_0, 201,215,219,223,230)
MR_decl_label5(__Compare___ll_backend__llds__liveinfo_0_0, 3,2,5,9,29)
MR_decl_label4(__Compare___ll_backend__llds__llds_inst_0_0, 18,7,5,9)
MR_decl_label8(__Compare___ll_backend__llds__lval_0_0, 4,5,6,7,17,18,21,26)
MR_decl_label8(__Compare___ll_backend__llds__lval_0_0, 29,34,35,38,41,44,47,50)
MR_decl_label8(__Compare___ll_backend__llds__lval_0_0, 53,56,59,62,66,72,75,78)
MR_decl_label2(__Compare___ll_backend__llds__lval_0_0, 8,85)
MR_decl_label4(__Compare___ll_backend__llds__lval_or_any_reg_0_0, 18,7,5,9)
MR_decl_label8(__Compare___ll_backend__llds__mem_ref_0_0, 3,2,38,12,16,18,22,6)
MR_decl_label3(__Compare___ll_backend__llds__mem_ref_0_0, 44,11,79)
MR_decl_label8(__Compare___ll_backend__llds__nondet_frame_info_0_0, 3,2,7,5,10,12,16,54)
MR_decl_label8(__Compare___ll_backend__llds__region_fill_frame_op_0_0, 50,21,14,7,6,66,37,36)
MR_decl_label8(__Compare___ll_backend__llds__region_use_frame_op_0_0, 28,38,48,58,68,77,17,20)
MR_decl_label3(__Compare___ll_backend__llds__region_use_frame_op_0_0, 6,11,9)
MR_decl_label8(__Compare___ll_backend__llds__rval_0_0, 251,3,2,6,9,13,17,21)
MR_decl_label8(__Compare___ll_backend__llds__rval_0_0, 24,28,33,35,40,44,72,81)
MR_decl_label8(__Compare___ll_backend__llds__rval_0_0, 83,87,56,64,66,45,50,51)
MR_decl_label3(__Compare___ll_backend__llds__rval_0_0, 132,52,267)
MR_decl_label8(__Compare___ll_backend__llds__rval_const_0_0, 6,144,7,32,35,37,46,49)
MR_decl_label8(__Compare___ll_backend__llds__rval_const_0_0, 52,54,65,66,69,73,80,83)
MR_decl_label8(__Compare___ll_backend__llds__rval_const_0_0, 87,89,94,97,210,101,104,108)
MR_decl_label6(__Compare___ll_backend__llds__rval_const_0_0, 115,119,121,122,136,141)
MR_decl_label6(__Compare___ll_backend__llds__scalar_common_data_array_0_0, 3,2,5,9,13,37)
MR_decl_label8(__Compare___ll_backend__llds__tabling_info_struct_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label5(__Compare___ll_backend__llds__tabling_info_struct_0_0, 29,33,37,41,93)
MR_decl_label2(__Compare___ll_backend__llds__type_num_0_0, 3,2)
MR_decl_label7(__Compare___ll_backend__llds__vector_common_data_array_0_0, 3,2,5,9,13,17,45)
MR_def_extern_entry(fn__ll_backend__llds__stack_slot_num_to_lval_ref_2_0)
MR_def_extern_entry(fn__ll_backend__llds__first_nonfixed_embedded_slot_addr_2_0)
MR_def_extern_entry(fn__ll_backend__llds__stack_slot_to_lval_1_0)
MR_def_extern_entry(fn__ll_backend__llds__key_stack_slot_to_lval_2_0)
MR_def_extern_entry(fn__ll_backend__llds__abs_locn_to_lval_or_any_reg_1_0)
MR_def_extern_entry(fn__ll_backend__llds__abs_locn_to_lval_1_0)
MR_def_extern_entry(fn__ll_backend__llds__key_abs_locn_to_lval_2_0)
MR_def_extern_entry(fn__ll_backend__llds__code_model_to_main_stack_1_0)
MR_def_extern_entry(fn__ll_backend__llds__stack_slot_num_to_lval_2_0)
MR_def_extern_entry(fn__ll_backend__llds__region_stack_id_to_string_1_0)
MR_def_extern_entry(ll_backend__llds__break_up_local_label_3_0)
MR_def_extern_entry(ll_backend__llds__register_type_2_0)
MR_def_extern_entry(ll_backend__llds__lval_type_2_0)
MR_def_extern_entry(ll_backend__llds__const_type_2_0)
MR_def_extern_entry(ll_backend__llds__unop_return_type_2_0)
MR_def_extern_entry(ll_backend__llds__binop_return_type_2_0)
MR_def_extern_entry(ll_backend__llds__rval_type_2_0)
MR_def_extern_entry(ll_backend__llds__unop_arg_type_2_0)
MR_def_extern_entry(fn__ll_backend__llds__get_proc_label_1_0)
MR_def_extern_entry(fn__ll_backend__llds__get_defining_module_name_1_0)
MR_def_extern_entry(__Unify___ll_backend__llds__add_region_ops_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__add_region_ops_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__add_trail_ops_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__add_trail_ops_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__c_code_live_lvals_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__c_code_live_lvals_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__c_file_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__c_file_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__c_global_var_ref_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__c_global_var_ref_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__c_procedure_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__c_procedure_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__call_model_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__call_model_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__can_branch_away_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__can_branch_away_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__code_addr_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__code_addr_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__code_tree_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__code_tree_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__common_cell_arg_group_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__common_cell_arg_group_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__common_cell_type_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__common_cell_type_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__common_cell_value_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__common_cell_value_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__comp_gen_c_module_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__comp_gen_c_module_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__data_addr_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__data_addr_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__data_name_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__data_name_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__embedded_stack_frame_id_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__embedded_stack_frame_id_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__entry_label_type_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__entry_label_type_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__foreign_interface_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__foreign_interface_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__foreign_proc_component_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__foreign_proc_component_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__foreign_proc_decl_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__foreign_proc_decl_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__foreign_proc_input_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__foreign_proc_input_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__foreign_proc_output_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__foreign_proc_output_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__foreign_proc_struct_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__foreign_proc_struct_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__foreign_proc_type_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__foreign_proc_type_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__ho_call_variant_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__ho_call_variant_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__instr_0_0)
MR_def_extern_entry(__Index___ll_backend__llds__instr_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__instr_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__instruction_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__instruction_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__label_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__label_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__layout_locn_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__layout_locn_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__live_value_type_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__live_value_type_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__liveinfo_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__liveinfo_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__llds_inst_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__llds_inst_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__llds_proc_id_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__llds_proc_id_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__llds_type_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__llds_type_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__lval_0_0)
MR_def_extern_entry(__Index___ll_backend__llds__lval_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__lval_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__lval_or_any_reg_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__lval_or_any_reg_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__main_stack_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__main_stack_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__may_alter_rtti_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__may_alter_rtti_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__mem_ref_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__mem_ref_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__nondet_frame_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__nondet_frame_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__nondet_tail_call_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__nondet_tail_call_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__reg_type_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__reg_type_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__region_fill_frame_op_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__region_fill_frame_op_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__region_ite_kind_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__region_ite_kind_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__region_set_fixed_op_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__region_set_fixed_op_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__region_stack_id_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__region_stack_id_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__region_use_frame_op_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__region_use_frame_op_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__removed_at_start_of_else_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__removed_at_start_of_else_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__reset_trail_reason_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__reset_trail_reason_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__rval_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__rval_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__rval_const_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__rval_const_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__scalar_common_data_array_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__scalar_common_data_array_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__stack_incr_kind_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__stack_incr_kind_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__tabling_info_struct_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__tabling_info_struct_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__tag_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__tag_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__temp_frame_type_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__temp_frame_type_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__type_num_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__type_num_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds__vector_common_data_array_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds__vector_common_data_array_0_0)
MR_def_extern_entry(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_108_118_97_108_95_95_91_49_44_32_50_93_95_48_2_0)
MR_def_extern_entry(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_97_98_115_95_108_111_99_110_95_116_111_95_108_118_97_108_95_95_91_49_44_32_50_93_95_48_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_table_trie_step_0;
static const struct mercury_type_1 mercury_common_1[4] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, instruction)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(ll_backend__llds, layout_locn)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, table_trie_step)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(ll_backend__llds, llds_type),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(ll_backend__llds, rval),
MR_CTOR0_ADDR(ll_backend__llds, llds_type)
}
},
};

static const struct mercury_type_0 mercury_vector_common_0_0[9] =
{
{
13
},
{
13
},
{
13
},
{
13
},
{
13
},
{
13
},
{
7
},
{
7
},
{
0
},
};

static const struct mercury_type_0 mercury_vector_common_0_1[9] =
{
{
13
},
{
13
},
{
13
},
{
13
},
{
13
},
{
13
},
{
10
},
{
7
},
{
0
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_common_cell_value_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_common_cell_value_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_common_cell_value_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_common_cell_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_type_num_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_vector_common_data_array_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_common_cell_type_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_type_num_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_common_cell_value_0
};

const MR_ConstString mercury_data_ll_backend__llds__field_names_vector_common_data_array_0_0[] = {
	"vcda_module",
	"vcda_rval_types",
	"vcda_type_num",
	"vcda_vector_num",
	"vcda_values"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_vector_common_data_array_0_0 = {
	"vector_common_data_array",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_vector_common_data_array_0_0,
	mercury_data_ll_backend__llds__field_names_vector_common_data_array_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_vector_common_data_array_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_vector_common_data_array_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_vector_common_data_array_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_vector_common_data_array_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_vector_common_data_array_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_vector_common_data_array_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_vector_common_data_array_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_vector_common_data_array_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__vector_common_data_array_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__vector_common_data_array_0_0)),
	"ll_backend.llds",
	"vector_common_data_array",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_vector_common_data_array_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_vector_common_data_array_0 },
	1,
	4,
	mercury_data_ll_backend__llds__functor_number_map_vector_common_data_array_0
};

static const MR_NotagFunctorDesc mercury_data_ll_backend__llds__notag_functor_desc_type_num_0 = {
	"type_num",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_type_num_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_type_num_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__type_num_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__type_num_0_0)),
	"ll_backend.llds",
	"type_num",
	{ (void *)&mercury_data_ll_backend__llds__notag_functor_desc_type_num_0 },
	{ (void *)&mercury_data_ll_backend__llds__notag_functor_desc_type_num_0 },
	1,
	4,
	mercury_data_ll_backend__llds__functor_number_map_type_num_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_temp_frame_type_0_0 = {
	"det_stack_proc",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_temp_frame_type_0_1 = {
	"nondet_stack_proc",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_value_ordered_temp_frame_type_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_temp_frame_type_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_temp_frame_type_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_name_ordered_temp_frame_type_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_temp_frame_type_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_temp_frame_type_0_1
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_temp_frame_type_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_temp_frame_type_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__temp_frame_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__temp_frame_type_0_0)),
	"ll_backend.llds",
	"temp_frame_type",
	{ (void *)mercury_data_ll_backend__llds__enum_name_ordered_temp_frame_type_0 },
	{ (void *)mercury_data_ll_backend__llds__enum_value_ordered_temp_frame_type_0 },
	2,
	4,
	mercury_data_ll_backend__llds__functor_number_map_temp_frame_type_0
};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_tag_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__tag_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__tag_0_0)),
	"ll_backend.llds",
	"tag",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_eval_method_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_table_trie_step_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_table_trie_step_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_table_trie_step_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1list__ti_list_1hlds__hlds_pred__type_ctor_info_table_trie_step_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_table_trie_step_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_table_attr_statistics_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_eval_method_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_table_attr_statistics_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_tabling_info_struct_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_eval_method_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_table_trie_step_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1list__ti_list_1hlds__hlds_pred__type_ctor_info_table_trie_step_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_table_attr_statistics_0
};

const MR_ConstString mercury_data_ll_backend__llds__field_names_tabling_info_struct_0_0[] = {
	"tis_module_name",
	"tis_proc_label",
	"tis_eval_method",
	"tis_num_inputs",
	"tis_num_outputs",
	"tis_input_steps",
	"tis_maybe_output_steps",
	"tis_ptis",
	"tis_type_params",
	"tis_size_limit",
	"tis_stats"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_tabling_info_struct_0_0 = {
	"tabling_info_struct",
	11,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_tabling_info_struct_0_0,
	mercury_data_ll_backend__llds__field_names_tabling_info_struct_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_tabling_info_struct_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_tabling_info_struct_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_tabling_info_struct_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_tabling_info_struct_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_tabling_info_struct_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_tabling_info_struct_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_tabling_info_struct_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_tabling_info_struct_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__tabling_info_struct_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__tabling_info_struct_0_0)),
	"ll_backend.llds",
	"tabling_info_struct",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_tabling_info_struct_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_tabling_info_struct_0 },
	1,
	4,
	mercury_data_ll_backend__llds__functor_number_map_tabling_info_struct_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_stack_incr_kind_0_0 = {
	"stack_incr_leaf",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_stack_incr_kind_0_1 = {
	"stack_incr_nonleaf",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_value_ordered_stack_incr_kind_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_stack_incr_kind_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_stack_incr_kind_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_name_ordered_stack_incr_kind_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_stack_incr_kind_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_stack_incr_kind_0_1
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_stack_incr_kind_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_stack_incr_kind_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__stack_incr_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__stack_incr_kind_0_0)),
	"ll_backend.llds",
	"stack_incr_kind",
	{ (void *)mercury_data_ll_backend__llds__enum_name_ordered_stack_incr_kind_0 },
	{ (void *)mercury_data_ll_backend__llds__enum_value_ordered_stack_incr_kind_0 },
	2,
	4,
	mercury_data_ll_backend__llds__functor_number_map_stack_incr_kind_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_scalar_common_data_array_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_common_cell_type_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_type_num_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_common_cell_value_0
};

const MR_ConstString mercury_data_ll_backend__llds__field_names_scalar_common_data_array_0_0[] = {
	"scda_module",
	"scda_rval_types",
	"scda_type_num",
	"scda_values"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_scalar_common_data_array_0_0 = {
	"scalar_common_data_array",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_scalar_common_data_array_0_0,
	mercury_data_ll_backend__llds__field_names_scalar_common_data_array_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_scalar_common_data_array_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_scalar_common_data_array_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_scalar_common_data_array_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_scalar_common_data_array_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_scalar_common_data_array_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_scalar_common_data_array_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_scalar_common_data_array_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_scalar_common_data_array_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__scalar_common_data_array_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__scalar_common_data_array_0_0)),
	"ll_backend.llds",
	"scalar_common_data_array",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_scalar_common_data_array_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_scalar_common_data_array_0 },
	1,
	4,
	mercury_data_ll_backend__llds__functor_number_map_scalar_common_data_array_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_0 = {
	"llconst_true",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_1 = {
	"llconst_false",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_rval_const_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_2 = {
	"llconst_int",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_rval_const_0_2,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_llds_type_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_rval_const_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_llds_type_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_3 = {
	"llconst_foreign",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_rval_const_0_3,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_rval_const_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_4 = {
	"llconst_float",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	4,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_rval_const_0_4,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_rval_const_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_5 = {
	"llconst_string",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	5,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_rval_const_0_5,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_rval_const_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_6 = {
	"llconst_multi_string",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	6,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_rval_const_0_6,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_code_addr_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_rval_const_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_code_addr_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_7 = {
	"llconst_code_addr",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	7,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_rval_const_0_7,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_data_addr_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_rval_const_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_data_addr_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_8 = {
	"llconst_data_addr",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	8,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_rval_const_0_8,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_rval_const_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_0,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_rval_const_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_2

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_rval_const_0_2[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_3

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_rval_const_0_3[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_4,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_5,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_6,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_7,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_8

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_rval_const_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__llds__du_stag_ordered_rval_const_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_rval_const_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_rval_const_0_2 },
	{ 5, MR_SECTAG_REMOTE,
	mercury_data_ll_backend__llds__du_stag_ordered_rval_const_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_rval_const_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_7,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_8,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_1,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_4,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_3,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_2,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_6,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_5,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_const_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_rval_const_0[] = {
	8,
	2,
	5,
	4,
	3,
	7,
	6,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_const_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__rval_const_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__rval_const_0_0)),
	"ll_backend.llds",
	"rval_const",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_rval_const_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_rval_const_0 },
	9,
	4,
	mercury_data_ll_backend__llds__functor_number_map_rval_const_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_rval_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_rval_0_0 = {
	"lval",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_rval_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_rval_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_rval_0_1 = {
	"var",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_rval_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_rval_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_rval_0_2 = {
	"mkword",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_rval_0_2,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_const_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_rval_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_const_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_rval_0_3 = {
	"const",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_rval_0_3,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__builtin_ops__type_ctor_info_unary_op_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__builtin_ops__type_ctor_info_unary_op_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_rval_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__builtin_ops__type_ctor_info_unary_op_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_rval_0_4 = {
	"unop",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_rval_0_4,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__builtin_ops__type_ctor_info_binary_op_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__builtin_ops__type_ctor_info_binary_op_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_rval_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__builtin_ops__type_ctor_info_binary_op_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_rval_0_5 = {
	"binop",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_rval_0_5,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_mem_ref_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_rval_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_mem_ref_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_rval_0_6 = {
	"mem_addr",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	6,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_rval_0_6,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_rval_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_rval_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_rval_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_rval_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_rval_0_2[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_rval_0_2

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_rval_0_3[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_rval_0_3,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_0_4,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_0_5,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_0_6

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_rval_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_rval_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_rval_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_rval_0_2 },
	{ 4, MR_SECTAG_REMOTE,
	mercury_data_ll_backend__llds__du_stag_ordered_rval_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_rval_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_rval_0_5,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_0_3,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_0_0,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_0_6,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_0_2,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_0_4,
	&mercury_data_ll_backend__llds__du_functor_desc_rval_0_1
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_rval_0[] = {
	2,
	6,
	4,
	1,
	5,
	0,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__rval_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__rval_0_0)),
	"ll_backend.llds",
	"rval",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_rval_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_rval_0 },
	7,
	4,
	mercury_data_ll_backend__llds__functor_number_map_rval_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_reset_trail_reason_0_0 = {
	"reset_reason_undo",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_reset_trail_reason_0_1 = {
	"reset_reason_commit",
	1
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_reset_trail_reason_0_2 = {
	"reset_reason_solve",
	2
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_reset_trail_reason_0_3 = {
	"reset_reason_exception",
	3
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_reset_trail_reason_0_4 = {
	"reset_reason_retry",
	4
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_reset_trail_reason_0_5 = {
	"reset_reason_gc",
	5
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_value_ordered_reset_trail_reason_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_reset_trail_reason_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_reset_trail_reason_0_1,
	&mercury_data_ll_backend__llds__enum_functor_desc_reset_trail_reason_0_2,
	&mercury_data_ll_backend__llds__enum_functor_desc_reset_trail_reason_0_3,
	&mercury_data_ll_backend__llds__enum_functor_desc_reset_trail_reason_0_4,
	&mercury_data_ll_backend__llds__enum_functor_desc_reset_trail_reason_0_5
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_name_ordered_reset_trail_reason_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_reset_trail_reason_0_1,
	&mercury_data_ll_backend__llds__enum_functor_desc_reset_trail_reason_0_3,
	&mercury_data_ll_backend__llds__enum_functor_desc_reset_trail_reason_0_5,
	&mercury_data_ll_backend__llds__enum_functor_desc_reset_trail_reason_0_4,
	&mercury_data_ll_backend__llds__enum_functor_desc_reset_trail_reason_0_2,
	&mercury_data_ll_backend__llds__enum_functor_desc_reset_trail_reason_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_reset_trail_reason_0[] = {
	5,
	0,
	4,
	1,
	3,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_reset_trail_reason_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__reset_trail_reason_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__reset_trail_reason_0_0)),
	"ll_backend.llds",
	"reset_trail_reason",
	{ (void *)mercury_data_ll_backend__llds__enum_name_ordered_reset_trail_reason_0 },
	{ (void *)mercury_data_ll_backend__llds__enum_value_ordered_reset_trail_reason_0 },
	6,
	4,
	mercury_data_ll_backend__llds__functor_number_map_reset_trail_reason_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_removed_at_start_of_else_0_0 = {
	"removed_at_start_of_else",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_removed_at_start_of_else_0_1 = {
	"not_removed_at_start_of_else",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_value_ordered_removed_at_start_of_else_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_removed_at_start_of_else_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_removed_at_start_of_else_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_name_ordered_removed_at_start_of_else_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_removed_at_start_of_else_0_1,
	&mercury_data_ll_backend__llds__enum_functor_desc_removed_at_start_of_else_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_removed_at_start_of_else_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_removed_at_start_of_else_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__removed_at_start_of_else_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__removed_at_start_of_else_0_0)),
	"ll_backend.llds",
	"removed_at_start_of_else",
	{ (void *)mercury_data_ll_backend__llds__enum_name_ordered_removed_at_start_of_else_0 },
	{ (void *)mercury_data_ll_backend__llds__enum_value_ordered_removed_at_start_of_else_0 },
	2,
	4,
	mercury_data_ll_backend__llds__functor_number_map_removed_at_start_of_else_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_region_ite_kind_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_region_use_frame_op_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_region_ite_kind_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_region_use_frame_op_0_0 = {
	"region_ite_then",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_region_use_frame_op_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_region_use_frame_op_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_region_ite_kind_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_region_use_frame_op_0_1 = {
	"region_ite_else",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_region_use_frame_op_0_1,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_region_use_frame_op_0_2 = {
	"region_ite_nondet_cond_fail",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_region_use_frame_op_0_3 = {
	"region_disj_later",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_region_use_frame_op_0_4 = {
	"region_disj_last",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_region_use_frame_op_0_5 = {
	"region_commit_success",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_region_use_frame_op_0_6 = {
	"region_commit_failure",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_region_use_frame_op_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_region_use_frame_op_0_2,
	&mercury_data_ll_backend__llds__du_functor_desc_region_use_frame_op_0_3,
	&mercury_data_ll_backend__llds__du_functor_desc_region_use_frame_op_0_4,
	&mercury_data_ll_backend__llds__du_functor_desc_region_use_frame_op_0_5,
	&mercury_data_ll_backend__llds__du_functor_desc_region_use_frame_op_0_6

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_region_use_frame_op_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_region_use_frame_op_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_region_use_frame_op_0_2[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_region_use_frame_op_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_region_use_frame_op_0[] = {
	{ 5, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__llds__du_stag_ordered_region_use_frame_op_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_region_use_frame_op_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_region_use_frame_op_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_region_use_frame_op_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_region_use_frame_op_0_6,
	&mercury_data_ll_backend__llds__du_functor_desc_region_use_frame_op_0_5,
	&mercury_data_ll_backend__llds__du_functor_desc_region_use_frame_op_0_4,
	&mercury_data_ll_backend__llds__du_functor_desc_region_use_frame_op_0_3,
	&mercury_data_ll_backend__llds__du_functor_desc_region_use_frame_op_0_1,
	&mercury_data_ll_backend__llds__du_functor_desc_region_use_frame_op_0_2,
	&mercury_data_ll_backend__llds__du_functor_desc_region_use_frame_op_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_region_use_frame_op_0[] = {
	6,
	4,
	5,
	3,
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_region_use_frame_op_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__region_use_frame_op_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__region_use_frame_op_0_0)),
	"ll_backend.llds",
	"region_use_frame_op",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_region_use_frame_op_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_region_use_frame_op_0 },
	7,
	4,
	mercury_data_ll_backend__llds__functor_number_map_region_use_frame_op_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_region_stack_id_0_0 = {
	"region_stack_ite",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_region_stack_id_0_1 = {
	"region_stack_disj",
	1
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_region_stack_id_0_2 = {
	"region_stack_commit",
	2
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_value_ordered_region_stack_id_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_region_stack_id_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_region_stack_id_0_1,
	&mercury_data_ll_backend__llds__enum_functor_desc_region_stack_id_0_2
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_name_ordered_region_stack_id_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_region_stack_id_0_2,
	&mercury_data_ll_backend__llds__enum_functor_desc_region_stack_id_0_1,
	&mercury_data_ll_backend__llds__enum_functor_desc_region_stack_id_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_region_stack_id_0[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_region_stack_id_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__region_stack_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__region_stack_id_0_0)),
	"ll_backend.llds",
	"region_stack_id",
	{ (void *)mercury_data_ll_backend__llds__enum_name_ordered_region_stack_id_0 },
	{ (void *)mercury_data_ll_backend__llds__enum_value_ordered_region_stack_id_0 },
	3,
	4,
	mercury_data_ll_backend__llds__functor_number_map_region_stack_id_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_region_set_fixed_op_0_0 = {
	"region_set_ite_num_protects",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_region_set_fixed_op_0_1 = {
	"region_set_ite_num_snapshots",
	1
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_region_set_fixed_op_0_2 = {
	"region_set_disj_num_protects",
	2
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_region_set_fixed_op_0_3 = {
	"region_set_disj_num_snapshots",
	3
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_region_set_fixed_op_0_4 = {
	"region_set_commit_num_entries",
	4
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_value_ordered_region_set_fixed_op_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_region_set_fixed_op_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_region_set_fixed_op_0_1,
	&mercury_data_ll_backend__llds__enum_functor_desc_region_set_fixed_op_0_2,
	&mercury_data_ll_backend__llds__enum_functor_desc_region_set_fixed_op_0_3,
	&mercury_data_ll_backend__llds__enum_functor_desc_region_set_fixed_op_0_4
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_name_ordered_region_set_fixed_op_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_region_set_fixed_op_0_4,
	&mercury_data_ll_backend__llds__enum_functor_desc_region_set_fixed_op_0_2,
	&mercury_data_ll_backend__llds__enum_functor_desc_region_set_fixed_op_0_3,
	&mercury_data_ll_backend__llds__enum_functor_desc_region_set_fixed_op_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_region_set_fixed_op_0_1
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_region_set_fixed_op_0[] = {
	3,
	4,
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_region_set_fixed_op_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__region_set_fixed_op_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__region_set_fixed_op_0_0)),
	"ll_backend.llds",
	"region_set_fixed_op",
	{ (void *)mercury_data_ll_backend__llds__enum_name_ordered_region_set_fixed_op_0 },
	{ (void *)mercury_data_ll_backend__llds__enum_value_ordered_region_set_fixed_op_0 },
	5,
	4,
	mercury_data_ll_backend__llds__functor_number_map_region_set_fixed_op_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_region_ite_kind_0_0 = {
	"region_ite_semidet_cond",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_region_ite_kind_0_1 = {
	"region_ite_nondet_cond",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_value_ordered_region_ite_kind_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_region_ite_kind_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_region_ite_kind_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_name_ordered_region_ite_kind_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_region_ite_kind_0_1,
	&mercury_data_ll_backend__llds__enum_functor_desc_region_ite_kind_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_region_ite_kind_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_region_ite_kind_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__region_ite_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__region_ite_kind_0_0)),
	"ll_backend.llds",
	"region_ite_kind",
	{ (void *)mercury_data_ll_backend__llds__enum_name_ordered_region_ite_kind_0 },
	{ (void *)mercury_data_ll_backend__llds__enum_value_ordered_region_ite_kind_0 },
	2,
	4,
	mercury_data_ll_backend__llds__functor_number_map_region_ite_kind_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_region_fill_frame_op_0_0 = {
	"region_fill_ite_protect",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_removed_at_start_of_else_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_region_fill_frame_op_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_removed_at_start_of_else_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_region_fill_frame_op_0_1 = {
	"region_fill_ite_snapshot",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_region_fill_frame_op_0_1,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_region_fill_frame_op_0_2 = {
	"region_fill_disj_protect",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_region_fill_frame_op_0_3 = {
	"region_fill_disj_snapshot",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_region_fill_frame_op_0_4 = {
	"region_fill_commit",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_region_fill_frame_op_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_region_fill_frame_op_0_0,
	&mercury_data_ll_backend__llds__du_functor_desc_region_fill_frame_op_0_2,
	&mercury_data_ll_backend__llds__du_functor_desc_region_fill_frame_op_0_3,
	&mercury_data_ll_backend__llds__du_functor_desc_region_fill_frame_op_0_4

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_region_fill_frame_op_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_region_fill_frame_op_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_region_fill_frame_op_0[] = {
	{ 4, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__llds__du_stag_ordered_region_fill_frame_op_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_region_fill_frame_op_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_region_fill_frame_op_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_region_fill_frame_op_0_4,
	&mercury_data_ll_backend__llds__du_functor_desc_region_fill_frame_op_0_2,
	&mercury_data_ll_backend__llds__du_functor_desc_region_fill_frame_op_0_3,
	&mercury_data_ll_backend__llds__du_functor_desc_region_fill_frame_op_0_0,
	&mercury_data_ll_backend__llds__du_functor_desc_region_fill_frame_op_0_1
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_region_fill_frame_op_0[] = {
	3,
	4,
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_region_fill_frame_op_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__region_fill_frame_op_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__region_fill_frame_op_0_0)),
	"ll_backend.llds",
	"region_fill_frame_op",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_region_fill_frame_op_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_region_fill_frame_op_0 },
	5,
	4,
	mercury_data_ll_backend__llds__functor_number_map_region_fill_frame_op_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_reg_type_0_0 = {
	"reg_r",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_reg_type_0_1 = {
	"reg_f",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_value_ordered_reg_type_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_reg_type_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_reg_type_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_name_ordered_reg_type_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_reg_type_0_1,
	&mercury_data_ll_backend__llds__enum_functor_desc_reg_type_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_reg_type_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_reg_type_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__reg_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__reg_type_0_0)),
	"ll_backend.llds",
	"reg_type",
	{ (void *)mercury_data_ll_backend__llds__enum_name_ordered_reg_type_0 },
	{ (void *)mercury_data_ll_backend__llds__enum_value_ordered_reg_type_0 },
	2,
	4,
	mercury_data_ll_backend__llds__functor_number_map_reg_type_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_nondet_tail_call_0_0 = {
	"no_tail_call",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_nondet_tail_call_0_1 = {
	"checked_tail_call",
	1
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_nondet_tail_call_0_2 = {
	"unchecked_tail_call",
	2
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_value_ordered_nondet_tail_call_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_nondet_tail_call_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_nondet_tail_call_0_1,
	&mercury_data_ll_backend__llds__enum_functor_desc_nondet_tail_call_0_2
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_name_ordered_nondet_tail_call_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_nondet_tail_call_0_1,
	&mercury_data_ll_backend__llds__enum_functor_desc_nondet_tail_call_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_nondet_tail_call_0_2
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_nondet_tail_call_0[] = {
	1,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_nondet_tail_call_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__nondet_tail_call_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__nondet_tail_call_0_0)),
	"ll_backend.llds",
	"nondet_tail_call",
	{ (void *)mercury_data_ll_backend__llds__enum_name_ordered_nondet_tail_call_0 },
	{ (void *)mercury_data_ll_backend__llds__enum_value_ordered_nondet_tail_call_0 },
	3,
	4,
	mercury_data_ll_backend__llds__functor_number_map_nondet_tail_call_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_temp_frame_type_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_nondet_frame_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_temp_frame_type_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_nondet_frame_info_0_0 = {
	"temp_frame",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_nondet_frame_info_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_struct_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_foreign_proc_struct_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_struct_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_nondet_frame_info_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_foreign_proc_struct_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_nondet_frame_info_0_1 = {
	"ordinary_frame",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_nondet_frame_info_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_nondet_frame_info_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_nondet_frame_info_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_nondet_frame_info_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_nondet_frame_info_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_nondet_frame_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_nondet_frame_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_nondet_frame_info_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_nondet_frame_info_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_nondet_frame_info_0_1,
	&mercury_data_ll_backend__llds__du_functor_desc_nondet_frame_info_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_nondet_frame_info_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_nondet_frame_info_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__nondet_frame_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__nondet_frame_info_0_0)),
	"ll_backend.llds",
	"nondet_frame_info",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_nondet_frame_info_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_nondet_frame_info_0 },
	2,
	4,
	mercury_data_ll_backend__llds__functor_number_map_nondet_frame_info_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_mem_ref_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_mem_ref_0_0 = {
	"stackvar_ref",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_mem_ref_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_mem_ref_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_mem_ref_0_1 = {
	"framevar_ref",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_mem_ref_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_mem_ref_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_mem_ref_0_2 = {
	"heap_ref",
	3,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_mem_ref_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_mem_ref_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_mem_ref_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_mem_ref_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_mem_ref_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_mem_ref_0_2[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_mem_ref_0_2

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_mem_ref_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_mem_ref_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_mem_ref_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_mem_ref_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_mem_ref_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_mem_ref_0_1,
	&mercury_data_ll_backend__llds__du_functor_desc_mem_ref_0_2,
	&mercury_data_ll_backend__llds__du_functor_desc_mem_ref_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_mem_ref_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_mem_ref_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__mem_ref_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__mem_ref_0_0)),
	"ll_backend.llds",
	"mem_ref",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_mem_ref_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_mem_ref_0 },
	3,
	4,
	mercury_data_ll_backend__llds__functor_number_map_mem_ref_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_may_alter_rtti_0_0 = {
	"may_alter_rtti",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_may_alter_rtti_0_1 = {
	"must_not_alter_rtti",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_value_ordered_may_alter_rtti_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_may_alter_rtti_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_may_alter_rtti_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_name_ordered_may_alter_rtti_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_may_alter_rtti_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_may_alter_rtti_0_1
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_may_alter_rtti_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_may_alter_rtti_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__may_alter_rtti_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__may_alter_rtti_0_0)),
	"ll_backend.llds",
	"may_alter_rtti",
	{ (void *)mercury_data_ll_backend__llds__enum_name_ordered_may_alter_rtti_0 },
	{ (void *)mercury_data_ll_backend__llds__enum_value_ordered_may_alter_rtti_0 },
	2,
	4,
	mercury_data_ll_backend__llds__functor_number_map_may_alter_rtti_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_main_stack_0_0 = {
	"det_stack",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_main_stack_0_1 = {
	"nondet_stack",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_value_ordered_main_stack_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_main_stack_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_main_stack_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_name_ordered_main_stack_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_main_stack_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_main_stack_0_1
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_main_stack_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_main_stack_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__main_stack_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__main_stack_0_0)),
	"ll_backend.llds",
	"main_stack",
	{ (void *)mercury_data_ll_backend__llds__enum_name_ordered_main_stack_0 },
	{ (void *)mercury_data_ll_backend__llds__enum_value_ordered_main_stack_0 },
	2,
	4,
	mercury_data_ll_backend__llds__functor_number_map_main_stack_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_lval_or_any_reg_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_or_any_reg_0_0 = {
	"loa_lval",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_lval_or_any_reg_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_or_any_reg_0_1 = {
	"loa_any_reg",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_lval_or_any_reg_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_lval_or_any_reg_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_lval_or_any_reg_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_lval_or_any_reg_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_lval_or_any_reg_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__llds__du_stag_ordered_lval_or_any_reg_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_lval_or_any_reg_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_lval_or_any_reg_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_lval_or_any_reg_0_1,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_or_any_reg_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_lval_or_any_reg_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_or_any_reg_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__lval_or_any_reg_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__lval_or_any_reg_0_0)),
	"ll_backend.llds",
	"lval_or_any_reg",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_lval_or_any_reg_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_lval_or_any_reg_0 },
	2,
	4,
	mercury_data_ll_backend__llds__functor_number_map_lval_or_any_reg_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_reg_type_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_lval_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_reg_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_0_0 = {
	"reg",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_lval_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_0_1 = {
	"succip",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_0_2 = {
	"maxfr",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_0_3 = {
	"curfr",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_0_4 = {
	"hp",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_0_5 = {
	"sp",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_0_6 = {
	"parent_sp",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_lval_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_reg_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_0_7 = {
	"temp",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	7,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_lval_0_7,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_lval_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_0_8 = {
	"stackvar",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	8,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_lval_0_8,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_lval_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_0_9 = {
	"parent_stackvar",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	9,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_lval_0_9,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_lval_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_0_10 = {
	"framevar",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	10,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_lval_0_10,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_lval_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_0_11 = {
	"succip_slot",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	11,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_lval_0_11,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_lval_0_12[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_0_12 = {
	"succfr_slot",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	12,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_lval_0_12,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_lval_0_13[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_0_13 = {
	"redoip_slot",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	13,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_lval_0_13,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_lval_0_14[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_0_14 = {
	"redofr_slot",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	14,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_lval_0_14,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_lval_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_0_15 = {
	"prevfr_slot",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	15,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_lval_0_15,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_lval_0_16[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_0_16 = {
	"field",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	8,
	16,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_lval_0_16,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_lval_0_17[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_0_17 = {
	"mem_ref",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	9,
	17,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_lval_0_17,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_c_global_var_ref_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_lval_0_18[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_c_global_var_ref_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_0_18 = {
	"global_var_ref",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	10,
	18,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_lval_0_18,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_lval_0_19[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_lval_0_19 = {
	"lvar",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	11,
	19,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_lval_0_19,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_lval_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_1,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_2,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_3,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_4,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_5,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_6

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_lval_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_lval_0_2[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_7

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_lval_0_3[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_8,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_9,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_10,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_11,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_12,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_13,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_14,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_15,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_16,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_17,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_18,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_19

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_lval_0[] = {
	{ 6, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__llds__du_stag_ordered_lval_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_lval_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_lval_0_2 },
	{ 12, MR_SECTAG_REMOTE,
	mercury_data_ll_backend__llds__du_stag_ordered_lval_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_lval_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_3,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_16,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_10,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_18,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_4,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_19,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_2,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_17,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_6,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_9,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_15,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_14,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_13,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_0,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_5,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_8,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_12,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_1,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_11,
	&mercury_data_ll_backend__llds__du_functor_desc_lval_0_7
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_lval_0[] = {
	13,
	17,
	6,
	0,
	4,
	14,
	8,
	19,
	15,
	9,
	2,
	18,
	16,
	12,
	11,
	10,
	1,
	7,
	3,
	5 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__lval_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__lval_0_0)),
	"ll_backend.llds",
	"lval",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_lval_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_lval_0 },
	20,
	4,
	mercury_data_ll_backend__llds__functor_number_map_lval_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_0 = {
	"bool",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_1 = {
	"int_least8",
	1
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_2 = {
	"uint_least8",
	2
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_3 = {
	"int_least16",
	3
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_4 = {
	"uint_least16",
	4
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_5 = {
	"int_least32",
	5
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_6 = {
	"uint_least32",
	6
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_7 = {
	"integer",
	7
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_8 = {
	"unsigned",
	8
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_9 = {
	"float",
	9
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_10 = {
	"string",
	10
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_11 = {
	"data_ptr",
	11
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_12 = {
	"code_ptr",
	12
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_13 = {
	"word",
	13
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_value_ordered_llds_type_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_1,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_2,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_3,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_4,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_5,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_6,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_7,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_8,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_9,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_10,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_11,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_12,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_13
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_name_ordered_llds_type_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_12,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_11,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_9,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_3,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_5,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_1,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_7,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_10,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_4,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_6,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_2,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_8,
	&mercury_data_ll_backend__llds__enum_functor_desc_llds_type_0_13
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_llds_type_0[] = {
	0,
	6,
	11,
	4,
	9,
	5,
	10,
	7,
	12,
	3,
	8,
	2,
	1,
	13 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_llds_type_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__llds_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__llds_type_0_0)),
	"ll_backend.llds",
	"llds_type",
	{ (void *)mercury_data_ll_backend__llds__enum_name_ordered_llds_type_0 },
	{ (void *)mercury_data_ll_backend__llds__enum_value_ordered_llds_type_0 },
	14,
	4,
	mercury_data_ll_backend__llds__functor_number_map_llds_type_0
};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_llds_proc_id_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__llds_proc_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__llds_proc_id_0_0)),
	"ll_backend.llds",
	"llds_proc_id",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_llds_inst_0_0 = {
	"llds_inst_ground",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_llds_inst_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_llds_inst_0_1 = {
	"llds_inst_partial",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_llds_inst_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_llds_inst_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_llds_inst_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_llds_inst_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_llds_inst_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_llds_inst_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__llds__du_stag_ordered_llds_inst_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_llds_inst_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_llds_inst_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_llds_inst_0_0,
	&mercury_data_ll_backend__llds__du_functor_desc_llds_inst_0_1
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_llds_inst_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_llds_inst_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__llds_inst_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__llds_inst_0_0)),
	"ll_backend.llds",
	"llds_inst",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_llds_inst_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_llds_inst_0 },
	2,
	4,
	mercury_data_ll_backend__llds__functor_number_map_llds_inst_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_TypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_live_value_type_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_liveinfo_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_live_value_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_liveinfo_0_0 = {
	"live_lvalue",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_liveinfo_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_liveinfo_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_liveinfo_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_liveinfo_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_liveinfo_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_liveinfo_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_liveinfo_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_liveinfo_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_liveinfo_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__liveinfo_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__liveinfo_0_0)),
	"ll_backend.llds",
	"liveinfo",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_liveinfo_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_liveinfo_0 },
	1,
	4,
	mercury_data_ll_backend__llds__functor_number_map_liveinfo_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_0 = {
	"live_value_succip",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_1 = {
	"live_value_curfr",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_2 = {
	"live_value_maxfr",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_3 = {
	"live_value_redoip",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_4 = {
	"live_value_redofr",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_5 = {
	"live_value_hp",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_6 = {
	"live_value_trail_ptr",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	6,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_7 = {
	"live_value_ticket",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	7,
	7,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_8 = {
	"live_value_region_ite",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	8,
	8,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_9 = {
	"live_value_region_disj",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	9,
	9,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_10 = {
	"live_value_region_commit",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	10,
	10,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_llds_inst_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_live_value_type_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_llds_inst_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_11 = {
	"live_value_var",
	4,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	11,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_live_value_type_0_11,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_12 = {
	"live_value_unwanted",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	11,
	12,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_live_value_type_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_0,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_1,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_2,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_3,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_4,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_5,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_6,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_7,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_8,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_9,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_10,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_12

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_live_value_type_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_11

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_live_value_type_0[] = {
	{ 12, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__llds__du_stag_ordered_live_value_type_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_live_value_type_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_live_value_type_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_1,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_5,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_2,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_4,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_3,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_10,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_9,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_8,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_0,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_7,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_6,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_12,
	&mercury_data_ll_backend__llds__du_functor_desc_live_value_type_0_11
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_live_value_type_0[] = {
	8,
	0,
	2,
	4,
	3,
	1,
	10,
	9,
	7,
	6,
	5,
	12,
	11 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_live_value_type_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__live_value_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__live_value_type_0_0)),
	"ll_backend.llds",
	"live_value_type",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_live_value_type_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_live_value_type_0 },
	13,
	4,
	mercury_data_ll_backend__llds__functor_number_map_live_value_type_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_layout_locn_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_layout_locn_0_0 = {
	"locn_direct",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_layout_locn_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_layout_locn_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_layout_locn_0_1 = {
	"locn_indirect",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_layout_locn_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_layout_locn_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_layout_locn_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_layout_locn_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_layout_locn_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_layout_locn_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_layout_locn_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_layout_locn_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_layout_locn_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_layout_locn_0_0,
	&mercury_data_ll_backend__llds__du_functor_desc_layout_locn_0_1
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_layout_locn_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__layout_locn_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__layout_locn_0_0)),
	"ll_backend.llds",
	"layout_locn",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_layout_locn_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_layout_locn_0 },
	2,
	4,
	mercury_data_ll_backend__llds__functor_number_map_layout_locn_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_label_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_label_0_0 = {
	"internal_label",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_label_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_entry_label_type_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_label_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_entry_label_type_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_label_0_1 = {
	"entry_label",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_label_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_label_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_label_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_label_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_label_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_label_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_label_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_label_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_label_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_label_0_1,
	&mercury_data_ll_backend__llds__du_functor_desc_label_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_label_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__label_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__label_0_0)),
	"ll_backend.llds",
	"label",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_label_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_label_0 },
	2,
	4,
	mercury_data_ll_backend__llds__functor_number_map_label_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instr_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instruction_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instr_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__llds__field_names_instruction_0_0[] = {
	"llds_inst",
	"llds_comment"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instruction_0_0 = {
	"llds_instr",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instruction_0_0,
	mercury_data_ll_backend__llds__field_names_instruction_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_instruction_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_instruction_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_instruction_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_instruction_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_instruction_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_instruction_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_instruction_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__instruction_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__instruction_0_0)),
	"ll_backend.llds",
	"instruction",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_instruction_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_instruction_0 },
	1,
	4,
	mercury_data_ll_backend__llds__functor_number_map_instruction_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_0 = {
	"comment",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_0,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_1 = {
	"livevals",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_2 = {
	"block",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_3 = {
	"assign",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_4 = {
	"keep_assign",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	4,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_4,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_liveinfo_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_liveinfo_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_liveinfo_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_cord__ti_cord_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0 = {
	&mercury_data_cord__type_ctor_info_cord_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_call_model_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_code_addr_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_code_addr_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_liveinfo_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_cord__ti_cord_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_call_model_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_5 = {
	"llcall",
	6,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	5,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_5,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_code_addr_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_code_addr_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_nondet_frame_info_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_nondet_frame_info_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_code_addr_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_6 = {
	"mkframe",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	6,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_6,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_7 = {
	"label",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	7,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_7,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_code_addr_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_8 = {
	"goto",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	8,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_8,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_label_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_9 = {
	"computed_goto",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	9,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_9,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_proc_affects_liveness_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_proc_affects_liveness_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_c_code_live_lvals_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_proc_affects_liveness_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_c_code_live_lvals_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_10 = {
	"arbitrary_c_code",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	8,
	10,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_10,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_code_addr_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_11 = {
	"if_val",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	9,
	11,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_11,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_12[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_12 = {
	"save_maxfr",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	10,
	12,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_12,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_13[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_13 = {
	"restore_maxfr",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	11,
	13,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_13,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_may_use_atomic_alloc_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_rval_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_may_use_atomic_alloc_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_14[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_data__type_ctor_info_may_use_atomic_alloc_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_14 = {
	"incr_hp",
	7,
	0,
	MR_SECTAG_REMOTE,
	3,
	12,
	14,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_14,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_15 = {
	"mark_hp",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	13,
	15,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_15,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_16[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_16 = {
	"restore_hp",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	14,
	16,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_16,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_17[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_17 = {
	"free_heap",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	15,
	17,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_17,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_region_stack_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_18[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_region_stack_id_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_18 = {
	"push_region_frame",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	16,
	18,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_18,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_region_fill_frame_op_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_19[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_region_fill_frame_op_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_19 = {
	"region_fill_frame",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	17,
	19,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_19,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_region_set_fixed_op_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_20[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_region_set_fixed_op_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_20 = {
	"region_set_fixed_slot",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	18,
	20,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_20,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_region_use_frame_op_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_21[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_region_use_frame_op_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_21 = {
	"use_and_maybe_pop_region_frame",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	19,
	21,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_21,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_22[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_22 = {
	"store_ticket",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	20,
	22,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_22,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_reset_trail_reason_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_23[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_reset_trail_reason_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_23 = {
	"reset_ticket",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	21,
	23,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_23,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_24 = {
	"prune_ticket",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	24,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_25 = {
	"discard_ticket",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	25,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_26[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_26 = {
	"mark_ticket_stack",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	22,
	26,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_26,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_27[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_27 = {
	"prune_tickets_to",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	23,
	27,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_27,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_stack_incr_kind_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_28[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_stack_incr_kind_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_28 = {
	"incr_sp",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	24,
	28,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_28,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_29[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_29 = {
	"decr_sp",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	25,
	29,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_29,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_30[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_30 = {
	"decr_sp_and_return",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	26,
	30,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_30,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_decl_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_foreign_proc_decl_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_decl_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_component_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_foreign_proc_component_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_component_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_proc_may_call_mercury_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_proc_may_duplicate_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_proc_may_call_mercury_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_proc_may_duplicate_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_31[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_foreign_proc_decl_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_foreign_proc_component_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_proc_may_call_mercury_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_proc_may_duplicate_0
};

const MR_ConstString mercury_data_ll_backend__llds__field_names_instr_0_31[] = {
	"fproc_decls",
	"fproc_components",
	"fproc_may_call_merc",
	"fproc_fix_nolayout",
	"fproc_fix_layout",
	"fproc_fix_onlylayout",
	"fproc_nofix",
	"fproc_stack_slot_ref",
	"fproc_maybe_dupl"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_31 = {
	"foreign_proc_code",
	9,
	0,
	MR_SECTAG_REMOTE,
	3,
	27,
	31,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_31,
	mercury_data_ll_backend__llds__field_names_instr_0_31,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_32[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_32 = {
	"init_sync_term",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	28,
	32,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_32,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_33[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_33 = {
	"fork_new_child",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	29,
	33,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_33,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_instr_0_34[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_instr_0_34 = {
	"join_and_continue",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	30,
	34,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_instr_0_34,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_instr_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_24,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_25

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_instr_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_instr_0_2[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_instr_0_3[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_2,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_3,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_4,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_5,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_6,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_7,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_8,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_9,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_10,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_11,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_12,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_13,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_14,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_15,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_16,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_17,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_18,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_19,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_20,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_21,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_22,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_23,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_26,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_27,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_28,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_29,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_30,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_31,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_32,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_33,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_34

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_instr_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__llds__du_stag_ordered_instr_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_instr_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_instr_0_2 },
	{ 31, MR_SECTAG_REMOTE,
	mercury_data_ll_backend__llds__du_stag_ordered_instr_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_instr_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_10,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_3,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_2,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_0,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_9,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_29,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_30,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_25,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_31,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_33,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_17,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_8,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_11,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_14,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_28,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_32,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_34,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_4,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_7,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_1,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_5,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_15,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_26,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_6,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_24,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_27,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_18,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_19,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_20,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_23,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_16,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_13,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_12,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_22,
	&mercury_data_ll_backend__llds__du_functor_desc_instr_0_21
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_instr_0[] = {
	3,
	19,
	2,
	1,
	17,
	20,
	23,
	18,
	11,
	4,
	0,
	12,
	32,
	31,
	13,
	21,
	30,
	10,
	26,
	27,
	28,
	34,
	33,
	29,
	24,
	7,
	22,
	25,
	14,
	5,
	6,
	8,
	15,
	9,
	16 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instr_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__instr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__instr_0_0)),
	"ll_backend.llds",
	"instr",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_instr_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_instr_0 },
	35,
	4,
	mercury_data_ll_backend__llds__functor_number_map_instr_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_ho_call_variant_0_0 = {
	"generic",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_ho_call_variant_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_ho_call_variant_0_1 = {
	"specialized_known",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_ho_call_variant_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_ho_call_variant_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_ho_call_variant_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_ho_call_variant_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_ho_call_variant_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_ho_call_variant_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__llds__du_stag_ordered_ho_call_variant_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_ho_call_variant_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_ho_call_variant_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_ho_call_variant_0_0,
	&mercury_data_ll_backend__llds__du_functor_desc_ho_call_variant_0_1
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_ho_call_variant_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_ho_call_variant_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__ho_call_variant_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__ho_call_variant_0_0)),
	"ll_backend.llds",
	"ho_call_variant",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_ho_call_variant_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_ho_call_variant_0 },
	2,
	4,
	mercury_data_ll_backend__llds__functor_number_map_ho_call_variant_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_foreign_proc_type_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_type_0_0 = {
	"foreign_proc_type",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_foreign_proc_type_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_foreign_proc_type_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_type_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_foreign_proc_type_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_foreign_proc_type_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_foreign_proc_type_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_type_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_foreign_proc_type_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_type_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__foreign_proc_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__foreign_proc_type_0_0)),
	"ll_backend.llds",
	"foreign_proc_type",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_foreign_proc_type_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_foreign_proc_type_0 },
	1,
	4,
	mercury_data_ll_backend__llds__functor_number_map_foreign_proc_type_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1term__type_ctor_info_context_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_context_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_foreign_proc_struct_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_struct_0_0 = {
	"foreign_proc_struct",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_foreign_proc_struct_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_foreign_proc_struct_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_struct_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_foreign_proc_struct_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_foreign_proc_struct_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_foreign_proc_struct_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_struct_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_foreign_proc_struct_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_struct_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__foreign_proc_struct_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__foreign_proc_struct_0_0)),
	"ll_backend.llds",
	"foreign_proc_struct",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_foreign_proc_struct_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_foreign_proc_struct_0 },
	1,
	4,
	mercury_data_ll_backend__llds__functor_number_map_foreign_proc_struct_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_foreign_proc_type_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_box_policy_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_box_policy_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_foreign_proc_output_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_foreign_proc_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_box_policy_0
};

const MR_ConstString mercury_data_ll_backend__llds__field_names_foreign_proc_output_0_0[] = {
	"out_arg_dest",
	"out_var_type",
	"out_var_type_is_dummy",
	"out_original_type",
	"out_var_name",
	"out_maybe_foreign_type",
	"out_box_policy"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_output_0_0 = {
	"foreign_proc_output",
	7,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_foreign_proc_output_0_0,
	mercury_data_ll_backend__llds__field_names_foreign_proc_output_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_foreign_proc_output_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_output_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_foreign_proc_output_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_foreign_proc_output_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_foreign_proc_output_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_output_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_foreign_proc_output_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_output_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__foreign_proc_output_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__foreign_proc_output_0_0)),
	"ll_backend.llds",
	"foreign_proc_output",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_foreign_proc_output_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_foreign_proc_output_0 },
	1,
	4,
	mercury_data_ll_backend__llds__functor_number_map_foreign_proc_output_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_foreign_proc_input_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_foreign_proc_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_box_policy_0
};

const MR_ConstString mercury_data_ll_backend__llds__field_names_foreign_proc_input_0_0[] = {
	"in_foreign_lang_var_name",
	"in_var_type",
	"in_var_type_is_dummy",
	"in_original_type",
	"in_arg_value",
	"in_maybe_foreign_type",
	"in_box_policy"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_input_0_0 = {
	"foreign_proc_input",
	7,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_foreign_proc_input_0_0,
	mercury_data_ll_backend__llds__field_names_foreign_proc_input_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_foreign_proc_input_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_input_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_foreign_proc_input_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_foreign_proc_input_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_foreign_proc_input_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_input_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_foreign_proc_input_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_input_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__foreign_proc_input_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__foreign_proc_input_0_0)),
	"ll_backend.llds",
	"foreign_proc_input",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_foreign_proc_input_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_foreign_proc_input_0 },
	1,
	4,
	mercury_data_ll_backend__llds__functor_number_map_foreign_proc_input_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_foreign_proc_decl_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_decl_0_0 = {
	"foreign_proc_arg_decl",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_foreign_proc_decl_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_foreign_proc_decl_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_decl_0_1 = {
	"foreign_proc_struct_ptr_decl",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_foreign_proc_decl_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_foreign_proc_decl_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_decl_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_foreign_proc_decl_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_decl_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_foreign_proc_decl_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_foreign_proc_decl_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_foreign_proc_decl_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_foreign_proc_decl_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_decl_0_0,
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_decl_0_1
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_foreign_proc_decl_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_decl_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__foreign_proc_decl_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__foreign_proc_decl_0_0)),
	"ll_backend.llds",
	"foreign_proc_decl",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_foreign_proc_decl_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_foreign_proc_decl_0 },
	2,
	4,
	mercury_data_ll_backend__llds__functor_number_map_foreign_proc_decl_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_input_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_foreign_proc_input_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_input_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_foreign_proc_component_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_foreign_proc_input_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_component_0_0 = {
	"foreign_proc_inputs",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_foreign_proc_component_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_output_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_foreign_proc_output_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_output_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_foreign_proc_component_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_foreign_proc_output_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_component_0_1 = {
	"foreign_proc_outputs",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_foreign_proc_component_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_foreign_proc_component_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_proc_affects_liveness_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_component_0_2 = {
	"foreign_proc_user_code",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_foreign_proc_component_0_2,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_can_branch_away_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_foreign_proc_component_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_can_branch_away_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_proc_affects_liveness_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_c_code_live_lvals_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_component_0_3 = {
	"foreign_proc_raw_code",
	4,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_foreign_proc_component_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_foreign_proc_component_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_component_0_4 = {
	"foreign_proc_fail_to",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	4,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_foreign_proc_component_0_4,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_component_0_5 = {
	"foreign_proc_noop",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_foreign_proc_component_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_component_0_5

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_foreign_proc_component_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_component_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_foreign_proc_component_0_2[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_component_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_foreign_proc_component_0_3[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_component_0_2,
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_component_0_3,
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_component_0_4

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_foreign_proc_component_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__llds__du_stag_ordered_foreign_proc_component_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_foreign_proc_component_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_foreign_proc_component_0_2 },
	{ 3, MR_SECTAG_REMOTE,
	mercury_data_ll_backend__llds__du_stag_ordered_foreign_proc_component_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_foreign_proc_component_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_component_0_4,
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_component_0_0,
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_component_0_5,
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_component_0_1,
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_component_0_3,
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_proc_component_0_2
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_foreign_proc_component_0[] = {
	1,
	3,
	5,
	4,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_component_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__foreign_proc_component_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0)),
	"ll_backend.llds",
	"foreign_proc_component",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_foreign_proc_component_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_foreign_proc_component_0 },
	6,
	4,
	mercury_data_ll_backend__llds__functor_number_map_foreign_proc_component_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_export_decls_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_export_decls_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_foreign_interface_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_export_decls_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_foreign_interface_info_0_0 = {
	"foreign_interface_info",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_foreign_interface_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_foreign_interface_info_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_interface_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_foreign_interface_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_foreign_interface_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_foreign_interface_info_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_foreign_interface_info_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_foreign_interface_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_interface_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__foreign_interface_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__foreign_interface_info_0_0)),
	"ll_backend.llds",
	"foreign_interface_info",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_foreign_interface_info_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_foreign_interface_info_0 },
	1,
	4,
	mercury_data_ll_backend__llds__functor_number_map_foreign_interface_info_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_entry_label_type_0_0 = {
	"entry_label_c_local",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_entry_label_type_0_1 = {
	"entry_label_local",
	1
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_entry_label_type_0_2 = {
	"entry_label_exported",
	2
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_value_ordered_entry_label_type_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_entry_label_type_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_entry_label_type_0_1,
	&mercury_data_ll_backend__llds__enum_functor_desc_entry_label_type_0_2
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_name_ordered_entry_label_type_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_entry_label_type_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_entry_label_type_0_2,
	&mercury_data_ll_backend__llds__enum_functor_desc_entry_label_type_0_1
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_entry_label_type_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_entry_label_type_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__entry_label_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__entry_label_type_0_0)),
	"ll_backend.llds",
	"entry_label_type",
	{ (void *)mercury_data_ll_backend__llds__enum_name_ordered_entry_label_type_0 },
	{ (void *)mercury_data_ll_backend__llds__enum_value_ordered_entry_label_type_0 },
	3,
	4,
	mercury_data_ll_backend__llds__functor_number_map_entry_label_type_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_main_stack_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_embedded_stack_frame_id_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_main_stack_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_embedded_stack_frame_id_0_0 = {
	"embedded_stack_frame_id",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_embedded_stack_frame_id_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_embedded_stack_frame_id_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_embedded_stack_frame_id_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_embedded_stack_frame_id_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_embedded_stack_frame_id_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_embedded_stack_frame_id_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_embedded_stack_frame_id_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_embedded_stack_frame_id_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__embedded_stack_frame_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__embedded_stack_frame_id_0_0)),
	"ll_backend.llds",
	"embedded_stack_frame_id",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_embedded_stack_frame_id_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_embedded_stack_frame_id_0 },
	1,
	4,
	mercury_data_ll_backend__llds__functor_number_map_embedded_stack_frame_id_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_data_name_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_type_num_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_data_name_0_0 = {
	"scalar_common_ref",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_data_name_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_data_name_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_type_num_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_data_name_0_1 = {
	"vector_common_ref",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_data_name_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_proc_tabling_struct_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_proc_tabling_struct_id_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_data_name_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__rtti__type_ctor_info_proc_tabling_struct_id_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_data_name_0_2 = {
	"proc_tabling_ref",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_data_name_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_data_name_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_data_name_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_data_name_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_data_name_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_data_name_0_2[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_data_name_0_2

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_data_name_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_data_name_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_data_name_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_data_name_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_data_name_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_data_name_0_2,
	&mercury_data_ll_backend__llds__du_functor_desc_data_name_0_0,
	&mercury_data_ll_backend__llds__du_functor_desc_data_name_0_1
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_data_name_0[] = {
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_data_name_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__data_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__data_name_0_0)),
	"ll_backend.llds",
	"data_name",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_data_name_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_data_name_0 },
	3,
	4,
	mercury_data_ll_backend__llds__functor_number_map_data_name_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_data_name_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_data_addr_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_data_name_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_data_addr_0_0 = {
	"data_addr",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_data_addr_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_id_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_data_addr_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__rtti__type_ctor_info_rtti_id_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_data_addr_0_1 = {
	"rtti_addr",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_data_addr_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_layout_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_layout_name_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_data_addr_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_layout_name_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_data_addr_0_2 = {
	"layout_addr",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_data_addr_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_data_addr_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_data_addr_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_data_addr_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_data_addr_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_data_addr_0_2[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_data_addr_0_2

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_data_addr_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_data_addr_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_data_addr_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_data_addr_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_data_addr_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_data_addr_0_0,
	&mercury_data_ll_backend__llds__du_functor_desc_data_addr_0_2,
	&mercury_data_ll_backend__llds__du_functor_desc_data_addr_0_1
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_data_addr_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_data_addr_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__data_addr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__data_addr_0_0)),
	"ll_backend.llds",
	"data_addr",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_data_addr_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_data_addr_0 },
	3,
	4,
	mercury_data_ll_backend__llds__functor_number_map_data_addr_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_c_procedure_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_c_procedure_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_c_procedure_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_comp_gen_c_module_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_c_procedure_0
};

const MR_ConstString mercury_data_ll_backend__llds__field_names_comp_gen_c_module_0_0[] = {
	"cgcm_name",
	"cgcm_procs"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_comp_gen_c_module_0_0 = {
	"comp_gen_c_module",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_comp_gen_c_module_0_0,
	mercury_data_ll_backend__llds__field_names_comp_gen_c_module_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_comp_gen_c_module_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_comp_gen_c_module_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_comp_gen_c_module_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_comp_gen_c_module_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_comp_gen_c_module_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_comp_gen_c_module_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_comp_gen_c_module_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_comp_gen_c_module_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__comp_gen_c_module_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__comp_gen_c_module_0_0)),
	"ll_backend.llds",
	"comp_gen_c_module",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_comp_gen_c_module_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_comp_gen_c_module_0 },
	1,
	4,
	mercury_data_ll_backend__llds__functor_number_map_comp_gen_c_module_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2ll_backend__llds__type_ctor_info_rval_0ll_backend__llds__type_ctor_info_llds_type_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0,
	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_llds_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2ll_backend__llds__type_ctor_info_rval_0ll_backend__llds__type_ctor_info_llds_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2ll_backend__llds__type_ctor_info_rval_0ll_backend__llds__type_ctor_info_llds_type_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_common_cell_value_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2ll_backend__llds__type_ctor_info_rval_0ll_backend__llds__type_ctor_info_llds_type_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_common_cell_value_0_0 = {
	"plain_value",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_common_cell_value_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_common_cell_arg_group_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_common_cell_arg_group_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_common_cell_arg_group_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_common_cell_value_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_common_cell_arg_group_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_common_cell_value_0_1 = {
	"grouped_args_value",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_common_cell_value_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_common_cell_value_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_common_cell_value_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_common_cell_value_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_common_cell_value_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_common_cell_value_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_common_cell_value_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_common_cell_value_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_common_cell_value_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_common_cell_value_0_1,
	&mercury_data_ll_backend__llds__du_functor_desc_common_cell_value_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_common_cell_value_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_common_cell_value_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__common_cell_value_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__common_cell_value_0_0)),
	"ll_backend.llds",
	"common_cell_value",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_common_cell_value_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_common_cell_value_0 },
	2,
	4,
	mercury_data_ll_backend__llds__functor_number_map_common_cell_value_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_llds_type_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_common_cell_type_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_common_cell_type_0_0 = {
	"plain_type",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_common_cell_type_0_0,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2ll_backend__llds__type_ctor_info_llds_type_0builtin__type_ctor_info_int_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_llds_type_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2ll_backend__llds__type_ctor_info_llds_type_0builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2ll_backend__llds__type_ctor_info_llds_type_0builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_common_cell_type_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2ll_backend__llds__type_ctor_info_llds_type_0builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_common_cell_type_0_1 = {
	"grouped_args_type",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_common_cell_type_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_common_cell_type_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_common_cell_type_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_common_cell_type_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_common_cell_type_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_common_cell_type_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_common_cell_type_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_common_cell_type_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_common_cell_type_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_common_cell_type_0_1,
	&mercury_data_ll_backend__llds__du_functor_desc_common_cell_type_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_common_cell_type_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_common_cell_type_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__common_cell_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__common_cell_type_0_0)),
	"ll_backend.llds",
	"common_cell_type",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_common_cell_type_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_common_cell_type_0 },
	2,
	4,
	mercury_data_ll_backend__llds__functor_number_map_common_cell_type_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_rval_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_common_cell_arg_group_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_llds_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_common_cell_arg_group_0_0 = {
	"common_cell_grouped_args",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_common_cell_arg_group_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_common_cell_arg_group_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_llds_type_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_common_cell_arg_group_0_1 = {
	"common_cell_ungrouped_arg",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_common_cell_arg_group_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_common_cell_arg_group_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_common_cell_arg_group_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_common_cell_arg_group_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_common_cell_arg_group_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_common_cell_arg_group_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_common_cell_arg_group_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_common_cell_arg_group_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_common_cell_arg_group_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_common_cell_arg_group_0_0,
	&mercury_data_ll_backend__llds__du_functor_desc_common_cell_arg_group_0_1
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_common_cell_arg_group_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_common_cell_arg_group_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__common_cell_arg_group_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__common_cell_arg_group_0_0)),
	"ll_backend.llds",
	"common_cell_arg_group",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_common_cell_arg_group_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_common_cell_arg_group_0 },
	2,
	4,
	mercury_data_ll_backend__llds__functor_number_map_common_cell_arg_group_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__tree__type_ctor_info_tree_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_libs__tree__ti_tree_1list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_libs__tree__type_ctor_info_tree_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_code_tree_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__code_tree_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__code_tree_0_0)),
	"ll_backend.llds",
	"code_tree",
	{ 0 },
	{ (void *)&mercury_data_libs__tree__ti_tree_1list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_code_addr_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_0 = {
	"code_label",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_code_addr_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_code_addr_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_1 = {
	"code_imported_proc",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_code_addr_0_1,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_2 = {
	"code_succip",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_code_addr_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_3 = {
	"do_succeed",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_code_addr_0_3,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_4 = {
	"do_redo",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_5 = {
	"do_fail",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_6 = {
	"do_trace_redo_fail_shallow",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_7 = {
	"do_trace_redo_fail_deep",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	7,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_ho_call_variant_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_code_addr_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_ho_call_variant_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_8 = {
	"do_call_closure",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	8,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_code_addr_0_8,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_code_addr_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_ho_call_variant_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_9 = {
	"do_call_class_method",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	9,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_code_addr_0_9,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_10 = {
	"do_not_reached",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	10,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_code_addr_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_2,
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_4,
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_5,
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_6,
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_7,
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_10

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_code_addr_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_code_addr_0_2[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_code_addr_0_3[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_3,
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_8,
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_9

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_code_addr_0[] = {
	{ 6, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__llds__du_stag_ordered_code_addr_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_code_addr_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_code_addr_0_2 },
	{ 3, MR_SECTAG_REMOTE,
	mercury_data_ll_backend__llds__du_stag_ordered_code_addr_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_code_addr_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_1,
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_0,
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_2,
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_9,
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_8,
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_5,
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_10,
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_4,
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_3,
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_7,
	&mercury_data_ll_backend__llds__du_functor_desc_code_addr_0_6
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_code_addr_0[] = {
	1,
	0,
	2,
	8,
	7,
	5,
	10,
	9,
	4,
	3,
	6 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_code_addr_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__code_addr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__code_addr_0_0)),
	"ll_backend.llds",
	"code_addr",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_code_addr_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_code_addr_0 },
	11,
	4,
	mercury_data_ll_backend__llds__functor_number_map_code_addr_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_can_branch_away_0_0 = {
	"can_branch_away",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_can_branch_away_0_1 = {
	"cannot_branch_away",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_value_ordered_can_branch_away_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_can_branch_away_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_can_branch_away_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_name_ordered_can_branch_away_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_can_branch_away_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_can_branch_away_0_1
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_can_branch_away_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_can_branch_away_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__can_branch_away_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__can_branch_away_0_0)),
	"ll_backend.llds",
	"can_branch_away",
	{ (void *)mercury_data_ll_backend__llds__enum_name_ordered_can_branch_away_0 },
	{ (void *)mercury_data_ll_backend__llds__enum_value_ordered_can_branch_away_0 },
	2,
	4,
	mercury_data_ll_backend__llds__functor_number_map_can_branch_away_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_call_model_0_0 = {
	"call_model_det",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_call_model_0_1 = {
	"call_model_semidet",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_nondet_tail_call_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_call_model_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_nondet_tail_call_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_call_model_0_2 = {
	"call_model_nondet",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_call_model_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_call_model_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_call_model_0_0,
	&mercury_data_ll_backend__llds__du_functor_desc_call_model_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_call_model_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_call_model_0_2

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_call_model_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__llds__du_stag_ordered_call_model_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_call_model_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_call_model_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_call_model_0_0,
	&mercury_data_ll_backend__llds__du_functor_desc_call_model_0_2,
	&mercury_data_ll_backend__llds__du_functor_desc_call_model_0_1
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_call_model_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_call_model_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__call_model_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__call_model_0_0)),
	"ll_backend.llds",
	"call_model",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_call_model_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_call_model_0 },
	3,
	4,
	mercury_data_ll_backend__llds__functor_number_map_call_model_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__code_model__type_ctor_info_code_model_0;
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__code_model__type_ctor_info_code_model_0;
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_may_alter_rtti_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_c_procedure_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__code_model__type_ctor_info_code_model_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_may_alter_rtti_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__llds__field_names_c_procedure_0_0[] = {
	"cproc_name",
	"cproc_orig_arity",
	"cproc_id",
	"cproc_code_model",
	"cproc_code",
	"cproc_proc_label",
	"cproc_label_nums",
	"cproc_may_alter_rtti",
	"cproc_c_global_vars"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_c_procedure_0_0 = {
	"c_procedure",
	9,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_c_procedure_0_0,
	mercury_data_ll_backend__llds__field_names_c_procedure_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_c_procedure_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_c_procedure_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_c_procedure_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_c_procedure_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_c_procedure_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_c_procedure_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_c_procedure_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_c_procedure_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__c_procedure_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__c_procedure_0_0)),
	"ll_backend.llds",
	"c_procedure",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_c_procedure_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_c_procedure_0 },
	1,
	4,
	mercury_data_ll_backend__llds__functor_number_map_c_procedure_0
};

static const MR_NotagFunctorDesc mercury_data_ll_backend__llds__notag_functor_desc_c_global_var_ref_0 = {
	"env_var_ref",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	NULL
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_c_global_var_ref_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_c_global_var_ref_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__c_global_var_ref_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__c_global_var_ref_0_0)),
	"ll_backend.llds",
	"c_global_var_ref",
	{ (void *)&mercury_data_ll_backend__llds__notag_functor_desc_c_global_var_ref_0 },
	{ (void *)&mercury_data_ll_backend__llds__notag_functor_desc_c_global_var_ref_0 },
	1,
	4,
	mercury_data_ll_backend__llds__functor_number_map_c_global_var_ref_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_tabling_info_struct_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_tabling_info_struct_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_tabling_info_struct_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_scalar_common_data_array_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_scalar_common_data_array_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_scalar_common_data_array_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_vector_common_data_array_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_vector_common_data_array_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_vector_common_data_array_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_data_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1backend_libs__rtti__type_ctor_info_rtti_data_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_backend_libs__rtti__type_ctor_info_rtti_data_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_layout_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_layout_data_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__layout__type_ctor_info_layout_data_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_layout_data_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_comp_gen_c_module_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_comp_gen_c_module_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_comp_gen_c_module_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_c_file_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_tabling_info_struct_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_scalar_common_data_array_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_vector_common_data_array_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1backend_libs__rtti__type_ctor_info_rtti_data_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__layout__type_ctor_info_layout_data_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_comp_gen_c_module_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__llds__field_names_c_file_0_0[] = {
	"cfile_modulename",
	"cfile_foreign_decl",
	"cfile_foreign_code",
	"cfile_foreign_export",
	"cfile_vars",
	"cfile_scalar_common_data",
	"cfile_vector_common_data",
	"cfile_rtti_data",
	"cfile_layout_data",
	"cfile_code",
	"cfile_user_init_c_names",
	"cfile_user_final_c_names"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_c_file_0_0 = {
	"c_file",
	12,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_c_file_0_0,
	mercury_data_ll_backend__llds__field_names_c_file_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_c_file_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_c_file_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_c_file_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_c_file_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_c_file_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_c_file_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_c_file_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_c_file_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__c_file_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__c_file_0_0)),
	"ll_backend.llds",
	"c_file",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_c_file_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_c_file_0 },
	1,
	4,
	mercury_data_ll_backend__llds__functor_number_map_c_file_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_c_code_live_lvals_0_0 = {
	"no_live_lvals_info",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds__field_types_c_code_live_lvals_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds__du_functor_desc_c_code_live_lvals_0_1 = {
	"live_lvals_info",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds__field_types_c_code_live_lvals_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_c_code_live_lvals_0_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_c_code_live_lvals_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_stag_ordered_c_code_live_lvals_0_1[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_c_code_live_lvals_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__llds__du_ptag_ordered_c_code_live_lvals_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__llds__du_stag_ordered_c_code_live_lvals_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds__du_stag_ordered_c_code_live_lvals_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds__du_name_ordered_c_code_live_lvals_0[] = {
	&mercury_data_ll_backend__llds__du_functor_desc_c_code_live_lvals_0_1,
	&mercury_data_ll_backend__llds__du_functor_desc_c_code_live_lvals_0_0
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_c_code_live_lvals_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_c_code_live_lvals_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__c_code_live_lvals_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__c_code_live_lvals_0_0)),
	"ll_backend.llds",
	"c_code_live_lvals",
	{ (void *)mercury_data_ll_backend__llds__du_name_ordered_c_code_live_lvals_0 },
	{ (void *)mercury_data_ll_backend__llds__du_ptag_ordered_c_code_live_lvals_0 },
	2,
	4,
	mercury_data_ll_backend__llds__functor_number_map_c_code_live_lvals_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_add_trail_ops_0_0 = {
	"add_trail_ops",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_add_trail_ops_0_1 = {
	"do_not_add_trail_ops",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_value_ordered_add_trail_ops_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_add_trail_ops_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_add_trail_ops_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_name_ordered_add_trail_ops_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_add_trail_ops_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_add_trail_ops_0_1
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_add_trail_ops_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_add_trail_ops_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__add_trail_ops_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__add_trail_ops_0_0)),
	"ll_backend.llds",
	"add_trail_ops",
	{ (void *)mercury_data_ll_backend__llds__enum_name_ordered_add_trail_ops_0 },
	{ (void *)mercury_data_ll_backend__llds__enum_value_ordered_add_trail_ops_0 },
	2,
	4,
	mercury_data_ll_backend__llds__functor_number_map_add_trail_ops_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_add_region_ops_0_0 = {
	"add_region_ops",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds__enum_functor_desc_add_region_ops_0_1 = {
	"do_not_add_region_ops",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_value_ordered_add_region_ops_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_add_region_ops_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_add_region_ops_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds__enum_name_ordered_add_region_ops_0[] = {
	&mercury_data_ll_backend__llds__enum_functor_desc_add_region_ops_0_0,
	&mercury_data_ll_backend__llds__enum_functor_desc_add_region_ops_0_1
};

const MR_Integer mercury_data_ll_backend__llds__functor_number_map_add_region_ops_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_add_region_ops_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds__add_region_ops_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds__add_region_ops_0_0)),
	"ll_backend.llds",
	"add_region_ops",
	{ (void *)mercury_data_ll_backend__llds__enum_name_ordered_add_region_ops_0 },
	{ (void *)mercury_data_ll_backend__llds__enum_value_ordered_add_region_ops_0 },
	2,
	4,
	mercury_data_ll_backend__llds__functor_number_map_add_region_ops_0
};


MR_BEGIN_MODULE(ll_backend__llds_module0)
	MR_init_entry1(fn__ll_backend__llds__stack_slot_num_to_lval_ref_2_0);
	MR_init_label1(fn__ll_backend__llds__stack_slot_num_to_lval_ref_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__llds__stack_slot_num_to_lval_ref_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__llds__stack_slot_num_to_lval_ref_2_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__ll_backend__llds__stack_slot_num_to_lval_ref_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module1)
	MR_init_entry1(fn__ll_backend__llds__first_nonfixed_embedded_slot_addr_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__llds__first_nonfixed_embedded_slot_addr_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = ((MR_Integer) MR_ctfield(0, MR_tempr1, 2) - (MR_Integer) MR_r2);
	MR_np_tailcall_ent(fn__ll_backend__llds__stack_slot_num_to_lval_ref_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module2)
	MR_init_entry1(fn__ll_backend__llds__stack_slot_to_lval_1_0);
	MR_init_label2(fn__ll_backend__llds__stack_slot_to_lval_1_0,5,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__llds__stack_slot_to_lval_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(fn__ll_backend__llds__stack_slot_to_lval_1_0_i4);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(fn__ll_backend__llds__stack_slot_to_lval_1_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__ll_backend__llds__stack_slot_to_lval_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__ll_backend__llds__stack_slot_to_lval_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module3)
	MR_init_entry1(fn__ll_backend__llds__key_stack_slot_to_lval_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__llds__key_stack_slot_to_lval_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_tailcall_ent(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_108_118_97_108_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module4)
	MR_init_entry1(fn__ll_backend__llds__abs_locn_to_lval_or_any_reg_1_0);
	MR_init_label5(fn__ll_backend__llds__abs_locn_to_lval_or_any_reg_1_0,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__llds__abs_locn_to_lval_or_any_reg_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ll_backend__llds__abs_locn_to_lval_or_any_reg_1_0_i4) MR_AND
		MR_LABEL_AP(fn__ll_backend__llds__abs_locn_to_lval_or_any_reg_1_0_i5) MR_AND
		MR_LABEL_AP(fn__ll_backend__llds__abs_locn_to_lval_or_any_reg_1_0_i6) MR_AND
		MR_LABEL_AP(fn__ll_backend__llds__abs_locn_to_lval_or_any_reg_1_0_i7));
MR_def_label(fn__ll_backend__llds__abs_locn_to_lval_or_any_reg_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ll_backend__llds__abs_locn_to_lval_or_any_reg_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__ll_backend__llds__abs_locn_to_lval_or_any_reg_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__ll_backend__llds__abs_locn_to_lval_or_any_reg_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(fn__ll_backend__llds__abs_locn_to_lval_or_any_reg_1_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r1, 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__ll_backend__llds__abs_locn_to_lval_or_any_reg_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r1, 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__llds_module5)
	MR_init_entry1(fn__ll_backend__llds__abs_locn_to_lval_1_0);
	MR_init_label5(fn__ll_backend__llds__abs_locn_to_lval_1_0,4,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__llds__abs_locn_to_lval_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ll_backend__llds__abs_locn_to_lval_1_0_i4) MR_AND
		MR_LABEL_AP(fn__ll_backend__llds__abs_locn_to_lval_1_0_i6) MR_AND
		MR_LABEL_AP(fn__ll_backend__llds__abs_locn_to_lval_1_0_i7) MR_AND
		MR_LABEL_AP(fn__ll_backend__llds__abs_locn_to_lval_1_0_i8));
MR_def_label(fn__ll_backend__llds__abs_locn_to_lval_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("llds.m", 6);
	MR_r2 = (MR_Word) MR_string_const("abs_locn_to_lval: any_reg", 25);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__ll_backend__llds__abs_locn_to_lval_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__ll_backend__llds__abs_locn_to_lval_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__ll_backend__llds__abs_locn_to_lval_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(fn__ll_backend__llds__abs_locn_to_lval_1_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__ll_backend__llds__abs_locn_to_lval_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module6)
	MR_init_entry1(fn__ll_backend__llds__key_abs_locn_to_lval_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__llds__key_abs_locn_to_lval_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_tailcall_ent(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_97_98_115_95_108_111_99_110_95_116_111_95_108_118_97_108_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module7)
	MR_init_entry1(fn__ll_backend__llds__code_model_to_main_stack_1_0);
	MR_init_label2(fn__ll_backend__llds__code_model_to_main_stack_1_0,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__llds__code_model_to_main_stack_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__llds__code_model_to_main_stack_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__llds__code_model_to_main_stack_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__llds__code_model_to_main_stack_1_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__llds__code_model_to_main_stack_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module8)
	MR_init_entry1(fn__ll_backend__llds__stack_slot_num_to_lval_2_0);
	MR_init_label1(fn__ll_backend__llds__stack_slot_num_to_lval_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__llds__stack_slot_num_to_lval_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__llds__stack_slot_num_to_lval_2_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_proceed();
	}
MR_def_label(fn__ll_backend__llds__stack_slot_num_to_lval_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module9)
	MR_init_entry1(fn__ll_backend__llds__region_stack_id_to_string_1_0);
	MR_init_label2(fn__ll_backend__llds__region_stack_id_to_string_1_0,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__llds__region_stack_id_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__llds__region_stack_id_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("region_ite_stack", 16);
	MR_proceed();
MR_def_label(fn__ll_backend__llds__region_stack_id_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__llds__region_stack_id_to_string_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("region_disj_stack", 17);
	MR_proceed();
MR_def_label(fn__ll_backend__llds__region_stack_id_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("region_commit_stack", 19);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module10)
	MR_init_entry1(ll_backend__llds__break_up_local_label_3_0);
	MR_init_label1(ll_backend__llds__break_up_local_label_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds__break_up_local_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__llds__break_up_local_label_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__llds__break_up_local_label_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("llds.m", 6);
	MR_r2 = (MR_Word) MR_string_const("break_up_local_label: entry label", 33);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module11)
	MR_init_entry1(ll_backend__llds__register_type_2_0);
	MR_init_label1(ll_backend__llds__register_type_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds__register_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__llds__register_type_2_0_i3);
	}
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(ll_backend__llds__register_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module12)
	MR_init_entry1(ll_backend__llds__lval_type_2_0);
	MR_init_label8(ll_backend__llds__lval_type_2_0,4,11,14,35,16,17,23,25)
	MR_init_label1(ll_backend__llds__lval_type_2_0,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds__lval_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__llds__lval_type_2_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__llds__lval_type_2_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__llds__lval_type_2_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__llds__lval_type_2_0_i17));
MR_def_label(ll_backend__llds__lval_type_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(ll_backend__llds__lval_type_2_0_i23);
	}
	MR_GOTO_LAB(ll_backend__llds__lval_type_2_0_i25);
MR_def_label(ll_backend__llds__lval_type_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds__lval_type_2_0_i16);
	}
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
	}
MR_def_label(ll_backend__llds__lval_type_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds__lval_type_2_0_i16);
	}
	}
MR_def_label(ll_backend__llds__lval_type_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(ll_backend__llds__lval_type_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(ll_backend__llds__lval_type_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__llds__lval_type_2_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__llds__lval_type_2_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__llds__lval_type_2_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__llds__lval_type_2_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__llds__lval_type_2_0_i25) MR_AND
		MR_LABEL_AP(ll_backend__llds__lval_type_2_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__llds__lval_type_2_0_i25) MR_AND
		MR_LABEL_AP(ll_backend__llds__lval_type_2_0_i25) MR_AND
		MR_LABEL_AP(ll_backend__llds__lval_type_2_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__llds__lval_type_2_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__llds__lval_type_2_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__llds__lval_type_2_0_i29));
MR_def_label(ll_backend__llds__lval_type_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(ll_backend__llds__lval_type_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(ll_backend__llds__lval_type_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("llds.m", 6);
	MR_r2 = (MR_Word) MR_string_const("lvar unexpected in llds.lval_type", 33);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module13)
	MR_init_entry1(ll_backend__llds__const_type_2_0);
	MR_init_label8(ll_backend__llds__const_type_2_0,4,6,7,8,9,11,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds__const_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__llds__const_type_2_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__llds__const_type_2_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__llds__const_type_2_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__llds__const_type_2_0_i8));
MR_def_label(ll_backend__llds__const_type_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__llds__const_type_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(ll_backend__llds__const_type_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_proceed();
MR_def_label(ll_backend__llds__const_type_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__llds__const_type_2_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__llds__const_type_2_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__llds__const_type_2_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__llds__const_type_2_0_i12) MR_AND
		MR_LABEL_AP(ll_backend__llds__const_type_2_0_i13));
MR_def_label(ll_backend__llds__const_type_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(ll_backend__llds__const_type_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(ll_backend__llds__const_type_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(ll_backend__llds__const_type_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module14)
	MR_init_entry1(ll_backend__llds__unop_return_type_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds__unop_return_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_0, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module15)
	MR_init_entry1(ll_backend__llds__binop_return_type_2_0);
	MR_init_label4(ll_backend__llds__binop_return_type_2_0,14,34,42,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds__binop_return_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ll_backend__llds__binop_return_type_2_0_i4);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i34) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i34) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i34) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i34) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__llds__binop_return_type_2_0_i42));
	}
MR_def_label(ll_backend__llds__binop_return_type_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(ll_backend__llds__binop_return_type_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(ll_backend__llds__binop_return_type_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__llds__binop_return_type_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module16)
	MR_init_entry1(ll_backend__llds__rval_type_2_0);
	MR_init_label7(ll_backend__llds__rval_type_2_0,4,6,9,18,14,12,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds__rval_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__llds__rval_type_2_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__llds__rval_type_2_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__llds__rval_type_2_0_i18) MR_AND
		MR_LABEL_AP(ll_backend__llds__rval_type_2_0_i9));
MR_def_label(ll_backend__llds__rval_type_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(ll_backend__llds__lval_type_2_0);
MR_def_label(ll_backend__llds__rval_type_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("llds.m", 6);
	MR_r2 = (MR_Word) MR_string_const("var unexpected in llds.rval_type", 32);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__llds__rval_type_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds__rval_type_2_0_i10);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds__rval_type_2_0_i12);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__llds__rval_type_2_0_i14);
	}
	}
MR_def_label(ll_backend__llds__rval_type_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(ll_backend__llds__rval_type_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__llds__binop_return_type_2_0);
MR_def_label(ll_backend__llds__rval_type_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__llds__unop_return_type_2_0);
MR_def_label(ll_backend__llds__rval_type_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__llds__const_type_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module17)
	MR_init_entry1(ll_backend__llds__unop_arg_type_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds__unop_arg_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_1, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module18)
	MR_init_entry1(fn__ll_backend__llds__get_proc_label_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__llds__get_proc_label_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module19)
	MR_init_entry1(fn__ll_backend__llds__get_defining_module_name_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__llds__get_defining_module_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module20)
	MR_init_entry1(__Unify___ll_backend__llds__add_region_ops_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__add_region_ops_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__llds_module21)
	MR_init_entry1(__Compare___ll_backend__llds__add_region_ops_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__add_region_ops_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module22)
	MR_init_entry1(__Unify___ll_backend__llds__add_trail_ops_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__add_trail_ops_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module23)
	MR_init_entry1(__Compare___ll_backend__llds__add_trail_ops_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__add_trail_ops_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(ll_backend__llds_module24)
	MR_init_entry1(__Unify___ll_backend__llds__c_code_live_lvals_0_0);
	MR_init_label3(__Unify___ll_backend__llds__c_code_live_lvals_0_0,12,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__c_code_live_lvals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_code_live_lvals_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_code_live_lvals_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__llds__c_code_live_lvals_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__c_code_live_lvals_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_code_live_lvals_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___ll_backend__llds__c_code_live_lvals_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(ll_backend__llds_module25)
	MR_init_entry1(__Compare___ll_backend__llds__c_code_live_lvals_0_0);
	MR_init_label4(__Compare___ll_backend__llds__c_code_live_lvals_0_0,18,7,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__c_code_live_lvals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_code_live_lvals_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_code_live_lvals_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_code_live_lvals_0_0_i7);
	}
MR_def_label(__Compare___ll_backend__llds__c_code_live_lvals_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__c_code_live_lvals_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__c_code_live_lvals_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_code_live_lvals_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__c_code_live_lvals_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Unify___list__list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

MR_BEGIN_MODULE(ll_backend__llds_module26)
	MR_init_entry1(__Unify___ll_backend__llds__c_file_0_0);
	MR_init_label8(__Unify___ll_backend__llds__c_file_0_0,4,6,8,10,12,14,16,18)
	MR_init_label5(__Unify___ll_backend__llds__c_file_0_0,20,22,24,28,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__c_file_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_file_0_0_i28);
	}
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 10);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 11);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(13) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(14) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(15) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(16) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(17) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(18) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(19) = MR_ctfield(0, MR_tempr2, 8);
	MR_sv(20) = MR_ctfield(0, MR_tempr2, 9);
	MR_sv(21) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(22) = MR_ctfield(0, MR_tempr2, 11);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___ll_backend__llds__c_file_0_0_i4);
MR_def_label(__Unify___ll_backend__llds__c_file_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_file_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds__c_file_0_0_i6);
MR_def_label(__Unify___ll_backend__llds__c_file_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_file_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, user_foreign_code);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds__c_file_0_0_i8);
MR_def_label(__Unify___ll_backend__llds__c_file_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_file_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds__c_file_0_0_i10);
MR_def_label(__Unify___ll_backend__llds__c_file_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_file_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, tabling_info_struct);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds__c_file_0_0_i12);
MR_def_label(__Unify___ll_backend__llds__c_file_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_file_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, scalar_common_data_array);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds__c_file_0_0_i14);
MR_def_label(__Unify___ll_backend__llds__c_file_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_file_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, vector_common_data_array);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds__c_file_0_0_i16);
MR_def_label(__Unify___ll_backend__llds__c_file_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_file_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_data);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds__c_file_0_0_i18);
MR_def_label(__Unify___ll_backend__llds__c_file_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_file_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_data);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds__c_file_0_0_i20);
MR_def_label(__Unify___ll_backend__llds__c_file_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_file_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, comp_gen_c_module);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds__c_file_0_0_i22);
MR_def_label(__Unify___ll_backend__llds__c_file_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_file_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds__c_file_0_0_i24);
MR_def_label(__Unify___ll_backend__llds__c_file_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_file_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(22);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__llds__c_file_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__c_file_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__llds_module27)
	MR_init_entry1(__Compare___ll_backend__llds__c_file_0_0);
	MR_init_label8(__Compare___ll_backend__llds__c_file_0_0,3,2,5,9,13,17,21,25)
	MR_init_label6(__Compare___ll_backend__llds__c_file_0_0,29,33,37,41,45,101)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__c_file_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_file_0_0_i3);
	}
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__c_file_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__c_file_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__c_file_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(22) = MR_ctfield(0, MR_tempr5, 11);
	MR_sv(21) = MR_ctfield(0, MR_tempr5, 10);
	MR_sv(20) = MR_ctfield(0, MR_tempr5, 9);
	MR_sv(19) = MR_ctfield(0, MR_tempr5, 8);
	MR_sv(18) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(17) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(16) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(15) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(14) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(13) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(11) = MR_ctfield(0, MR_tempr6, 11);
	MR_sv(10) = MR_ctfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_ctfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_ctfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___ll_backend__llds__c_file_0_0_i5);
MR_def_label(__Compare___ll_backend__llds__c_file_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_file_0_0_i101);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds__c_file_0_0_i9);
MR_def_label(__Compare___ll_backend__llds__c_file_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_file_0_0_i101);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, user_foreign_code);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds__c_file_0_0_i13);
MR_def_label(__Compare___ll_backend__llds__c_file_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_file_0_0_i101);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds__c_file_0_0_i17);
MR_def_label(__Compare___ll_backend__llds__c_file_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_file_0_0_i101);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, tabling_info_struct);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds__c_file_0_0_i21);
MR_def_label(__Compare___ll_backend__llds__c_file_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_file_0_0_i101);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, scalar_common_data_array);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds__c_file_0_0_i25);
MR_def_label(__Compare___ll_backend__llds__c_file_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_file_0_0_i101);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, vector_common_data_array);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds__c_file_0_0_i29);
MR_def_label(__Compare___ll_backend__llds__c_file_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_file_0_0_i101);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_data);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds__c_file_0_0_i33);
MR_def_label(__Compare___ll_backend__llds__c_file_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_file_0_0_i101);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_data);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(19);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds__c_file_0_0_i37);
MR_def_label(__Compare___ll_backend__llds__c_file_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_file_0_0_i101);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, comp_gen_c_module);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds__c_file_0_0_i41);
MR_def_label(__Compare___ll_backend__llds__c_file_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_file_0_0_i101);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds__c_file_0_0_i45);
MR_def_label(__Compare___ll_backend__llds__c_file_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_file_0_0_i101);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(22);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__llds__c_file_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module28)
	MR_init_entry1(__Unify___ll_backend__llds__c_global_var_ref_0_0);
	MR_init_label1(__Unify___ll_backend__llds__c_global_var_ref_0_0,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__c_global_var_ref_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_global_var_ref_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (strcmp((char *)MR_sv(1), (char *)MR_sv(2)) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__c_global_var_ref_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(ll_backend__llds_module29)
	MR_init_entry1(__Compare___ll_backend__llds__c_global_var_ref_0_0);
	MR_init_label2(__Compare___ll_backend__llds__c_global_var_ref_0_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__c_global_var_ref_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_global_var_ref_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__c_global_var_ref_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__c_global_var_ref_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__c_global_var_ref_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__proc_label_0_0);
MR_decl_entry(__Unify___counter__counter_0_0);

MR_BEGIN_MODULE(ll_backend__llds_module30)
	MR_init_entry1(__Unify___ll_backend__llds__c_procedure_0_0);
	MR_init_label6(__Unify___ll_backend__llds__c_procedure_0_0,4,6,8,10,14,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__c_procedure_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_procedure_0_0_i14);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *)MR_tempr3, (char *)MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_procedure_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_procedure_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 3);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr4, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr4, 4);
	MR_sv(9) = MR_ctfield(0, MR_tempr4, 5);
	MR_sv(10) = MR_ctfield(0, MR_tempr4, 6);
	MR_sv(11) = MR_ctfield(0, MR_tempr4, 7);
	MR_sv(12) = MR_ctfield(0, MR_tempr4, 8);
	MR_r1 = MR_ctfield(0, MR_tempr3, 2);
	MR_r2 = MR_ctfield(0, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___ll_backend__llds__c_procedure_0_0_i4);
MR_def_label(__Unify___ll_backend__llds__c_procedure_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_procedure_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_procedure_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds__c_procedure_0_0_i6);
MR_def_label(__Unify___ll_backend__llds__c_procedure_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_procedure_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__proc_label_0_0,
		__Unify___ll_backend__llds__c_procedure_0_0_i8);
MR_def_label(__Unify___ll_backend__llds__c_procedure_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_procedure_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___ll_backend__llds__c_procedure_0_0_i10);
MR_def_label(__Unify___ll_backend__llds__c_procedure_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_procedure_0_0_i1);
	}
	if ((MR_sv(5) != MR_sv(11))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__c_procedure_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___ll_backend__llds__c_procedure_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__c_procedure_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Compare___mdbcomp__prim_data__proc_label_0_0);
MR_decl_entry(__Compare___counter__counter_0_0);

MR_BEGIN_MODULE(ll_backend__llds_module31)
	MR_init_entry1(__Compare___ll_backend__llds__c_procedure_0_0);
	MR_init_label8(__Compare___ll_backend__llds__c_procedure_0_0,3,2,5,9,13,17,21,25)
	MR_init_label3(__Compare___ll_backend__llds__c_procedure_0_0,29,33,77)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__c_procedure_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_procedure_0_0_i3);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__c_procedure_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__c_procedure_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__c_procedure_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(16) = MR_ctfield(0, MR_tempr5, 8);
	MR_sv(15) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(14) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(13) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(8) = MR_ctfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__llds__c_procedure_0_0_i5);
MR_def_label(__Compare___ll_backend__llds__c_procedure_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_procedure_0_0_i77);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__c_procedure_0_0_i9);
MR_def_label(__Compare___ll_backend__llds__c_procedure_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_procedure_0_0_i77);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___ll_backend__llds__c_procedure_0_0_i13);
MR_def_label(__Compare___ll_backend__llds__c_procedure_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_procedure_0_0_i77);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__c_procedure_0_0_i17);
MR_def_label(__Compare___ll_backend__llds__c_procedure_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_procedure_0_0_i77);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds__c_procedure_0_0_i21);
MR_def_label(__Compare___ll_backend__llds__c_procedure_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_procedure_0_0_i77);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__proc_label_0_0,
		__Compare___ll_backend__llds__c_procedure_0_0_i25);
MR_def_label(__Compare___ll_backend__llds__c_procedure_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_procedure_0_0_i77);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___ll_backend__llds__c_procedure_0_0_i29);
MR_def_label(__Compare___ll_backend__llds__c_procedure_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_procedure_0_0_i77);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__c_procedure_0_0_i33);
MR_def_label(__Compare___ll_backend__llds__c_procedure_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__c_procedure_0_0_i77);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___ll_backend__llds__c_procedure_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module32)
	MR_init_entry1(__Unify___ll_backend__llds__call_model_0_0);
	MR_init_label3(__Unify___ll_backend__llds__call_model_0_0,6,16,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__call_model_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__call_model_0_0_i16);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__call_model_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__llds__call_model_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__call_model_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__llds__call_model_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__call_model_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module33)
	MR_init_entry1(__Compare___ll_backend__llds__call_model_0_0);
	MR_init_label5(__Compare___ll_backend__llds__call_model_0_0,26,7,14,6,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__call_model_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__call_model_0_0_i26);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__call_model_0_0_i6);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__call_model_0_0_i7);
	}
	MR_tempr3 = MR_sv(2);
	MR_tempr2 = MR_tag(MR_tempr3);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__call_model_0_0_i14);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr3),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__call_model_0_0_i14);
	}
	}
MR_def_label(__Compare___ll_backend__llds__call_model_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__call_model_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__call_model_0_0_i14);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__call_model_0_0_i26);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___ll_backend__llds__call_model_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__call_model_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__call_model_0_0_i18);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___ll_backend__llds__call_model_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(1, MR_r3, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module34)
	MR_init_entry1(__Unify___ll_backend__llds__can_branch_away_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__can_branch_away_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module35)
	MR_init_entry1(__Compare___ll_backend__llds__can_branch_away_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__can_branch_away_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module36)
	MR_init_entry1(__Unify___ll_backend__llds__code_addr_0_0);
	MR_init_label8(__Unify___ll_backend__llds__code_addr_0_0,12,13,17,21,22,24,50,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__code_addr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__code_addr_0_0_i50);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Unify___ll_backend__llds__code_addr_0_0_i12) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__code_addr_0_0_i13) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__code_addr_0_0_i17) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__code_addr_0_0_i21));
MR_def_label(__Unify___ll_backend__llds__code_addr_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_r3);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ll_backend__llds__code_addr_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__code_addr_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__label_0_0);
MR_def_label(__Unify___ll_backend__llds__code_addr_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__code_addr_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_r3, 0);
	MR_r2 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__proc_label_0_0);
MR_def_label(__Unify___ll_backend__llds__code_addr_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_r4 = MR_ctfield(3, MR_tempr3, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__code_addr_0_0_i22);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__code_addr_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ll_backend__llds__code_addr_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__code_addr_0_0_i24);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__code_addr_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__ho_call_variant_0_0);
MR_def_label(__Unify___ll_backend__llds__code_addr_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__code_addr_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__ho_call_variant_0_0);
MR_def_label(__Unify___ll_backend__llds__code_addr_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__code_addr_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module37)
	MR_init_entry1(__Compare___ll_backend__llds__code_addr_0_0);
	MR_init_label8(__Compare___ll_backend__llds__code_addr_0_0,6,7,10,19,20,22,25,34)
	MR_init_label8(__Compare___ll_backend__llds__code_addr_0_0,35,37,40,49,50,52,55,64)
	MR_init_label8(__Compare___ll_backend__llds__code_addr_0_0,65,67,70,79,80,82,85,91)
	MR_init_label8(__Compare___ll_backend__llds__code_addr_0_0,94,95,97,107,110,111,113,124)
	MR_init_label8(__Compare___ll_backend__llds__code_addr_0_0,126,297,129,133,142,130,149,158)
	MR_init_label7(__Compare___ll_backend__llds__code_addr_0_0,159,200,146,164,173,174,202)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__code_addr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i91);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i6) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i97) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i113) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i129));
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i7) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i22) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i37) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i52) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i67) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i82));
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i10) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i19));
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i91);
	}
	MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i297);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(3, MR_r3, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i297);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i25) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i34));
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i297) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i297) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i297) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i297));
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(3, MR_r3, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i35);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i297);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i40) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i49));
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i297) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i297) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i297));
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(3, MR_r3, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i50);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i297);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i55) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i64));
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i297) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i297));
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(3, MR_r3, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i65);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i297);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i70) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i79));
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i297));
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(3, MR_r3, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i80);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i297);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i85) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i94));
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r3),5)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i202);
	}
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(3, MR_r3, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i95);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i202);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i297) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i107) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i297) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i110));
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__label_0_0);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(3, MR_r4, 0);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i111);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i297);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i297) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i124) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i126));
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r3, 0);
	MR_r2 = MR_ctfield(2, MR_r4, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__proc_label_0_0);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r4, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i297);
	}
	}
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,297)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(3, MR_r3, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i130);
	}
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i133) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i142));
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_r4),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i202);
	}
	MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i297);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r4, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i297);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
	}
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i146);
	}
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i149) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i158));
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_r4),5)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i297);
	}
	MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i202);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(3, MR_r4, 0);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i159);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i297);
	}
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__ho_call_variant_0_0);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__code_addr_0_0_i173));
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_r4),5)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i297);
	}
	MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i202);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(3, MR_r4, 0);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i174);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__code_addr_0_0_i200);
	}
MR_def_label(__Compare___ll_backend__llds__code_addr_0_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___libs__tree__tree_1_0);

MR_BEGIN_MODULE(ll_backend__llds_module38)
	MR_init_entry1(__Unify___ll_backend__llds__code_tree_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__code_tree_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___libs__tree__tree_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___libs__tree__tree_1_0);

MR_BEGIN_MODULE(ll_backend__llds_module39)
	MR_init_entry1(__Compare___ll_backend__llds__code_tree_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__code_tree_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___libs__tree__tree_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module40)
	MR_init_entry1(__Unify___ll_backend__llds__common_cell_arg_group_0_0);
	MR_init_label3(__Unify___ll_backend__llds__common_cell_arg_group_0_0,18,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__common_cell_arg_group_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__common_cell_arg_group_0_0_i18);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__common_cell_arg_group_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__common_cell_arg_group_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__common_cell_arg_group_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__common_cell_arg_group_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	MR_r3 = MR_ctfield(0, MR_tempr2, 2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___ll_backend__llds__common_cell_arg_group_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__common_cell_arg_group_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__common_cell_arg_group_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__common_cell_arg_group_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr3, 1);
	MR_r2 = MR_ctfield(1, MR_tempr4, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
	}
MR_def_label(__Unify___ll_backend__llds__common_cell_arg_group_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module41)
	MR_init_entry1(__Compare___ll_backend__llds__common_cell_arg_group_0_0);
	MR_init_label8(__Compare___ll_backend__llds__common_cell_arg_group_0_0,3,2,9,13,7,5,20,22)
	MR_init_label1(__Compare___ll_backend__llds__common_cell_arg_group_0_0,63)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__common_cell_arg_group_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__common_cell_arg_group_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__common_cell_arg_group_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__common_cell_arg_group_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__common_cell_arg_group_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__common_cell_arg_group_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__common_cell_arg_group_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__common_cell_arg_group_0_0_i9);
MR_def_label(__Compare___ll_backend__llds__common_cell_arg_group_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__common_cell_arg_group_0_0_i63);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__common_cell_arg_group_0_0_i13);
MR_def_label(__Compare___ll_backend__llds__common_cell_arg_group_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__common_cell_arg_group_0_0_i63);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__llds__common_cell_arg_group_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__llds__common_cell_arg_group_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__common_cell_arg_group_0_0_i20);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__llds__common_cell_arg_group_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__common_cell_arg_group_0_0_i22);
MR_def_label(__Compare___ll_backend__llds__common_cell_arg_group_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__common_cell_arg_group_0_0_i63);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__rval_0_0);
MR_def_label(__Compare___ll_backend__llds__common_cell_arg_group_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module42)
	MR_init_entry1(__Unify___ll_backend__llds__common_cell_type_0_0);
	MR_init_label3(__Unify___ll_backend__llds__common_cell_type_0_0,16,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__common_cell_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__common_cell_type_0_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__common_cell_type_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__common_cell_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, llds_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___ll_backend__llds__common_cell_type_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__common_cell_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__common_cell_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__llds__common_cell_type_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module43)
	MR_init_entry1(__Compare___ll_backend__llds__common_cell_type_0_0);
	MR_init_label5(__Compare___ll_backend__llds__common_cell_type_0_0,3,2,7,5,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__common_cell_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__common_cell_type_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__common_cell_type_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__common_cell_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__common_cell_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__common_cell_type_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__common_cell_type_0_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, llds_type);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__llds__common_cell_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__common_cell_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__common_cell_type_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__common_cell_type_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module44)
	MR_init_entry1(__Unify___ll_backend__llds__common_cell_value_0_0);
	MR_init_label3(__Unify___ll_backend__llds__common_cell_value_0_0,16,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__common_cell_value_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__common_cell_value_0_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__common_cell_value_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__common_cell_value_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___ll_backend__llds__common_cell_value_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__common_cell_value_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__common_cell_value_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, common_cell_arg_group);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__llds__common_cell_value_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module45)
	MR_init_entry1(__Compare___ll_backend__llds__common_cell_value_0_0);
	MR_init_label5(__Compare___ll_backend__llds__common_cell_value_0_0,3,2,7,5,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__common_cell_value_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__common_cell_value_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__common_cell_value_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__common_cell_value_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__common_cell_value_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__common_cell_value_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__common_cell_value_0_0_i7);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__llds__common_cell_value_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__common_cell_value_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__common_cell_value_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__common_cell_value_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, common_cell_arg_group);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module46)
	MR_init_entry1(__Unify___ll_backend__llds__comp_gen_c_module_0_0);
	MR_init_label2(__Unify___ll_backend__llds__comp_gen_c_module_0_0,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__comp_gen_c_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__comp_gen_c_module_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *)MR_tempr3, (char *)MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__comp_gen_c_module_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, c_procedure);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___ll_backend__llds__comp_gen_c_module_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__comp_gen_c_module_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module47)
	MR_init_entry1(__Compare___ll_backend__llds__comp_gen_c_module_0_0);
	MR_init_label4(__Compare___ll_backend__llds__comp_gen_c_module_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__comp_gen_c_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__comp_gen_c_module_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__comp_gen_c_module_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__comp_gen_c_module_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__comp_gen_c_module_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__llds__comp_gen_c_module_0_0_i5);
MR_def_label(__Compare___ll_backend__llds__comp_gen_c_module_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__comp_gen_c_module_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, c_procedure);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__llds__comp_gen_c_module_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__layout__layout_name_0_0);
MR_decl_entry(__Unify___backend_libs__rtti__rtti_id_0_0);

MR_BEGIN_MODULE(ll_backend__llds_module48)
	MR_init_entry1(__Unify___ll_backend__llds__data_addr_0_0);
	MR_init_label5(__Unify___ll_backend__llds__data_addr_0_0,15,10,6,29,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__data_addr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__data_addr_0_0_i29);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr2);
	if ((MR_tempr3 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__data_addr_0_0_i6);
	}
	if ((MR_tempr3 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__data_addr_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__data_addr_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___ll_backend__llds__data_addr_0_0_i15);
MR_def_label(__Unify___ll_backend__llds__data_addr_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__data_addr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__data_name_0_0);
MR_def_label(__Unify___ll_backend__llds__data_addr_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__data_addr_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_r3, 0);
	MR_r2 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__layout__layout_name_0_0);
MR_def_label(__Unify___ll_backend__llds__data_addr_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__data_addr_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___backend_libs__rtti__rtti_id_0_0);
MR_def_label(__Unify___ll_backend__llds__data_addr_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__data_addr_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ll_backend__layout__layout_name_0_0);
MR_decl_entry(__Compare___backend_libs__rtti__rtti_id_0_0);

MR_BEGIN_MODULE(ll_backend__llds_module49)
	MR_init_entry1(__Compare___ll_backend__llds__data_addr_0_0);
	MR_init_label8(__Compare___ll_backend__llds__data_addr_0_0,3,2,23,12,16,6,38,11)
	MR_init_label2(__Compare___ll_backend__llds__data_addr_0_0,9,75)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__data_addr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_addr_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__data_addr_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__data_addr_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__data_addr_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_addr_0_0_i6);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_addr_0_0_i12);
	}
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_tag(MR_tempr2);
	if ((MR_tempr3 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_addr_0_0_i11);
	}
	if ((MR_tempr3 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_addr_0_0_i11);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___ll_backend__llds__data_addr_0_0_i23);
MR_def_label(__Compare___ll_backend__llds__data_addr_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_addr_0_0_i75);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__data_name_0_0);
MR_def_label(__Compare___ll_backend__llds__data_addr_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r4);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_addr_0_0_i38);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_addr_0_0_i16);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___ll_backend__llds__data_addr_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r3, 0);
	MR_r2 = MR_ctfield(2, MR_r4, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__layout__layout_name_0_0);
MR_def_label(__Compare___ll_backend__llds__data_addr_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r4);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_addr_0_0_i9);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_addr_0_0_i11);
	}
	}
MR_def_label(__Compare___ll_backend__llds__data_addr_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__data_addr_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__data_addr_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___backend_libs__rtti__rtti_id_0_0);
MR_def_label(__Compare___ll_backend__llds__data_addr_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module50)
	MR_init_entry1(__Unify___ll_backend__llds__data_name_0_0);
	MR_init_label7(__Unify___ll_backend__llds__data_name_0_0,18,11,13,6,10,31,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__data_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__data_name_0_0_i31);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr2);
	if ((MR_tempr3 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__data_name_0_0_i6);
	}
	if ((MR_tempr3 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__data_name_0_0_i11);
	}
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__data_name_0_0_i1);
	}
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tempr4;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 == MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__data_name_0_0_i18);
	}
	MR_sv(1) = MR_tempr3;
	if ((MR_sv(1) != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__data_name_0_0_i1);
	}
	}
MR_def_label(__Unify___ll_backend__llds__data_name_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__llds__data_name_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__data_name_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(2, MR_tempr2, 1);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_r1 = MR_ctfield(2, MR_tempr2, 0);
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__proc_label_0_0,
		__Unify___ll_backend__llds__data_name_0_0_i13);
MR_def_label(__Unify___ll_backend__llds__data_name_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__data_name_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__llds__data_name_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__data_name_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(2);
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_tempr1;
	MR_tempr4 = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	if ((MR_tempr2 == MR_tempr1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__data_name_0_0_i10);
	}
	MR_sv(1) = MR_tempr2;
	if ((MR_sv(1) != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__data_name_0_0_i1);
	}
	}
MR_def_label(__Unify___ll_backend__llds__data_name_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__llds__data_name_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__data_name_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module51)
	MR_init_entry1(__Compare___ll_backend__llds__data_name_0_0);
	MR_init_label8(__Compare___ll_backend__llds__data_name_0_0,3,2,33,17,21,23,6,49)
	MR_init_label4(__Compare___ll_backend__llds__data_name_0_0,16,9,11,93)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__data_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_name_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__data_name_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__data_name_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__data_name_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_name_0_0_i6);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_name_0_0_i17);
	}
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_tag(MR_tempr2);
	if ((MR_tempr3 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_name_0_0_i16);
	}
	if ((MR_tempr3 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_name_0_0_i16);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__data_name_0_0_i33);
MR_def_label(__Compare___ll_backend__llds__data_name_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_name_0_0_i93);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__data_name_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r4);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_name_0_0_i49);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_name_0_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___ll_backend__llds__data_name_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 1);
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(2, MR_tempr3, 0);
	MR_r2 = MR_ctfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__proc_label_0_0,
		__Compare___ll_backend__llds__data_name_0_0_i23);
MR_def_label(__Compare___ll_backend__llds__data_name_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_name_0_0_i93);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__data_name_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r4);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_name_0_0_i9);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_name_0_0_i16);
	}
	}
MR_def_label(__Compare___ll_backend__llds__data_name_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__data_name_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__data_name_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__data_name_0_0_i11);
MR_def_label(__Compare___ll_backend__llds__data_name_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__data_name_0_0_i93);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__data_name_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module52)
	MR_init_entry1(__Unify___ll_backend__llds__embedded_stack_frame_id_0_0);
	MR_init_label2(__Unify___ll_backend__llds__embedded_stack_frame_id_0_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__embedded_stack_frame_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__embedded_stack_frame_id_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__embedded_stack_frame_id_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__embedded_stack_frame_id_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__llds__embedded_stack_frame_id_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__embedded_stack_frame_id_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module53)
	MR_init_entry1(__Compare___ll_backend__llds__embedded_stack_frame_id_0_0);
	MR_init_label5(__Compare___ll_backend__llds__embedded_stack_frame_id_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__embedded_stack_frame_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__embedded_stack_frame_id_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__embedded_stack_frame_id_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__embedded_stack_frame_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__embedded_stack_frame_id_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__embedded_stack_frame_id_0_0_i5);
MR_def_label(__Compare___ll_backend__llds__embedded_stack_frame_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__embedded_stack_frame_id_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__embedded_stack_frame_id_0_0_i9);
MR_def_label(__Compare___ll_backend__llds__embedded_stack_frame_id_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__embedded_stack_frame_id_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__embedded_stack_frame_id_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module54)
	MR_init_entry1(__Unify___ll_backend__llds__entry_label_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__entry_label_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module55)
	MR_init_entry1(__Compare___ll_backend__llds__entry_label_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__entry_label_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_foreign__foreign_export_decls_0_0);

MR_BEGIN_MODULE(ll_backend__llds_module56)
	MR_init_entry1(__Unify___ll_backend__llds__foreign_interface_info_0_0);
	MR_init_label7(__Unify___ll_backend__llds__foreign_interface_info_0_0,4,6,8,10,12,16,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__foreign_interface_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_interface_info_0_0_i16);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 5);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___ll_backend__llds__foreign_interface_info_0_0_i4);
MR_def_label(__Unify___ll_backend__llds__foreign_interface_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_interface_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds__foreign_interface_info_0_0_i6);
MR_def_label(__Unify___ll_backend__llds__foreign_interface_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_interface_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_import_module_info);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds__foreign_interface_info_0_0_i8);
MR_def_label(__Unify___ll_backend__llds__foreign_interface_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_interface_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_body_code);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds__foreign_interface_info_0_0_i10);
MR_def_label(__Unify___ll_backend__llds__foreign_interface_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_interface_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_foreign__foreign_export_decls_0_0,
		__Unify___ll_backend__llds__foreign_interface_info_0_0_i12);
MR_def_label(__Unify___ll_backend__llds__foreign_interface_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_interface_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__llds__foreign_interface_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__foreign_interface_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_foreign__foreign_export_decls_0_0);

MR_BEGIN_MODULE(ll_backend__llds_module57)
	MR_init_entry1(__Compare___ll_backend__llds__foreign_interface_info_0_0);
	MR_init_label8(__Compare___ll_backend__llds__foreign_interface_info_0_0,3,2,5,9,13,17,21,53)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__foreign_interface_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_interface_info_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_interface_info_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__foreign_interface_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__foreign_interface_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___ll_backend__llds__foreign_interface_info_0_0_i5);
MR_def_label(__Compare___ll_backend__llds__foreign_interface_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_interface_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds__foreign_interface_info_0_0_i9);
MR_def_label(__Compare___ll_backend__llds__foreign_interface_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_interface_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_import_module_info);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds__foreign_interface_info_0_0_i13);
MR_def_label(__Compare___ll_backend__llds__foreign_interface_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_interface_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_body_code);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds__foreign_interface_info_0_0_i17);
MR_def_label(__Compare___ll_backend__llds__foreign_interface_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_interface_info_0_0_i53);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_foreign__foreign_export_decls_0_0,
		__Compare___ll_backend__llds__foreign_interface_info_0_0_i21);
MR_def_label(__Compare___ll_backend__llds__foreign_interface_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_interface_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__llds__foreign_interface_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__llds_module58)
	MR_init_entry1(__Unify___ll_backend__llds__foreign_proc_component_0_0);
	MR_init_label8(__Unify___ll_backend__llds__foreign_proc_component_0_0,6,7,11,15,18,16,22,20)
	MR_init_label2(__Unify___ll_backend__llds__foreign_proc_component_0_0,46,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__foreign_proc_component_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_component_0_0_i46);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Unify___ll_backend__llds__foreign_proc_component_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__foreign_proc_component_0_0_i7) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__foreign_proc_component_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__foreign_proc_component_0_0_i15));
MR_def_label(__Unify___ll_backend__llds__foreign_proc_component_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_r3);
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__llds__foreign_proc_component_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_component_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_input);
	MR_r2 = MR_ctfield(1, MR_r3, 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__llds__foreign_proc_component_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_component_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_output);
	MR_r2 = MR_ctfield(2, MR_r3, 0);
	MR_r3 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__llds__foreign_proc_component_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_r4 = MR_ctfield(3, MR_tempr2, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_component_0_0_i16);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_component_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__llds__foreign_proc_component_0_0_i18);
MR_def_label(__Unify___ll_backend__llds__foreign_proc_component_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_component_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_component_0_0_i1);
	}
	MR_r1 = (strcmp((char *)MR_sv(2), (char *)MR_sv(4)) == 0);
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__llds__foreign_proc_component_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_component_0_0_i20);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_component_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_component_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_component_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_tempr3, 4);
	MR_tempr1 = MR_tempr4;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(3, MR_tempr3, 3);
	MR_r2 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__c_code_live_lvals_0_0,
		__Unify___ll_backend__llds__foreign_proc_component_0_0_i22);
MR_def_label(__Unify___ll_backend__llds__foreign_proc_component_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_component_0_0_i1);
	}
	MR_r1 = (strcmp((char *)MR_sv(1), (char *)MR_sv(2)) == 0);
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__llds__foreign_proc_component_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_component_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__label_0_0);
MR_def_label(__Unify___ll_backend__llds__foreign_proc_component_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__foreign_proc_component_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__llds_module59)
	MR_init_entry1(__Compare___ll_backend__llds__foreign_proc_component_0_0);
	MR_init_label8(__Compare___ll_backend__llds__foreign_proc_component_0_0,6,9,12,13,15,19,22,23)
	MR_init_label8(__Compare___ll_backend__llds__foreign_proc_component_0_0,25,30,32,169,35,42,45,49)
	MR_init_label8(__Compare___ll_backend__llds__foreign_proc_component_0_0,36,62,63,66,70,74,56,86)
	MR_init_label4(__Compare___ll_backend__llds__foreign_proc_component_0_0,87,110,88,90)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__foreign_proc_component_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_component_0_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i6) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i15) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i25) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i35));
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i9) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i110) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i110) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i12));
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(3, MR_r3, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_component_0_0_i13);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_component_0_0_i110);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i19) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i22));
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_input);
	MR_r2 = MR_ctfield(1, MR_r3, 0);
	MR_r3 = MR_ctfield(1, MR_r4, 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(3, MR_r4, 0);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_component_0_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_component_0_0_i169);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i110) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i30) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i32));
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_output);
	MR_r2 = MR_ctfield(2, MR_r3, 0);
	MR_r3 = MR_ctfield(2, MR_r4, 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r4, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_component_0_0_i169);
	}
	}
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(3, MR_r3, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_component_0_0_i36);
	}
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i110) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i110) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i42));
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(3, MR_r4, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_component_0_0_i169);
	}
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	MR_r3 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__llds__foreign_proc_component_0_0_i45);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_component_0_0_i90);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__foreign_proc_component_0_0_i49);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_component_0_0_i90);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_component_0_0_i56);
	}
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i110) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i110) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i62));
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(3, MR_r4, 0);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_component_0_0_i63);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_component_0_0_i169);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 4);
	MR_tempr4 = MR_r4;
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__foreign_proc_component_0_0_i66);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_component_0_0_i90);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__foreign_proc_component_0_0_i70);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_component_0_0_i90);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__c_code_live_lvals_0_0,
		__Compare___ll_backend__llds__foreign_proc_component_0_0_i74);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_component_0_0_i90);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i110) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i110) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__foreign_proc_component_0_0_i86));
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(3, MR_r4, 0);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_component_0_0_i87);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_component_0_0_i88);
	}
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__label_0_0);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_component_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);

MR_BEGIN_MODULE(ll_backend__llds_module60)
	MR_init_entry1(__Unify___ll_backend__llds__foreign_proc_decl_0_0);
	MR_init_label4(__Unify___ll_backend__llds__foreign_proc_decl_0_0,7,16,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__foreign_proc_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_decl_0_0_i16);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_decl_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_decl_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr4, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr4, 2);
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		__Unify___ll_backend__llds__foreign_proc_decl_0_0_i7);
MR_def_label(__Unify___ll_backend__llds__foreign_proc_decl_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_decl_0_0_i1);
	}
	if ((strcmp((char *)MR_sv(1), (char *)MR_sv(3)) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_decl_0_0_i1);
	}
	MR_r1 = (strcmp((char *)MR_sv(2), (char *)MR_sv(4)) == 0);
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__llds__foreign_proc_decl_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__foreign_proc_decl_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_decl_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_decl_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 1);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__llds__foreign_proc_decl_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__mer_type_0_0);

MR_BEGIN_MODULE(ll_backend__llds_module61)
	MR_init_entry1(__Compare___ll_backend__llds__foreign_proc_decl_0_0);
	MR_init_label8(__Compare___ll_backend__llds__foreign_proc_decl_0_0,3,2,9,13,7,5,20,22)
	MR_init_label1(__Compare___ll_backend__llds__foreign_proc_decl_0_0,63)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__foreign_proc_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_decl_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_decl_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_decl_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__foreign_proc_decl_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_decl_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_decl_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_type_0_0,
		__Compare___ll_backend__llds__foreign_proc_decl_0_0_i9);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_decl_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_decl_0_0_i63);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__llds__foreign_proc_decl_0_0_i13);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_decl_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_decl_0_0_i63);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_decl_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_decl_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_decl_0_0_i20);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_decl_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__llds__foreign_proc_decl_0_0_i22);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_decl_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_decl_0_0_i63);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_decl_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module62)
	MR_init_entry1(__Unify___ll_backend__llds__foreign_proc_input_0_0);
	MR_init_label6(__Unify___ll_backend__llds__foreign_proc_input_0_0,4,6,8,10,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__foreign_proc_input_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_input_0_0_i12);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *)MR_tempr3, (char *)MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_input_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 4);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 5);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 6);
	MR_sv(6) = MR_ctfield(0, MR_tempr4, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr4, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr4, 4);
	MR_sv(9) = MR_ctfield(0, MR_tempr4, 5);
	MR_sv(10) = MR_ctfield(0, MR_tempr4, 6);
	MR_r1 = MR_ctfield(0, MR_tempr3, 1);
	MR_r2 = MR_ctfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		__Unify___ll_backend__llds__foreign_proc_input_0_0_i4);
MR_def_label(__Unify___ll_backend__llds__foreign_proc_input_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_input_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(6))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_input_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		__Unify___ll_backend__llds__foreign_proc_input_0_0_i6);
MR_def_label(__Unify___ll_backend__llds__foreign_proc_input_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_input_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		__Unify___ll_backend__llds__foreign_proc_input_0_0_i8);
MR_def_label(__Unify___ll_backend__llds__foreign_proc_input_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_input_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__llds__foreign_proc_input_0_0_i10);
MR_def_label(__Unify___ll_backend__llds__foreign_proc_input_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_input_0_0_i1);
	}
	MR_r1 = (MR_sv(5) == MR_sv(10));
	MR_decr_sp_and_return(11);
MR_def_label(__Unify___ll_backend__llds__foreign_proc_input_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__foreign_proc_input_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module63)
	MR_init_entry1(__Compare___ll_backend__llds__foreign_proc_input_0_0);
	MR_init_label8(__Compare___ll_backend__llds__foreign_proc_input_0_0,3,2,5,9,13,17,21,25)
	MR_init_label1(__Compare___ll_backend__llds__foreign_proc_input_0_0,61)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__foreign_proc_input_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_input_0_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_input_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_input_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__foreign_proc_input_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(6) = MR_ctfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__llds__foreign_proc_input_0_0_i5);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_input_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_input_0_0_i61);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_type_0_0,
		__Compare___ll_backend__llds__foreign_proc_input_0_0_i9);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_input_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_input_0_0_i61);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__foreign_proc_input_0_0_i13);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_input_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_input_0_0_i61);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_type_0_0,
		__Compare___ll_backend__llds__foreign_proc_input_0_0_i17);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_input_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_input_0_0_i61);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__rval_0_0,
		__Compare___ll_backend__llds__foreign_proc_input_0_0_i21);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_input_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_input_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__llds__foreign_proc_input_0_0_i25);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_input_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_input_0_0_i61);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_input_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module64)
	MR_init_entry1(__Unify___ll_backend__llds__foreign_proc_output_0_0);
	MR_init_label6(__Unify___ll_backend__llds__foreign_proc_output_0_0,4,6,8,10,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__foreign_proc_output_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_output_0_0_i12);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 6);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		__Unify___ll_backend__llds__foreign_proc_output_0_0_i4);
MR_def_label(__Unify___ll_backend__llds__foreign_proc_output_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_output_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		__Unify___ll_backend__llds__foreign_proc_output_0_0_i6);
MR_def_label(__Unify___ll_backend__llds__foreign_proc_output_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_output_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(8))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_output_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		__Unify___ll_backend__llds__foreign_proc_output_0_0_i8);
MR_def_label(__Unify___ll_backend__llds__foreign_proc_output_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_output_0_0_i1);
	}
	if ((strcmp((char *)MR_sv(4), (char *)MR_sv(10)) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_output_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__llds__foreign_proc_output_0_0_i10);
MR_def_label(__Unify___ll_backend__llds__foreign_proc_output_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_output_0_0_i1);
	}
	MR_r1 = (MR_sv(6) == MR_sv(12));
	MR_decr_sp_and_return(13);
MR_def_label(__Unify___ll_backend__llds__foreign_proc_output_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__foreign_proc_output_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module65)
	MR_init_entry1(__Compare___ll_backend__llds__foreign_proc_output_0_0);
	MR_init_label8(__Compare___ll_backend__llds__foreign_proc_output_0_0,3,2,5,9,13,17,21,25)
	MR_init_label1(__Compare___ll_backend__llds__foreign_proc_output_0_0,61)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__foreign_proc_output_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_output_0_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_output_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_output_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__foreign_proc_output_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(6) = MR_ctfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__lval_0_0,
		__Compare___ll_backend__llds__foreign_proc_output_0_0_i5);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_output_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_output_0_0_i61);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_type_0_0,
		__Compare___ll_backend__llds__foreign_proc_output_0_0_i9);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_output_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_output_0_0_i61);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__foreign_proc_output_0_0_i13);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_output_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_output_0_0_i61);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_type_0_0,
		__Compare___ll_backend__llds__foreign_proc_output_0_0_i17);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_output_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_output_0_0_i61);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__llds__foreign_proc_output_0_0_i21);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_output_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_output_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__llds__foreign_proc_output_0_0_i25);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_output_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_output_0_0_i61);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_output_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module66)
	MR_init_entry1(__Unify___ll_backend__llds__foreign_proc_struct_0_0);
	MR_init_label2(__Unify___ll_backend__llds__foreign_proc_struct_0_0,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__foreign_proc_struct_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_struct_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *)MR_tempr3, (char *)MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_struct_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	if ((strcmp((char *)MR_tempr3, (char *)MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_struct_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	MR_r3 = MR_ctfield(0, MR_tempr2, 2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
MR_def_label(__Unify___ll_backend__llds__foreign_proc_struct_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__foreign_proc_struct_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module67)
	MR_init_entry1(__Compare___ll_backend__llds__foreign_proc_struct_0_0);
	MR_init_label5(__Compare___ll_backend__llds__foreign_proc_struct_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__foreign_proc_struct_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_struct_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_struct_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_struct_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__foreign_proc_struct_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__llds__foreign_proc_struct_0_0_i5);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_struct_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_struct_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__llds__foreign_proc_struct_0_0_i9);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_struct_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_struct_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_struct_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module68)
	MR_init_entry1(__Unify___ll_backend__llds__foreign_proc_type_0_0);
	MR_init_label2(__Unify___ll_backend__llds__foreign_proc_type_0_0,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__foreign_proc_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_type_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *)MR_tempr3, (char *)MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__foreign_proc_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_type_assertion);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___ll_backend__llds__foreign_proc_type_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__foreign_proc_type_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module69)
	MR_init_entry1(__Compare___ll_backend__llds__foreign_proc_type_0_0);
	MR_init_label4(__Compare___ll_backend__llds__foreign_proc_type_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__foreign_proc_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_type_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_type_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__foreign_proc_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__llds__foreign_proc_type_0_0_i5);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__foreign_proc_type_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_type_assertion);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__llds__foreign_proc_type_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module70)
	MR_init_entry1(__Unify___ll_backend__llds__ho_call_variant_0_0);
	MR_init_label3(__Unify___ll_backend__llds__ho_call_variant_0_0,10,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__ho_call_variant_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__ho_call_variant_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__ho_call_variant_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__llds__ho_call_variant_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__ho_call_variant_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__ho_call_variant_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__llds__ho_call_variant_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module71)
	MR_init_entry1(__Compare___ll_backend__llds__ho_call_variant_0_0);
	MR_init_label4(__Compare___ll_backend__llds__ho_call_variant_0_0,18,7,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__ho_call_variant_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__ho_call_variant_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__ho_call_variant_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__ho_call_variant_0_0_i7);
	}
MR_def_label(__Compare___ll_backend__llds__ho_call_variant_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__ho_call_variant_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__ho_call_variant_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__ho_call_variant_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__ho_call_variant_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__context_0_0);
MR_decl_entry(__Unify___cord__cord_1_0);

MR_BEGIN_MODULE(ll_backend__llds_module72)
	MR_init_entry1(__Unify___ll_backend__llds__instr_0_0);
	MR_init_label8(__Unify___ll_backend__llds__instr_0_0,6,8,10,14,15,19,21,25)
	MR_init_label8(__Unify___ll_backend__llds__instr_0_0,27,31,33,35,37,39,41,45)
	MR_init_label8(__Unify___ll_backend__llds__instr_0_0,47,51,55,59,61,65,67,69)
	MR_init_label8(__Unify___ll_backend__llds__instr_0_0,71,75,79,83,85,87,89,91)
	MR_init_label8(__Unify___ll_backend__llds__instr_0_0,95,99,103,107,111,113,115,117)
	MR_init_label8(__Unify___ll_backend__llds__instr_0_0,119,123,125,129,131,135,139,141)
	MR_init_label8(__Unify___ll_backend__llds__instr_0_0,143,147,151,153,155,157,159,161)
	MR_init_label8(__Unify___ll_backend__llds__instr_0_0,163,165,167,169,171,173,175,177)
	MR_init_label4(__Unify___ll_backend__llds__instr_0_0,181,183,299,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__instr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i299);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i8) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i10) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i14));
MR_def_label(__Unify___ll_backend__llds__instr_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_r3);
	MR_decr_sp_and_return(17);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r3, 0);
	MR_tempr2 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_tempr2) == 0);
	MR_decr_sp_and_return(17);
	}
MR_def_label(__Unify___ll_backend__llds__instr_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(2, MR_r3, 0);
	MR_r3 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i15) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i19) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i25) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i31) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i45) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i51) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i55) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i59) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i65) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i69) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i75) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i79) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i83) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i95) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i99) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i103) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i107) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i111) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i123) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i129) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i135) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i139) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i143) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i147) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i151) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i153) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i155) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i157) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i171) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i175) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__instr_0_0_i181));
MR_def_label(__Unify___ll_backend__llds__instr_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_ctfield(3, MR_tempr3, 3);
	MR_r3 = MR_ctfield(3, MR_tempr4, 3);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___ll_backend__llds__instr_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		__Unify___ll_backend__llds__instr_0_0_i21);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		__Unify___ll_backend__llds__instr_0_0_i27);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 5);
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 6);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(9) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(10) = MR_ctfield(3, MR_tempr1, 6);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__code_addr_0_0,
		__Unify___ll_backend__llds__instr_0_0_i33);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__code_addr_0_0,
		__Unify___ll_backend__llds__instr_0_0_i35);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, liveinfo);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds__instr_0_0_i37);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___ll_backend__llds__instr_0_0_i39);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___cord__cord_1_0,
		__Unify___ll_backend__llds__instr_0_0_i41);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__call_model_0_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__nondet_frame_info_0_0,
		__Unify___ll_backend__llds__instr_0_0_i47);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, code_addr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__label_0_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__code_addr_0_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		__Unify___ll_backend__llds__instr_0_0_i61);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr1 = MR_tempr4;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(3, MR_tempr3, 2);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__c_code_live_lvals_0_0,
		__Unify___ll_backend__llds__instr_0_0_i67);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = (strcmp((char *)MR_sv(1), (char *)MR_sv(2)) == 0);
	MR_decr_sp_and_return(17);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		__Unify___ll_backend__llds__instr_0_0_i71);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__code_addr_0_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__lval_0_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__lval_0_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 5);
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 6);
	MR_sv(6) = MR_ctfield(3, MR_tempr2, 7);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(9) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(10) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(11) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(12) = MR_ctfield(3, MR_tempr1, 7);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		__Unify___ll_backend__llds__instr_0_0_i85);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__llds__instr_0_0_i87);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__llds__instr_0_0_i89);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		__Unify___ll_backend__llds__instr_0_0_i91);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	if ((strcmp((char *)MR_sv(4), (char *)MR_sv(10)) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	if ((MR_sv(5) != MR_sv(11))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(12);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__lval_0_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,14)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,16)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_tempr3, 2);
	MR_r2 = MR_ctfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__embedded_stack_frame_id_0_0);
	}
MR_def_label(__Unify___ll_backend__llds__instr_0_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,17)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 5);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 5);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__region_fill_frame_op_0_0,
		__Unify___ll_backend__llds__instr_0_0_i113);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__embedded_stack_frame_id_0_0,
		__Unify___ll_backend__llds__instr_0_0_i115);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		__Unify___ll_backend__llds__instr_0_0_i117);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		__Unify___ll_backend__llds__instr_0_0_i119);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__lval_0_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,18)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr1 = MR_tempr4;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(3, MR_tempr3, 2);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__embedded_stack_frame_id_0_0,
		__Unify___ll_backend__llds__instr_0_0_i125);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,19)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__region_use_frame_op_0_0,
		__Unify___ll_backend__llds__instr_0_0_i131);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__embedded_stack_frame_id_0_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,20)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__lval_0_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,21)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		__Unify___ll_backend__llds__instr_0_0_i141);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(17);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,22)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__lval_0_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,23)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,24)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 1);
	MR_tempr5 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 3);
	MR_tempr3 = MR_ctfield(3, MR_tempr5, 3);
	MR_r1 = (MR_tempr1 == MR_tempr3);
	MR_decr_sp_and_return(17);
	}
MR_def_label(__Unify___ll_backend__llds__instr_0_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,25)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r3, 1);
	MR_tempr2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(17);
	}
MR_def_label(__Unify___ll_backend__llds__instr_0_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,26)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r3, 1);
	MR_tempr2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(17);
	}
MR_def_label(__Unify___ll_backend__llds__instr_0_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,27)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 5);
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 6);
	MR_sv(6) = MR_ctfield(3, MR_tempr2, 7);
	MR_sv(7) = MR_ctfield(3, MR_tempr2, 8);
	MR_sv(8) = MR_ctfield(3, MR_tempr2, 9);
	MR_sv(9) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(10) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(11) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(12) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(13) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(14) = MR_ctfield(3, MR_tempr1, 7);
	MR_sv(15) = MR_ctfield(3, MR_tempr1, 8);
	MR_sv(16) = MR_ctfield(3, MR_tempr1, 9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_decl);
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds__instr_0_0_i159);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds__instr_0_0_i161);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(10))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__llds__instr_0_0_i163);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__llds__instr_0_0_i165);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__llds__instr_0_0_i167);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__llds__instr_0_0_i169);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	if ((MR_sv(7) != MR_sv(15))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = (MR_sv(8) == MR_sv(16));
	MR_decr_sp_and_return(17);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,28)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		__Unify___ll_backend__llds__instr_0_0_i173);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(17);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,29)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		__Unify___ll_backend__llds__instr_0_0_i177);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__label_0_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,30)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		__Unify___ll_backend__llds__instr_0_0_i183);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__label_0_0);
MR_def_label(__Unify___ll_backend__llds__instr_0_0,299)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__instr_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module73)
	MR_init_entry1(__Index___ll_backend__llds__instr_0_0);
	MR_init_label8(__Index___ll_backend__llds__instr_0_0,4,5,6,7,8,9,10,11)
	MR_init_label8(__Index___ll_backend__llds__instr_0_0,12,13,14,15,16,17,18,19)
	MR_init_label8(__Index___ll_backend__llds__instr_0_0,20,21,22,23,24,25,26,27)
	MR_init_label8(__Index___ll_backend__llds__instr_0_0,28,29,30,31,32,33,34,35)
	MR_init_label4(__Index___ll_backend__llds__instr_0_0,36,37,38,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___ll_backend__llds__instr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i7) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i8));
MR_def_label(__Index___ll_backend__llds__instr_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(__Index___ll_backend__llds__instr_0_0_i5);
	}
	MR_r1 = (MR_Integer) 24;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 25;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i10) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i13) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i15) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i18) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i19) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i20) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i21) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i22) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i23) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i24) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i25) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i26) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i27) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i28) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i29) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i30) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i31) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i32) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i33) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i34) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i35) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i36) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i37) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i38) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__instr_0_0_i39));
MR_def_label(__Index___ll_backend__llds__instr_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 20;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 21;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 22;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 23;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 26;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 27;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 28;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 29;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 30;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 31;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 33;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__instr_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 34;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__context_0_0);
MR_decl_entry(__Compare___cord__cord_1_0);
MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(ll_backend__llds_module74)
	MR_init_entry1(__Compare___ll_backend__llds__instr_0_0);
	MR_init_label8(__Compare___ll_backend__llds__instr_0_0,4,5,6,7,11,13,16,19)
	MR_init_label8(__Compare___ll_backend__llds__instr_0_0,20,23,27,33,36,41,44,49)
	MR_init_label8(__Compare___ll_backend__llds__instr_0_0,52,56,60,64,68,77,80,85)
	MR_init_label8(__Compare___ll_backend__llds__instr_0_0,88,91,94,99,102,106,112,115)
	MR_init_label8(__Compare___ll_backend__llds__instr_0_0,120,123,126,129,133,137,141,145)
	MR_init_label8(__Compare___ll_backend__llds__instr_0_0,149,159,162,165,168,171,176,179)
	MR_init_label8(__Compare___ll_backend__llds__instr_0_0,183,187,191,199,202,206,212,215)
	MR_init_label8(__Compare___ll_backend__llds__instr_0_0,220,223,226,231,234,237,240,244)
	MR_init_label8(__Compare___ll_backend__llds__instr_0_0,250,253,256,259,263,267,271,275)
	MR_init_label8(__Compare___ll_backend__llds__instr_0_0,279,283,287,299,302,307,310,315)
	MR_init_label3(__Compare___ll_backend__llds__instr_0_0,318,8,327)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__instr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i11);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___ll_backend__llds__instr_0_0,
		__Compare___ll_backend__llds__instr_0_0_i4);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___ll_backend__llds__instr_0_0,
		__Compare___ll_backend__llds__instr_0_0_i5);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(17);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(17);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i11) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i13) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i16) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i19));
MR_def_label(__Compare___ll_backend__llds__instr_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(17);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(2, MR_r3, 0);
	MR_r3 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i20) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i33) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i41) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i49) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i77) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i85) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i88) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i99) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i112) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i120) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i123) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i126) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i159) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i162) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i165) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i168) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i176) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i199) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i220) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i223) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i231) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i234) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i237) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i250) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i253) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i256) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i299) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i307) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__instr_0_0_i315));
MR_def_label(__Compare___ll_backend__llds__instr_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__instr_0_0_i23);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__instr_0_0_i27);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__lval_0_0,
		__Compare___ll_backend__llds__instr_0_0_i36);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__rval_0_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__lval_0_0,
		__Compare___ll_backend__llds__instr_0_0_i44);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__rval_0_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(10) = MR_ctfield(3, MR_tempr4, 6);
	MR_sv(9) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(5) = MR_ctfield(3, MR_tempr5, 6);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__code_addr_0_0,
		__Compare___ll_backend__llds__instr_0_0_i52);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__code_addr_0_0,
		__Compare___ll_backend__llds__instr_0_0_i56);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, liveinfo);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds__instr_0_0_i60);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___ll_backend__llds__instr_0_0_i64);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___cord__cord_1_0,
		__Compare___ll_backend__llds__instr_0_0_i68);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__call_model_0_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__nondet_frame_info_0_0,
		__Compare___ll_backend__llds__instr_0_0_i80);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, code_addr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__label_0_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__code_addr_0_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__rval_0_0,
		__Compare___ll_backend__llds__instr_0_0_i94);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__instr_0_0_i102);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__c_code_live_lvals_0_0,
		__Compare___ll_backend__llds__instr_0_0_i106);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__rval_0_0,
		__Compare___ll_backend__llds__instr_0_0_i115);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__code_addr_0_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__lval_0_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__lval_0_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(12) = MR_ctfield(3, MR_tempr4, 7);
	MR_sv(11) = MR_ctfield(3, MR_tempr4, 6);
	MR_sv(10) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(9) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(6) = MR_ctfield(3, MR_tempr5, 7);
	MR_sv(5) = MR_ctfield(3, MR_tempr5, 6);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__lval_0_0,
		__Compare___ll_backend__llds__instr_0_0_i129);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__llds__instr_0_0_i133);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__llds__instr_0_0_i137);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__rval_0_0,
		__Compare___ll_backend__llds__instr_0_0_i141);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__llds__instr_0_0_i145);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__instr_0_0_i149);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(12);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__lval_0_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,14)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__rval_0_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__rval_0_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,16)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__instr_0_0_i171);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__embedded_stack_frame_id_0_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,17)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__region_fill_frame_op_0_0,
		__Compare___ll_backend__llds__instr_0_0_i179);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__embedded_stack_frame_id_0_0,
		__Compare___ll_backend__llds__instr_0_0_i183);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__rval_0_0,
		__Compare___ll_backend__llds__instr_0_0_i187);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__lval_0_0,
		__Compare___ll_backend__llds__instr_0_0_i191);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__lval_0_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,18)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__instr_0_0_i202);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__embedded_stack_frame_id_0_0,
		__Compare___ll_backend__llds__instr_0_0_i206);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__rval_0_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,19)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__region_use_frame_op_0_0,
		__Compare___ll_backend__llds__instr_0_0_i215);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__embedded_stack_frame_id_0_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,20)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__lval_0_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,21)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__rval_0_0,
		__Compare___ll_backend__llds__instr_0_0_i226);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,22)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__lval_0_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,23)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__rval_0_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,24)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__instr_0_0_i240);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__llds__instr_0_0_i244);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,25)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,26)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,27)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(16) = MR_ctfield(3, MR_tempr4, 9);
	MR_sv(15) = MR_ctfield(3, MR_tempr4, 8);
	MR_sv(14) = MR_ctfield(3, MR_tempr4, 7);
	MR_sv(13) = MR_ctfield(3, MR_tempr4, 6);
	MR_sv(12) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(11) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(10) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(9) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(8) = MR_ctfield(3, MR_tempr5, 9);
	MR_sv(7) = MR_ctfield(3, MR_tempr5, 8);
	MR_sv(6) = MR_ctfield(3, MR_tempr5, 7);
	MR_sv(5) = MR_ctfield(3, MR_tempr5, 6);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_decl);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds__instr_0_0_i259);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds__instr_0_0_i263);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,263)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__instr_0_0_i267);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__llds__instr_0_0_i271);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__llds__instr_0_0_i275);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,275)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__llds__instr_0_0_i279);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__llds__instr_0_0_i283);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,283)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__instr_0_0_i287);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,287)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,299)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,28)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__lval_0_0,
		__Compare___ll_backend__llds__instr_0_0_i302);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,307)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,29)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__lval_0_0,
		__Compare___ll_backend__llds__instr_0_0_i310);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,310)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__label_0_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,315)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,30)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__lval_0_0,
		__Compare___ll_backend__llds__instr_0_0_i318);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,318)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instr_0_0_i327);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__label_0_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___ll_backend__llds__instr_0_0,327)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module75)
	MR_init_entry1(__Unify___ll_backend__llds__instruction_0_0);
	MR_init_label3(__Unify___ll_backend__llds__instruction_0_0,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__instruction_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instruction_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__instr_0_0,
		__Unify___ll_backend__llds__instruction_0_0_i4);
MR_def_label(__Unify___ll_backend__llds__instruction_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__instruction_0_0_i1);
	}
	MR_r1 = (strcmp((char *)MR_sv(1), (char *)MR_sv(2)) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ll_backend__llds__instruction_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__instruction_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module76)
	MR_init_entry1(__Compare___ll_backend__llds__instruction_0_0);
	MR_init_label4(__Compare___ll_backend__llds__instruction_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__instruction_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instruction_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__instruction_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__instruction_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__instruction_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__instr_0_0,
		__Compare___ll_backend__llds__instruction_0_0_i5);
MR_def_label(__Compare___ll_backend__llds__instruction_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__instruction_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__llds__instruction_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module77)
	MR_init_entry1(__Unify___ll_backend__llds__label_0_0);
	MR_init_label3(__Unify___ll_backend__llds__label_0_0,17,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__label_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__label_0_0_i17);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__label_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__label_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__label_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__proc_label_0_0);
	}
MR_def_label(__Unify___ll_backend__llds__label_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__label_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__label_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__label_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr3, 1);
	MR_r2 = MR_ctfield(1, MR_tempr4, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__proc_label_0_0);
	}
MR_def_label(__Unify___ll_backend__llds__label_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module78)
	MR_init_entry1(__Compare___ll_backend__llds__label_0_0);
	MR_init_label8(__Compare___ll_backend__llds__label_0_0,3,2,9,7,5,15,17,54)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__label_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__label_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__label_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__label_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__label_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__label_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__label_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__label_0_0_i9);
MR_def_label(__Compare___ll_backend__llds__label_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__label_0_0_i54);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__proc_label_0_0);
MR_def_label(__Compare___ll_backend__llds__label_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__label_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__label_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__label_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__label_0_0_i17);
MR_def_label(__Compare___ll_backend__llds__label_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__label_0_0_i54);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__proc_label_0_0);
MR_def_label(__Compare___ll_backend__llds__label_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module79)
	MR_init_entry1(__Unify___ll_backend__llds__layout_locn_0_0);
	MR_init_label4(__Unify___ll_backend__llds__layout_locn_0_0,16,5,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__layout_locn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__layout_locn_0_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__layout_locn_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__layout_locn_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__lval_0_0);
	}
MR_def_label(__Unify___ll_backend__llds__layout_locn_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__layout_locn_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__layout_locn_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		__Unify___ll_backend__llds__layout_locn_0_0_i10);
MR_def_label(__Unify___ll_backend__llds__layout_locn_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__layout_locn_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ll_backend__llds__layout_locn_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module80)
	MR_init_entry1(__Compare___ll_backend__llds__layout_locn_0_0);
	MR_init_label7(__Compare___ll_backend__llds__layout_locn_0_0,3,2,7,5,10,12,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__layout_locn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__layout_locn_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__layout_locn_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__layout_locn_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__layout_locn_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__layout_locn_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__layout_locn_0_0_i7);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__lval_0_0);
MR_def_label(__Compare___ll_backend__llds__layout_locn_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__layout_locn_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__layout_locn_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__layout_locn_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__lval_0_0,
		__Compare___ll_backend__llds__layout_locn_0_0_i12);
MR_def_label(__Compare___ll_backend__llds__layout_locn_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__layout_locn_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__layout_locn_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(ll_backend__llds_module81)
	MR_init_entry1(__Unify___ll_backend__llds__live_value_type_0_0);
	MR_init_label5(__Unify___ll_backend__llds__live_value_type_0_0,6,20,22,45,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__live_value_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__live_value_type_0_0_i45);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__live_value_type_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp(7);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__llds__live_value_type_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__live_value_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 2);
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 3);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___ll_backend__llds__live_value_type_0_0_i20);
MR_def_label(__Unify___ll_backend__llds__live_value_type_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__live_value_type_0_0_i1);
	}
	if ((strcmp((char *)MR_sv(1), (char *)MR_sv(4)) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__live_value_type_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		__Unify___ll_backend__llds__live_value_type_0_0_i22);
MR_def_label(__Unify___ll_backend__llds__live_value_type_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__live_value_type_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__llds_inst_0_0);
MR_def_label(__Unify___ll_backend__llds__live_value_type_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__live_value_type_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);

MR_BEGIN_MODULE(ll_backend__llds_module82)
	MR_init_entry1(__Compare___ll_backend__llds__live_value_type_0_0);
	MR_init_label8(__Compare___ll_backend__llds__live_value_type_0_0,7,23,39,55,71,87,103,119)
	MR_init_label8(__Compare___ll_backend__llds__live_value_type_0_0,135,151,167,183,198,6,212,213)
	MR_init_label5(__Compare___ll_backend__llds__live_value_type_0_0,201,215,219,223,230)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__live_value_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i198);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i6);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i7) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i23) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i39) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i55) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i71) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i87) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i103) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i119) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i135) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i151) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i167) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i183));
	}
MR_def_label(__Compare___ll_backend__llds__live_value_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i213);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i198);
	}
	MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i213);
	}
MR_def_label(__Compare___ll_backend__llds__live_value_type_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i213);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i198) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213));
	}
MR_def_label(__Compare___ll_backend__llds__live_value_type_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i213);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i198) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213));
	}
MR_def_label(__Compare___ll_backend__llds__live_value_type_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i213);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i198) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213));
	}
MR_def_label(__Compare___ll_backend__llds__live_value_type_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i213);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i198) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213));
	}
MR_def_label(__Compare___ll_backend__llds__live_value_type_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i213);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i198) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213));
	}
MR_def_label(__Compare___ll_backend__llds__live_value_type_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i213);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i198) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213));
	}
MR_def_label(__Compare___ll_backend__llds__live_value_type_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i213);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i198) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213));
	}
MR_def_label(__Compare___ll_backend__llds__live_value_type_0_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i213);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i198) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213));
	}
MR_def_label(__Compare___ll_backend__llds__live_value_type_0_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i213);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i198) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213));
	}
MR_def_label(__Compare___ll_backend__llds__live_value_type_0_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i213);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i212) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i198) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__live_value_type_0_0_i213));
	}
MR_def_label(__Compare___ll_backend__llds__live_value_type_0_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i212);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),11)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i212);
	}
	}
MR_def_label(__Compare___ll_backend__llds__live_value_type_0_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__llds__live_value_type_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i201);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),11)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i213);
	}
	}
MR_def_label(__Compare___ll_backend__llds__live_value_type_0_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__llds__live_value_type_0_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__llds__live_value_type_0_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r2;
	MR_sv(6) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr3, 2);
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 3);
	MR_tempr4 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr4, 3);
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___ll_backend__llds__live_value_type_0_0_i215);
MR_def_label(__Compare___ll_backend__llds__live_value_type_0_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i230);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__llds__live_value_type_0_0_i219);
MR_def_label(__Compare___ll_backend__llds__live_value_type_0_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i230);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_type_0_0,
		__Compare___ll_backend__llds__live_value_type_0_0_i223);
MR_def_label(__Compare___ll_backend__llds__live_value_type_0_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__live_value_type_0_0_i230);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__llds_inst_0_0);
MR_def_label(__Compare___ll_backend__llds__live_value_type_0_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__llds_module83)
	MR_init_entry1(__Unify___ll_backend__llds__liveinfo_0_0);
	MR_init_label4(__Unify___ll_backend__llds__liveinfo_0_0,4,6,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__liveinfo_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__liveinfo_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__layout_locn_0_0,
		__Unify___ll_backend__llds__liveinfo_0_0_i4);
MR_def_label(__Unify___ll_backend__llds__liveinfo_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__liveinfo_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__live_value_type_0_0,
		__Unify___ll_backend__llds__liveinfo_0_0_i6);
MR_def_label(__Unify___ll_backend__llds__liveinfo_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__liveinfo_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___ll_backend__llds__liveinfo_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__liveinfo_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__llds_module84)
	MR_init_entry1(__Compare___ll_backend__llds__liveinfo_0_0);
	MR_init_label5(__Compare___ll_backend__llds__liveinfo_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__liveinfo_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__liveinfo_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__liveinfo_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__liveinfo_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__liveinfo_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__layout_locn_0_0,
		__Compare___ll_backend__llds__liveinfo_0_0_i5);
MR_def_label(__Compare___ll_backend__llds__liveinfo_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__liveinfo_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__live_value_type_0_0,
		__Compare___ll_backend__llds__liveinfo_0_0_i9);
MR_def_label(__Compare___ll_backend__llds__liveinfo_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__liveinfo_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___ll_backend__llds__liveinfo_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mer_inst_0_0);

MR_BEGIN_MODULE(ll_backend__llds_module85)
	MR_init_entry1(__Unify___ll_backend__llds__llds_inst_0_0);
	MR_init_label3(__Unify___ll_backend__llds__llds_inst_0_0,12,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__llds_inst_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__llds_inst_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__llds_inst_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__llds__llds_inst_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__llds_inst_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__llds_inst_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Unify___ll_backend__llds__llds_inst_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__mer_inst_0_0);

MR_BEGIN_MODULE(ll_backend__llds_module86)
	MR_init_entry1(__Compare___ll_backend__llds__llds_inst_0_0);
	MR_init_label4(__Compare___ll_backend__llds__llds_inst_0_0,18,7,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__llds_inst_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__llds_inst_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__llds_inst_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__llds_inst_0_0_i7);
	}
MR_def_label(__Compare___ll_backend__llds__llds_inst_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__llds_inst_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__llds_inst_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__llds_inst_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__llds_inst_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__mer_inst_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module87)
	MR_init_entry1(__Unify___ll_backend__llds__llds_proc_id_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__llds_proc_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module88)
	MR_init_entry1(__Compare___ll_backend__llds__llds_proc_id_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__llds_proc_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module89)
	MR_init_entry1(__Unify___ll_backend__llds__llds_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__llds_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module90)
	MR_init_entry1(__Compare___ll_backend__llds__llds_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__llds_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module91)
	MR_init_entry1(__Unify___ll_backend__llds__lval_0_0);
	MR_init_label8(__Unify___ll_backend__llds__lval_0_0,12,13,15,17,18,20,22,24)
	MR_init_label8(__Unify___ll_backend__llds__lval_0_0,28,32,36,40,44,46,48,52)
	MR_init_label4(__Unify___ll_backend__llds__lval_0_0,56,61,105,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__lval_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_0_0_i105);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Unify___ll_backend__llds__lval_0_0_i12) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__lval_0_0_i13) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__lval_0_0_i15) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__lval_0_0_i17));
MR_def_label(__Unify___ll_backend__llds__lval_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__llds__lval_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__llds__lval_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 1);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__llds__lval_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(__Unify___ll_backend__llds__lval_0_0_i18) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__lval_0_0_i20) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__lval_0_0_i22) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__lval_0_0_i24) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__lval_0_0_i28) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__lval_0_0_i32) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__lval_0_0_i36) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__lval_0_0_i40) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__lval_0_0_i44) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__lval_0_0_i52) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__lval_0_0_i56) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__lval_0_0_i61));
MR_def_label(__Unify___ll_backend__llds__lval_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__llds__lval_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__llds__lval_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__llds__lval_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
MR_def_label(__Unify___ll_backend__llds__lval_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
MR_def_label(__Unify___ll_backend__llds__lval_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
MR_def_label(__Unify___ll_backend__llds__lval_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
MR_def_label(__Unify___ll_backend__llds__lval_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
MR_def_label(__Unify___ll_backend__llds__lval_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__llds__lval_0_0_i46);
MR_def_label(__Unify___ll_backend__llds__lval_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		__Unify___ll_backend__llds__lval_0_0_i48);
MR_def_label(__Unify___ll_backend__llds__lval_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
MR_def_label(__Unify___ll_backend__llds__lval_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
MR_def_label(__Unify___ll_backend__llds__lval_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_tempr2 = MR_ctfield(3, MR_r1, 1);
	if ((MR_tempr2 == MR_tempr1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_0_0_i105);
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (strcmp((char *)MR_sv(1), (char *)MR_sv(2)) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__llds__lval_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(3, MR_sv(1), 1);
	MR_r3 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___ll_backend__llds__lval_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__lval_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module92)
	MR_init_entry1(__Index___ll_backend__llds__lval_0_0);
	MR_init_label8(__Index___ll_backend__llds__lval_0_0,4,5,6,7,8,9,10,11)
	MR_init_label8(__Index___ll_backend__llds__lval_0_0,12,13,14,15,16,17,18,19)
	MR_init_label6(__Index___ll_backend__llds__lval_0_0,20,21,22,23,24,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___ll_backend__llds__lval_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i13));
MR_def_label(__Index___ll_backend__llds__lval_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i5) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i7) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i8) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i10));
MR_def_label(__Index___ll_backend__llds__lval_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__lval_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__lval_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__lval_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__lval_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__lval_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__lval_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__lval_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__lval_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i15) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i18) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i19) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i20) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i21) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i22) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i23) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i24) MR_AND
		MR_LABEL_AP(__Index___ll_backend__llds__lval_0_0_i25));
MR_def_label(__Index___ll_backend__llds__lval_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__lval_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__lval_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__lval_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__lval_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__lval_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__lval_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__lval_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__lval_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__lval_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__lval_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___ll_backend__llds__lval_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module93)
	MR_init_entry1(__Compare___ll_backend__llds__lval_0_0);
	MR_init_label8(__Compare___ll_backend__llds__lval_0_0,4,5,6,7,17,18,21,26)
	MR_init_label8(__Compare___ll_backend__llds__lval_0_0,29,34,35,38,41,44,47,50)
	MR_init_label8(__Compare___ll_backend__llds__lval_0_0,53,56,59,62,66,72,75,78)
	MR_init_label2(__Compare___ll_backend__llds__lval_0_0,8,85)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__lval_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_0_0_i17);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___ll_backend__llds__lval_0_0,
		__Compare___ll_backend__llds__lval_0_0_i4);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___ll_backend__llds__lval_0_0,
		__Compare___ll_backend__llds__lval_0_0_i5);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___ll_backend__llds__lval_0_0_i17) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__lval_0_0_i18) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__lval_0_0_i26) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__lval_0_0_i34));
MR_def_label(__Compare___ll_backend__llds__lval_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr5 = MR_r2;
	MR_tempr2 = MR_ctfield(1, MR_tempr5, 1);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr5, 0);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__lval_0_0_i21);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_0_0_i85);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(2, MR_tempr4, 1);
	MR_tempr5 = MR_r2;
	MR_tempr2 = MR_ctfield(2, MR_tempr5, 1);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(2, MR_tempr5, 0);
	MR_r2 = MR_ctfield(2, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__lval_0_0_i29);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_0_0_i85);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(__Compare___ll_backend__llds__lval_0_0_i35) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__lval_0_0_i38) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__lval_0_0_i41) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__lval_0_0_i44) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__lval_0_0_i47) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__lval_0_0_i50) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__lval_0_0_i53) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__lval_0_0_i56) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__lval_0_0_i59) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__lval_0_0_i72) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__lval_0_0_i75) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__lval_0_0_i78));
MR_def_label(__Compare___ll_backend__llds__lval_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__rval_0_0);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__rval_0_0);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__rval_0_0);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__rval_0_0);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__rval_0_0);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__llds__lval_0_0_i62);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_0_0_i85);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__rval_0_0,
		__Compare___ll_backend__llds__lval_0_0_i66);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_0_0_i85);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__rval_0_0);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__rval_0_0);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_0_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r3 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___ll_backend__llds__lval_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module94)
	MR_init_entry1(__Unify___ll_backend__llds__lval_or_any_reg_0_0);
	MR_init_label3(__Unify___ll_backend__llds__lval_or_any_reg_0_0,12,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__lval_or_any_reg_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_or_any_reg_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_or_any_reg_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__llds__lval_or_any_reg_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__lval_or_any_reg_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__lval_or_any_reg_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__lval_0_0);
MR_def_label(__Unify___ll_backend__llds__lval_or_any_reg_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module95)
	MR_init_entry1(__Compare___ll_backend__llds__lval_or_any_reg_0_0);
	MR_init_label4(__Compare___ll_backend__llds__lval_or_any_reg_0_0,18,7,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__lval_or_any_reg_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_or_any_reg_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_or_any_reg_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_or_any_reg_0_0_i7);
	}
MR_def_label(__Compare___ll_backend__llds__lval_or_any_reg_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__lval_or_any_reg_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__lval_or_any_reg_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__lval_or_any_reg_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__lval_or_any_reg_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__lval_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module96)
	MR_init_entry1(__Unify___ll_backend__llds__main_stack_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__main_stack_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module97)
	MR_init_entry1(__Compare___ll_backend__llds__main_stack_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__main_stack_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module98)
	MR_init_entry1(__Unify___ll_backend__llds__may_alter_rtti_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__may_alter_rtti_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module99)
	MR_init_entry1(__Compare___ll_backend__llds__may_alter_rtti_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__may_alter_rtti_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module100)
	MR_init_entry1(__Unify___ll_backend__llds__mem_ref_0_0);
	MR_init_label5(__Unify___ll_backend__llds__mem_ref_0_0,10,12,6,30,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__mem_ref_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__mem_ref_0_0_i30);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr2);
	if ((MR_tempr3 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__mem_ref_0_0_i6);
	}
	if ((MR_tempr3 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__mem_ref_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__mem_ref_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
	}
MR_def_label(__Unify___ll_backend__llds__mem_ref_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__mem_ref_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(2, MR_tempr2, 1);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(2, MR_tempr2, 2);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 2);
	MR_r1 = MR_ctfield(2, MR_tempr2, 0);
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		__Unify___ll_backend__llds__mem_ref_0_0_i12);
MR_def_label(__Unify___ll_backend__llds__mem_ref_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__mem_ref_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__mem_ref_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
MR_def_label(__Unify___ll_backend__llds__mem_ref_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__mem_ref_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
MR_def_label(__Unify___ll_backend__llds__mem_ref_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__mem_ref_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module101)
	MR_init_entry1(__Compare___ll_backend__llds__mem_ref_0_0);
	MR_init_label8(__Compare___ll_backend__llds__mem_ref_0_0,3,2,38,12,16,18,22,6)
	MR_init_label3(__Compare___ll_backend__llds__mem_ref_0_0,44,11,79)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__mem_ref_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__mem_ref_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__mem_ref_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__mem_ref_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__mem_ref_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tag(MR_r3);
	MR_r4 = MR_tempr1;
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__mem_ref_0_0_i6);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__mem_ref_0_0_i12);
	}
	MR_r4 = MR_sv(2);
	MR_tempr2 = MR_tag(MR_r4);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__mem_ref_0_0_i11);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__mem_ref_0_0_i11);
	}
	}
MR_def_label(__Compare___ll_backend__llds__mem_ref_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r3, 0);
	MR_r2 = MR_const_mask_field(MR_r4, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__rval_0_0);
MR_def_label(__Compare___ll_backend__llds__mem_ref_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r4);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__mem_ref_0_0_i44);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__mem_ref_0_0_i16);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___ll_backend__llds__mem_ref_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_ctfield(2, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(2, MR_tempr4, 2);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(2, MR_tempr3, 0);
	MR_r2 = MR_ctfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__rval_0_0,
		__Compare___ll_backend__llds__mem_ref_0_0_i18);
MR_def_label(__Compare___ll_backend__llds__mem_ref_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__mem_ref_0_0_i79);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__mem_ref_0_0_i22);
MR_def_label(__Compare___ll_backend__llds__mem_ref_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__mem_ref_0_0_i79);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__rval_0_0);
MR_def_label(__Compare___ll_backend__llds__mem_ref_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r4);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__mem_ref_0_0_i38);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__mem_ref_0_0_i11);
	}
	}
MR_def_label(__Compare___ll_backend__llds__mem_ref_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__llds__mem_ref_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
MR_def_label(__Compare___ll_backend__llds__mem_ref_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module102)
	MR_init_entry1(__Unify___ll_backend__llds__nondet_frame_info_0_0);
	MR_init_label3(__Unify___ll_backend__llds__nondet_frame_info_0_0,14,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__nondet_frame_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__nondet_frame_info_0_0_i14);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__nondet_frame_info_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__nondet_frame_info_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = (MR_tempr3 == MR_tempr4);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__llds__nondet_frame_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__nondet_frame_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__nondet_frame_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__nondet_frame_info_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__nondet_frame_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_struct);
	MR_r2 = MR_ctfield(1, MR_tempr3, 2);
	MR_r3 = MR_ctfield(1, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
MR_def_label(__Unify___ll_backend__llds__nondet_frame_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module103)
	MR_init_entry1(__Compare___ll_backend__llds__nondet_frame_info_0_0);
	MR_init_label8(__Compare___ll_backend__llds__nondet_frame_info_0_0,3,2,7,5,10,12,16,54)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__nondet_frame_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__nondet_frame_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__nondet_frame_info_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__nondet_frame_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__nondet_frame_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__nondet_frame_info_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__nondet_frame_info_0_0_i7);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__nondet_frame_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__llds__nondet_frame_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__nondet_frame_info_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__llds__nondet_frame_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_ctfield(1, MR_tempr5, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__llds__nondet_frame_info_0_0_i12);
MR_def_label(__Compare___ll_backend__llds__nondet_frame_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__nondet_frame_info_0_0_i54);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__nondet_frame_info_0_0_i16);
MR_def_label(__Compare___ll_backend__llds__nondet_frame_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__nondet_frame_info_0_0_i54);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_struct);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__llds__nondet_frame_info_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module104)
	MR_init_entry1(__Unify___ll_backend__llds__nondet_tail_call_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__nondet_tail_call_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module105)
	MR_init_entry1(__Compare___ll_backend__llds__nondet_tail_call_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__nondet_tail_call_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module106)
	MR_init_entry1(__Unify___ll_backend__llds__reg_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__reg_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module107)
	MR_init_entry1(__Compare___ll_backend__llds__reg_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__reg_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module108)
	MR_init_entry1(__Unify___ll_backend__llds__region_fill_frame_op_0_0);
	MR_init_label3(__Unify___ll_backend__llds__region_fill_frame_op_0_0,6,22,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__region_fill_frame_op_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__region_fill_frame_op_0_0_i22);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__region_fill_frame_op_0_0_i6);
	}
	MR_tempr2 = MR_unmkbody(MR_tempr1);
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__llds__region_fill_frame_op_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__region_fill_frame_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__llds__region_fill_frame_op_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__region_fill_frame_op_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module109)
	MR_init_entry1(__Compare___ll_backend__llds__region_fill_frame_op_0_0);
	MR_init_label8(__Compare___ll_backend__llds__region_fill_frame_op_0_0,50,21,14,7,6,66,37,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__region_fill_frame_op_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i50);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i6);
	}
	MR_tempr2 = MR_unmkbody(MR_tempr1);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i7);
	}
	if (MR_INT_EQ(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i14);
	}
	if (MR_INT_EQ(MR_tempr2,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i21);
	}
	MR_tempr3 = MR_sv(2);
	MR_tempr2 = MR_tag(MR_tempr3);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i37);
	}
	MR_tempr2 = MR_unmkbody(MR_tempr3);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i37);
	}
	if (MR_INT_EQ(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i37);
	}
	if (MR_INT_EQ(MR_tempr2,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i37);
	}
	}
MR_def_label(__Compare___ll_backend__llds__region_fill_frame_op_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__region_fill_frame_op_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i37);
	}
	MR_tempr2 = MR_unmkbody(MR_tempr1);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i37);
	}
	if (MR_INT_EQ(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i37);
	}
	if (MR_INT_EQ(MR_tempr2,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i50);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___ll_backend__llds__region_fill_frame_op_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i37);
	}
	MR_tempr2 = MR_unmkbody(MR_tempr1);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i37);
	}
	if (MR_INT_EQ(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i50);
	}
	if (MR_INT_EQ(MR_tempr2,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i66);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___ll_backend__llds__region_fill_frame_op_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i66);
	}
	MR_tempr2 = MR_unmkbody(MR_tempr1);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i50);
	}
	if (MR_INT_EQ(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i66);
	}
	if (MR_INT_EQ(MR_tempr2,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i66);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___ll_backend__llds__region_fill_frame_op_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i36);
	}
	MR_tempr2 = MR_unmkbody(MR_tempr1);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_fill_frame_op_0_0_i37);
	}
	}
MR_def_label(__Compare___ll_backend__llds__region_fill_frame_op_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__region_fill_frame_op_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__region_fill_frame_op_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(1, MR_r3, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module110)
	MR_init_entry1(__Unify___ll_backend__llds__region_ite_kind_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__region_ite_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module111)
	MR_init_entry1(__Compare___ll_backend__llds__region_ite_kind_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__region_ite_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module112)
	MR_init_entry1(__Unify___ll_backend__llds__region_set_fixed_op_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__region_set_fixed_op_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module113)
	MR_init_entry1(__Compare___ll_backend__llds__region_set_fixed_op_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__region_set_fixed_op_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module114)
	MR_init_entry1(__Unify___ll_backend__llds__region_stack_id_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__region_stack_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module115)
	MR_init_entry1(__Compare___ll_backend__llds__region_stack_id_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__region_stack_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module116)
	MR_init_entry1(__Unify___ll_backend__llds__region_use_frame_op_0_0);
	MR_init_label4(__Unify___ll_backend__llds__region_use_frame_op_0_0,8,6,27,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__region_use_frame_op_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__region_use_frame_op_0_0_i27);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__region_use_frame_op_0_0_i6);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__region_use_frame_op_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__llds__region_use_frame_op_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__region_use_frame_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_ctfield(2, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__llds__region_use_frame_op_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__region_use_frame_op_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__llds__region_use_frame_op_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__region_use_frame_op_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module117)
	MR_init_entry1(__Compare___ll_backend__llds__region_use_frame_op_0_0);
	MR_init_label8(__Compare___ll_backend__llds__region_use_frame_op_0_0,28,38,48,58,68,77,17,20)
	MR_init_label3(__Compare___ll_backend__llds__region_use_frame_op_0_0,6,11,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__region_use_frame_op_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_use_frame_op_0_0_i77);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	MR_r3 = MR_tempr2;
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_use_frame_op_0_0_i6);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_use_frame_op_0_0_i17);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__llds__region_use_frame_op_0_0_i28) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__region_use_frame_op_0_0_i38) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__region_use_frame_op_0_0_i48) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__region_use_frame_op_0_0_i58) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__region_use_frame_op_0_0_i68));
	}
MR_def_label(__Compare___ll_backend__llds__region_use_frame_op_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	MR_r3 = MR_tempr2;
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_use_frame_op_0_0_i20);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_use_frame_op_0_0_i20);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_use_frame_op_0_0_i77);
	}
	MR_GOTO_LAB(__Compare___ll_backend__llds__region_use_frame_op_0_0_i11);
	}
MR_def_label(__Compare___ll_backend__llds__region_use_frame_op_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	MR_r3 = MR_tempr2;
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_use_frame_op_0_0_i20);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_use_frame_op_0_0_i20);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__llds__region_use_frame_op_0_0_i20) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__region_use_frame_op_0_0_i77) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__region_use_frame_op_0_0_i11) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__region_use_frame_op_0_0_i11) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__region_use_frame_op_0_0_i11));
	}
MR_def_label(__Compare___ll_backend__llds__region_use_frame_op_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	MR_r3 = MR_tempr2;
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_use_frame_op_0_0_i20);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_use_frame_op_0_0_i20);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__llds__region_use_frame_op_0_0_i20) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__region_use_frame_op_0_0_i20) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__region_use_frame_op_0_0_i77) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__region_use_frame_op_0_0_i11) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__region_use_frame_op_0_0_i11));
	}
MR_def_label(__Compare___ll_backend__llds__region_use_frame_op_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	MR_r3 = MR_tempr2;
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_use_frame_op_0_0_i20);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_use_frame_op_0_0_i20);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__llds__region_use_frame_op_0_0_i20) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__region_use_frame_op_0_0_i20) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__region_use_frame_op_0_0_i20) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__region_use_frame_op_0_0_i77) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__region_use_frame_op_0_0_i11));
	}
MR_def_label(__Compare___ll_backend__llds__region_use_frame_op_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_use_frame_op_0_0_i20);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_use_frame_op_0_0_i20);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),4)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_use_frame_op_0_0_i20);
	}
	}
MR_def_label(__Compare___ll_backend__llds__region_use_frame_op_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__region_use_frame_op_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	MR_r4 = MR_tempr1;
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_use_frame_op_0_0_i20);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_use_frame_op_0_0_i9);
	}
	MR_GOTO_LAB(__Compare___ll_backend__llds__region_use_frame_op_0_0_i11);
	}
MR_def_label(__Compare___ll_backend__llds__region_use_frame_op_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__region_use_frame_op_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__region_use_frame_op_0_0_i9);
	}
	}
MR_def_label(__Compare___ll_backend__llds__region_use_frame_op_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__region_use_frame_op_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r2, 0);
	MR_r2 = MR_const_mask_field(MR_r3, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module118)
	MR_init_entry1(__Unify___ll_backend__llds__removed_at_start_of_else_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__removed_at_start_of_else_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module119)
	MR_init_entry1(__Compare___ll_backend__llds__removed_at_start_of_else_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__removed_at_start_of_else_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module120)
	MR_init_entry1(__Unify___ll_backend__llds__reset_trail_reason_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__reset_trail_reason_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module121)
	MR_init_entry1(__Compare___ll_backend__llds__reset_trail_reason_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__reset_trail_reason_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___backend_libs__builtin_ops__binary_op_0_0);

MR_BEGIN_MODULE(ll_backend__llds_module122)
	MR_init_entry1(__Unify___ll_backend__llds__rval_0_0);
	MR_init_label8(__Unify___ll_backend__llds__rval_0_0,107,6,10,14,18,27,29,31)
	MR_init_label4(__Unify___ll_backend__llds__rval_0_0,23,19,60,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__rval_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(__Unify___ll_backend__llds__rval_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_0_0_i60);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Unify___ll_backend__llds__rval_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__rval_0_0_i10) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__rval_0_0_i14) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__rval_0_0_i18));
MR_def_label(__Unify___ll_backend__llds__rval_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_r3, 0);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__lval_0_0);
MR_def_label(__Unify___ll_backend__llds__rval_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(1, MR_r3, 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___ll_backend__llds__rval_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_tempr3, 1);
	MR_r2 = MR_ctfield(2, MR_tempr4, 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Unify___ll_backend__llds__rval_0_0_i107);
	}
MR_def_label(__Unify___ll_backend__llds__rval_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_0_0_i19);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_0_0_i23);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_0_0_i27);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__mem_ref_0_0);
	}
MR_def_label(__Unify___ll_backend__llds__rval_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___backend_libs__builtin_ops__binary_op_0_0,
		__Unify___ll_backend__llds__rval_0_0_i29);
MR_def_label(__Unify___ll_backend__llds__rval_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(__Unify___ll_backend__llds__rval_0_0,
		__Unify___ll_backend__llds__rval_0_0_i31);
MR_def_label(__Unify___ll_backend__llds__rval_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Unify___ll_backend__llds__rval_0_0_i107);
MR_def_label(__Unify___ll_backend__llds__rval_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_tempr3, 2);
	MR_r2 = MR_ctfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Unify___ll_backend__llds__rval_0_0_i107);
	}
MR_def_label(__Unify___ll_backend__llds__rval_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_const_0_0);
MR_def_label(__Unify___ll_backend__llds__rval_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__llds__rval_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___backend_libs__builtin_ops__binary_op_0_0);

MR_BEGIN_MODULE(ll_backend__llds_module123)
	MR_init_entry1(__Compare___ll_backend__llds__rval_0_0);
	MR_init_label8(__Compare___ll_backend__llds__rval_0_0,251,3,2,6,9,13,17,21)
	MR_init_label8(__Compare___ll_backend__llds__rval_0_0,24,28,33,35,40,44,72,81)
	MR_init_label8(__Compare___ll_backend__llds__rval_0_0,83,87,56,64,66,45,50,51)
	MR_init_label3(__Compare___ll_backend__llds__rval_0_0,132,52,267)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__rval_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(__Compare___ll_backend__llds__rval_0_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__rval_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__llds__rval_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_0_0_i6) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_0_0_i17) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_0_0_i28) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_0_0_i44));
MR_def_label(__Compare___ll_backend__llds__rval_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_0_0_i9) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_0_0_i132) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_0_0_i132) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_0_0_i13));
MR_def_label(__Compare___ll_backend__llds__rval_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r3, 0);
	MR_r2 = MR_ctfield(0, MR_r4, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__lval_0_0);
MR_def_label(__Compare___ll_backend__llds__rval_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r4, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i132);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i132);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i132);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___ll_backend__llds__rval_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_0_0_i50) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_0_0_i21) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_0_0_i132) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_0_0_i24));
MR_def_label(__Compare___ll_backend__llds__rval_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(1, MR_r3, 0);
	MR_r3 = MR_ctfield(1, MR_r4, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___ll_backend__llds__rval_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r4, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i132);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i132);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i132);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___ll_backend__llds__rval_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_0_0_i50) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_0_0_i50) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_0_0_i33) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_0_0_i40));
MR_def_label(__Compare___ll_backend__llds__rval_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 1);
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(2, MR_tempr3, 0);
	MR_r2 = MR_ctfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__rval_0_0_i35);
MR_def_label(__Compare___ll_backend__llds__rval_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i267);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i251);
MR_def_label(__Compare___ll_backend__llds__rval_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r4, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i132);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i132);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i132);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___ll_backend__llds__rval_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i45);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i56);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i72);
	}
	MR_tempr1 = MR_sv(2);
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i50);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 0);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i50);
	}
	if (MR_INT_EQ(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i50);
	}
	if (MR_INT_EQ(MR_tempr2,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i50);
	}
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__mem_ref_0_0);
	}
MR_def_label(__Compare___ll_backend__llds__rval_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i50);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 0);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i50);
	}
	if (MR_INT_EQ(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i50);
	}
	if (MR_INT_EQ(MR_tempr2,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i81);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___ll_backend__llds__rval_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___backend_libs__builtin_ops__binary_op_0_0,
		__Compare___ll_backend__llds__rval_0_0_i83);
MR_def_label(__Compare___ll_backend__llds__rval_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i267);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(__Compare___ll_backend__llds__rval_0_0,
		__Compare___ll_backend__llds__rval_0_0_i87);
MR_def_label(__Compare___ll_backend__llds__rval_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i267);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i251);
MR_def_label(__Compare___ll_backend__llds__rval_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i50);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 0);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i50);
	}
	if (MR_INT_EQ(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i64);
	}
	if (MR_INT_EQ(MR_tempr2,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i132);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___ll_backend__llds__rval_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__rval_0_0_i66);
MR_def_label(__Compare___ll_backend__llds__rval_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i267);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i251);
MR_def_label(__Compare___ll_backend__llds__rval_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	if (MR_INT_EQ(MR_tag(MR_r4),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i51);
	}
MR_def_label(__Compare___ll_backend__llds__rval_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__llds__rval_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r4, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_0_0_i52);
	}
	}
MR_def_label(__Compare___ll_backend__llds__rval_0_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__llds__rval_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__rval_const_0_0);
MR_def_label(__Compare___ll_backend__llds__rval_0_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module124)
	MR_init_entry1(__Unify___ll_backend__llds__rval_const_0_0);
	MR_init_label8(__Unify___ll_backend__llds__rval_const_0_0,6,8,10,12,13,15,17,21)
	MR_init_label4(__Unify___ll_backend__llds__rval_const_0_0,25,27,51,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__rval_const_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_const_0_0_i51);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Unify___ll_backend__llds__rval_const_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__rval_const_0_0_i8) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__rval_const_0_0_i10) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__rval_const_0_0_i12));
MR_def_label(__Unify___ll_backend__llds__rval_const_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_r3);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ll_backend__llds__rval_const_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_const_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r3, 0);
	MR_tempr2 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ll_backend__llds__rval_const_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_const_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_ctfield(2, MR_tempr4, 0);
	MR_tempr5 = MR_sv(2);
	MR_tempr2 = MR_ctfield(2, MR_tempr5, 0);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_const_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(2, MR_tempr4, 1);
	MR_tempr3 = MR_ctfield(2, MR_tempr5, 1);
	MR_r1 = (MR_tempr1 == MR_tempr3);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ll_backend__llds__rval_const_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(__Unify___ll_backend__llds__rval_const_0_0_i13) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__rval_const_0_0_i15) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__rval_const_0_0_i17) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__rval_const_0_0_i21) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds__rval_const_0_0_i25));
MR_def_label(__Unify___ll_backend__llds__rval_const_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_const_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r3, 1);
	MR_tempr2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_word_to_float(MR_tempr1) == MR_word_to_float(MR_tempr2));
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ll_backend__llds__rval_const_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_const_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r3, 1);
	MR_tempr2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ll_backend__llds__rval_const_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_const_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	MR_r3 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__llds__rval_const_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_const_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__code_addr_0_0);
MR_def_label(__Unify___ll_backend__llds__rval_const_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_const_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__data_addr_0_0,
		__Unify___ll_backend__llds__rval_const_0_0_i27);
MR_def_label(__Unify___ll_backend__llds__rval_const_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__rval_const_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__llds__rval_const_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__rval_const_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_float_3_0);

MR_BEGIN_MODULE(ll_backend__llds_module125)
	MR_init_entry1(__Compare___ll_backend__llds__rval_const_0_0);
	MR_init_label8(__Compare___ll_backend__llds__rval_const_0_0,6,144,7,32,35,37,46,49)
	MR_init_label8(__Compare___ll_backend__llds__rval_const_0_0,52,54,65,66,69,73,80,83)
	MR_init_label8(__Compare___ll_backend__llds__rval_const_0_0,87,89,94,97,210,101,104,108)
	MR_init_label6(__Compare___ll_backend__llds__rval_const_0_0,115,119,121,122,136,141)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__rval_const_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_const_0_0_i144);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i6) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i32) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i46) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i65));
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_const_0_0_i7);
	}
	MR_r3 = MR_sv(2);
	if (MR_INT_NE(MR_tag(MR_r3),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_const_0_0_i121);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_const_0_0_i121);
	}
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	if (MR_INT_NE(MR_tag(MR_r3),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_const_0_0_i121);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_const_0_0_i144);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i35) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i37) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i121) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i121));
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r4),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_const_0_0_i210);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i49) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i210) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i52) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i121));
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r4),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_const_0_0_i210);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 1);
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(2, MR_tempr3, 0);
	MR_r2 = MR_ctfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__llds__rval_const_0_0_i54);
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_const_0_0_i141);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i66) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i80) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i94) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i108) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i122));
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i69) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i210) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i210) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i73));
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r4),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_const_0_0_i210);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_const_0_0_i121);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i83) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i210) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i210) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i87));
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r4),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_const_0_0_i210);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r4, 0),
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i210) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i89) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i121) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i121) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i121));
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i97) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i210) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i210) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i101));
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r4),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_const_0_0_i210);
	}
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r4, 0),
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i210) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i210) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i104) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i121) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i121));
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	MR_r3 = MR_ctfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	if (MR_INT_EQ(MR_tag(MR_r4),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_const_0_0_i115);
	}
	MR_GOTO_LAB(__Compare___ll_backend__llds__rval_const_0_0_i210);
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r4, 0),
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i210) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i210) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i210) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i119) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds__rval_const_0_0_i121));
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__code_addr_0_0);
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	if (MR_INT_NE(MR_tag(MR_r4),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_const_0_0_i210);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_r4, 0),4)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_const_0_0_i210);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__data_addr_0_0,
		__Compare___ll_backend__llds__rval_const_0_0_i136);
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__rval_const_0_0_i141);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__llds__rval_const_0_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module126)
	MR_init_entry1(__Unify___ll_backend__llds__scalar_common_data_array_0_0);
	MR_init_label5(__Unify___ll_backend__llds__scalar_common_data_array_0_0,4,6,8,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__scalar_common_data_array_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__scalar_common_data_array_0_0_i12);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___ll_backend__llds__scalar_common_data_array_0_0_i4);
MR_def_label(__Unify___ll_backend__llds__scalar_common_data_array_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__scalar_common_data_array_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__common_cell_type_0_0,
		__Unify___ll_backend__llds__scalar_common_data_array_0_0_i6);
MR_def_label(__Unify___ll_backend__llds__scalar_common_data_array_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__scalar_common_data_array_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__scalar_common_data_array_0_0_i8);
	}
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, common_cell_value);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__llds__scalar_common_data_array_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__scalar_common_data_array_0_0_i1);
	}
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, common_cell_value);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__llds__scalar_common_data_array_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__scalar_common_data_array_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module127)
	MR_init_entry1(__Compare___ll_backend__llds__scalar_common_data_array_0_0);
	MR_init_label6(__Compare___ll_backend__llds__scalar_common_data_array_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__scalar_common_data_array_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__scalar_common_data_array_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__scalar_common_data_array_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__scalar_common_data_array_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__scalar_common_data_array_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___ll_backend__llds__scalar_common_data_array_0_0_i5);
MR_def_label(__Compare___ll_backend__llds__scalar_common_data_array_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__scalar_common_data_array_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__common_cell_type_0_0,
		__Compare___ll_backend__llds__scalar_common_data_array_0_0_i9);
MR_def_label(__Compare___ll_backend__llds__scalar_common_data_array_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__scalar_common_data_array_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__scalar_common_data_array_0_0_i13);
MR_def_label(__Compare___ll_backend__llds__scalar_common_data_array_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__scalar_common_data_array_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, common_cell_value);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__llds__scalar_common_data_array_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module128)
	MR_init_entry1(__Unify___ll_backend__llds__stack_incr_kind_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__stack_incr_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module129)
	MR_init_entry1(__Compare___ll_backend__llds__stack_incr_kind_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__stack_incr_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__eval_method_0_0);

MR_BEGIN_MODULE(ll_backend__llds_module130)
	MR_init_entry1(__Unify___ll_backend__llds__tabling_info_struct_0_0);
	MR_init_label8(__Unify___ll_backend__llds__tabling_info_struct_0_0,4,6,8,10,12,14,16,18)
	MR_init_label2(__Unify___ll_backend__llds__tabling_info_struct_0_0,20,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__tabling_info_struct_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__tabling_info_struct_0_0_i20);
	}
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 10);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(13) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(14) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(15) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(16) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(17) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(18) = MR_ctfield(0, MR_tempr2, 8);
	MR_sv(19) = MR_ctfield(0, MR_tempr2, 9);
	MR_sv(20) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___ll_backend__llds__tabling_info_struct_0_0_i4);
MR_def_label(__Unify___ll_backend__llds__tabling_info_struct_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__tabling_info_struct_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__proc_label_0_0,
		__Unify___ll_backend__llds__tabling_info_struct_0_0_i6);
MR_def_label(__Unify___ll_backend__llds__tabling_info_struct_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__tabling_info_struct_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__eval_method_0_0,
		__Unify___ll_backend__llds__tabling_info_struct_0_0_i8);
MR_def_label(__Unify___ll_backend__llds__tabling_info_struct_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__tabling_info_struct_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(13))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__tabling_info_struct_0_0_i1);
	}
	if ((MR_sv(4) != MR_sv(14))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__tabling_info_struct_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, table_trie_step);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__llds__tabling_info_struct_0_0_i10);
MR_def_label(__Unify___ll_backend__llds__tabling_info_struct_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__tabling_info_struct_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__llds__tabling_info_struct_0_0_i12);
MR_def_label(__Unify___ll_backend__llds__tabling_info_struct_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__tabling_info_struct_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		__Unify___ll_backend__llds__tabling_info_struct_0_0_i14);
MR_def_label(__Unify___ll_backend__llds__tabling_info_struct_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__tabling_info_struct_0_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		__Unify___ll_backend__llds__tabling_info_struct_0_0_i16);
MR_def_label(__Unify___ll_backend__llds__tabling_info_struct_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__tabling_info_struct_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__llds__tabling_info_struct_0_0_i18);
MR_def_label(__Unify___ll_backend__llds__tabling_info_struct_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__tabling_info_struct_0_0_i1);
	}
	MR_r1 = (MR_sv(10) == MR_sv(20));
	MR_decr_sp_and_return(21);
MR_def_label(__Unify___ll_backend__llds__tabling_info_struct_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__tabling_info_struct_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__eval_method_0_0);

MR_BEGIN_MODULE(ll_backend__llds_module131)
	MR_init_entry1(__Compare___ll_backend__llds__tabling_info_struct_0_0);
	MR_init_label8(__Compare___ll_backend__llds__tabling_info_struct_0_0,3,2,5,9,13,17,21,25)
	MR_init_label5(__Compare___ll_backend__llds__tabling_info_struct_0_0,29,33,37,41,93)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__tabling_info_struct_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__tabling_info_struct_0_0_i3);
	}
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__tabling_info_struct_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__tabling_info_struct_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__tabling_info_struct_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(20) = MR_ctfield(0, MR_tempr5, 10);
	MR_sv(19) = MR_ctfield(0, MR_tempr5, 9);
	MR_sv(18) = MR_ctfield(0, MR_tempr5, 8);
	MR_sv(17) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(16) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(15) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(14) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(13) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(10) = MR_ctfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_ctfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_ctfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___ll_backend__llds__tabling_info_struct_0_0_i5);
MR_def_label(__Compare___ll_backend__llds__tabling_info_struct_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__tabling_info_struct_0_0_i93);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__proc_label_0_0,
		__Compare___ll_backend__llds__tabling_info_struct_0_0_i9);
MR_def_label(__Compare___ll_backend__llds__tabling_info_struct_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__tabling_info_struct_0_0_i93);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__eval_method_0_0,
		__Compare___ll_backend__llds__tabling_info_struct_0_0_i13);
MR_def_label(__Compare___ll_backend__llds__tabling_info_struct_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__tabling_info_struct_0_0_i93);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__tabling_info_struct_0_0_i17);
MR_def_label(__Compare___ll_backend__llds__tabling_info_struct_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__tabling_info_struct_0_0_i93);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__tabling_info_struct_0_0_i21);
MR_def_label(__Compare___ll_backend__llds__tabling_info_struct_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__tabling_info_struct_0_0_i93);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, table_trie_step);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__llds__tabling_info_struct_0_0_i25);
MR_def_label(__Compare___ll_backend__llds__tabling_info_struct_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__tabling_info_struct_0_0_i93);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__llds__tabling_info_struct_0_0_i29);
MR_def_label(__Compare___ll_backend__llds__tabling_info_struct_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__tabling_info_struct_0_0_i93);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__rval_0_0,
		__Compare___ll_backend__llds__tabling_info_struct_0_0_i33);
MR_def_label(__Compare___ll_backend__llds__tabling_info_struct_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__tabling_info_struct_0_0_i93);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__rval_0_0,
		__Compare___ll_backend__llds__tabling_info_struct_0_0_i37);
MR_def_label(__Compare___ll_backend__llds__tabling_info_struct_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__tabling_info_struct_0_0_i93);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(19);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__llds__tabling_info_struct_0_0_i41);
MR_def_label(__Compare___ll_backend__llds__tabling_info_struct_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__tabling_info_struct_0_0_i93);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(20);
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds__tabling_info_struct_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module132)
	MR_init_entry1(__Unify___ll_backend__llds__tag_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__tag_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module133)
	MR_init_entry1(__Compare___ll_backend__llds__tag_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__tag_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module134)
	MR_init_entry1(__Unify___ll_backend__llds__temp_frame_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__temp_frame_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module135)
	MR_init_entry1(__Compare___ll_backend__llds__temp_frame_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__temp_frame_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module136)
	MR_init_entry1(__Unify___ll_backend__llds__type_num_0_0);
	MR_init_label1(__Unify___ll_backend__llds__type_num_0_0,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__type_num_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__type_num_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__type_num_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module137)
	MR_init_entry1(__Compare___ll_backend__llds__type_num_0_0);
	MR_init_label2(__Compare___ll_backend__llds__type_num_0_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__type_num_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__type_num_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__type_num_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__type_num_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__type_num_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module138)
	MR_init_entry1(__Unify___ll_backend__llds__vector_common_data_array_0_0);
	MR_init_label6(__Unify___ll_backend__llds__vector_common_data_array_0_0,4,6,8,9,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds__vector_common_data_array_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__vector_common_data_array_0_0_i12);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___ll_backend__llds__vector_common_data_array_0_0_i4);
MR_def_label(__Unify___ll_backend__llds__vector_common_data_array_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__vector_common_data_array_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__common_cell_type_0_0,
		__Unify___ll_backend__llds__vector_common_data_array_0_0_i6);
MR_def_label(__Unify___ll_backend__llds__vector_common_data_array_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__vector_common_data_array_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(6))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__vector_common_data_array_0_0_i8);
	}
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_GOTO_LAB(__Unify___ll_backend__llds__vector_common_data_array_0_0_i9);
MR_def_label(__Unify___ll_backend__llds__vector_common_data_array_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_sv(6))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__vector_common_data_array_0_0_i1);
	}
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
MR_def_label(__Unify___ll_backend__llds__vector_common_data_array_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds__vector_common_data_array_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, common_cell_value);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__llds__vector_common_data_array_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds__vector_common_data_array_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module139)
	MR_init_entry1(__Compare___ll_backend__llds__vector_common_data_array_0_0);
	MR_init_label7(__Compare___ll_backend__llds__vector_common_data_array_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds__vector_common_data_array_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__vector_common_data_array_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds__vector_common_data_array_0_0_i2);
MR_def_label(__Compare___ll_backend__llds__vector_common_data_array_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds__vector_common_data_array_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___ll_backend__llds__vector_common_data_array_0_0_i5);
MR_def_label(__Compare___ll_backend__llds__vector_common_data_array_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__vector_common_data_array_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__common_cell_type_0_0,
		__Compare___ll_backend__llds__vector_common_data_array_0_0_i9);
MR_def_label(__Compare___ll_backend__llds__vector_common_data_array_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__vector_common_data_array_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__vector_common_data_array_0_0_i13);
MR_def_label(__Compare___ll_backend__llds__vector_common_data_array_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__vector_common_data_array_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds__vector_common_data_array_0_0_i17);
MR_def_label(__Compare___ll_backend__llds__vector_common_data_array_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds__vector_common_data_array_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, common_cell_value);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__llds__vector_common_data_array_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module140)
	MR_init_entry1(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_108_118_97_108_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_init_label2(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_108_118_97_108_95_95_91_49_44_32_50_93_95_48_2_0,5,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_108_118_97_108_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_108_118_97_108_95_95_91_49_44_32_50_93_95_48_2_0_i4);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_108_118_97_108_95_95_91_49_44_32_50_93_95_48_2_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_108_118_97_108_95_95_91_49_44_32_50_93_95_48_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_108_118_97_108_95_95_91_49_44_32_50_93_95_48_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_module141)
	MR_init_entry1(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_97_98_115_95_108_111_99_110_95_116_111_95_108_118_97_108_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_108_108_95_98_97_99_107_101_110_100_95_95_108_108_100_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_97_98_115_95_108_111_99_110_95_116_111_95_108_118_97_108_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__ll_backend__llds__abs_locn_to_lval_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__llds_maybe_bunch_0(void)
{
	ll_backend__llds_module0();
	ll_backend__llds_module1();
	ll_backend__llds_module2();
	ll_backend__llds_module3();
	ll_backend__llds_module4();
	ll_backend__llds_module5();
	ll_backend__llds_module6();
	ll_backend__llds_module7();
	ll_backend__llds_module8();
	ll_backend__llds_module9();
	ll_backend__llds_module10();
	ll_backend__llds_module11();
	ll_backend__llds_module12();
	ll_backend__llds_module13();
	ll_backend__llds_module14();
	ll_backend__llds_module15();
	ll_backend__llds_module16();
	ll_backend__llds_module17();
	ll_backend__llds_module18();
	ll_backend__llds_module19();
	ll_backend__llds_module20();
	ll_backend__llds_module21();
	ll_backend__llds_module22();
	ll_backend__llds_module23();
	ll_backend__llds_module24();
	ll_backend__llds_module25();
	ll_backend__llds_module26();
	ll_backend__llds_module27();
	ll_backend__llds_module28();
	ll_backend__llds_module29();
	ll_backend__llds_module30();
	ll_backend__llds_module31();
	ll_backend__llds_module32();
	ll_backend__llds_module33();
	ll_backend__llds_module34();
	ll_backend__llds_module35();
	ll_backend__llds_module36();
	ll_backend__llds_module37();
	ll_backend__llds_module38();
	ll_backend__llds_module39();
}

static void mercury__ll_backend__llds_maybe_bunch_1(void)
{
	ll_backend__llds_module40();
	ll_backend__llds_module41();
	ll_backend__llds_module42();
	ll_backend__llds_module43();
	ll_backend__llds_module44();
	ll_backend__llds_module45();
	ll_backend__llds_module46();
	ll_backend__llds_module47();
	ll_backend__llds_module48();
	ll_backend__llds_module49();
	ll_backend__llds_module50();
	ll_backend__llds_module51();
	ll_backend__llds_module52();
	ll_backend__llds_module53();
	ll_backend__llds_module54();
	ll_backend__llds_module55();
	ll_backend__llds_module56();
	ll_backend__llds_module57();
	ll_backend__llds_module58();
	ll_backend__llds_module59();
	ll_backend__llds_module60();
	ll_backend__llds_module61();
	ll_backend__llds_module62();
	ll_backend__llds_module63();
	ll_backend__llds_module64();
	ll_backend__llds_module65();
	ll_backend__llds_module66();
	ll_backend__llds_module67();
	ll_backend__llds_module68();
	ll_backend__llds_module69();
	ll_backend__llds_module70();
	ll_backend__llds_module71();
	ll_backend__llds_module72();
	ll_backend__llds_module73();
	ll_backend__llds_module74();
	ll_backend__llds_module75();
	ll_backend__llds_module76();
	ll_backend__llds_module77();
	ll_backend__llds_module78();
	ll_backend__llds_module79();
}

static void mercury__ll_backend__llds_maybe_bunch_2(void)
{
	ll_backend__llds_module80();
	ll_backend__llds_module81();
	ll_backend__llds_module82();
	ll_backend__llds_module83();
	ll_backend__llds_module84();
	ll_backend__llds_module85();
	ll_backend__llds_module86();
	ll_backend__llds_module87();
	ll_backend__llds_module88();
	ll_backend__llds_module89();
	ll_backend__llds_module90();
	ll_backend__llds_module91();
	ll_backend__llds_module92();
	ll_backend__llds_module93();
	ll_backend__llds_module94();
	ll_backend__llds_module95();
	ll_backend__llds_module96();
	ll_backend__llds_module97();
	ll_backend__llds_module98();
	ll_backend__llds_module99();
	ll_backend__llds_module100();
	ll_backend__llds_module101();
	ll_backend__llds_module102();
	ll_backend__llds_module103();
	ll_backend__llds_module104();
	ll_backend__llds_module105();
	ll_backend__llds_module106();
	ll_backend__llds_module107();
	ll_backend__llds_module108();
	ll_backend__llds_module109();
	ll_backend__llds_module110();
	ll_backend__llds_module111();
	ll_backend__llds_module112();
	ll_backend__llds_module113();
	ll_backend__llds_module114();
	ll_backend__llds_module115();
	ll_backend__llds_module116();
	ll_backend__llds_module117();
	ll_backend__llds_module118();
	ll_backend__llds_module119();
}

static void mercury__ll_backend__llds_maybe_bunch_3(void)
{
	ll_backend__llds_module120();
	ll_backend__llds_module121();
	ll_backend__llds_module122();
	ll_backend__llds_module123();
	ll_backend__llds_module124();
	ll_backend__llds_module125();
	ll_backend__llds_module126();
	ll_backend__llds_module127();
	ll_backend__llds_module128();
	ll_backend__llds_module129();
	ll_backend__llds_module130();
	ll_backend__llds_module131();
	ll_backend__llds_module132();
	ll_backend__llds_module133();
	ll_backend__llds_module134();
	ll_backend__llds_module135();
	ll_backend__llds_module136();
	ll_backend__llds_module137();
	ll_backend__llds_module138();
	ll_backend__llds_module139();
	ll_backend__llds_module140();
	ll_backend__llds_module141();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__llds__init(void);
void mercury__ll_backend__llds__init_type_tables(void);
void mercury__ll_backend__llds__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__llds__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__llds__init_complexity_procs(void);
#endif

void mercury__ll_backend__llds__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__llds_maybe_bunch_0();
	mercury__ll_backend__llds_maybe_bunch_1();
	mercury__ll_backend__llds_maybe_bunch_2();
	mercury__ll_backend__llds_maybe_bunch_3();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_vector_common_data_array_0,
		ll_backend__llds__vector_common_data_array_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_type_num_0,
		ll_backend__llds__type_num_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_temp_frame_type_0,
		ll_backend__llds__temp_frame_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_tag_0,
		ll_backend__llds__tag_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_tabling_info_struct_0,
		ll_backend__llds__tabling_info_struct_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_stack_incr_kind_0,
		ll_backend__llds__stack_incr_kind_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_scalar_common_data_array_0,
		ll_backend__llds__scalar_common_data_array_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_rval_const_0,
		ll_backend__llds__rval_const_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_rval_0,
		ll_backend__llds__rval_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_reset_trail_reason_0,
		ll_backend__llds__reset_trail_reason_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_removed_at_start_of_else_0,
		ll_backend__llds__removed_at_start_of_else_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_region_use_frame_op_0,
		ll_backend__llds__region_use_frame_op_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_region_stack_id_0,
		ll_backend__llds__region_stack_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_region_set_fixed_op_0,
		ll_backend__llds__region_set_fixed_op_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_region_ite_kind_0,
		ll_backend__llds__region_ite_kind_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_region_fill_frame_op_0,
		ll_backend__llds__region_fill_frame_op_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_reg_type_0,
		ll_backend__llds__reg_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_nondet_tail_call_0,
		ll_backend__llds__nondet_tail_call_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_nondet_frame_info_0,
		ll_backend__llds__nondet_frame_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_mem_ref_0,
		ll_backend__llds__mem_ref_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_may_alter_rtti_0,
		ll_backend__llds__may_alter_rtti_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_main_stack_0,
		ll_backend__llds__main_stack_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_lval_or_any_reg_0,
		ll_backend__llds__lval_or_any_reg_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_lval_0,
		ll_backend__llds__lval_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_llds_type_0,
		ll_backend__llds__llds_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_llds_proc_id_0,
		ll_backend__llds__llds_proc_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_llds_inst_0,
		ll_backend__llds__llds_inst_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_liveinfo_0,
		ll_backend__llds__liveinfo_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_live_value_type_0,
		ll_backend__llds__live_value_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0,
		ll_backend__llds__layout_locn_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_label_0,
		ll_backend__llds__label_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_instruction_0,
		ll_backend__llds__instruction_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_instr_0,
		ll_backend__llds__instr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_ho_call_variant_0,
		ll_backend__llds__ho_call_variant_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_type_0,
		ll_backend__llds__foreign_proc_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_struct_0,
		ll_backend__llds__foreign_proc_struct_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_output_0,
		ll_backend__llds__foreign_proc_output_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_input_0,
		ll_backend__llds__foreign_proc_input_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_decl_0,
		ll_backend__llds__foreign_proc_decl_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_component_0,
		ll_backend__llds__foreign_proc_component_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_foreign_interface_info_0,
		ll_backend__llds__foreign_interface_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_entry_label_type_0,
		ll_backend__llds__entry_label_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0,
		ll_backend__llds__embedded_stack_frame_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_data_name_0,
		ll_backend__llds__data_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_data_addr_0,
		ll_backend__llds__data_addr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_comp_gen_c_module_0,
		ll_backend__llds__comp_gen_c_module_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_common_cell_value_0,
		ll_backend__llds__common_cell_value_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_common_cell_type_0,
		ll_backend__llds__common_cell_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_common_cell_arg_group_0,
		ll_backend__llds__common_cell_arg_group_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_code_tree_0,
		ll_backend__llds__code_tree_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_code_addr_0,
		ll_backend__llds__code_addr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_can_branch_away_0,
		ll_backend__llds__can_branch_away_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_call_model_0,
		ll_backend__llds__call_model_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_c_procedure_0,
		ll_backend__llds__c_procedure_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_c_global_var_ref_0,
		ll_backend__llds__c_global_var_ref_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_c_file_0,
		ll_backend__llds__c_file_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_c_code_live_lvals_0,
		ll_backend__llds__c_code_live_lvals_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_add_trail_ops_0,
		ll_backend__llds__add_trail_ops_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds__type_ctor_info_add_region_ops_0,
		ll_backend__llds__add_region_ops_0_0);
	mercury__ll_backend__llds__init_debugger();
}

void mercury__ll_backend__llds__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_vector_common_data_array_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_type_num_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_temp_frame_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_tag_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_tabling_info_struct_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_stack_incr_kind_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_scalar_common_data_array_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_rval_const_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_rval_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_reset_trail_reason_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_removed_at_start_of_else_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_region_use_frame_op_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_region_stack_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_region_set_fixed_op_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_region_ite_kind_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_region_fill_frame_op_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_reg_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_nondet_tail_call_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_nondet_frame_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_mem_ref_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_may_alter_rtti_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_main_stack_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_lval_or_any_reg_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_lval_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_llds_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_llds_proc_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_llds_inst_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_liveinfo_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_live_value_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_label_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_instruction_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_instr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_ho_call_variant_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_struct_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_output_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_input_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_decl_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_component_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_foreign_interface_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_entry_label_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_data_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_data_addr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_comp_gen_c_module_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_common_cell_value_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_common_cell_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_common_cell_arg_group_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_code_tree_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_code_addr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_can_branch_away_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_call_model_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_c_procedure_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_c_global_var_ref_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_c_file_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_c_code_live_lvals_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_add_trail_ops_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds__type_ctor_info_add_region_ops_0);
	}
}


void mercury__ll_backend__llds__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__llds__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__llds);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__llds__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
