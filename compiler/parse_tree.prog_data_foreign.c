/*
** Automatically generated from `prog_data_foreign.m'
** by the Mercury compiler,
** version rotd-2018-05-13
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


// :- module parse_tree.prog_data_foreign.
// :- implementation.

/*
INIT mercury__parse_tree__prog_data_foreign__init
ENDINIT
*/

#include "parse_tree.prog_data_foreign.mih"


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
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
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
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_box_policy_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_box_policy_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_box_policy_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_box_policy_0[2];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_box_policy_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_foreign__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_export_enum_attributes_0_0[2];

static const MR_ConstString parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_names_export_enum_attributes_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_export_enum_attributes_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_export_enum_attributes_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_export_enum_attributes_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_export_enum_attributes_0[1];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_export_enum_attributes_0[1];

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_foreign_arg_name_mode_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_arg_name_mode_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_foreign_arg_name_mode_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_foreign_arg_name_mode_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_foreign_arg_name_mode_0[1];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_arg_name_mode_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_foreign__maybe__ti_maybe_1parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0;

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_foreign_arg_name_mode_box_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_arg_name_mode_box_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_foreign_arg_name_mode_box_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_foreign_arg_name_mode_box_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_foreign_arg_name_mode_box_0[1];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_arg_name_mode_box_0[1];

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_foreign_decl_is_local_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_foreign_decl_is_local_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_foreign_decl_is_local_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_foreign_decl_is_local_0[2];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_decl_is_local_0[2];

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_foreign_import_module_info_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_import_module_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_foreign_import_module_info_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_foreign_import_module_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_foreign_import_module_info_0[1];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_import_module_info_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_foreign__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_foreign_import_modules_0_0[4];

static const MR_ConstString parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_names_foreign_import_modules_0_0[4];

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_import_modules_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_foreign_import_modules_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_foreign_import_modules_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_foreign_import_modules_0[1];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_import_modules_0[1];

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_foreign_include_file_info_0_0[2];

static const MR_ConstString parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_names_foreign_include_file_info_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_include_file_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_foreign_include_file_info_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_foreign_include_file_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_foreign_include_file_info_0[1];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_include_file_info_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_foreign__cord__ti_cord_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0;

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_foreign_literal_or_include_0_0[1];

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_literal_or_include_0_0;

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_foreign_literal_or_include_0_1[1];

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_literal_or_include_0_1;

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_foreign_literal_or_include_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_foreign_literal_or_include_0_1[1];

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_foreign_literal_or_include_0[2];

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_foreign_literal_or_include_0[2];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_literal_or_include_0[2];

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_foreign_proc_shared_code_treatment_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_foreign_proc_shared_code_treatment_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_foreign_proc_shared_code_treatment_0_2;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_foreign_proc_shared_code_treatment_0[3];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_foreign_proc_shared_code_treatment_0[3];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_proc_shared_code_treatment_0[3];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_foreign__maybe__ti_maybe_1parse_tree__prog_data_foreign__type_ctor_info_proc_may_duplicate_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_foreign__list__ti_list_1parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_extra_attribute_0;

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_pragma_foreign_proc_attributes_0_0[17];

static const MR_ConstString parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_names_pragma_foreign_proc_attributes_0_0[17];

static const MR_DuArgLocn parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_locns_pragma_foreign_proc_attributes_0_0[17];

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_foreign_proc_attributes_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_pragma_foreign_proc_attributes_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_pragma_foreign_proc_attributes_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_pragma_foreign_proc_attributes_0[1];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_pragma_foreign_proc_attributes_0[1];

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_foreign_proc_extra_attribute_0_0;

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_pragma_foreign_proc_extra_attribute_0_1[1];

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_foreign_proc_extra_attribute_0_1;

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_foreign_proc_extra_attribute_0_2;

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_pragma_foreign_proc_extra_attribute_0_0[2];

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_pragma_foreign_proc_extra_attribute_0_1[1];

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_pragma_foreign_proc_extra_attribute_0[2];

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_pragma_foreign_proc_extra_attribute_0[3];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_pragma_foreign_proc_extra_attribute_0[3];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_foreign__maybe__ti_maybe_1term__type_ctor_info_context_0;

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_pragma_foreign_proc_impl_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_foreign_proc_impl_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_pragma_foreign_proc_impl_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_pragma_foreign_proc_impl_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_pragma_foreign_proc_impl_0[1];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_pragma_foreign_proc_impl_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_foreign__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_pragma_var_0_0[4];

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_var_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_pragma_var_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_pragma_var_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_pragma_var_0[1];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_pragma_var_0[1];

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_affects_liveness_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_affects_liveness_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_affects_liveness_0_2;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_affects_liveness_0[3];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_affects_liveness_0[3];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_affects_liveness_0[3];

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_allocates_memory_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_allocates_memory_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_allocates_memory_0_2;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_allocates_memory_0_3;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_allocates_memory_0[4];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_allocates_memory_0[4];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_allocates_memory_0[4];

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_call_mercury_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_call_mercury_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_may_call_mercury_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_may_call_mercury_0[2];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_may_call_mercury_0[2];

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_call_mm_tabled_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_call_mm_tabled_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_call_mm_tabled_0_2;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_may_call_mm_tabled_0[3];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_may_call_mm_tabled_0[3];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_may_call_mm_tabled_0[3];

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_duplicate_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_duplicate_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_may_duplicate_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_may_duplicate_0[2];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_may_duplicate_0[2];

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_modify_trail_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_modify_trail_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_may_modify_trail_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_may_modify_trail_0[2];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_may_modify_trail_0[2];

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_throw_exception_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_throw_exception_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_may_throw_exception_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_may_throw_exception_0[2];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_may_throw_exception_0[2];

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_registers_roots_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_registers_roots_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_registers_roots_0_2;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_registers_roots_0_3;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_registers_roots_0[4];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_registers_roots_0[4];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_registers_roots_0[4];

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_tabled_for_io_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_tabled_for_io_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_tabled_for_io_0_2;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_tabled_for_io_0_3;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_tabled_for_io_0[4];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_tabled_for_io_0[4];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_tabled_for_io_0[4];

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_terminates_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_terminates_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_terminates_0_2;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_terminates_0[3];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_terminates_0[3];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_terminates_0[3];

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_thread_safe_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_thread_safe_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_thread_safe_0_2;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_thread_safe_0[3];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_thread_safe_0[3];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_thread_safe_0[3];

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_uppercase_export_enum_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_uppercase_export_enum_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_uppercase_export_enum_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_uppercase_export_enum_0[2];

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_uppercase_export_enum_0[2];

static MR_Word MR_CALL 
parse_tree__prog_data_foreign__make_foreign_import_module_info_2_f_0(
  MR_Word Lang_4,
  MR_Word ModuleName_5);

static MR_Box MR_CALL 
parse_tree__prog_data_foreign__get_lang_foreign_import_module_infos_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__prog_data_foreign__get_all_foreign_import_module_infos_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__prog_data_foreign__get_all_foreign_import_module_infos_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__prog_data_foreign__get_all_foreign_import_module_infos_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__prog_data_foreign__get_all_foreign_import_module_infos_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____box_policy_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____box_policy_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____export_enum_attributes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____export_enum_attributes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_arg_name_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_arg_name_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_arg_name_mode_box_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_arg_name_mode_box_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_decl_is_local_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_decl_is_local_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_import_module_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_import_module_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_import_modules_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_import_modules_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_include_file_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_include_file_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_include_file_infos_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_include_file_infos_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_literal_or_include_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_literal_or_include_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_proc_shared_code_treatment_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_proc_shared_code_treatment_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_attributes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____pragma_foreign_proc_attributes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_extra_attribute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____pragma_foreign_proc_extra_attribute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_extra_attributes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____pragma_foreign_proc_extra_attributes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_impl_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____pragma_foreign_proc_impl_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____pragma_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____pragma_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_affects_liveness_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_affects_liveness_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_allocates_memory_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_allocates_memory_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_may_call_mercury_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_may_call_mercury_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_may_call_mm_tabled_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_may_call_mm_tabled_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_may_duplicate_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_may_duplicate_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_may_modify_trail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_may_modify_trail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_may_throw_exception_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_may_throw_exception_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_registers_roots_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_registers_roots_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_tabled_for_io_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_tabled_for_io_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_terminates_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_terminates_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_thread_safe_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_thread_safe_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____uppercase_export_enum_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____uppercase_export_enum_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_data_foreign_scalar_common_1[9][2];

static /* final */ const MR_Box parse_tree__prog_data_foreign_scalar_common_2[1][6];

static /* final */ const MR_Box parse_tree__prog_data_foreign_scalar_common_3[4][4];




static /* final */ const MR_Box parse_tree__prog_data_foreign_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_duplicate_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_extra_attribute_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__prog_data_foreign_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_data_foreign_scalar_common_3[4][4] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_data_foreign_scalar_common_2[0])),
    ((MR_Box) (parse_tree__prog_data_foreign__get_all_foreign_import_module_infos_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_data_foreign_scalar_common_2[0])),
    ((MR_Box) (parse_tree__prog_data_foreign__get_all_foreign_import_module_infos_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_data_foreign_scalar_common_2[0])),
    ((MR_Box) (parse_tree__prog_data_foreign__get_all_foreign_import_module_infos_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_data_foreign_scalar_common_2[0])),
    ((MR_Box) (parse_tree__prog_data_foreign__get_all_foreign_import_module_infos_1_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_box_policy_0_0 = {
  (MR_String) "bp_native_if_possible",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_box_policy_0_1 = {
  (MR_String) "bp_always_boxed",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_box_policy_0[2] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_box_policy_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_box_policy_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_box_policy_0[2] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_box_policy_0_1,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_box_policy_0_0
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_box_policy_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_box_policy_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____box_policy_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____box_policy_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "box_policy",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_box_policy_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_box_policy_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_box_policy_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_foreign__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_export_enum_attributes_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__maybe__ti_maybe_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_uppercase_export_enum_0
};

static const MR_ConstString parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_names_export_enum_attributes_0_0[2] = {
  (MR_String) "ee_attr_prefix",
  (MR_String) "ee_attr_upper"
};

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_export_enum_attributes_0_0 = {
  (MR_String) "export_enum_attributes",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_export_enum_attributes_0_0,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_names_export_enum_attributes_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_export_enum_attributes_0_0[1] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_export_enum_attributes_0_0
};

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_export_enum_attributes_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_export_enum_attributes_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_export_enum_attributes_0[1] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_export_enum_attributes_0_0
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_export_enum_attributes_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_export_enum_attributes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____export_enum_attributes_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____export_enum_attributes_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "export_enum_attributes",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_export_enum_attributes_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_export_enum_attributes_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_export_enum_attributes_0
};

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_foreign_arg_name_mode_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
};

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_arg_name_mode_0_0 = {
  (MR_String) "foreign_arg_name_mode",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_foreign_arg_name_mode_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_foreign_arg_name_mode_0_0[1] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_arg_name_mode_0_0
};

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_foreign_arg_name_mode_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_foreign_arg_name_mode_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_foreign_arg_name_mode_0[1] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_arg_name_mode_0_0
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_arg_name_mode_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____foreign_arg_name_mode_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____foreign_arg_name_mode_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "foreign_arg_name_mode",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_foreign_arg_name_mode_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_foreign_arg_name_mode_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_arg_name_mode_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_foreign__maybe__ti_maybe_1parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_foreign_arg_name_mode_box_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__maybe__ti_maybe_1parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_box_policy_0
};

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_arg_name_mode_box_0_0 = {
  (MR_String) "foreign_arg_name_mode_box",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_foreign_arg_name_mode_box_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_foreign_arg_name_mode_box_0_0[1] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_arg_name_mode_box_0_0
};

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_foreign_arg_name_mode_box_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_foreign_arg_name_mode_box_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_foreign_arg_name_mode_box_0[1] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_arg_name_mode_box_0_0
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_arg_name_mode_box_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____foreign_arg_name_mode_box_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____foreign_arg_name_mode_box_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "foreign_arg_name_mode_box",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_foreign_arg_name_mode_box_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_foreign_arg_name_mode_box_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_arg_name_mode_box_0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_foreign_decl_is_local_0_0 = {
  (MR_String) "foreign_decl_is_local",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_foreign_decl_is_local_0_1 = {
  (MR_String) "foreign_decl_is_exported",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_foreign_decl_is_local_0[2] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_foreign_decl_is_local_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_foreign_decl_is_local_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_foreign_decl_is_local_0[2] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_foreign_decl_is_local_0_1,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_foreign_decl_is_local_0_0
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_decl_is_local_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____foreign_decl_is_local_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____foreign_decl_is_local_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "foreign_decl_is_local",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_foreign_decl_is_local_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_foreign_decl_is_local_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_decl_is_local_0
};

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_foreign_import_module_info_0_0[2] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_import_module_info_0_0 = {
  (MR_String) "foreign_import_module_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_foreign_import_module_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_foreign_import_module_info_0_0[1] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_import_module_info_0_0
};

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_foreign_import_module_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_foreign_import_module_info_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_foreign_import_module_info_0[1] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_import_module_info_0_0
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_import_module_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____foreign_import_module_info_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____foreign_import_module_info_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "foreign_import_module_info",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_foreign_import_module_info_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_foreign_import_module_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_import_module_info_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_foreign__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_foreign_import_modules_0_0[4] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0
};

static const MR_ConstString parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_names_foreign_import_modules_0_0[4] = {
  (MR_String) "fim_c",
  (MR_String) "fim_csharp",
  (MR_String) "fim_java",
  (MR_String) "fim_erlang"
};

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_import_modules_0_0 = {
  (MR_String) "foreign_import_modules",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_foreign_import_modules_0_0,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_names_foreign_import_modules_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_foreign_import_modules_0_0[1] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_import_modules_0_0
};

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_foreign_import_modules_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_foreign_import_modules_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_foreign_import_modules_0[1] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_import_modules_0_0
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_import_modules_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____foreign_import_modules_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____foreign_import_modules_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "foreign_import_modules",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_foreign_import_modules_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_foreign_import_modules_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_import_modules_0
};

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_foreign_include_file_info_0_0[2] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_ConstString parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_names_foreign_include_file_info_0_0[2] = {
  (MR_String) "fifi_lang",
  (MR_String) "fifi_filename"
};

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_include_file_info_0_0 = {
  (MR_String) "foreign_include_file_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_foreign_include_file_info_0_0,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_names_foreign_include_file_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_foreign_include_file_info_0_0[1] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_include_file_info_0_0
};

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_foreign_include_file_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_foreign_include_file_info_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_foreign_include_file_info_0[1] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_include_file_info_0_0
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_include_file_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____foreign_include_file_info_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____foreign_include_file_info_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "foreign_include_file_info",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_foreign_include_file_info_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_foreign_include_file_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_include_file_info_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_foreign__cord__ti_cord_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_infos_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____foreign_include_file_infos_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____foreign_include_file_infos_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "foreign_include_file_infos",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__cord__ti_cord_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_foreign_literal_or_include_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_literal_or_include_0_0 = {
  (MR_String) "floi_literal",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_foreign_literal_or_include_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_foreign_literal_or_include_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_literal_or_include_0_1 = {
  (MR_String) "floi_include_file",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_foreign_literal_or_include_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_foreign_literal_or_include_0_0[1] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_literal_or_include_0_0
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_foreign_literal_or_include_0_1[1] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_literal_or_include_0_1
};

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_foreign_literal_or_include_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_foreign_literal_or_include_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_foreign_literal_or_include_0_1
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_foreign_literal_or_include_0[2] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_literal_or_include_0_1,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_foreign_literal_or_include_0_0
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_literal_or_include_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_literal_or_include_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____foreign_literal_or_include_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____foreign_literal_or_include_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "foreign_literal_or_include",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_foreign_literal_or_include_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_foreign_literal_or_include_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_literal_or_include_0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_foreign_proc_shared_code_treatment_0_0 = {
  (MR_String) "shared_code_duplicate",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_foreign_proc_shared_code_treatment_0_1 = {
  (MR_String) "shared_code_share",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_foreign_proc_shared_code_treatment_0_2 = {
  (MR_String) "shared_code_automatic",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_foreign_proc_shared_code_treatment_0[3] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_foreign_proc_shared_code_treatment_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_foreign_proc_shared_code_treatment_0_1,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_foreign_proc_shared_code_treatment_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_foreign_proc_shared_code_treatment_0[3] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_foreign_proc_shared_code_treatment_0_2,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_foreign_proc_shared_code_treatment_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_foreign_proc_shared_code_treatment_0_1
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_proc_shared_code_treatment_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_proc_shared_code_treatment_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____foreign_proc_shared_code_treatment_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____foreign_proc_shared_code_treatment_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "foreign_proc_shared_code_treatment",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_foreign_proc_shared_code_treatment_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_foreign_proc_shared_code_treatment_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_foreign_proc_shared_code_treatment_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_foreign__maybe__ti_maybe_1parse_tree__prog_data_foreign__type_ctor_info_proc_may_duplicate_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_duplicate_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_foreign__list__ti_list_1parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_extra_attribute_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_extra_attribute_0
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_pragma_foreign_proc_attributes_0_0[17] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_call_mercury_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_thread_safe_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_tabled_for_io_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_terminates_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_user_annotated_sharing_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_throw_exception_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_modify_trail_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_call_mm_tabled_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_box_policy_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_affects_liveness_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_allocates_memory_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_registers_roots_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__maybe__ti_maybe_1parse_tree__prog_data_foreign__type_ctor_info_proc_may_duplicate_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__list__ti_list_1parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_extra_attribute_0
};

static const MR_ConstString parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_names_pragma_foreign_proc_attributes_0_0[17] = {
  (MR_String) "attr_foreign_language",
  (MR_String) "attr_may_call_mercury",
  (MR_String) "attr_thread_safe",
  (MR_String) "attr_tabled_for_io",
  (MR_String) "attr_purity",
  (MR_String) "attr_terminates",
  (MR_String) "attr_user_annotated_sharing",
  (MR_String) "attr_may_throw_exception",
  (MR_String) "attr_ordinary_despite_detism",
  (MR_String) "attr_may_modify_trail",
  (MR_String) "attr_may_call_mm_tabled",
  (MR_String) "attr_box_policy",
  (MR_String) "attr_affects_liveness",
  (MR_String) "attr_allocates_memory",
  (MR_String) "attr_registers_roots",
  (MR_String) "attr_may_duplicate",
  (MR_String) "attr_extra_attributes"
};

static const MR_DuArgLocn parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_locns_pragma_foreign_proc_attributes_0_0[17] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 5,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 7,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 9,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 3,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 6,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 8,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 10,
    (MR_Integer) 2
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
  }
};

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_foreign_proc_attributes_0_0 = {
  (MR_String) "attributes",
  (MR_Integer) 17,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_pragma_foreign_proc_attributes_0_0,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_names_pragma_foreign_proc_attributes_0_0,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_locns_pragma_foreign_proc_attributes_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_pragma_foreign_proc_attributes_0_0[1] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_foreign_proc_attributes_0_0
};

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_pragma_foreign_proc_attributes_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_pragma_foreign_proc_attributes_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_pragma_foreign_proc_attributes_0[1] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_foreign_proc_attributes_0_0
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_pragma_foreign_proc_attributes_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_attributes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_attributes_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____pragma_foreign_proc_attributes_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "pragma_foreign_proc_attributes",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_pragma_foreign_proc_attributes_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_pragma_foreign_proc_attributes_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_pragma_foreign_proc_attributes_0
};

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_foreign_proc_extra_attribute_0_0 = {
  (MR_String) "refers_to_llds_stack",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_pragma_foreign_proc_extra_attribute_0_1[1] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_backend_0
};

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_foreign_proc_extra_attribute_0_1 = {
  (MR_String) "backend",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_pragma_foreign_proc_extra_attribute_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_foreign_proc_extra_attribute_0_2 = {
  (MR_String) "needs_call_standard_output_registers",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_pragma_foreign_proc_extra_attribute_0_0[2] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_foreign_proc_extra_attribute_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_foreign_proc_extra_attribute_0_2
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_pragma_foreign_proc_extra_attribute_0_1[1] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_foreign_proc_extra_attribute_0_1
};

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_pragma_foreign_proc_extra_attribute_0[2] = {
  {
    (MR_Integer) 2,
    MR_SECTAG_LOCAL,
    parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_pragma_foreign_proc_extra_attribute_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_pragma_foreign_proc_extra_attribute_0_1
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_pragma_foreign_proc_extra_attribute_0[3] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_foreign_proc_extra_attribute_0_1,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_foreign_proc_extra_attribute_0_2,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_foreign_proc_extra_attribute_0_0
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_pragma_foreign_proc_extra_attribute_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_extra_attribute_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_extra_attribute_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____pragma_foreign_proc_extra_attribute_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "pragma_foreign_proc_extra_attribute",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_pragma_foreign_proc_extra_attribute_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_pragma_foreign_proc_extra_attribute_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_pragma_foreign_proc_extra_attribute_0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_extra_attributes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_extra_attributes_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____pragma_foreign_proc_extra_attributes_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "pragma_foreign_proc_extra_attributes",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__list__ti_list_1parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_extra_attribute_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_foreign__maybe__ti_maybe_1term__type_ctor_info_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_pragma_foreign_proc_impl_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__maybe__ti_maybe_1term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_foreign_proc_impl_0_0 = {
  (MR_String) "fp_impl_ordinary",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_pragma_foreign_proc_impl_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_pragma_foreign_proc_impl_0_0[1] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_foreign_proc_impl_0_0
};

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_pragma_foreign_proc_impl_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_pragma_foreign_proc_impl_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_pragma_foreign_proc_impl_0[1] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_foreign_proc_impl_0_0
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_pragma_foreign_proc_impl_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_impl_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_impl_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____pragma_foreign_proc_impl_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "pragma_foreign_proc_impl",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_pragma_foreign_proc_impl_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_pragma_foreign_proc_impl_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_pragma_foreign_proc_impl_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_foreign__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_pragma_var_0_0[4] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_box_policy_0
};

static const MR_DuFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_var_0_0 = {
  (MR_String) "pragma_var",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__field_types_pragma_var_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_pragma_var_0_0[1] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_var_0_0
};

static const MR_DuPtagLayout parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_pragma_var_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_stag_ordered_pragma_var_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_pragma_var_0[1] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_functor_desc_pragma_var_0_0
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_pragma_var_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____pragma_var_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____pragma_var_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "pragma_var",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_name_ordered_pragma_var_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__du_ptag_ordered_pragma_var_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_pragma_var_0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_affects_liveness_0_0 = {
  (MR_String) "proc_affects_liveness",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_affects_liveness_0_1 = {
  (MR_String) "proc_does_not_affect_liveness",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_affects_liveness_0_2 = {
  (MR_String) "proc_default_affects_liveness",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_affects_liveness_0[3] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_affects_liveness_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_affects_liveness_0_1,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_affects_liveness_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_affects_liveness_0[3] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_affects_liveness_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_affects_liveness_0_2,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_affects_liveness_0_1
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_affects_liveness_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_affects_liveness_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____proc_affects_liveness_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____proc_affects_liveness_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "proc_affects_liveness",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_affects_liveness_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_affects_liveness_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_affects_liveness_0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_allocates_memory_0_0 = {
  (MR_String) "proc_does_not_allocate_memory",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_allocates_memory_0_1 = {
  (MR_String) "proc_allocates_bounded_memory",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_allocates_memory_0_2 = {
  (MR_String) "proc_allocates_unbounded_memory",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_allocates_memory_0_3 = {
  (MR_String) "proc_default_allocates_memory",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_allocates_memory_0[4] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_allocates_memory_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_allocates_memory_0_1,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_allocates_memory_0_2,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_allocates_memory_0_3
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_allocates_memory_0[4] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_allocates_memory_0_1,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_allocates_memory_0_2,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_allocates_memory_0_3,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_allocates_memory_0_0
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_allocates_memory_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_allocates_memory_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____proc_allocates_memory_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____proc_allocates_memory_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "proc_allocates_memory",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_allocates_memory_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_allocates_memory_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_allocates_memory_0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_call_mercury_0_0 = {
  (MR_String) "proc_may_call_mercury",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_call_mercury_0_1 = {
  (MR_String) "proc_will_not_call_mercury",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_may_call_mercury_0[2] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_call_mercury_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_call_mercury_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_may_call_mercury_0[2] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_call_mercury_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_call_mercury_0_1
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_may_call_mercury_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_call_mercury_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____proc_may_call_mercury_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____proc_may_call_mercury_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "proc_may_call_mercury",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_may_call_mercury_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_may_call_mercury_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_may_call_mercury_0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_call_mm_tabled_0_0 = {
  (MR_String) "proc_may_call_mm_tabled",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_call_mm_tabled_0_1 = {
  (MR_String) "proc_will_not_call_mm_tabled",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_call_mm_tabled_0_2 = {
  (MR_String) "proc_default_calls_mm_tabled",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_may_call_mm_tabled_0[3] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_call_mm_tabled_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_call_mm_tabled_0_1,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_call_mm_tabled_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_may_call_mm_tabled_0[3] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_call_mm_tabled_0_2,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_call_mm_tabled_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_call_mm_tabled_0_1
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_may_call_mm_tabled_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_call_mm_tabled_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____proc_may_call_mm_tabled_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____proc_may_call_mm_tabled_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "proc_may_call_mm_tabled",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_may_call_mm_tabled_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_may_call_mm_tabled_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_may_call_mm_tabled_0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_duplicate_0_0 = {
  (MR_String) "proc_may_duplicate",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_duplicate_0_1 = {
  (MR_String) "proc_may_not_duplicate",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_may_duplicate_0[2] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_duplicate_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_duplicate_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_may_duplicate_0[2] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_duplicate_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_duplicate_0_1
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_may_duplicate_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_duplicate_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____proc_may_duplicate_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____proc_may_duplicate_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "proc_may_duplicate",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_may_duplicate_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_may_duplicate_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_may_duplicate_0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_modify_trail_0_0 = {
  (MR_String) "proc_may_modify_trail",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_modify_trail_0_1 = {
  (MR_String) "proc_will_not_modify_trail",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_may_modify_trail_0[2] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_modify_trail_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_modify_trail_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_may_modify_trail_0[2] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_modify_trail_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_modify_trail_0_1
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_may_modify_trail_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_modify_trail_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____proc_may_modify_trail_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____proc_may_modify_trail_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "proc_may_modify_trail",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_may_modify_trail_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_may_modify_trail_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_may_modify_trail_0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_throw_exception_0_0 = {
  (MR_String) "proc_will_not_throw_exception",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_throw_exception_0_1 = {
  (MR_String) "default_exception_behaviour",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_may_throw_exception_0[2] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_throw_exception_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_throw_exception_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_may_throw_exception_0[2] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_throw_exception_0_1,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_may_throw_exception_0_0
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_may_throw_exception_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_throw_exception_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____proc_may_throw_exception_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____proc_may_throw_exception_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "proc_may_throw_exception",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_may_throw_exception_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_may_throw_exception_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_may_throw_exception_0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_registers_roots_0_0 = {
  (MR_String) "proc_registers_roots",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_registers_roots_0_1 = {
  (MR_String) "proc_does_not_register_roots",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_registers_roots_0_2 = {
  (MR_String) "proc_does_not_have_roots",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_registers_roots_0_3 = {
  (MR_String) "proc_default_registers_roots",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_registers_roots_0[4] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_registers_roots_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_registers_roots_0_1,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_registers_roots_0_2,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_registers_roots_0_3
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_registers_roots_0[4] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_registers_roots_0_3,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_registers_roots_0_2,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_registers_roots_0_1,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_registers_roots_0_0
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_registers_roots_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_registers_roots_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____proc_registers_roots_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____proc_registers_roots_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "proc_registers_roots",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_registers_roots_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_registers_roots_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_registers_roots_0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_tabled_for_io_0_0 = {
  (MR_String) "proc_not_tabled_for_io",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_tabled_for_io_0_1 = {
  (MR_String) "proc_tabled_for_io",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_tabled_for_io_0_2 = {
  (MR_String) "proc_tabled_for_io_unitize",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_tabled_for_io_0_3 = {
  (MR_String) "proc_tabled_for_descendant_io",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_tabled_for_io_0[4] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_tabled_for_io_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_tabled_for_io_0_1,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_tabled_for_io_0_2,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_tabled_for_io_0_3
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_tabled_for_io_0[4] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_tabled_for_io_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_tabled_for_io_0_3,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_tabled_for_io_0_1,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_tabled_for_io_0_2
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_tabled_for_io_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_tabled_for_io_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____proc_tabled_for_io_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____proc_tabled_for_io_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "proc_tabled_for_io",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_tabled_for_io_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_tabled_for_io_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_tabled_for_io_0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_terminates_0_0 = {
  (MR_String) "proc_terminates",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_terminates_0_1 = {
  (MR_String) "proc_does_not_terminate",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_terminates_0_2 = {
  (MR_String) "depends_on_mercury_calls",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_terminates_0[3] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_terminates_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_terminates_0_1,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_terminates_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_terminates_0[3] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_terminates_0_2,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_terminates_0_1,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_terminates_0_0
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_terminates_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_terminates_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____proc_terminates_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____proc_terminates_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "proc_terminates",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_terminates_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_terminates_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_terminates_0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_thread_safe_0_0 = {
  (MR_String) "proc_not_thread_safe",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_thread_safe_0_1 = {
  (MR_String) "proc_thread_safe",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_thread_safe_0_2 = {
  (MR_String) "proc_maybe_thread_safe",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_thread_safe_0[3] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_thread_safe_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_thread_safe_0_1,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_thread_safe_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_thread_safe_0[3] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_thread_safe_0_2,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_thread_safe_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_proc_thread_safe_0_1
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_thread_safe_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_thread_safe_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____proc_thread_safe_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____proc_thread_safe_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "proc_thread_safe",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_proc_thread_safe_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_proc_thread_safe_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_proc_thread_safe_0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_uppercase_export_enum_0_0 = {
  (MR_String) "uppercase_export_enum",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_uppercase_export_enum_0_1 = {
  (MR_String) "do_not_uppercase_export_enum",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_uppercase_export_enum_0[2] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_uppercase_export_enum_0_0,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_uppercase_export_enum_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_uppercase_export_enum_0[2] = {
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_uppercase_export_enum_0_1,
  &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_functor_desc_uppercase_export_enum_0_0
};

static const MR_Integer parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_uppercase_export_enum_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_uppercase_export_enum_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_foreign____Unify____uppercase_export_enum_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_foreign____Compare____uppercase_export_enum_0_0_10001)),
  (MR_String) "parse_tree.prog_data_foreign",
  (MR_String) "uppercase_export_enum",
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_name_ordered_uppercase_export_enum_0 },
  {     parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__enum_value_ordered_uppercase_export_enum_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__functor_number_map_uppercase_export_enum_0
};

void MR_CALL 
parse_tree__prog_data_foreign____Compare____uppercase_export_enum_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____uppercase_export_enum_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_thread_safe_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_thread_safe_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_terminates_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_terminates_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_tabled_for_io_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_tabled_for_io_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_registers_roots_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_registers_roots_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_may_throw_exception_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_may_throw_exception_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_may_modify_trail_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_may_modify_trail_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_may_duplicate_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_may_duplicate_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_may_call_mm_tabled_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_may_call_mm_tabled_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_may_call_mercury_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_may_call_mercury_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_allocates_memory_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_allocates_memory_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_affects_liveness_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_affects_liveness_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____pragma_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_String ArgX2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_String ArgY2_7 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word Var_12;

      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[7], &Var_12, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        mercury__private_builtin__builtin_compare_string_3_p_0(&Var_13, ArgX2_6, ArgY2_7);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          parse_tree__prog_data____Compare____mer_mode_0_0(&Var_14, ArgX3_8, ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
          {
            MR_Integer Var_21 = (MR_Integer) ArgX4_10;
            MR_Integer Var_22 = (MR_Integer) ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_21, Var_22);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____pragma_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_String ArgX2_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_String ArgY2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[7], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
        if (succeeded)
        {
          succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
            succeeded = (ArgX4_9 == ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____pragma_foreign_proc_impl_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_String ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[6], HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_impl_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_9_9;
      MR_String ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[6];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____pragma_foreign_proc_extra_attributes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[5], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_extra_attributes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[5], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____pragma_foreign_proc_extra_attribute_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_10 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_11 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_10 == CastY_11);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer Var_14 = (MR_Integer) Var_13;
                  MR_Integer Var_15 = (MR_Integer) ArgY1_7;

                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_14, Var_15);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_extra_attribute_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_8 == CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____pragma_foreign_proc_attributes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_54 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_55 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_54 == CastY_55);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgY1_5 = (((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgX2_6 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY2_7 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX3_8 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
      MR_Word ArgY3_9 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
      MR_Word ArgX4_10 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
      MR_Word ArgY4_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
      MR_Word ArgX5_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
      MR_Word ArgY5_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
      MR_Word ArgX6_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
      MR_Word ArgY6_15 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
      MR_Word ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX8_18 = (((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY8_19 = (((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgX9_20 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY9_21 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX10_22 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY10_23 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX11_24 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
      MR_Word ArgY11_25 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
      MR_Word ArgX12_26 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ArgY12_27 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ArgX13_28 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
      MR_Word ArgY13_29 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
      MR_Word ArgX14_30 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
      MR_Word ArgY14_31 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
      MR_Word ArgX15_32 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
      MR_Word ArgY15_33 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
      MR_Word ArgX16_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY16_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX17_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY17_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word Var_38;
      MR_Integer Var_73 = (MR_Integer) ArgX1_4;
      MR_Integer Var_74 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_38, Var_73, Var_74);
      succeeded = (Var_38 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_38;
      else
      {
        MR_Word Var_39;
        MR_Integer Var_75 = (MR_Integer) ArgX2_6;
        MR_Integer Var_76 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_39, Var_75, Var_76);
        succeeded = (Var_39 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_39;
        else
        {
          MR_Word Var_40;
          MR_Integer Var_77 = (MR_Integer) ArgX3_8;
          MR_Integer Var_78 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_40, Var_77, Var_78);
          succeeded = (Var_40 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_40;
          else
          {
            MR_Word Var_41;
            MR_Integer Var_79 = (MR_Integer) ArgX4_10;
            MR_Integer Var_80 = (MR_Integer) ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_41, Var_79, Var_80);
            succeeded = (Var_41 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_41;
            else
            {
              MR_Word Var_42;
              MR_Integer Var_81 = (MR_Integer) ArgX5_12;
              MR_Integer Var_82 = (MR_Integer) ArgY5_13;

              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_42, Var_81, Var_82);
              succeeded = (Var_42 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_42;
              else
              {
                MR_Word Var_43;
                MR_Integer Var_83 = (MR_Integer) ArgX6_14;
                MR_Integer Var_84 = (MR_Integer) ArgY6_15;

                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_43, Var_83, Var_84);
                succeeded = (Var_43 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_43;
                else
                {
                  MR_Word Var_44;

                  parse_tree__prog_data_pragma____Compare____user_annotated_sharing_0_0(&Var_44, ArgX7_16, ArgY7_17);
                  succeeded = (Var_44 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_44;
                  else
                  {
                    MR_Word Var_45;
                    MR_Integer Var_85 = (MR_Integer) ArgX8_18;
                    MR_Integer Var_86 = (MR_Integer) ArgY8_19;

                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_45, Var_85, Var_86);
                    succeeded = (Var_45 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_45;
                    else
                    {
                      MR_Word Var_46;
                      MR_Integer Var_87 = (MR_Integer) ArgX9_20;
                      MR_Integer Var_88 = (MR_Integer) ArgY9_21;

                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_46, Var_87, Var_88);
                      succeeded = (Var_46 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_46;
                      else
                      {
                        MR_Word Var_47;
                        MR_Integer Var_89 = (MR_Integer) ArgX10_22;
                        MR_Integer Var_90 = (MR_Integer) ArgY10_23;

                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_47, Var_89, Var_90);
                        succeeded = (Var_47 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_47;
                        else
                        {
                          MR_Word Var_48;
                          MR_Integer Var_91 = (MR_Integer) ArgX11_24;
                          MR_Integer Var_92 = (MR_Integer) ArgY11_25;

                          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_48, Var_91, Var_92);
                          succeeded = (Var_48 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_48;
                          else
                          {
                            MR_Word Var_49;
                            MR_Integer Var_93 = (MR_Integer) ArgX12_26;
                            MR_Integer Var_94 = (MR_Integer) ArgY12_27;

                            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_49, Var_93, Var_94);
                            succeeded = (Var_49 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_49;
                            else
                            {
                              MR_Word Var_50;
                              MR_Integer Var_95 = (MR_Integer) ArgX13_28;
                              MR_Integer Var_96 = (MR_Integer) ArgY13_29;

                              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_50, Var_95, Var_96);
                              succeeded = (Var_50 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_50;
                              else
                              {
                                MR_Word Var_51;
                                MR_Integer Var_97 = (MR_Integer) ArgX14_30;
                                MR_Integer Var_98 = (MR_Integer) ArgY14_31;

                                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_51, Var_97, Var_98);
                                succeeded = (Var_51 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  *HeadVar__1_1 = Var_51;
                                else
                                {
                                  MR_Word Var_52;
                                  MR_Integer Var_99 = (MR_Integer) ArgX15_32;
                                  MR_Integer Var_100 = (MR_Integer) ArgY15_33;

                                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_52, Var_99, Var_100);
                                  succeeded = (Var_52 == (MR_Integer) 0);
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                    *HeadVar__1_1 = Var_52;
                                  else
                                  {
                                    MR_Word Var_53;

                                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[4], &Var_53, ((MR_Box) (ArgX16_34)), ((MR_Box) (ArgY16_35)));
                                    succeeded = (Var_53 == (MR_Integer) 0);
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                      *HeadVar__1_1 = Var_53;
                                    else
                                    {
                                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[5], HeadVar__1_1, ((MR_Box) (ArgX17_36)), ((MR_Box) (ArgY17_37)));
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
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_attributes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_37 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_38 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_37 == CastY_38);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_40_40;
      MR_Word TypeInfo_41_41;
      MR_Word ArgX1_3 = (((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgY1_4 = (((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgX2_5 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
      MR_Word ArgY3_8 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
      MR_Word ArgX4_9 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
      MR_Word ArgY4_10 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
      MR_Word ArgX5_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
      MR_Word ArgY5_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
      MR_Word ArgX6_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
      MR_Word ArgY6_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
      MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX8_17 = (((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY8_18 = (((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgX9_19 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY9_20 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX10_21 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY10_22 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX11_23 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
      MR_Word ArgY11_24 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
      MR_Word ArgX12_25 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ArgY12_26 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ArgX13_27 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
      MR_Word ArgY13_28 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
      MR_Word ArgX14_29 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
      MR_Word ArgY14_30 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
      MR_Word ArgX15_31 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
      MR_Word ArgY15_32 = (((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
      MR_Word ArgX16_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY16_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX17_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY17_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));

      succeeded = (ArgX1_3 == ArgY1_4);
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
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data_pragma____Unify____user_annotated_sharing_0_0(ArgX7_15, ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                      {
                        succeeded = (ArgX10_21 == ArgY10_22);
                        if (succeeded)
                        {
                          succeeded = (ArgX11_23 == ArgY11_24);
                          if (succeeded)
                          {
                            succeeded = (ArgX12_25 == ArgY12_26);
                            if (succeeded)
                            {
                              succeeded = (ArgX13_27 == ArgY13_28);
                              if (succeeded)
                              {
                                succeeded = (ArgX14_29 == ArgY14_30);
                                if (succeeded)
                                {
                                  succeeded = (ArgX15_31 == ArgY15_32);
                                  if (succeeded)
                                  {
                                    TypeInfo_40_40 = (MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[4];
                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_40_40, ((MR_Box) (ArgX16_33)), ((MR_Box) (ArgY16_34)));
                                    if (succeeded)
                                    {
                                      TypeInfo_41_41 = (MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[5];
                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_41, ((MR_Box) (ArgX17_35)), ((MR_Box) (ArgY17_36)));
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
parse_tree__prog_data_foreign____Compare____foreign_proc_shared_code_treatment_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_proc_shared_code_treatment_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_literal_or_include_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Var_16 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String ArgY1_11 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_16, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_String Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_String ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));

        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_17, ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_literal_or_include_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String ArgX1_5 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
      }
    }
    else
    {
      MR_String ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_include_file_infos_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[3], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_include_file_infos_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[3], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_include_file_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_String ArgX2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_String ArgY2_7 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;
      MR_Integer Var_13 = (MR_Integer) ArgX1_4;
      MR_Integer Var_14 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_8, Var_13, Var_14);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_include_file_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_String ArgX2_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_String ArgY2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_import_modules_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word Var_12;

      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[2], &Var_12, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[2], &Var_13, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[2], &Var_14, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[2], HeadVar__1_1, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_import_modules_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_14_14;
      MR_Word TypeInfo_15_15;
      MR_Word TypeInfo_16_16;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[2], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[2];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[2];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_16_16 = (MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[2];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_import_module_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;
      MR_Integer Var_13 = (MR_Integer) ArgX1_4;
      MR_Integer Var_14 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_8, Var_13, Var_14);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_import_module_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_decl_is_local_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_decl_is_local_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_arg_name_mode_box_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[1], &Var_8, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        MR_Integer Var_13 = (MR_Integer) ArgX2_6;
        MR_Integer Var_14 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_13, Var_14);
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_arg_name_mode_box_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[1], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_arg_name_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_String ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        parse_tree__prog_data____Compare____mer_mode_0_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_arg_name_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____export_enum_attributes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[0], &Var_8, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        MR_Integer Var_13 = (MR_Integer) ArgX2_6;
        MR_Integer Var_14 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_13, Var_14);
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____export_enum_attributes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[0], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign____Compare____box_policy_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____box_policy_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__pragma_get_var_infos_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word PragmaVar_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word PragmaVars_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Info_5;
    MR_Word Infos_6;
    MR_String Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), PragmaVar_3, (MR_Integer) 1)));
    MR_Word Mode_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), PragmaVar_3, (MR_Integer) 2)));
    MR_Word BoxPolicy_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), PragmaVar_3, (MR_Integer) 3)));
    MR_Word NameMode_11;
    MR_Word Var_12;
    MR_Word _Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), PragmaVar_3, (MR_Integer) 0)));

    {
      NameMode_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), NameMode_11, 0) = ((MR_Box) (Name_8));
      MR_hl_field(MR_mktag(0), NameMode_11, 1) = ((MR_Box) (Mode_9));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (NameMode_11));
    }
    {
      Info_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_5, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), Info_5, 1) = ((MR_Box) (BoxPolicy_10));
    }
    parse_tree__prog_data_foreign__pragma_get_var_infos_2_p_0(PragmaVars_4, &Infos_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Info_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Infos_6));
    }
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__pragma_get_vars_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word PragmaVar_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word PragmaVars_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), PragmaVar_3, (MR_Integer) 0)));
    MR_Word Vars_6;
    MR_String _Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), PragmaVar_3, (MR_Integer) 1)));
    MR_Word _Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), PragmaVar_3, (MR_Integer) 2)));
    MR_Word _BoxPolicy_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), PragmaVar_3, (MR_Integer) 3)));

    parse_tree__prog_data_foreign__pragma_get_vars_2_p_0(PragmaVars_4, &Vars_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars_6));
    }
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__pragma_get_modes_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word PragmaVar_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word PragmaVars_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Mode_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), PragmaVar_3, (MR_Integer) 2)));
    MR_Word Modes_6;
    MR_Word _Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), PragmaVar_3, (MR_Integer) 0)));
    MR_String _Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), PragmaVar_3, (MR_Integer) 1)));
    MR_Word _BoxPolicy_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), PragmaVar_3, (MR_Integer) 3)));

    parse_tree__prog_data_foreign__pragma_get_modes_2_p_0(PragmaVars_4, &Modes_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Mode_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Modes_6));
    }
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__foreign_arg_name_mode_box_project_maybe_name_mode_1_f_0(
  MR_Word MaybeNameModeBox_3)
{
  {
    MR_Word MaybeNameMode_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeNameModeBox_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeNameModeBox_3, (MR_Integer) 1)));

    return MaybeNameMode_4;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__add_extra_attribute_3_p_0(
  MR_Word NewAttribute_4,
  MR_Word STATE_VARIABLE_Attrs_0_6,
  MR_Word * STATE_VARIABLE_Attrs_7)
{
  {
    MR_Word Var_9;
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 4)));
    MR_Word Var_11 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_15 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_16 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 1)));
    MR_Word Var_18 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_19 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_20 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_21 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_22 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_23 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_24 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_25 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 3)));

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (NewAttribute_4));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (Var_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Attrs_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_11 | ((((Var_12 << (MR_Integer) 2)) | ((((Var_13 << (MR_Integer) 3)) | ((((Var_14 << (MR_Integer) 5)) | ((((Var_15 << (MR_Integer) 7)) | ((Var_16 << (MR_Integer) 9)))))))))))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_18 | ((((Var_19 << (MR_Integer) 1)) | ((((Var_20 << (MR_Integer) 2)) | ((((Var_21 << (MR_Integer) 3)) | ((((Var_22 << (MR_Integer) 5)) | ((((Var_23 << (MR_Integer) 6)) | ((((Var_24 << (MR_Integer) 8)) | ((Var_25 << (MR_Integer) 10)))))))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_9));
    }
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__set_may_duplicate_3_p_0(
  MR_Word MayDuplicate_4,
  MR_Word STATE_VARIABLE_Attrs_0_6,
  MR_Word * STATE_VARIABLE_Attrs_7)
{
  {
    MR_Word Var_9 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_10 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 1)));
    MR_Word Var_16 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_19 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_20 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_21 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_22 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_23 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 4)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Attrs_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_9 | ((((Var_10 << (MR_Integer) 2)) | ((((Var_11 << (MR_Integer) 3)) | ((((Var_12 << (MR_Integer) 5)) | ((((Var_13 << (MR_Integer) 7)) | ((Var_14 << (MR_Integer) 9)))))))))))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_16 | ((((Var_17 << (MR_Integer) 1)) | ((((Var_18 << (MR_Integer) 2)) | ((((Var_19 << (MR_Integer) 3)) | ((((Var_20 << (MR_Integer) 5)) | ((((Var_21 << (MR_Integer) 6)) | ((((Var_22 << (MR_Integer) 8)) | ((Var_23 << (MR_Integer) 10)))))))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MayDuplicate_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_25));
    }
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__set_registers_roots_3_p_0(
  MR_Word RegistersRoots_4,
  MR_Word STATE_VARIABLE_Attrs_0_6,
  MR_Word * STATE_VARIABLE_Attrs_7)
{
  {
    MR_Word Var_9 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_10 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 1)));
    MR_Word Var_16 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_19 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_20 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_21 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_22 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 3)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 4)));
    MR_Word Var_23 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Attrs_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_9 | ((((Var_10 << (MR_Integer) 2)) | ((((Var_11 << (MR_Integer) 3)) | ((((Var_12 << (MR_Integer) 5)) | ((((Var_13 << (MR_Integer) 7)) | ((Var_14 << (MR_Integer) 9)))))))))))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_16 | ((((Var_17 << (MR_Integer) 1)) | ((((Var_18 << (MR_Integer) 2)) | ((((Var_19 << (MR_Integer) 3)) | ((((Var_20 << (MR_Integer) 5)) | ((((Var_21 << (MR_Integer) 6)) | ((((Var_22 << (MR_Integer) 8)) | ((RegistersRoots_4 << (MR_Integer) 10)))))))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_25));
    }
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__set_allocates_memory_3_p_0(
  MR_Word AllocatesMemory_4,
  MR_Word STATE_VARIABLE_Attrs_0_6,
  MR_Word * STATE_VARIABLE_Attrs_7)
{
  {
    MR_Word Var_9 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_10 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 1)));
    MR_Word Var_16 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_19 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_20 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_21 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_23 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 3)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 4)));
    MR_Word Var_22 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Attrs_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_9 | ((((Var_10 << (MR_Integer) 2)) | ((((Var_11 << (MR_Integer) 3)) | ((((Var_12 << (MR_Integer) 5)) | ((((Var_13 << (MR_Integer) 7)) | ((Var_14 << (MR_Integer) 9)))))))))))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_16 | ((((Var_17 << (MR_Integer) 1)) | ((((Var_18 << (MR_Integer) 2)) | ((((Var_19 << (MR_Integer) 3)) | ((((Var_20 << (MR_Integer) 5)) | ((((Var_21 << (MR_Integer) 6)) | ((((AllocatesMemory_4 << (MR_Integer) 8)) | ((Var_23 << (MR_Integer) 10)))))))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_25));
    }
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__set_affects_liveness_3_p_0(
  MR_Word AffectsLiveness_4,
  MR_Word STATE_VARIABLE_Attrs_0_6,
  MR_Word * STATE_VARIABLE_Attrs_7)
{
  {
    MR_Word Var_9 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_10 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 1)));
    MR_Word Var_16 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_19 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_20 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_22 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_23 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 3)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 4)));
    MR_Word Var_21 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Attrs_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_9 | ((((Var_10 << (MR_Integer) 2)) | ((((Var_11 << (MR_Integer) 3)) | ((((Var_12 << (MR_Integer) 5)) | ((((Var_13 << (MR_Integer) 7)) | ((Var_14 << (MR_Integer) 9)))))))))))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_16 | ((((Var_17 << (MR_Integer) 1)) | ((((Var_18 << (MR_Integer) 2)) | ((((Var_19 << (MR_Integer) 3)) | ((((Var_20 << (MR_Integer) 5)) | ((((AffectsLiveness_4 << (MR_Integer) 6)) | ((((Var_22 << (MR_Integer) 8)) | ((Var_23 << (MR_Integer) 10)))))))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_25));
    }
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__set_box_policy_3_p_0(
  MR_Word BoxPolicyStr_4,
  MR_Word STATE_VARIABLE_Attrs_0_6,
  MR_Word * STATE_VARIABLE_Attrs_7)
{
  {
    MR_Word Var_9 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_10 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 1)));
    MR_Word Var_16 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_19 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_21 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_22 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_23 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 3)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 4)));
    MR_Word Var_20 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Attrs_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_9 | ((((Var_10 << (MR_Integer) 2)) | ((((Var_11 << (MR_Integer) 3)) | ((((Var_12 << (MR_Integer) 5)) | ((((Var_13 << (MR_Integer) 7)) | ((Var_14 << (MR_Integer) 9)))))))))))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_16 | ((((Var_17 << (MR_Integer) 1)) | ((((Var_18 << (MR_Integer) 2)) | ((((Var_19 << (MR_Integer) 3)) | ((((BoxPolicyStr_4 << (MR_Integer) 5)) | ((((Var_21 << (MR_Integer) 6)) | ((((Var_22 << (MR_Integer) 8)) | ((Var_23 << (MR_Integer) 10)))))))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_25));
    }
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__set_may_call_mm_tabled_3_p_0(
  MR_Word MayCallMM_Tabled_4,
  MR_Word STATE_VARIABLE_Attrs_0_6,
  MR_Word * STATE_VARIABLE_Attrs_7)
{
  {
    MR_Word Var_9 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_10 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 1)));
    MR_Word Var_16 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_20 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_21 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_22 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_23 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 3)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 4)));
    MR_Word Var_19 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Attrs_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_9 | ((((Var_10 << (MR_Integer) 2)) | ((((Var_11 << (MR_Integer) 3)) | ((((Var_12 << (MR_Integer) 5)) | ((((Var_13 << (MR_Integer) 7)) | ((Var_14 << (MR_Integer) 9)))))))))))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_16 | ((((Var_17 << (MR_Integer) 1)) | ((((Var_18 << (MR_Integer) 2)) | ((((MayCallMM_Tabled_4 << (MR_Integer) 3)) | ((((Var_20 << (MR_Integer) 5)) | ((((Var_21 << (MR_Integer) 6)) | ((((Var_22 << (MR_Integer) 8)) | ((Var_23 << (MR_Integer) 10)))))))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_25));
    }
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0(
  MR_Word MayModifyTrail_4,
  MR_Word STATE_VARIABLE_Attrs_0_6,
  MR_Word * STATE_VARIABLE_Attrs_7)
{
  {
    MR_Word Var_9 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_10 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 1)));
    MR_Word Var_16 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_19 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_20 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_21 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_22 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_23 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 3)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 4)));
    MR_Word Var_18 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Attrs_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_9 | ((((Var_10 << (MR_Integer) 2)) | ((((Var_11 << (MR_Integer) 3)) | ((((Var_12 << (MR_Integer) 5)) | ((((Var_13 << (MR_Integer) 7)) | ((Var_14 << (MR_Integer) 9)))))))))))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_16 | ((((Var_17 << (MR_Integer) 1)) | ((((MayModifyTrail_4 << (MR_Integer) 2)) | ((((Var_19 << (MR_Integer) 3)) | ((((Var_20 << (MR_Integer) 5)) | ((((Var_21 << (MR_Integer) 6)) | ((((Var_22 << (MR_Integer) 8)) | ((Var_23 << (MR_Integer) 10)))))))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_25));
    }
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__set_ordinary_despite_detism_3_p_0(
  MR_Word OrdinaryDespiteDetism_4,
  MR_Word STATE_VARIABLE_Attrs_0_6,
  MR_Word * STATE_VARIABLE_Attrs_7)
{
  {
    MR_Word Var_9 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_10 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 1)));
    MR_Word Var_16 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_18 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_19 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_20 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_21 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_22 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_23 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 3)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 4)));
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Attrs_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_9 | ((((Var_10 << (MR_Integer) 2)) | ((((Var_11 << (MR_Integer) 3)) | ((((Var_12 << (MR_Integer) 5)) | ((((Var_13 << (MR_Integer) 7)) | ((Var_14 << (MR_Integer) 9)))))))))))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_16 | ((((OrdinaryDespiteDetism_4 << (MR_Integer) 1)) | ((((Var_18 << (MR_Integer) 2)) | ((((Var_19 << (MR_Integer) 3)) | ((((Var_20 << (MR_Integer) 5)) | ((((Var_21 << (MR_Integer) 6)) | ((((Var_22 << (MR_Integer) 8)) | ((Var_23 << (MR_Integer) 10)))))))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_25));
    }
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__set_may_throw_exception_3_p_0(
  MR_Word MayThrowException_4,
  MR_Word STATE_VARIABLE_Attrs_0_6,
  MR_Word * STATE_VARIABLE_Attrs_7)
{
  {
    MR_Word Var_9 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_10 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 1)));
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_19 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_20 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_21 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_22 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_23 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 3)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 4)));
    MR_Word Var_16 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) & (MR_Integer) 1);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Attrs_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_9 | ((((Var_10 << (MR_Integer) 2)) | ((((Var_11 << (MR_Integer) 3)) | ((((Var_12 << (MR_Integer) 5)) | ((((Var_13 << (MR_Integer) 7)) | ((Var_14 << (MR_Integer) 9)))))))))))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MayThrowException_4 | ((((Var_17 << (MR_Integer) 1)) | ((((Var_18 << (MR_Integer) 2)) | ((((Var_19 << (MR_Integer) 3)) | ((((Var_20 << (MR_Integer) 5)) | ((((Var_21 << (MR_Integer) 6)) | ((((Var_22 << (MR_Integer) 8)) | ((Var_23 << (MR_Integer) 10)))))))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_25));
    }
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__set_user_annotated_sharing_3_p_0(
  MR_Word UserSharing_4,
  MR_Word STATE_VARIABLE_Attrs_0_6,
  MR_Word * STATE_VARIABLE_Attrs_7)
{
  {
    MR_Word Var_9 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_10 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_16 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_19 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_20 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_21 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_22 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_23 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 3)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 4)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Attrs_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_9 | ((((Var_10 << (MR_Integer) 2)) | ((((Var_11 << (MR_Integer) 3)) | ((((Var_12 << (MR_Integer) 5)) | ((((Var_13 << (MR_Integer) 7)) | ((Var_14 << (MR_Integer) 9)))))))))))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (UserSharing_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_16 | ((((Var_17 << (MR_Integer) 1)) | ((((Var_18 << (MR_Integer) 2)) | ((((Var_19 << (MR_Integer) 3)) | ((((Var_20 << (MR_Integer) 5)) | ((((Var_21 << (MR_Integer) 6)) | ((((Var_22 << (MR_Integer) 8)) | ((Var_23 << (MR_Integer) 10)))))))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_25));
    }
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__set_terminates_3_p_0(
  MR_Word Terminates_4,
  MR_Word STATE_VARIABLE_Attrs_0_6,
  MR_Word * STATE_VARIABLE_Attrs_7)
{
  {
    MR_Word Var_9 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_10 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 1)));
    MR_Word Var_16 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_19 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_20 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_21 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_22 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_23 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 3)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 4)));
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Attrs_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_9 | ((((Var_10 << (MR_Integer) 2)) | ((((Var_11 << (MR_Integer) 3)) | ((((Var_12 << (MR_Integer) 5)) | ((((Var_13 << (MR_Integer) 7)) | ((Terminates_4 << (MR_Integer) 9)))))))))))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_16 | ((((Var_17 << (MR_Integer) 1)) | ((((Var_18 << (MR_Integer) 2)) | ((((Var_19 << (MR_Integer) 3)) | ((((Var_20 << (MR_Integer) 5)) | ((((Var_21 << (MR_Integer) 6)) | ((((Var_22 << (MR_Integer) 8)) | ((Var_23 << (MR_Integer) 10)))))))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_25));
    }
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__set_purity_3_p_0(
  MR_Word Purity_4,
  MR_Word STATE_VARIABLE_Attrs_0_6,
  MR_Word * STATE_VARIABLE_Attrs_7)
{
  {
    MR_Word Var_9 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_10 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 1)));
    MR_Word Var_16 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_19 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_20 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_21 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_22 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_23 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 3)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 4)));
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Attrs_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_9 | ((((Var_10 << (MR_Integer) 2)) | ((((Var_11 << (MR_Integer) 3)) | ((((Var_12 << (MR_Integer) 5)) | ((((Purity_4 << (MR_Integer) 7)) | ((Var_14 << (MR_Integer) 9)))))))))))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_16 | ((((Var_17 << (MR_Integer) 1)) | ((((Var_18 << (MR_Integer) 2)) | ((((Var_19 << (MR_Integer) 3)) | ((((Var_20 << (MR_Integer) 5)) | ((((Var_21 << (MR_Integer) 6)) | ((((Var_22 << (MR_Integer) 8)) | ((Var_23 << (MR_Integer) 10)))))))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_25));
    }
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__set_tabled_for_io_3_p_0(
  MR_Word TabledForIo_4,
  MR_Word STATE_VARIABLE_Attrs_0_6,
  MR_Word * STATE_VARIABLE_Attrs_7)
{
  {
    MR_Word Var_9 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_10 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 1)));
    MR_Word Var_16 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_19 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_20 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_21 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_22 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_23 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 3)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 4)));
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Attrs_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_9 | ((((Var_10 << (MR_Integer) 2)) | ((((Var_11 << (MR_Integer) 3)) | ((((TabledForIo_4 << (MR_Integer) 5)) | ((((Var_13 << (MR_Integer) 7)) | ((Var_14 << (MR_Integer) 9)))))))))))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_16 | ((((Var_17 << (MR_Integer) 1)) | ((((Var_18 << (MR_Integer) 2)) | ((((Var_19 << (MR_Integer) 3)) | ((((Var_20 << (MR_Integer) 5)) | ((((Var_21 << (MR_Integer) 6)) | ((((Var_22 << (MR_Integer) 8)) | ((Var_23 << (MR_Integer) 10)))))))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_25));
    }
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__set_foreign_language_3_p_0(
  MR_Word ForeignLanguage_4,
  MR_Word STATE_VARIABLE_Attrs_0_6,
  MR_Word * STATE_VARIABLE_Attrs_7)
{
  {
    MR_Word Var_10 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 1)));
    MR_Word Var_16 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_19 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_20 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_21 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_22 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_23 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 3)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 4)));
    MR_Word Var_9 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) & (MR_Integer) 3);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Attrs_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((ForeignLanguage_4 | ((((Var_10 << (MR_Integer) 2)) | ((((Var_11 << (MR_Integer) 3)) | ((((Var_12 << (MR_Integer) 5)) | ((((Var_13 << (MR_Integer) 7)) | ((Var_14 << (MR_Integer) 9)))))))))))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_16 | ((((Var_17 << (MR_Integer) 1)) | ((((Var_18 << (MR_Integer) 2)) | ((((Var_19 << (MR_Integer) 3)) | ((((Var_20 << (MR_Integer) 5)) | ((((Var_21 << (MR_Integer) 6)) | ((((Var_22 << (MR_Integer) 8)) | ((Var_23 << (MR_Integer) 10)))))))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_25));
    }
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__set_thread_safe_3_p_0(
  MR_Word ThreadSafe_4,
  MR_Word STATE_VARIABLE_Attrs_0_6,
  MR_Word * STATE_VARIABLE_Attrs_7)
{
  {
    MR_Word Var_9 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_10 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 1)));
    MR_Word Var_16 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_19 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_20 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_21 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_22 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_23 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 3)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 4)));
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Attrs_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_9 | ((((Var_10 << (MR_Integer) 2)) | ((((ThreadSafe_4 << (MR_Integer) 3)) | ((((Var_12 << (MR_Integer) 5)) | ((((Var_13 << (MR_Integer) 7)) | ((Var_14 << (MR_Integer) 9)))))))))))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_16 | ((((Var_17 << (MR_Integer) 1)) | ((((Var_18 << (MR_Integer) 2)) | ((((Var_19 << (MR_Integer) 3)) | ((((Var_20 << (MR_Integer) 5)) | ((((Var_21 << (MR_Integer) 6)) | ((((Var_22 << (MR_Integer) 8)) | ((Var_23 << (MR_Integer) 10)))))))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_25));
    }
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0(
  MR_Word MayCallMercury_4,
  MR_Word STATE_VARIABLE_Attrs_0_6,
  MR_Word * STATE_VARIABLE_Attrs_7)
{
  {
    MR_Word Var_9 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 1)));
    MR_Word Var_16 = (((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_19 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_20 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_21 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_22 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_23 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 3)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 4)));
    MR_Word Var_10 = (((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attrs_0_6, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Attrs_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_9 | ((((MayCallMercury_4 << (MR_Integer) 2)) | ((((Var_11 << (MR_Integer) 3)) | ((((Var_12 << (MR_Integer) 5)) | ((((Var_13 << (MR_Integer) 7)) | ((Var_14 << (MR_Integer) 9)))))))))))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_16 | ((((Var_17 << (MR_Integer) 1)) | ((((Var_18 << (MR_Integer) 2)) | ((((Var_19 << (MR_Integer) 3)) | ((((Var_20 << (MR_Integer) 5)) | ((((Var_21 << (MR_Integer) 6)) | ((((Var_22 << (MR_Integer) 8)) | ((Var_23 << (MR_Integer) 10)))))))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_25));
    }
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__get_extra_attributes_1_f_0(
  MR_Word Attrs_3)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 4)));
    MR_Word Var_4 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_5 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_6 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_7 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_8 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_9 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 1)));
    MR_Word Var_11 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_15 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_16 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_18 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 3)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(
  MR_Word Attrs_3)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 3)));
    MR_Word Var_4 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_5 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_6 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_7 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_8 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_9 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 1)));
    MR_Word Var_11 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_15 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_16 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_18 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 4)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__get_registers_roots_1_f_0(
  MR_Word Attrs_3)
{
  {
    MR_Word HeadVar__2_2 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_4 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_5 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_6 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_7 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_8 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_9 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 1)));
    MR_Word Var_11 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_15 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_16 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 4)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__get_allocates_memory_1_f_0(
  MR_Word Attrs_3)
{
  {
    MR_Word HeadVar__2_2 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_4 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_5 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_6 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_7 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_8 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_9 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 1)));
    MR_Word Var_11 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_15 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_16 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 4)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__get_affects_liveness_1_f_0(
  MR_Word Attrs_3)
{
  {
    MR_Word HeadVar__2_2 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_4 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_5 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_6 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_7 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_8 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_9 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 1)));
    MR_Word Var_11 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_15 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_16 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 4)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__get_box_policy_1_f_0(
  MR_Word Attrs_3)
{
  {
    MR_Word HeadVar__2_2 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_4 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_5 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_6 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_7 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_8 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_9 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 1)));
    MR_Word Var_11 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_15 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_16 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 4)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__get_may_call_mm_tabled_1_f_0(
  MR_Word Attrs_3)
{
  {
    MR_Word HeadVar__2_2 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_4 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_5 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_6 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_7 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_8 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_9 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 1)));
    MR_Word Var_11 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_15 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_16 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 4)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__get_may_modify_trail_1_f_0(
  MR_Word Attrs_3)
{
  {
    MR_Word HeadVar__2_2 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_4 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_5 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_6 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_7 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_8 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_9 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 1)));
    MR_Word Var_11 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_15 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_16 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 4)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__get_ordinary_despite_detism_1_f_0(
  MR_Word Attrs_3)
{
  {
    MR_Word HeadVar__2_2 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_4 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_5 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_6 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_7 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_8 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_9 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 1)));
    MR_Word Var_11 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_15 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_16 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 4)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(
  MR_Word Attrs_3)
{
  {
    MR_Word HeadVar__2_2 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_4 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_5 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_6 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_7 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_8 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_9 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 1)));
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_15 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_16 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 4)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__get_tabled_for_io_1_f_0(
  MR_Word Attrs_3)
{
  {
    MR_Word HeadVar__2_2 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_4 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_5 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_6 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_7 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_8 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 1)));
    MR_Word Var_10 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_15 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_16 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 4)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__get_foreign_language_1_f_0(
  MR_Word Attrs_3)
{
  {
    MR_Word HeadVar__2_2 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_4 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_5 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_6 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_7 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_8 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 1)));
    MR_Word Var_10 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_15 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_16 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 4)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__get_user_annotated_sharing_1_f_0(
  MR_Word Attrs_3)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 1)));
    MR_Word Var_4 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_5 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_6 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_7 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_8 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_9 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_10 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_15 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_16 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 4)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__get_terminates_1_f_0(
  MR_Word Attrs_3)
{
  {
    MR_Word HeadVar__2_2 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_4 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_5 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_6 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_7 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_8 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 1)));
    MR_Word Var_10 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_15 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_16 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 4)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__get_purity_1_f_0(
  MR_Word Attrs_3)
{
  {
    MR_Word HeadVar__2_2 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_4 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_5 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_6 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_7 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_8 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 1)));
    MR_Word Var_10 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_15 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_16 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 4)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__get_thread_safe_1_f_0(
  MR_Word Attrs_3)
{
  {
    MR_Word HeadVar__2_2 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_4 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_5 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_6 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_7 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_8 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 1)));
    MR_Word Var_10 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_15 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_16 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 4)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(
  MR_Word Attrs_3)
{
  {
    MR_Word HeadVar__2_2 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_4 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_5 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_6 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_7 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_8 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 0))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 1)));
    MR_Word Var_10 = (((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_11 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_12 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_13 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word Var_14 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_15 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word Var_16 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 3);
    MR_Word Var_17 = (((((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 3);
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attrs_3, (MR_Integer) 4)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__default_attributes_1_f_0(
  MR_Word Language_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) ((Language_3 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((((MR_Integer) 0 << (MR_Integer) 5)) | (((((MR_Integer) 2 << (MR_Integer) 7)) | (((MR_Integer) 2 << (MR_Integer) 9)))))))))))));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 2 << (MR_Integer) 3)) | (((((MR_Integer) 0 << (MR_Integer) 5)) | (((((MR_Integer) 2 << (MR_Integer) 6)) | (((((MR_Integer) 3 << (MR_Integer) 8)) | (((MR_Integer) 3 << (MR_Integer) 10)))))))))))))))));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__default_export_enum_attributes_0_f_0(void)
{
  {
    return (MR_Word) &parse_tree__prog_data_foreign_scalar_common_1[8];
  }
}

static MR_Word MR_CALL 
parse_tree__prog_data_foreign__make_foreign_import_module_info_2_f_0(
  MR_Word Lang_4,
  MR_Word ModuleName_5)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Lang_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (ModuleName_5));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__get_lang_foreign_import_modules_2_f_0(
  MR_Word FIM_4,
  MR_Word Lang_5)
{
  {
    MR_Word ModuleNames_6;
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), FIM_4, (MR_Integer) 3)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), FIM_4, (MR_Integer) 2)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), FIM_4, (MR_Integer) 1)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), FIM_4, (MR_Integer) 0)));

    switch (Lang_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ModuleNames_6 = Var_22;
        break;
      case (MR_Integer) 1:
        ModuleNames_6 = Var_21;
        break;
      case (MR_Integer) 3:
        ModuleNames_6 = Var_19;
        break;
      case (MR_Integer) 2:
        ModuleNames_6 = Var_20;
        break;
    }
    return ModuleNames_6;
  }
}

static MR_Box MR_CALL 
parse_tree__prog_data_foreign__get_lang_foreign_import_module_infos_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__prog_data_foreign__make_foreign_import_module_info_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__get_lang_foreign_import_module_infos_2_f_0(
  MR_Word FIM_4,
  MR_Word Lang_5)
{
  {
    MR_Word ImportInfos_6;
    MR_Word ModuleNames_7;
    MR_Word Var_8;
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), FIM_4, (MR_Integer) 3)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), FIM_4, (MR_Integer) 2)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), FIM_4, (MR_Integer) 1)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), FIM_4, (MR_Integer) 0)));

    switch (Lang_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ModuleNames_7 = Var_31;
        break;
      case (MR_Integer) 1:
        ModuleNames_7 = Var_30;
        break;
      case (MR_Integer) 3:
        ModuleNames_7 = Var_28;
        break;
      case (MR_Integer) 2:
        ModuleNames_7 = Var_29;
        break;
    }
    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&parse_tree__prog_data_foreign_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (parse_tree__prog_data_foreign__get_lang_foreign_import_module_infos_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Lang_5));
    }
    ImportInfos_6 = mercury__set__map_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0, Var_8, ModuleNames_7);
    return ImportInfos_6;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__get_all_foreign_import_modules_1_f_0(
  MR_Word FIM_3)
{
  {
    MR_Word ModuleNames_4;
    MR_Word ModuleNamesC_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), FIM_3, (MR_Integer) 0)));
    MR_Word ModuleNamesCSharp_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), FIM_3, (MR_Integer) 1)));
    MR_Word ModuleNamesJava_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), FIM_3, (MR_Integer) 2)));
    MR_Word ModuleNamesErlang_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), FIM_3, (MR_Integer) 3)));
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (ModuleNamesErlang_8));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (ModuleNamesJava_7));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_12));
    }
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (ModuleNamesCSharp_6));
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (Var_11));
    }
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (ModuleNamesC_5));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (Var_10));
    }
    ModuleNames_4 = mercury__set__union_list_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, Var_9);
    return ModuleNames_4;
  }
}

static MR_Box MR_CALL 
parse_tree__prog_data_foreign__get_all_foreign_import_module_infos_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_3;

    conv3_HeadVar__3_3 = parse_tree__prog_data_foreign__make_foreign_import_module_info_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__prog_data_foreign__get_all_foreign_import_module_infos_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;

    conv2_HeadVar__3_3 = parse_tree__prog_data_foreign__make_foreign_import_module_info_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__prog_data_foreign__get_all_foreign_import_module_infos_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = parse_tree__prog_data_foreign__make_foreign_import_module_info_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__prog_data_foreign__get_all_foreign_import_module_infos_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__prog_data_foreign__make_foreign_import_module_info_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__get_all_foreign_import_module_infos_1_f_0(
  MR_Word FIM_3)
{
  {
    MR_Word ImportInfos_4;
    MR_Word ModuleNamesC_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), FIM_3, (MR_Integer) 0)));
    MR_Word ModuleNamesCSharp_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), FIM_3, (MR_Integer) 1)));
    MR_Word ModuleNamesJava_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), FIM_3, (MR_Integer) 2)));
    MR_Word ModuleNamesErlang_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), FIM_3, (MR_Integer) 3)));
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_21;
    MR_Word Var_22;

    Var_10 = mercury__set__map_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0, (MR_Word) &parse_tree__prog_data_foreign_scalar_common_3[0], ModuleNamesC_5);
    Var_14 = mercury__set__map_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0, (MR_Word) &parse_tree__prog_data_foreign_scalar_common_3[1], ModuleNamesCSharp_6);
    Var_18 = mercury__set__map_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0, (MR_Word) &parse_tree__prog_data_foreign_scalar_common_3[2], ModuleNamesJava_7);
    Var_22 = mercury__set__map_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0, (MR_Word) &parse_tree__prog_data_foreign_scalar_common_3[3], ModuleNamesErlang_8);
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (Var_13));
    }
    ImportInfos_4 = mercury__set__union_list_1_f_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0, Var_9);
    return ImportInfos_4;
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__add_foreign_import_module_info_3_p_0(
  MR_Word FIMI_4,
  MR_Word STATE_VARIABLE_FIM_0_8,
  MR_Word * STATE_VARIABLE_FIM_9)
{
  {
    MR_Word Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), FIMI_4, (MR_Integer) 0)));
    MR_Word ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), FIMI_4, (MR_Integer) 1)));

    parse_tree__prog_data_foreign__add_foreign_import_module_4_p_0(Lang_6, ModuleName_7, STATE_VARIABLE_FIM_0_8, STATE_VARIABLE_FIM_9);
  }
}

void MR_CALL 
parse_tree__prog_data_foreign__add_foreign_import_module_4_p_0(
  MR_Word Lang_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_FIM_0_10,
  MR_Word * STATE_VARIABLE_FIM_11)
{
  {
    MR_bool succeeded;
    MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_FIM_0_10, (MR_Integer) 3)));
    MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_FIM_0_10, (MR_Integer) 2)));
    MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_FIM_0_10, (MR_Integer) 1)));
    MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_FIM_0_10, (MR_Integer) 0)));

    switch (Lang_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ModuleNames_9;

          succeeded = mercury__set__insert_new_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (ModuleName_6)), Var_60, &ModuleNames_9);
          if (succeeded)
          {
            MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_FIM_0_10, (MR_Integer) 1)));
            MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_FIM_0_10, (MR_Integer) 2)));
            MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_FIM_0_10, (MR_Integer) 3)));
            MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_FIM_0_10, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_FIM_11 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleNames_9));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_29));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_30));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_31));
            }
          }
          else
            *STATE_VARIABLE_FIM_11 = STATE_VARIABLE_FIM_0_10;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleNames_16;

          succeeded = mercury__set__insert_new_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (ModuleName_6)), Var_59, &ModuleNames_16);
          if (succeeded)
          {
            MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_FIM_0_10, (MR_Integer) 0)));
            MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_FIM_0_10, (MR_Integer) 2)));
            MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_FIM_0_10, (MR_Integer) 3)));
            MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_FIM_0_10, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_FIM_11 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNames_16));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_37));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_38));
            }
          }
          else
            *STATE_VARIABLE_FIM_11 = STATE_VARIABLE_FIM_0_10;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ModuleNames_22;

          succeeded = mercury__set__insert_new_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (ModuleName_6)), Var_57, &ModuleNames_22);
          if (succeeded)
          {
            MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_FIM_0_10, (MR_Integer) 0)));
            MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_FIM_0_10, (MR_Integer) 1)));
            MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_FIM_0_10, (MR_Integer) 2)));
            MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_FIM_0_10, (MR_Integer) 3)));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_FIM_11 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_49));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_50));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_51));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ModuleNames_22));
            }
          }
          else
            *STATE_VARIABLE_FIM_11 = STATE_VARIABLE_FIM_0_10;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ModuleNames_19;

          succeeded = mercury__set__insert_new_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (ModuleName_6)), Var_58, &ModuleNames_19);
          if (succeeded)
          {
            MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_FIM_0_10, (MR_Integer) 0)));
            MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_FIM_0_10, (MR_Integer) 1)));
            MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_FIM_0_10, (MR_Integer) 3)));
            MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_FIM_0_10, (MR_Integer) 2)));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_FIM_11 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_42));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_43));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNames_19));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_45));
            }
          }
          else
            *STATE_VARIABLE_FIM_11 = STATE_VARIABLE_FIM_0_10;
        }
        break;
    }
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_foreign__init_foreign_import_modules_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_2;
    MR_Word Var_3;
    MR_Word Var_4;
    MR_Word Var_5;

    Var_2 = mercury__set__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    Var_3 = mercury__set__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    Var_4 = mercury__set__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    Var_5 = mercury__set__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Var_2));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) (Var_3));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 2) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 3) = ((MR_Box) (Var_5));
    }
    return HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____box_policy_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____box_policy_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____box_policy_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____box_policy_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____export_enum_attributes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____export_enum_attributes_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____export_enum_attributes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____export_enum_attributes_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_arg_name_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____foreign_arg_name_mode_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_arg_name_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____foreign_arg_name_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_arg_name_mode_box_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____foreign_arg_name_mode_box_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_arg_name_mode_box_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____foreign_arg_name_mode_box_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_decl_is_local_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____foreign_decl_is_local_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_decl_is_local_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____foreign_decl_is_local_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_import_module_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____foreign_import_module_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_import_module_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____foreign_import_module_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_import_modules_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____foreign_import_modules_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_import_modules_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____foreign_import_modules_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_include_file_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____foreign_include_file_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_include_file_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____foreign_include_file_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_include_file_infos_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____foreign_include_file_infos_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_include_file_infos_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____foreign_include_file_infos_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_literal_or_include_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____foreign_literal_or_include_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_literal_or_include_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____foreign_literal_or_include_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____foreign_proc_shared_code_treatment_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____foreign_proc_shared_code_treatment_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____foreign_proc_shared_code_treatment_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____foreign_proc_shared_code_treatment_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_attributes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_attributes_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____pragma_foreign_proc_attributes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____pragma_foreign_proc_attributes_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_extra_attribute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_extra_attribute_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____pragma_foreign_proc_extra_attribute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____pragma_foreign_proc_extra_attribute_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_extra_attributes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_extra_attributes_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____pragma_foreign_proc_extra_attributes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____pragma_foreign_proc_extra_attributes_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_impl_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_impl_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____pragma_foreign_proc_impl_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____pragma_foreign_proc_impl_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____pragma_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____pragma_var_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____pragma_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____pragma_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_affects_liveness_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____proc_affects_liveness_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_affects_liveness_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____proc_affects_liveness_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_allocates_memory_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____proc_allocates_memory_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_allocates_memory_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____proc_allocates_memory_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_may_call_mercury_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____proc_may_call_mercury_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_may_call_mercury_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____proc_may_call_mercury_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_may_call_mm_tabled_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____proc_may_call_mm_tabled_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_may_call_mm_tabled_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____proc_may_call_mm_tabled_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_may_duplicate_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____proc_may_duplicate_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_may_duplicate_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____proc_may_duplicate_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_may_modify_trail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____proc_may_modify_trail_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_may_modify_trail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____proc_may_modify_trail_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_may_throw_exception_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____proc_may_throw_exception_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_may_throw_exception_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____proc_may_throw_exception_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_registers_roots_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____proc_registers_roots_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_registers_roots_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____proc_registers_roots_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_tabled_for_io_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____proc_tabled_for_io_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_tabled_for_io_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____proc_tabled_for_io_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_terminates_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____proc_terminates_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_terminates_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____proc_terminates_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____proc_thread_safe_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____proc_thread_safe_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____proc_thread_safe_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____proc_thread_safe_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_foreign____Unify____uppercase_export_enum_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_foreign____Unify____uppercase_export_enum_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_foreign____Compare____uppercase_export_enum_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_data_foreign____Compare____uppercase_export_enum_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__prog_data_foreign__init(void)
{
}

void mercury__parse_tree__prog_data_foreign__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_box_policy_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_export_enum_attributes_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_infos_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_literal_or_include_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_proc_shared_code_treatment_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_attributes_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_extra_attribute_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_extra_attributes_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_impl_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_affects_liveness_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_allocates_memory_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_call_mercury_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_call_mm_tabled_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_duplicate_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_modify_trail_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_throw_exception_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_registers_roots_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_tabled_for_io_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_terminates_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_thread_safe_0);
	MR_register_type_ctor_info(&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_uppercase_export_enum_0);
}

void mercury__parse_tree__prog_data_foreign__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_data_foreign__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_data_foreign.
