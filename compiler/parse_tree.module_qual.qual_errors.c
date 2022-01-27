/*
** Automatically generated from `module_qual.qual_errors.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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


/* :- module parse_tree.module_qual.qual_errors. */
/* :- implementation. */

/*
INIT mercury__parse_tree__module_qual__qual_errors__init
ENDINIT
*/

#include "parse_tree.module_qual.qual_errors.mih"


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
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "parse_tree.module_qual.collect_mq_info.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.qualify_items.mih"




#line 102 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_0[3];

#line 105 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_0;

#line 108 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_1[3];

#line 111 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_1;

#line 114 "parse_tree.module_qual.qual_errors.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qual_errors__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 117 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_2[3];

#line 120 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_2;

#line 123 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_3[3];

#line 126 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_3;

#line 129 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_4[4];

#line 132 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_4;

#line 135 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_0[1];

#line 138 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_1[1];

#line 141 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_2[1];

#line 144 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_3[2];

#line 147 "parse_tree.module_qual.qual_errors.c"
static const MR_DuPtagLayout parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_ptag_ordered_mq_constraint_error_context_0[4];

#line 150 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_mq_constraint_error_context_0[5];

#line 153 "parse_tree.module_qual.qual_errors.c"
static const MR_Integer parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_mq_constraint_error_context_0[5];

#line 156 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_0[2];

#line 159 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_0;

#line 162 "parse_tree.module_qual.qual_errors.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qual_errors__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_ctor_field_name_0;

#line 165 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_1[5];

#line 168 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_1;

#line 171 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_2[1];

#line 174 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_2;

#line 177 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_3[3];

#line 180 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_3;

#line 183 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_4[2];

#line 186 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_4;

#line 189 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_5[2];

#line 192 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_5;

#line 195 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_6[3];

#line 198 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_6;

#line 201 "parse_tree.module_qual.qual_errors.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qual_errors__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

#line 204 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_7[3];

#line 207 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_7;

#line 210 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_8[2];

#line 213 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_8;

#line 216 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_9[1];

#line 219 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_9;

#line 222 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_10[1];

#line 225 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_10;

#line 228 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_11[1];

#line 231 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_11;

#line 234 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_12[2];

#line 237 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_12;

#line 240 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_13[2];

#line 243 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_13;

#line 246 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_14[2];

#line 249 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_14;

#line 252 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_15[3];

#line 255 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_15;

#line 258 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_0[1];

#line 261 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_1[1];

#line 264 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_2[1];

#line 267 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_3[13];

#line 270 "parse_tree.module_qual.qual_errors.c"
static const MR_DuPtagLayout parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_ptag_ordered_mq_error_context_0[4];

#line 273 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_mq_error_context_0[16];

#line 276 "parse_tree.module_qual.qual_errors.c"
static const MR_Integer parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_mq_error_context_0[16];

#line 279 "parse_tree.module_qual.qual_errors.c"
static MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0_10001(
#line 282 "parse_tree.module_qual.qual_errors.c"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1,
#line 284 "parse_tree.module_qual.qual_errors.c"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2);

#line 287 "parse_tree.module_qual.qual_errors.c"
static void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0_10001(
#line 290 "parse_tree.module_qual.qual_errors.c"
  MR_Box * parse_tree__module_qual__qual_errors__wrapper_arg_1,
#line 292 "parse_tree.module_qual.qual_errors.c"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2,
#line 294 "parse_tree.module_qual.qual_errors.c"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_3);

#line 297 "parse_tree.module_qual.qual_errors.c"
static MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_error_context_0_0_10001(
#line 300 "parse_tree.module_qual.qual_errors.c"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1,
#line 302 "parse_tree.module_qual.qual_errors.c"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2);

#line 305 "parse_tree.module_qual.qual_errors.c"
static void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_error_context_0_0_10001(
#line 308 "parse_tree.module_qual.qual_errors.c"
  MR_Box * parse_tree__module_qual__qual_errors__wrapper_arg_1,
#line 310 "parse_tree.module_qual.qual_errors.c"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2,
#line 312 "parse_tree.module_qual.qual_errors.c"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_3);

#line 599 "module_qual.qual_errors.m"
static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__wrap_id_1_f_0(
#line 599 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1);

#line 594 "module_qual.qual_errors.m"
static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__wrap_type_ctor_1_f_0(
#line 594 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1);

#line 590 "module_qual.qual_errors.m"
static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(
#line 590 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__SymName_3);

#line 586 "module_qual.qual_errors.m"
static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__id_to_sym_name_and_arity_1_f_0(
#line 586 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1);

#line 577 "module_qual.qual_errors.m"
static void MR_CALL 
parse_tree__module_qual__qual_errors__id_types_to_string_2_p_0(
#line 577 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1,
#line 577 "module_qual.qual_errors.m"
  MR_String * parse_tree__module_qual__qual_errors__HeadVar__2_2);

#line 570 "module_qual.qual_errors.m"
static void MR_CALL 
parse_tree__module_qual__qual_errors__id_type_to_string_2_p_0(
#line 570 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1,
#line 570 "module_qual.qual_errors.m"
  MR_String * parse_tree__module_qual__qual_errors__HeadVar__2_2);

#line 381 "module_qual.qual_errors.m"
static void MR_CALL 
parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_3_p_0(
#line 381 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__ErrorContext_4,
#line 381 "module_qual.qual_errors.m"
  MR_Word * parse_tree__module_qual__qual_errors__Context_5,
#line 381 "module_qual.qual_errors.m"
  MR_Word * parse_tree__module_qual__qual_errors__Pieces_6);

#line 341 "module_qual.qual_errors.m"
static void MR_CALL 
parse_tree__module_qual__qual_errors__mq_constraint_error_context_to_pieces_4_p_0(
#line 341 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__ConstraintErrorContext_5,
#line 341 "module_qual.qual_errors.m"
  MR_Word * parse_tree__module_qual__qual_errors__Context_6,
#line 341 "module_qual.qual_errors.m"
  MR_String * parse_tree__module_qual__qual_errors__Start_7,
#line 341 "module_qual.qual_errors.m"
  MR_Word * parse_tree__module_qual__qual_errors__Pieces_8);

#line 330 "module_qual.qual_errors.m"
static void MR_CALL 
parse_tree__module_qual__qual_errors__warn_redundant_import_context_3_p_0(
#line 330 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__ImportedModuleName_4,
#line 330 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__Context_5,
#line 330 "module_qual.qual_errors.m"
  MR_Word * parse_tree__module_qual__qual_errors__Msg_6);

#line 242 "module_qual.qual_errors.m"
static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__module_name_matches_some_2_f_0(
#line 242 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1,
#line 242 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2);

#line 324 "module_qual.qual_errors.m"
static void MR_CALL 
parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0_1(
#line 324 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
#line 324 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1,
#line 324 "module_qual.qual_errors.m"
  MR_Box * parse_tree__module_qual__qual_errors__wrapper_arg_2);

#line 275 "module_qual.qual_errors.m"
static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_3(
#line 275 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
#line 275 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1);

#line 275 "module_qual.qual_errors.m"
static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_2(
#line 275 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
#line 275 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1);

#line 257 "module_qual.qual_errors.m"
static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_1(
#line 257 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
#line 257 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1);

#line 229 "module_qual.qual_errors.m"
static void MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_8_p_0_2(
#line 229 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
#line 229 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1,
#line 229 "module_qual.qual_errors.m"
  MR_Box * parse_tree__module_qual__qual_errors__wrapper_arg_2);

#line 212 "module_qual.qual_errors.m"
static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_8_p_0_1(
#line 212 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
#line 212 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1);


static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_1[91][2];

static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_2[2][5];

static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_3[5][3];

static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_5[1][6];


#line 572 "module_qual.qual_errors.m"
/* sealed */ struct parse_tree__module_qual__qual_errors__vector_common_type_4_0_s {
#line 572 "module_qual.qual_errors.m"
  const MR_String parse_tree__module_qual__qual_errors__vector_common_type_4_0__vct_4_f_0;
#line 572 "module_qual.qual_errors.m"
};

static /* final */ const struct parse_tree__module_qual__qual_errors__vector_common_type_4_0_s parse_tree__module_qual__qual_errors_vector_common_4[12];



static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_1[91][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has not been imported.)"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[3])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not been imported in the interface.)"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[3])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ".)"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[3])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The possible matches are in modules"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may not be used in the interface."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[3])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may be necessary."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[3])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "An explicit module qualifier"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and thus it may not be used in the interface."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[3])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not exported,"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: variable used as inst constructor."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[3])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but it is not used in the interface."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[3])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is imported in the interface,"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is also redundantly imported here."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[3])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: undefined"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(The module"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(The"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(There"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "named"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "ambiguity error: multiple possible matches for"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "match"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in modules"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "matches"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[50])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[21])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__module_qual__qual_errors_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: the"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: module"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Module"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "definition of type class"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "class method"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "instance definition for"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration of "))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "function symbol"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for type constructor"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration of typeclass"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "clause mode annotation"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(field name"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the type"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "definition of inst"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration of instance of typeclass"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "mode declaration for lambda expression"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "definition of mode"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for mutable "))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "pragma"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "mode declaration for"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "definition of type"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "explicit type qualification"))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type class constraint for "))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_2[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_3[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_2[0])),
    ((MR_Box) (parse_tree__module_qual__qual_errors__report_undefined_mq_id_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_2[1])),
    ((MR_Box) (parse_tree__module_qual__qual_errors__report_undefined_mq_id_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_2[0])),
    ((MR_Box) (parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_2[0])),
    ((MR_Box) (parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_2[0])),
    ((MR_Box) (parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
};


static /* final */ const struct parse_tree__module_qual__qual_errors__vector_common_type_4_0_s parse_tree__module_qual__qual_errors_vector_common_4[12] = {
  /* row 0 */   {     (MR_String) "type" },
  /* row 1 */   {     (MR_String) "mode" },
  /* row 2 */   {     (MR_String) "inst" },
  /* row 3 */   {     (MR_String) "typeclass" },
  /* row 4 */   {     (MR_String) "type" },
  /* row 5 */   {     (MR_String) "mode" },
  /* row 6 */   {     (MR_String) "inst" },
  /* row 7 */   {     (MR_String) "typeclass" },
  /* row 8 */   {     (MR_String) "types" },
  /* row 9 */   {     (MR_String) "modes" },
  /* row 10 */   {     (MR_String) "insts" },
  /* row 11 */   {     (MR_String) "typeclasses" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1014 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1021 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_0 = {
  (MR_String) "mqcec_class_defn",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_0,
  NULL,
  NULL,
  NULL
};

#line 1036 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_1[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1043 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_1 = {
  (MR_String) "mqcec_class_method",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_1,
  NULL,
  NULL,
  NULL
};

#line 1058 "parse_tree.module_qual.qual_errors.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qual_errors__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1066 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_2[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__qual_errors__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 1073 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_2 = {
  (MR_String) "mqcec_instance_defn",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_2,
  NULL,
  NULL,
  NULL
};

#line 1088 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_3[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1095 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_3 = {
  (MR_String) "mqcec_type_defn_constructor",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_3,
  NULL,
  NULL,
  NULL
};

#line 1110 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_4[4] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1118 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_4 = {
  (MR_String) "mqcec_pred_decl",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_4,
  NULL,
  NULL,
  NULL
};

#line 1133 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_0[1] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_0
};

#line 1138 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_1[1] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_1
};

#line 1143 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_2[1] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_2
};

#line 1148 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_3[2] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_3,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_4
};

#line 1154 "parse_tree.module_qual.qual_errors.c"
static const MR_DuPtagLayout parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_ptag_ordered_mq_constraint_error_context_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_3
  }
};

#line 1178 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_mq_constraint_error_context_0[5] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_0,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_1,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_2,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_4,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_3
};

#line 1187 "parse_tree.module_qual.qual_errors.c"
static const MR_Integer parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_mq_constraint_error_context_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 3
};

#line 1196 "parse_tree.module_qual.qual_errors.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_mq_constraint_error_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0_10001)),
  (MR_String) "parse_tree.module_qual.qual_errors",
  (MR_String) "mq_constraint_error_context",
  {     parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_mq_constraint_error_context_0 },
  {     parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_ptag_ordered_mq_constraint_error_context_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_mq_constraint_error_context_0
};

#line 1213 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 1219 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_0 = {
  (MR_String) "mqec_type_defn",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_0,
  NULL,
  NULL,
  NULL
};

#line 1234 "parse_tree.module_qual.qual_errors.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qual_errors__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_ctor_field_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0
  }
};

#line 1242 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_1[5] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__qual_errors__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_ctor_field_name_0
};

#line 1251 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_1 = {
  (MR_String) "mqec_constructor_arg",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_1,
  NULL,
  NULL,
  NULL
};

#line 1266 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_mq_constraint_error_context_0
};

#line 1271 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_2 = {
  (MR_String) "mqec_typeclass_constraint_name",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_2,
  NULL,
  NULL,
  NULL
};

#line 1286 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_3[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_mq_constraint_error_context_0
};

#line 1293 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_3 = {
  (MR_String) "mqec_typeclass_constraint",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_3,
  NULL,
  NULL,
  NULL
};

#line 1308 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_4[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0
};

#line 1314 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_4 = {
  (MR_String) "mqec_inst",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_4,
  NULL,
  NULL,
  NULL
};

#line 1329 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_5[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0
};

#line 1335 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_5 = {
  (MR_String) "mqec_mode",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_5,
  NULL,
  NULL,
  NULL
};

#line 1350 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_6[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0
};

#line 1357 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_6 = {
  (MR_String) "mqec_pred_or_func",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_6,
  NULL,
  NULL,
  NULL
};

#line 1372 "parse_tree.module_qual.qual_errors.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qual_errors__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
  }
};

#line 1380 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_7[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__qual_errors__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0
};

#line 1387 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_7 = {
  (MR_String) "mqec_pred_or_func_mode",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_7,
  NULL,
  NULL,
  NULL
};

#line 1402 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_8[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_type_0
};

#line 1408 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_8 = {
  (MR_String) "mqec_pragma",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 8,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_8,
  NULL,
  NULL,
  NULL
};

#line 1423 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_9[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1428 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_9 = {
  (MR_String) "mqec_lambda_expr",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 9,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_9,
  NULL,
  NULL,
  NULL
};

#line 1443 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_10[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1448 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_10 = {
  (MR_String) "mqec_clause_mode_annotation",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 10,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_10,
  NULL,
  NULL,
  NULL
};

#line 1463 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_11[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1468 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_11 = {
  (MR_String) "mqec_type_qual",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 11,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_11,
  NULL,
  NULL,
  NULL
};

#line 1483 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_12[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0
};

#line 1489 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_12 = {
  (MR_String) "mqec_class",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 12,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_12,
  NULL,
  NULL,
  NULL
};

#line 1504 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_13[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0
};

#line 1510 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_13 = {
  (MR_String) "mqec_instance",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 13,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_13,
  NULL,
  NULL,
  NULL
};

#line 1525 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_14[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1531 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_14 = {
  (MR_String) "mqec_mutable",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 11,
  (MR_Integer) 14,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_14,
  NULL,
  NULL,
  NULL
};

#line 1546 "parse_tree.module_qual.qual_errors.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_15[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1553 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_15 = {
  (MR_String) "mqec_event_spec_attr",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 12,
  (MR_Integer) 15,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_15,
  NULL,
  NULL,
  NULL
};

#line 1568 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_0[1] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_0
};

#line 1573 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_1[1] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_1
};

#line 1578 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_2[1] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_2
};

#line 1583 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_3[13] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_3,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_4,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_5,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_6,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_7,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_8,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_9,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_10,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_11,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_12,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_13,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_14,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_15
};

#line 1600 "parse_tree.module_qual.qual_errors.c"
static const MR_DuPtagLayout parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_ptag_ordered_mq_error_context_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_2
  },
  {
    (MR_Integer) 13,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_3
  }
};

#line 1624 "parse_tree.module_qual.qual_errors.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_mq_error_context_0[16] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_12,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_10,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_1,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_15,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_4,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_13,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_9,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_5,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_14,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_8,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_6,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_7,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_0,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_11,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_3,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_2
};

#line 1644 "parse_tree.module_qual.qual_errors.c"
static const MR_Integer parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_mq_error_context_0[16] = {
  (MR_Integer) 12,
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 14,
  (MR_Integer) 4,
  (MR_Integer) 7,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 9,
  (MR_Integer) 6,
  (MR_Integer) 1,
  (MR_Integer) 13,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 8,
  (MR_Integer) 3
};

#line 1664 "parse_tree.module_qual.qual_errors.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_mq_error_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__qual_errors____Unify____mq_error_context_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__qual_errors____Compare____mq_error_context_0_0_10001)),
  (MR_String) "parse_tree.module_qual.qual_errors",
  (MR_String) "mq_error_context",
  {     parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_mq_error_context_0 },
  {     parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_ptag_ordered_mq_error_context_0 },
  (MR_Integer) 16,
  (MR_Integer) 4,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_mq_error_context_0
};

#line 1681 "parse_tree.module_qual.qual_errors.c"
static MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0_10001(
#line 1684 "parse_tree.module_qual.qual_errors.c"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1,
#line 1686 "parse_tree.module_qual.qual_errors.c"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2)
#line 1688 "parse_tree.module_qual.qual_errors.c"
{
#line 1690 "parse_tree.module_qual.qual_errors.c"
  {
#line 1692 "parse_tree.module_qual.qual_errors.c"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;

#line 1695 "parse_tree.module_qual.qual_errors.c"
    {
#line 1697 "parse_tree.module_qual.qual_errors.c"
      parse_tree__module_qual__qual_errors__succeeded = parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0(((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_2));
    }
#line 1700 "parse_tree.module_qual.qual_errors.c"
    return parse_tree__module_qual__qual_errors__succeeded;
#line 1702 "parse_tree.module_qual.qual_errors.c"
  }
#line 1704 "parse_tree.module_qual.qual_errors.c"
}

#line 1707 "parse_tree.module_qual.qual_errors.c"
static void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0_10001(
#line 1710 "parse_tree.module_qual.qual_errors.c"
  MR_Box * parse_tree__module_qual__qual_errors__wrapper_arg_1,
#line 1712 "parse_tree.module_qual.qual_errors.c"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2,
#line 1714 "parse_tree.module_qual.qual_errors.c"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_3)
#line 1716 "parse_tree.module_qual.qual_errors.c"
{
#line 1718 "parse_tree.module_qual.qual_errors.c"
  {
#line 1720 "parse_tree.module_qual.qual_errors.c"
    MR_Word parse_tree__module_qual__qual_errors__conv0_HeadVar__1_1;

#line 1723 "parse_tree.module_qual.qual_errors.c"
    {
#line 1725 "parse_tree.module_qual.qual_errors.c"
      parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0(&parse_tree__module_qual__qual_errors__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_3));
    }
#line 1728 "parse_tree.module_qual.qual_errors.c"
    *parse_tree__module_qual__qual_errors__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__qual_errors__conv0_HeadVar__1_1));
#line 1730 "parse_tree.module_qual.qual_errors.c"
  }
#line 1732 "parse_tree.module_qual.qual_errors.c"
}

#line 1735 "parse_tree.module_qual.qual_errors.c"
static MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_error_context_0_0_10001(
#line 1738 "parse_tree.module_qual.qual_errors.c"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1,
#line 1740 "parse_tree.module_qual.qual_errors.c"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2)
#line 1742 "parse_tree.module_qual.qual_errors.c"
{
#line 1744 "parse_tree.module_qual.qual_errors.c"
  {
#line 1746 "parse_tree.module_qual.qual_errors.c"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;

#line 1749 "parse_tree.module_qual.qual_errors.c"
    {
#line 1751 "parse_tree.module_qual.qual_errors.c"
      parse_tree__module_qual__qual_errors__succeeded = parse_tree__module_qual__qual_errors____Unify____mq_error_context_0_0(((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_2));
    }
#line 1754 "parse_tree.module_qual.qual_errors.c"
    return parse_tree__module_qual__qual_errors__succeeded;
#line 1756 "parse_tree.module_qual.qual_errors.c"
  }
#line 1758 "parse_tree.module_qual.qual_errors.c"
}

#line 1761 "parse_tree.module_qual.qual_errors.c"
static void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_error_context_0_0_10001(
#line 1764 "parse_tree.module_qual.qual_errors.c"
  MR_Box * parse_tree__module_qual__qual_errors__wrapper_arg_1,
#line 1766 "parse_tree.module_qual.qual_errors.c"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2,
#line 1768 "parse_tree.module_qual.qual_errors.c"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_3)
#line 1770 "parse_tree.module_qual.qual_errors.c"
{
#line 1772 "parse_tree.module_qual.qual_errors.c"
  {
#line 1774 "parse_tree.module_qual.qual_errors.c"
    MR_Word parse_tree__module_qual__qual_errors__conv0_HeadVar__1_1;

#line 1777 "parse_tree.module_qual.qual_errors.c"
    {
#line 1779 "parse_tree.module_qual.qual_errors.c"
      parse_tree__module_qual__qual_errors____Compare____mq_error_context_0_0(&parse_tree__module_qual__qual_errors__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_3));
    }
#line 1782 "parse_tree.module_qual.qual_errors.c"
    *parse_tree__module_qual__qual_errors__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__qual_errors__conv0_HeadVar__1_1));
#line 1784 "parse_tree.module_qual.qual_errors.c"
  }
#line 1786 "parse_tree.module_qual.qual_errors.c"
}

#line 155 "module_qual.qual_errors.m"
void MR_CALL 
parse_tree__module_qual__qual_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_105_110_118_97_108_105_100_95_117_115_101_114_95_105_110_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(
#line 155 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__ErrorContext_8,
#line 155 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_15,
#line 155 "module_qual.qual_errors.m"
  MR_Word * parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_16)
#line 155 "module_qual.qual_errors.m"
{
#line 304 "module_qual.qual_errors.m"
  {
#line 304 "module_qual.qual_errors.m"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
#line 304 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__TypeCtorInfo_41_41;
#line 304 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__Context_10;
#line 304 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__ErrorContextPieces_11;
#line 304 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__Pieces_12;
#line 304 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__Msg_13;
#line 304 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__Spec_14;
#line 304 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_21_21;
#line 304 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_33_33;
#line 304 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_34_34;
#line 304 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_38_38;

#line 305 "module_qual.qual_errors.m"
    {
#line 305 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_3_p_0(parse_tree__module_qual__qual_errors__ErrorContext_8, &parse_tree__module_qual__qual_errors__Context_10, &parse_tree__module_qual__qual_errors__ErrorContextPieces_11);
    }
#line 1830 "parse_tree.module_qual.qual_errors.c"
    parse_tree__module_qual__qual_errors__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 306 "module_qual.qual_errors.m"
    {
#line 306 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_21_21 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_41_41, parse_tree__module_qual__qual_errors__ErrorContextPieces_11, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[30]));
    }
#line 306 "module_qual.qual_errors.m"
    {
#line 306 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__Pieces_12 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_41_41, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[38]), parse_tree__module_qual__qual_errors__V_21_21);
    }
#line 308 "module_qual.qual_errors.m"
    {
#line 308 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 308 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_34_34, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Pieces_12));
#line 308 "module_qual.qual_errors.m"
    }
#line 308 "module_qual.qual_errors.m"
    {
#line 308 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_33_33, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_34_34));
#line 308 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 308 "module_qual.qual_errors.m"
    }
#line 308 "module_qual.qual_errors.m"
    {
#line 308 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 308 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Msg_13, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Context_10));
#line 308 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Msg_13, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_33_33));
#line 308 "module_qual.qual_errors.m"
    }
#line 309 "module_qual.qual_errors.m"
    {
#line 309 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_38_38, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Msg_13));
#line 309 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 309 "module_qual.qual_errors.m"
    }
#line 309 "module_qual.qual_errors.m"
    {
#line 309 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 309 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 309 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 309 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_14, 2) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_38_38));
#line 309 "module_qual.qual_errors.m"
    }
#line 310 "module_qual.qual_errors.m"
    {
#line 310 "module_qual.qual_errors.m"
      MR_Word base;
#line 310 "module_qual.qual_errors.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "module_qual.qual_errors.m"
      *parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_16 = base;
#line 310 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Spec_14));
#line 310 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_15));
#line 310 "module_qual.qual_errors.m"
    }
#line 304 "module_qual.qual_errors.m"
  }
#line 155 "module_qual.qual_errors.m"
}

#line 62 "module_qual.qual_errors.m"
void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_error_context_0_0(
#line 62 "module_qual.qual_errors.m"
  MR_Word * parse_tree__module_qual__qual_errors__HeadVar__1_1,
#line 62 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2,
#line 62 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__3_3)
#line 62 "module_qual.qual_errors.m"
{
#line 62 "module_qual.qual_errors.m"
  {
#line 62 "module_qual.qual_errors.m"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
#line 62 "module_qual.qual_errors.m"
    MR_Integer parse_tree__module_qual__qual_errors__CastX_96 = (MR_Integer) parse_tree__module_qual__qual_errors__HeadVar__2_2;
#line 62 "module_qual.qual_errors.m"
    MR_Integer parse_tree__module_qual__qual_errors__CastY_97 = (MR_Integer) parse_tree__module_qual__qual_errors__HeadVar__3_3;

#line 62 "module_qual.qual_errors.m"
    parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__CastX_96 == parse_tree__module_qual__qual_errors__CastY_97);
#line 62 "module_qual.qual_errors.m"
    if (parse_tree__module_qual__qual_errors__succeeded)
#line 1935 "parse_tree.module_qual.qual_errors.c"
      *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 0;
#line 62 "module_qual.qual_errors.m"
    else
#line 62 "module_qual.qual_errors.m"
      {
#line 62 "module_qual.qual_errors.m"
        MR_Integer parse_tree__module_qual__qual_errors__V_4_4;
#line 62 "module_qual.qual_errors.m"
        MR_Integer parse_tree__module_qual__qual_errors__V_5_5;

#line 62 "module_qual.qual_errors.m"
        {
#line 62 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors____Index____mq_error_context_0_0(parse_tree__module_qual__qual_errors__HeadVar__2_2, &parse_tree__module_qual__qual_errors__V_4_4);
        }
#line 62 "module_qual.qual_errors.m"
        {
#line 62 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors____Index____mq_error_context_0_0(parse_tree__module_qual__qual_errors__HeadVar__3_3, &parse_tree__module_qual__qual_errors__V_5_5);
        }
#line 62 "module_qual.qual_errors.m"
        parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_4_4 < parse_tree__module_qual__qual_errors__V_5_5);
#line 62 "module_qual.qual_errors.m"
        if (parse_tree__module_qual__qual_errors__succeeded)
#line 1960 "parse_tree.module_qual.qual_errors.c"
          *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 62 "module_qual.qual_errors.m"
        else
#line 62 "module_qual.qual_errors.m"
          {
#line 62 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_4_4 > parse_tree__module_qual__qual_errors__V_5_5);
#line 62 "module_qual.qual_errors.m"
            if (parse_tree__module_qual__qual_errors__succeeded)
#line 1970 "parse_tree.module_qual.qual_errors.c"
              *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 62 "module_qual.qual_errors.m"
            else
#line 62 "module_qual.qual_errors.m"
              {
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_6_6;

#line 62 "module_qual.qual_errors.m"
#line 62 "module_qual.qual_errors.m"
                switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) {
#line 62 "module_qual.qual_errors.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 62 "module_qual.qual_errors.m"
                  case (MR_Integer) 0:
#line 62 "module_qual.qual_errors.m"
                    {
#line 62 "module_qual.qual_errors.m"
                      MR_Word parse_tree__module_qual__qual_errors__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 62 "module_qual.qual_errors.m"
                      MR_Word parse_tree__module_qual__qual_errors__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                      MR_Word parse_tree__module_qual__qual_errors__V_9_9;
#line 62 "module_qual.qual_errors.m"
                      MR_Word parse_tree__module_qual__qual_errors__V_10_10;
#line 62 "module_qual.qual_errors.m"
                      MR_Word parse_tree__module_qual__qual_errors__V_11_11;

#line 62 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0)));
#line 62 "module_qual.qual_errors.m"
                      if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                        {
#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)));
#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                          {
#line 62 "module_qual.qual_errors.m"
                            mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__V_11_11, parse_tree__module_qual__qual_errors__V_7_7, parse_tree__module_qual__qual_errors__V_9_9);
                          }
#line 2014 "parse_tree.module_qual.qual_errors.c"
                          parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_11_11 == (MR_Integer) 0);
#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 62 "module_qual.qual_errors.m"
                          if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                            parse_tree__module_qual__qual_errors__V_6_6 = parse_tree__module_qual__qual_errors__V_11_11;
#line 62 "module_qual.qual_errors.m"
                          else
#line 62 "module_qual.qual_errors.m"
                            {
#line 62 "module_qual.qual_errors.m"
                              parse_tree__prog_data____Compare____type_ctor_0_0(&parse_tree__module_qual__qual_errors__V_6_6, parse_tree__module_qual__qual_errors__V_8_8, parse_tree__module_qual__qual_errors__V_10_10);
                            }
#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
#line 62 "module_qual.qual_errors.m"
                        }
#line 62 "module_qual.qual_errors.m"
                    }
#line 62 "module_qual.qual_errors.m"
                    break;
#line 62 "module_qual.qual_errors.m"
                  case (MR_Integer) 1:
#line 62 "module_qual.qual_errors.m"
                    {
#line 62 "module_qual.qual_errors.m"
                      MR_Word parse_tree__module_qual__qual_errors__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 62 "module_qual.qual_errors.m"
                      MR_Word parse_tree__module_qual__qual_errors__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                      MR_String parse_tree__module_qual__qual_errors__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                      MR_Integer parse_tree__module_qual__qual_errors__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
#line 62 "module_qual.qual_errors.m"
                      MR_Word parse_tree__module_qual__qual_errors__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 4)));
#line 62 "module_qual.qual_errors.m"
                      MR_Word parse_tree__module_qual__qual_errors__V_17_17;
#line 62 "module_qual.qual_errors.m"
                      MR_Word parse_tree__module_qual__qual_errors__V_18_18;
#line 62 "module_qual.qual_errors.m"
                      MR_String parse_tree__module_qual__qual_errors__V_19_19;
#line 62 "module_qual.qual_errors.m"
                      MR_Integer parse_tree__module_qual__qual_errors__V_20_20;
#line 62 "module_qual.qual_errors.m"
                      MR_Word parse_tree__module_qual__qual_errors__V_21_21;
#line 62 "module_qual.qual_errors.m"
                      MR_Word parse_tree__module_qual__qual_errors__V_22_22;

#line 62 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                      if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                        {
#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)));
#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 3)));
#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 4)));
#line 62 "module_qual.qual_errors.m"
                          {
#line 62 "module_qual.qual_errors.m"
                            mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__V_22_22, parse_tree__module_qual__qual_errors__V_12_12, parse_tree__module_qual__qual_errors__V_17_17);
                          }
#line 2085 "parse_tree.module_qual.qual_errors.c"
                          parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_22_22 == (MR_Integer) 0);
#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 62 "module_qual.qual_errors.m"
                          if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                            parse_tree__module_qual__qual_errors__V_6_6 = parse_tree__module_qual__qual_errors__V_22_22;
#line 62 "module_qual.qual_errors.m"
                          else
#line 62 "module_qual.qual_errors.m"
                            {
#line 62 "module_qual.qual_errors.m"
                              MR_Word parse_tree__module_qual__qual_errors__V_23_23;

#line 62 "module_qual.qual_errors.m"
                              {
#line 62 "module_qual.qual_errors.m"
                                parse_tree__prog_data____Compare____type_ctor_0_0(&parse_tree__module_qual__qual_errors__V_23_23, parse_tree__module_qual__qual_errors__V_13_13, parse_tree__module_qual__qual_errors__V_18_18);
                              }
#line 2105 "parse_tree.module_qual.qual_errors.c"
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_23_23 == (MR_Integer) 0);
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 62 "module_qual.qual_errors.m"
                              if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                                parse_tree__module_qual__qual_errors__V_6_6 = parse_tree__module_qual__qual_errors__V_23_23;
#line 62 "module_qual.qual_errors.m"
                              else
#line 62 "module_qual.qual_errors.m"
                                {
#line 62 "module_qual.qual_errors.m"
                                  MR_Word parse_tree__module_qual__qual_errors__V_24_24;

#line 62 "module_qual.qual_errors.m"
                                  {
#line 62 "module_qual.qual_errors.m"
                                    mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__module_qual__qual_errors__V_24_24, parse_tree__module_qual__qual_errors__V_14_14, parse_tree__module_qual__qual_errors__V_19_19);
                                  }
#line 2125 "parse_tree.module_qual.qual_errors.c"
                                  parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_24_24 == (MR_Integer) 0);
#line 62 "module_qual.qual_errors.m"
                                  parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 62 "module_qual.qual_errors.m"
                                  if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                                    parse_tree__module_qual__qual_errors__V_6_6 = parse_tree__module_qual__qual_errors__V_24_24;
#line 62 "module_qual.qual_errors.m"
                                  else
#line 62 "module_qual.qual_errors.m"
                                    {
#line 62 "module_qual.qual_errors.m"
                                      MR_Word parse_tree__module_qual__qual_errors__V_25_25;

#line 62 "module_qual.qual_errors.m"
                                      {
#line 62 "module_qual.qual_errors.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__qual_errors__V_25_25, parse_tree__module_qual__qual_errors__V_15_15, parse_tree__module_qual__qual_errors__V_20_20);
                                      }
#line 2145 "parse_tree.module_qual.qual_errors.c"
                                      parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_25_25 == (MR_Integer) 0);
#line 62 "module_qual.qual_errors.m"
                                      parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 62 "module_qual.qual_errors.m"
                                      if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                                        parse_tree__module_qual__qual_errors__V_6_6 = parse_tree__module_qual__qual_errors__V_25_25;
#line 62 "module_qual.qual_errors.m"
                                      else
#line 62 "module_qual.qual_errors.m"
                                        {
#line 62 "module_qual.qual_errors.m"
                                          {
#line 62 "module_qual.qual_errors.m"
                                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_1[1], &parse_tree__module_qual__qual_errors__V_6_6, ((MR_Box) (parse_tree__module_qual__qual_errors__V_16_16)), ((MR_Box) (parse_tree__module_qual__qual_errors__V_21_21)));
                                          }
#line 62 "module_qual.qual_errors.m"
                                        }
#line 62 "module_qual.qual_errors.m"
                                    }
#line 62 "module_qual.qual_errors.m"
                                }
#line 62 "module_qual.qual_errors.m"
                            }
#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
#line 62 "module_qual.qual_errors.m"
                        }
#line 62 "module_qual.qual_errors.m"
                    }
#line 62 "module_qual.qual_errors.m"
                    break;
#line 62 "module_qual.qual_errors.m"
                  case (MR_Integer) 2:
#line 62 "module_qual.qual_errors.m"
                    {
#line 62 "module_qual.qual_errors.m"
                      MR_Word parse_tree__module_qual__qual_errors__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 62 "module_qual.qual_errors.m"
                      MR_Word parse_tree__module_qual__qual_errors__V_27_27;

#line 62 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                      if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                        {
#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)));
#line 62 "module_qual.qual_errors.m"
                          {
#line 62 "module_qual.qual_errors.m"
                            parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0(&parse_tree__module_qual__qual_errors__V_6_6, parse_tree__module_qual__qual_errors__V_26_26, parse_tree__module_qual__qual_errors__V_27_27);
                          }
#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
#line 62 "module_qual.qual_errors.m"
                        }
#line 62 "module_qual.qual_errors.m"
                    }
#line 62 "module_qual.qual_errors.m"
                    break;
#line 62 "module_qual.qual_errors.m"
                  case (MR_Integer) 3:
#line 62 "module_qual.qual_errors.m"
#line 62 "module_qual.qual_errors.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) {
#line 62 "module_qual.qual_errors.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 62 "module_qual.qual_errors.m"
                      case (MR_Integer) 0:
#line 62 "module_qual.qual_errors.m"
                        {
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                          MR_Integer parse_tree__module_qual__qual_errors__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_31_31;
#line 62 "module_qual.qual_errors.m"
                          MR_Integer parse_tree__module_qual__qual_errors__V_32_32;
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_33_33;
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_34_34;

#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 62 "module_qual.qual_errors.m"
                          if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                            {
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 3)));
#line 62 "module_qual.qual_errors.m"
                              {
#line 62 "module_qual.qual_errors.m"
                                mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__module_qual__qual_errors__V_34_34, parse_tree__module_qual__qual_errors__V_28_28, parse_tree__module_qual__qual_errors__V_31_31);
                              }
#line 2251 "parse_tree.module_qual.qual_errors.c"
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_34_34 == (MR_Integer) 0);
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 62 "module_qual.qual_errors.m"
                              if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                                parse_tree__module_qual__qual_errors__V_6_6 = parse_tree__module_qual__qual_errors__V_34_34;
#line 62 "module_qual.qual_errors.m"
                              else
#line 62 "module_qual.qual_errors.m"
                                {
#line 62 "module_qual.qual_errors.m"
                                  MR_Word parse_tree__module_qual__qual_errors__V_35_35;

#line 62 "module_qual.qual_errors.m"
                                  {
#line 62 "module_qual.qual_errors.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__qual_errors__V_35_35, parse_tree__module_qual__qual_errors__V_29_29, parse_tree__module_qual__qual_errors__V_32_32);
                                  }
#line 2271 "parse_tree.module_qual.qual_errors.c"
                                  parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_35_35 == (MR_Integer) 0);
#line 62 "module_qual.qual_errors.m"
                                  parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 62 "module_qual.qual_errors.m"
                                  if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                                    parse_tree__module_qual__qual_errors__V_6_6 = parse_tree__module_qual__qual_errors__V_35_35;
#line 62 "module_qual.qual_errors.m"
                                  else
#line 62 "module_qual.qual_errors.m"
                                    {
#line 62 "module_qual.qual_errors.m"
                                      parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0(&parse_tree__module_qual__qual_errors__V_6_6, parse_tree__module_qual__qual_errors__V_30_30, parse_tree__module_qual__qual_errors__V_33_33);
                                    }
#line 62 "module_qual.qual_errors.m"
                                }
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
#line 62 "module_qual.qual_errors.m"
                            }
#line 62 "module_qual.qual_errors.m"
                        }
#line 62 "module_qual.qual_errors.m"
                        break;
#line 62 "module_qual.qual_errors.m"
                      case (MR_Integer) 1:
#line 62 "module_qual.qual_errors.m"
                        {
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_38_38;
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_39_39;
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_40_40;

#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                          if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                            {
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                              {
#line 62 "module_qual.qual_errors.m"
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__V_40_40, parse_tree__module_qual__qual_errors__V_36_36, parse_tree__module_qual__qual_errors__V_38_38);
                              }
#line 2326 "parse_tree.module_qual.qual_errors.c"
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_40_40 == (MR_Integer) 0);
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 62 "module_qual.qual_errors.m"
                              if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                                parse_tree__module_qual__qual_errors__V_6_6 = parse_tree__module_qual__qual_errors__V_40_40;
#line 62 "module_qual.qual_errors.m"
                              else
#line 62 "module_qual.qual_errors.m"
                                {
#line 62 "module_qual.qual_errors.m"
                                  parse_tree__module_qual__id_set____Compare____mq_id_0_0(&parse_tree__module_qual__qual_errors__V_6_6, parse_tree__module_qual__qual_errors__V_37_37, parse_tree__module_qual__qual_errors__V_39_39);
                                }
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
#line 62 "module_qual.qual_errors.m"
                            }
#line 62 "module_qual.qual_errors.m"
                        }
#line 62 "module_qual.qual_errors.m"
                        break;
#line 62 "module_qual.qual_errors.m"
                      case (MR_Integer) 2:
#line 62 "module_qual.qual_errors.m"
                        {
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_43_43;
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_44_44;
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_45_45;

#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                          if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                            {
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                              {
#line 62 "module_qual.qual_errors.m"
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__V_45_45, parse_tree__module_qual__qual_errors__V_41_41, parse_tree__module_qual__qual_errors__V_43_43);
                              }
#line 2379 "parse_tree.module_qual.qual_errors.c"
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_45_45 == (MR_Integer) 0);
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 62 "module_qual.qual_errors.m"
                              if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                                parse_tree__module_qual__qual_errors__V_6_6 = parse_tree__module_qual__qual_errors__V_45_45;
#line 62 "module_qual.qual_errors.m"
                              else
#line 62 "module_qual.qual_errors.m"
                                {
#line 62 "module_qual.qual_errors.m"
                                  parse_tree__module_qual__id_set____Compare____mq_id_0_0(&parse_tree__module_qual__qual_errors__V_6_6, parse_tree__module_qual__qual_errors__V_42_42, parse_tree__module_qual__qual_errors__V_44_44);
                                }
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
#line 62 "module_qual.qual_errors.m"
                            }
#line 62 "module_qual.qual_errors.m"
                        }
#line 62 "module_qual.qual_errors.m"
                        break;
#line 62 "module_qual.qual_errors.m"
                      case (MR_Integer) 3:
#line 62 "module_qual.qual_errors.m"
                        {
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_49_49;
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_50_50;
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_51_51;
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_52_52;

#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 62 "module_qual.qual_errors.m"
                          if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                            {
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 3)));
#line 62 "module_qual.qual_errors.m"
                              {
#line 62 "module_qual.qual_errors.m"
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__V_52_52, parse_tree__module_qual__qual_errors__V_46_46, parse_tree__module_qual__qual_errors__V_49_49);
                              }
#line 2438 "parse_tree.module_qual.qual_errors.c"
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_52_52 == (MR_Integer) 0);
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 62 "module_qual.qual_errors.m"
                              if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                                parse_tree__module_qual__qual_errors__V_6_6 = parse_tree__module_qual__qual_errors__V_52_52;
#line 62 "module_qual.qual_errors.m"
                              else
#line 62 "module_qual.qual_errors.m"
                                {
#line 62 "module_qual.qual_errors.m"
                                  MR_Word parse_tree__module_qual__qual_errors__V_53_53;
#line 62 "module_qual.qual_errors.m"
                                  MR_Integer parse_tree__module_qual__qual_errors__V_133_133 = (MR_Integer) parse_tree__module_qual__qual_errors__V_47_47;
#line 62 "module_qual.qual_errors.m"
                                  MR_Integer parse_tree__module_qual__qual_errors__V_134_134 = (MR_Integer) parse_tree__module_qual__qual_errors__V_50_50;

#line 62 "module_qual.qual_errors.m"
                                  {
#line 62 "module_qual.qual_errors.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__qual_errors__V_53_53, parse_tree__module_qual__qual_errors__V_133_133, parse_tree__module_qual__qual_errors__V_134_134);
                                  }
#line 2462 "parse_tree.module_qual.qual_errors.c"
                                  parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_53_53 == (MR_Integer) 0);
#line 62 "module_qual.qual_errors.m"
                                  parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 62 "module_qual.qual_errors.m"
                                  if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                                    parse_tree__module_qual__qual_errors__V_6_6 = parse_tree__module_qual__qual_errors__V_53_53;
#line 62 "module_qual.qual_errors.m"
                                  else
#line 62 "module_qual.qual_errors.m"
                                    {
#line 62 "module_qual.qual_errors.m"
                                      parse_tree__module_qual__id_set____Compare____mq_id_0_0(&parse_tree__module_qual__qual_errors__V_6_6, parse_tree__module_qual__qual_errors__V_48_48, parse_tree__module_qual__qual_errors__V_51_51);
                                    }
#line 62 "module_qual.qual_errors.m"
                                }
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
#line 62 "module_qual.qual_errors.m"
                            }
#line 62 "module_qual.qual_errors.m"
                        }
#line 62 "module_qual.qual_errors.m"
                        break;
#line 62 "module_qual.qual_errors.m"
                      case (MR_Integer) 4:
#line 62 "module_qual.qual_errors.m"
                        {
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_57_57;
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_58_58;
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_59_59;
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_60_60;

#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 62 "module_qual.qual_errors.m"
                          if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                            {
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 3)));
#line 62 "module_qual.qual_errors.m"
                              {
#line 62 "module_qual.qual_errors.m"
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__V_60_60, parse_tree__module_qual__qual_errors__V_54_54, parse_tree__module_qual__qual_errors__V_57_57);
                              }
#line 2523 "parse_tree.module_qual.qual_errors.c"
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_60_60 == (MR_Integer) 0);
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 62 "module_qual.qual_errors.m"
                              if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                                parse_tree__module_qual__qual_errors__V_6_6 = parse_tree__module_qual__qual_errors__V_60_60;
#line 62 "module_qual.qual_errors.m"
                              else
#line 62 "module_qual.qual_errors.m"
                                {
#line 62 "module_qual.qual_errors.m"
                                  MR_Word parse_tree__module_qual__qual_errors__V_61_61;

#line 62 "module_qual.qual_errors.m"
                                  {
#line 62 "module_qual.qual_errors.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_1[2], &parse_tree__module_qual__qual_errors__V_61_61, ((MR_Box) (parse_tree__module_qual__qual_errors__V_55_55)), ((MR_Box) (parse_tree__module_qual__qual_errors__V_58_58)));
                                  }
#line 2543 "parse_tree.module_qual.qual_errors.c"
                                  parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_61_61 == (MR_Integer) 0);
#line 62 "module_qual.qual_errors.m"
                                  parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 62 "module_qual.qual_errors.m"
                                  if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                                    parse_tree__module_qual__qual_errors__V_6_6 = parse_tree__module_qual__qual_errors__V_61_61;
#line 62 "module_qual.qual_errors.m"
                                  else
#line 62 "module_qual.qual_errors.m"
                                    {
#line 62 "module_qual.qual_errors.m"
                                      parse_tree__module_qual__id_set____Compare____mq_id_0_0(&parse_tree__module_qual__qual_errors__V_6_6, parse_tree__module_qual__qual_errors__V_56_56, parse_tree__module_qual__qual_errors__V_59_59);
                                    }
#line 62 "module_qual.qual_errors.m"
                                }
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
#line 62 "module_qual.qual_errors.m"
                            }
#line 62 "module_qual.qual_errors.m"
                        }
#line 62 "module_qual.qual_errors.m"
                        break;
#line 62 "module_qual.qual_errors.m"
                      case (MR_Integer) 5:
#line 62 "module_qual.qual_errors.m"
                        {
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_64_64;
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_65_65;
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_66_66;

#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 62 "module_qual.qual_errors.m"
                          if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                            {
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                              {
#line 62 "module_qual.qual_errors.m"
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__V_66_66, parse_tree__module_qual__qual_errors__V_62_62, parse_tree__module_qual__qual_errors__V_64_64);
                              }
#line 2598 "parse_tree.module_qual.qual_errors.c"
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_66_66 == (MR_Integer) 0);
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 62 "module_qual.qual_errors.m"
                              if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                                parse_tree__module_qual__qual_errors__V_6_6 = parse_tree__module_qual__qual_errors__V_66_66;
#line 62 "module_qual.qual_errors.m"
                              else
#line 62 "module_qual.qual_errors.m"
                                {
#line 62 "module_qual.qual_errors.m"
                                  parse_tree__prog_item____Compare____pragma_type_0_0(&parse_tree__module_qual__qual_errors__V_6_6, parse_tree__module_qual__qual_errors__V_63_63, parse_tree__module_qual__qual_errors__V_65_65);
                                }
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
#line 62 "module_qual.qual_errors.m"
                            }
#line 62 "module_qual.qual_errors.m"
                        }
#line 62 "module_qual.qual_errors.m"
                        break;
#line 62 "module_qual.qual_errors.m"
                      case (MR_Integer) 6:
#line 62 "module_qual.qual_errors.m"
                        {
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_68_68;

#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 62 "module_qual.qual_errors.m"
                          if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                            {
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                              {
#line 62 "module_qual.qual_errors.m"
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__V_6_6, parse_tree__module_qual__qual_errors__V_67_67, parse_tree__module_qual__qual_errors__V_68_68);
                              }
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
#line 62 "module_qual.qual_errors.m"
                            }
#line 62 "module_qual.qual_errors.m"
                        }
#line 62 "module_qual.qual_errors.m"
                        break;
#line 62 "module_qual.qual_errors.m"
                      case (MR_Integer) 7:
#line 62 "module_qual.qual_errors.m"
                        {
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_70_70;

#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 62 "module_qual.qual_errors.m"
                          if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                            {
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                              {
#line 62 "module_qual.qual_errors.m"
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__V_6_6, parse_tree__module_qual__qual_errors__V_69_69, parse_tree__module_qual__qual_errors__V_70_70);
                              }
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
#line 62 "module_qual.qual_errors.m"
                            }
#line 62 "module_qual.qual_errors.m"
                        }
#line 62 "module_qual.qual_errors.m"
                        break;
#line 62 "module_qual.qual_errors.m"
                      case (MR_Integer) 8:
#line 62 "module_qual.qual_errors.m"
                        {
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_72_72;

#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 62 "module_qual.qual_errors.m"
                          if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                            {
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                              {
#line 62 "module_qual.qual_errors.m"
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__V_6_6, parse_tree__module_qual__qual_errors__V_71_71, parse_tree__module_qual__qual_errors__V_72_72);
                              }
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
#line 62 "module_qual.qual_errors.m"
                            }
#line 62 "module_qual.qual_errors.m"
                        }
#line 62 "module_qual.qual_errors.m"
                        break;
#line 62 "module_qual.qual_errors.m"
                      case (MR_Integer) 9:
#line 62 "module_qual.qual_errors.m"
                        {
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_75_75;
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_76_76;
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_77_77;

#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 62 "module_qual.qual_errors.m"
                          if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                            {
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                              {
#line 62 "module_qual.qual_errors.m"
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__V_77_77, parse_tree__module_qual__qual_errors__V_73_73, parse_tree__module_qual__qual_errors__V_75_75);
                              }
#line 2741 "parse_tree.module_qual.qual_errors.c"
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_77_77 == (MR_Integer) 0);
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 62 "module_qual.qual_errors.m"
                              if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                                parse_tree__module_qual__qual_errors__V_6_6 = parse_tree__module_qual__qual_errors__V_77_77;
#line 62 "module_qual.qual_errors.m"
                              else
#line 62 "module_qual.qual_errors.m"
                                {
#line 62 "module_qual.qual_errors.m"
                                  parse_tree__module_qual__id_set____Compare____mq_id_0_0(&parse_tree__module_qual__qual_errors__V_6_6, parse_tree__module_qual__qual_errors__V_74_74, parse_tree__module_qual__qual_errors__V_76_76);
                                }
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
#line 62 "module_qual.qual_errors.m"
                            }
#line 62 "module_qual.qual_errors.m"
                        }
#line 62 "module_qual.qual_errors.m"
                        break;
#line 62 "module_qual.qual_errors.m"
                      case (MR_Integer) 10:
#line 62 "module_qual.qual_errors.m"
                        {
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_80_80;
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_81_81;
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_82_82;

#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 62 "module_qual.qual_errors.m"
                          if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                            {
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                              {
#line 62 "module_qual.qual_errors.m"
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__V_82_82, parse_tree__module_qual__qual_errors__V_78_78, parse_tree__module_qual__qual_errors__V_80_80);
                              }
#line 2794 "parse_tree.module_qual.qual_errors.c"
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_82_82 == (MR_Integer) 0);
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 62 "module_qual.qual_errors.m"
                              if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                                parse_tree__module_qual__qual_errors__V_6_6 = parse_tree__module_qual__qual_errors__V_82_82;
#line 62 "module_qual.qual_errors.m"
                              else
#line 62 "module_qual.qual_errors.m"
                                {
#line 62 "module_qual.qual_errors.m"
                                  parse_tree__module_qual__id_set____Compare____mq_id_0_0(&parse_tree__module_qual__qual_errors__V_6_6, parse_tree__module_qual__qual_errors__V_79_79, parse_tree__module_qual__qual_errors__V_81_81);
                                }
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
#line 62 "module_qual.qual_errors.m"
                            }
#line 62 "module_qual.qual_errors.m"
                        }
#line 62 "module_qual.qual_errors.m"
                        break;
#line 62 "module_qual.qual_errors.m"
                      case (MR_Integer) 11:
#line 62 "module_qual.qual_errors.m"
                        {
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                          MR_String parse_tree__module_qual__qual_errors__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_85_85;
#line 62 "module_qual.qual_errors.m"
                          MR_String parse_tree__module_qual__qual_errors__V_86_86;
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_87_87;

#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 62 "module_qual.qual_errors.m"
                          if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                            {
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_86_86 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                              {
#line 62 "module_qual.qual_errors.m"
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__V_87_87, parse_tree__module_qual__qual_errors__V_83_83, parse_tree__module_qual__qual_errors__V_85_85);
                              }
#line 2847 "parse_tree.module_qual.qual_errors.c"
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_87_87 == (MR_Integer) 0);
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 62 "module_qual.qual_errors.m"
                              if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                                parse_tree__module_qual__qual_errors__V_6_6 = parse_tree__module_qual__qual_errors__V_87_87;
#line 62 "module_qual.qual_errors.m"
                              else
#line 62 "module_qual.qual_errors.m"
                                {
#line 62 "module_qual.qual_errors.m"
                                  mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__module_qual__qual_errors__V_6_6, parse_tree__module_qual__qual_errors__V_84_84, parse_tree__module_qual__qual_errors__V_86_86);
                                }
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
#line 62 "module_qual.qual_errors.m"
                            }
#line 62 "module_qual.qual_errors.m"
                        }
#line 62 "module_qual.qual_errors.m"
                        break;
#line 62 "module_qual.qual_errors.m"
                      case (MR_Integer) 12:
#line 62 "module_qual.qual_errors.m"
                        {
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                          MR_String parse_tree__module_qual__qual_errors__V_89_89 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                          MR_String parse_tree__module_qual__qual_errors__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_91_91;
#line 62 "module_qual.qual_errors.m"
                          MR_String parse_tree__module_qual__qual_errors__V_92_92;
#line 62 "module_qual.qual_errors.m"
                          MR_String parse_tree__module_qual__qual_errors__V_93_93;
#line 62 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_94_94;

#line 62 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 62 "module_qual.qual_errors.m"
                          if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                            {
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_92_92 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 3)));
#line 62 "module_qual.qual_errors.m"
                              {
#line 62 "module_qual.qual_errors.m"
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__V_94_94, parse_tree__module_qual__qual_errors__V_88_88, parse_tree__module_qual__qual_errors__V_91_91);
                              }
#line 2906 "parse_tree.module_qual.qual_errors.c"
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_94_94 == (MR_Integer) 0);
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 62 "module_qual.qual_errors.m"
                              if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                                parse_tree__module_qual__qual_errors__V_6_6 = parse_tree__module_qual__qual_errors__V_94_94;
#line 62 "module_qual.qual_errors.m"
                              else
#line 62 "module_qual.qual_errors.m"
                                {
#line 62 "module_qual.qual_errors.m"
                                  MR_Word parse_tree__module_qual__qual_errors__V_95_95;

#line 62 "module_qual.qual_errors.m"
                                  {
#line 62 "module_qual.qual_errors.m"
                                    mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__module_qual__qual_errors__V_95_95, parse_tree__module_qual__qual_errors__V_89_89, parse_tree__module_qual__qual_errors__V_92_92);
                                  }
#line 2926 "parse_tree.module_qual.qual_errors.c"
                                  parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_95_95 == (MR_Integer) 0);
#line 62 "module_qual.qual_errors.m"
                                  parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 62 "module_qual.qual_errors.m"
                                  if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                                    parse_tree__module_qual__qual_errors__V_6_6 = parse_tree__module_qual__qual_errors__V_95_95;
#line 62 "module_qual.qual_errors.m"
                                  else
#line 62 "module_qual.qual_errors.m"
                                    {
#line 62 "module_qual.qual_errors.m"
                                      mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__module_qual__qual_errors__V_6_6, parse_tree__module_qual__qual_errors__V_90_90, parse_tree__module_qual__qual_errors__V_93_93);
                                    }
#line 62 "module_qual.qual_errors.m"
                                }
#line 62 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
#line 62 "module_qual.qual_errors.m"
                            }
#line 62 "module_qual.qual_errors.m"
                        }
#line 62 "module_qual.qual_errors.m"
                        break;
#line 62 "module_qual.qual_errors.m"
                    }
#line 62 "module_qual.qual_errors.m"
                    break;
#line 62 "module_qual.qual_errors.m"
                }
#line 62 "module_qual.qual_errors.m"
                if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                  *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__V_6_6;
#line 62 "module_qual.qual_errors.m"
                else
#line 62 "module_qual.qual_errors.m"
                  {
#line 62 "module_qual.qual_errors.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 62 "module_qual.qual_errors.m"
                    return;
                  }
#line 62 "module_qual.qual_errors.m"
              }
#line 62 "module_qual.qual_errors.m"
          }
#line 62 "module_qual.qual_errors.m"
      }
#line 62 "module_qual.qual_errors.m"
  }
#line 62 "module_qual.qual_errors.m"
}

#line 62 "module_qual.qual_errors.m"
void MR_CALL 
parse_tree__module_qual__qual_errors____Index____mq_error_context_0_0(
#line 62 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1,
#line 62 "module_qual.qual_errors.m"
  MR_Integer * parse_tree__module_qual__qual_errors__HeadVar__2_2)
#line 62 "module_qual.qual_errors.m"
{
#line 62 "module_qual.qual_errors.m"
  {
#line 62 "module_qual.qual_errors.m"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;

#line 62 "module_qual.qual_errors.m"
#line 62 "module_qual.qual_errors.m"
    switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__1_1)) {
#line 62 "module_qual.qual_errors.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 62 "module_qual.qual_errors.m"
      case (MR_Integer) 0:
#line 3002 "parse_tree.module_qual.qual_errors.c"
        *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 62 "module_qual.qual_errors.m"
        break;
#line 62 "module_qual.qual_errors.m"
      case (MR_Integer) 1:
#line 3008 "parse_tree.module_qual.qual_errors.c"
        *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 1;
#line 62 "module_qual.qual_errors.m"
        break;
#line 62 "module_qual.qual_errors.m"
      case (MR_Integer) 2:
#line 3014 "parse_tree.module_qual.qual_errors.c"
        *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 2;
#line 62 "module_qual.qual_errors.m"
        break;
#line 62 "module_qual.qual_errors.m"
      case (MR_Integer) 3:
#line 62 "module_qual.qual_errors.m"
#line 62 "module_qual.qual_errors.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)))) {
#line 62 "module_qual.qual_errors.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 62 "module_qual.qual_errors.m"
          case (MR_Integer) 0:
#line 3027 "parse_tree.module_qual.qual_errors.c"
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 3;
#line 62 "module_qual.qual_errors.m"
            break;
#line 62 "module_qual.qual_errors.m"
          case (MR_Integer) 1:
#line 3033 "parse_tree.module_qual.qual_errors.c"
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 4;
#line 62 "module_qual.qual_errors.m"
            break;
#line 62 "module_qual.qual_errors.m"
          case (MR_Integer) 2:
#line 3039 "parse_tree.module_qual.qual_errors.c"
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 5;
#line 62 "module_qual.qual_errors.m"
            break;
#line 62 "module_qual.qual_errors.m"
          case (MR_Integer) 3:
#line 3045 "parse_tree.module_qual.qual_errors.c"
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 6;
#line 62 "module_qual.qual_errors.m"
            break;
#line 62 "module_qual.qual_errors.m"
          case (MR_Integer) 4:
#line 3051 "parse_tree.module_qual.qual_errors.c"
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 7;
#line 62 "module_qual.qual_errors.m"
            break;
#line 62 "module_qual.qual_errors.m"
          case (MR_Integer) 5:
#line 3057 "parse_tree.module_qual.qual_errors.c"
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 8;
#line 62 "module_qual.qual_errors.m"
            break;
#line 62 "module_qual.qual_errors.m"
          case (MR_Integer) 6:
#line 3063 "parse_tree.module_qual.qual_errors.c"
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 9;
#line 62 "module_qual.qual_errors.m"
            break;
#line 62 "module_qual.qual_errors.m"
          case (MR_Integer) 7:
#line 3069 "parse_tree.module_qual.qual_errors.c"
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 10;
#line 62 "module_qual.qual_errors.m"
            break;
#line 62 "module_qual.qual_errors.m"
          case (MR_Integer) 8:
#line 3075 "parse_tree.module_qual.qual_errors.c"
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 11;
#line 62 "module_qual.qual_errors.m"
            break;
#line 62 "module_qual.qual_errors.m"
          case (MR_Integer) 9:
#line 3081 "parse_tree.module_qual.qual_errors.c"
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 12;
#line 62 "module_qual.qual_errors.m"
            break;
#line 62 "module_qual.qual_errors.m"
          case (MR_Integer) 10:
#line 3087 "parse_tree.module_qual.qual_errors.c"
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 13;
#line 62 "module_qual.qual_errors.m"
            break;
#line 62 "module_qual.qual_errors.m"
          case (MR_Integer) 11:
#line 3093 "parse_tree.module_qual.qual_errors.c"
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 14;
#line 62 "module_qual.qual_errors.m"
            break;
#line 62 "module_qual.qual_errors.m"
          case (MR_Integer) 12:
#line 3099 "parse_tree.module_qual.qual_errors.c"
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 15;
#line 62 "module_qual.qual_errors.m"
            break;
#line 62 "module_qual.qual_errors.m"
        }
#line 62 "module_qual.qual_errors.m"
        break;
#line 62 "module_qual.qual_errors.m"
    }
#line 62 "module_qual.qual_errors.m"
  }
#line 62 "module_qual.qual_errors.m"
}

#line 62 "module_qual.qual_errors.m"
MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_error_context_0_0(
#line 62 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1,
#line 62 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2)
#line 62 "module_qual.qual_errors.m"
{
#line 62 "module_qual.qual_errors.m"
  {
#line 62 "module_qual.qual_errors.m"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
#line 62 "module_qual.qual_errors.m"
    MR_Integer parse_tree__module_qual__qual_errors__CastX_73 = (MR_Integer) parse_tree__module_qual__qual_errors__HeadVar__1_1;
#line 62 "module_qual.qual_errors.m"
    MR_Integer parse_tree__module_qual__qual_errors__CastY_74 = (MR_Integer) parse_tree__module_qual__qual_errors__HeadVar__2_2;

#line 62 "module_qual.qual_errors.m"
    parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__CastX_73 == parse_tree__module_qual__qual_errors__CastY_74);
#line 62 "module_qual.qual_errors.m"
    if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
#line 62 "module_qual.qual_errors.m"
    else
#line 62 "module_qual.qual_errors.m"
#line 62 "module_qual.qual_errors.m"
      switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__1_1)) {
#line 62 "module_qual.qual_errors.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 62 "module_qual.qual_errors.m"
        case (MR_Integer) 0:
#line 62 "module_qual.qual_errors.m"
          {
#line 62 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 62 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_5_5;
#line 62 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_6_6;

#line 62 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 62 "module_qual.qual_errors.m"
            if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
              {
#line 62 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 62 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 3168 "parse_tree.module_qual.qual_errors.c"
                {
#line 3170 "parse_tree.module_qual.qual_errors.c"
                  parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__V_3_3, parse_tree__module_qual__qual_errors__V_5_5);
                }
#line 62 "module_qual.qual_errors.m"
                if (parse_tree__module_qual__qual_errors__succeeded)
#line 3175 "parse_tree.module_qual.qual_errors.c"
                  {
#line 3177 "parse_tree.module_qual.qual_errors.c"
                    parse_tree__module_qual__qual_errors__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(parse_tree__module_qual__qual_errors__V_4_4, parse_tree__module_qual__qual_errors__V_6_6);
                  }
#line 62 "module_qual.qual_errors.m"
              }
#line 62 "module_qual.qual_errors.m"
          }
#line 62 "module_qual.qual_errors.m"
          break;
#line 62 "module_qual.qual_errors.m"
        case (MR_Integer) 1:
#line 62 "module_qual.qual_errors.m"
          {
#line 62 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__TypeInfo_80_80;
#line 62 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 62 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
            MR_String parse_tree__module_qual__qual_errors__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
            MR_Integer parse_tree__module_qual__qual_errors__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 3)));
#line 62 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 4)));
#line 62 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_12_12;
#line 62 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_13_13;
#line 62 "module_qual.qual_errors.m"
            MR_String parse_tree__module_qual__qual_errors__V_14_14;
#line 62 "module_qual.qual_errors.m"
            MR_Integer parse_tree__module_qual__qual_errors__V_15_15;
#line 62 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_16_16;

#line 62 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
            if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
              {
#line 62 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 62 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
#line 62 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 4)));
#line 3229 "parse_tree.module_qual.qual_errors.c"
                {
#line 3231 "parse_tree.module_qual.qual_errors.c"
                  parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__V_7_7, parse_tree__module_qual__qual_errors__V_12_12);
                }
#line 62 "module_qual.qual_errors.m"
                if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                  {
#line 3238 "parse_tree.module_qual.qual_errors.c"
                    {
#line 3240 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(parse_tree__module_qual__qual_errors__V_8_8, parse_tree__module_qual__qual_errors__V_13_13);
                    }
#line 62 "module_qual.qual_errors.m"
                    if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                      {
#line 3247 "parse_tree.module_qual.qual_errors.c"
                        parse_tree__module_qual__qual_errors__succeeded = (strcmp(parse_tree__module_qual__qual_errors__V_9_9, parse_tree__module_qual__qual_errors__V_14_14) == 0);
#line 62 "module_qual.qual_errors.m"
                        if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                          {
#line 3253 "parse_tree.module_qual.qual_errors.c"
                            parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_10_10 == parse_tree__module_qual__qual_errors__V_15_15);
#line 62 "module_qual.qual_errors.m"
                            if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                              {
#line 3259 "parse_tree.module_qual.qual_errors.c"
                                parse_tree__module_qual__qual_errors__TypeInfo_80_80 = (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_1[1];
#line 3261 "parse_tree.module_qual.qual_errors.c"
                                {
#line 3263 "parse_tree.module_qual.qual_errors.c"
                                  parse_tree__module_qual__qual_errors__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__qual_errors__TypeInfo_80_80, ((MR_Box) (parse_tree__module_qual__qual_errors__V_11_11)), ((MR_Box) (parse_tree__module_qual__qual_errors__V_16_16)));
                                }
#line 62 "module_qual.qual_errors.m"
                              }
#line 62 "module_qual.qual_errors.m"
                          }
#line 62 "module_qual.qual_errors.m"
                      }
#line 62 "module_qual.qual_errors.m"
                  }
#line 62 "module_qual.qual_errors.m"
              }
#line 62 "module_qual.qual_errors.m"
          }
#line 62 "module_qual.qual_errors.m"
          break;
#line 62 "module_qual.qual_errors.m"
        case (MR_Integer) 2:
#line 62 "module_qual.qual_errors.m"
          {
#line 62 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 62 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_18_18;

#line 62 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
            if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
              {
#line 62 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 3297 "parse_tree.module_qual.qual_errors.c"
                {
#line 3299 "parse_tree.module_qual.qual_errors.c"
                  parse_tree__module_qual__qual_errors__succeeded = parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0(parse_tree__module_qual__qual_errors__V_17_17, parse_tree__module_qual__qual_errors__V_18_18);
                }
#line 62 "module_qual.qual_errors.m"
              }
#line 62 "module_qual.qual_errors.m"
          }
#line 62 "module_qual.qual_errors.m"
          break;
#line 62 "module_qual.qual_errors.m"
        case (MR_Integer) 3:
#line 62 "module_qual.qual_errors.m"
#line 62 "module_qual.qual_errors.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)))) {
#line 62 "module_qual.qual_errors.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 62 "module_qual.qual_errors.m"
            case (MR_Integer) 0:
#line 62 "module_qual.qual_errors.m"
              {
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                MR_Integer parse_tree__module_qual__qual_errors__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 3)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_22_22;
#line 62 "module_qual.qual_errors.m"
                MR_Integer parse_tree__module_qual__qual_errors__V_23_23;
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_24_24;

#line 62 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 62 "module_qual.qual_errors.m"
                if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                  {
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
#line 3344 "parse_tree.module_qual.qual_errors.c"
                    {
#line 3346 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__module_qual__qual_errors__V_19_19, parse_tree__module_qual__qual_errors__V_22_22);
                    }
#line 62 "module_qual.qual_errors.m"
                    if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                      {
#line 3353 "parse_tree.module_qual.qual_errors.c"
                        parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_20_20 == parse_tree__module_qual__qual_errors__V_23_23);
#line 62 "module_qual.qual_errors.m"
                        if (parse_tree__module_qual__qual_errors__succeeded)
#line 3357 "parse_tree.module_qual.qual_errors.c"
                          {
#line 3359 "parse_tree.module_qual.qual_errors.c"
                            parse_tree__module_qual__qual_errors__succeeded = parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0(parse_tree__module_qual__qual_errors__V_21_21, parse_tree__module_qual__qual_errors__V_24_24);
                          }
#line 62 "module_qual.qual_errors.m"
                      }
#line 62 "module_qual.qual_errors.m"
                  }
#line 62 "module_qual.qual_errors.m"
              }
#line 62 "module_qual.qual_errors.m"
              break;
#line 62 "module_qual.qual_errors.m"
            case (MR_Integer) 1:
#line 62 "module_qual.qual_errors.m"
              {
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_27_27;
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_28_28;

#line 62 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                  {
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 3393 "parse_tree.module_qual.qual_errors.c"
                    {
#line 3395 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__V_25_25, parse_tree__module_qual__qual_errors__V_27_27);
                    }
#line 62 "module_qual.qual_errors.m"
                    if (parse_tree__module_qual__qual_errors__succeeded)
#line 3400 "parse_tree.module_qual.qual_errors.c"
                      {
#line 3402 "parse_tree.module_qual.qual_errors.c"
                        parse_tree__module_qual__qual_errors__succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(parse_tree__module_qual__qual_errors__V_26_26, parse_tree__module_qual__qual_errors__V_28_28);
                      }
#line 62 "module_qual.qual_errors.m"
                  }
#line 62 "module_qual.qual_errors.m"
              }
#line 62 "module_qual.qual_errors.m"
              break;
#line 62 "module_qual.qual_errors.m"
            case (MR_Integer) 2:
#line 62 "module_qual.qual_errors.m"
              {
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_31_31;
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_32_32;

#line 62 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                  {
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 3434 "parse_tree.module_qual.qual_errors.c"
                    {
#line 3436 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__V_29_29, parse_tree__module_qual__qual_errors__V_31_31);
                    }
#line 62 "module_qual.qual_errors.m"
                    if (parse_tree__module_qual__qual_errors__succeeded)
#line 3441 "parse_tree.module_qual.qual_errors.c"
                      {
#line 3443 "parse_tree.module_qual.qual_errors.c"
                        parse_tree__module_qual__qual_errors__succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(parse_tree__module_qual__qual_errors__V_30_30, parse_tree__module_qual__qual_errors__V_32_32);
                      }
#line 62 "module_qual.qual_errors.m"
                  }
#line 62 "module_qual.qual_errors.m"
              }
#line 62 "module_qual.qual_errors.m"
              break;
#line 62 "module_qual.qual_errors.m"
            case (MR_Integer) 3:
#line 62 "module_qual.qual_errors.m"
              {
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 3)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_36_36;
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_37_37;
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_38_38;

#line 62 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 62 "module_qual.qual_errors.m"
                if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                  {
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
#line 3481 "parse_tree.module_qual.qual_errors.c"
                    {
#line 3483 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__V_33_33, parse_tree__module_qual__qual_errors__V_36_36);
                    }
#line 62 "module_qual.qual_errors.m"
                    if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                      {
#line 3490 "parse_tree.module_qual.qual_errors.c"
                        parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_34_34 == parse_tree__module_qual__qual_errors__V_37_37);
#line 62 "module_qual.qual_errors.m"
                        if (parse_tree__module_qual__qual_errors__succeeded)
#line 3494 "parse_tree.module_qual.qual_errors.c"
                          {
#line 3496 "parse_tree.module_qual.qual_errors.c"
                            parse_tree__module_qual__qual_errors__succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(parse_tree__module_qual__qual_errors__V_35_35, parse_tree__module_qual__qual_errors__V_38_38);
                          }
#line 62 "module_qual.qual_errors.m"
                      }
#line 62 "module_qual.qual_errors.m"
                  }
#line 62 "module_qual.qual_errors.m"
              }
#line 62 "module_qual.qual_errors.m"
              break;
#line 62 "module_qual.qual_errors.m"
            case (MR_Integer) 4:
#line 62 "module_qual.qual_errors.m"
              {
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__TypeInfo_95_95;
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 3)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_42_42;
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_43_43;
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_44_44;

#line 62 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 62 "module_qual.qual_errors.m"
                if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                  {
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
#line 3538 "parse_tree.module_qual.qual_errors.c"
                    {
#line 3540 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__V_39_39, parse_tree__module_qual__qual_errors__V_42_42);
                    }
#line 62 "module_qual.qual_errors.m"
                    if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                      {
#line 3547 "parse_tree.module_qual.qual_errors.c"
                        parse_tree__module_qual__qual_errors__TypeInfo_95_95 = (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_1[2];
#line 3549 "parse_tree.module_qual.qual_errors.c"
                        {
#line 3551 "parse_tree.module_qual.qual_errors.c"
                          parse_tree__module_qual__qual_errors__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__qual_errors__TypeInfo_95_95, ((MR_Box) (parse_tree__module_qual__qual_errors__V_40_40)), ((MR_Box) (parse_tree__module_qual__qual_errors__V_43_43)));
                        }
#line 62 "module_qual.qual_errors.m"
                        if (parse_tree__module_qual__qual_errors__succeeded)
#line 3556 "parse_tree.module_qual.qual_errors.c"
                          {
#line 3558 "parse_tree.module_qual.qual_errors.c"
                            parse_tree__module_qual__qual_errors__succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(parse_tree__module_qual__qual_errors__V_41_41, parse_tree__module_qual__qual_errors__V_44_44);
                          }
#line 62 "module_qual.qual_errors.m"
                      }
#line 62 "module_qual.qual_errors.m"
                  }
#line 62 "module_qual.qual_errors.m"
              }
#line 62 "module_qual.qual_errors.m"
              break;
#line 62 "module_qual.qual_errors.m"
            case (MR_Integer) 5:
#line 62 "module_qual.qual_errors.m"
              {
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_47_47;
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_48_48;

#line 62 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 62 "module_qual.qual_errors.m"
                if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                  {
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 3592 "parse_tree.module_qual.qual_errors.c"
                    {
#line 3594 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__V_45_45, parse_tree__module_qual__qual_errors__V_47_47);
                    }
#line 62 "module_qual.qual_errors.m"
                    if (parse_tree__module_qual__qual_errors__succeeded)
#line 3599 "parse_tree.module_qual.qual_errors.c"
                      {
#line 3601 "parse_tree.module_qual.qual_errors.c"
                        parse_tree__module_qual__qual_errors__succeeded = parse_tree__prog_item____Unify____pragma_type_0_0(parse_tree__module_qual__qual_errors__V_46_46, parse_tree__module_qual__qual_errors__V_48_48);
                      }
#line 62 "module_qual.qual_errors.m"
                  }
#line 62 "module_qual.qual_errors.m"
              }
#line 62 "module_qual.qual_errors.m"
              break;
#line 62 "module_qual.qual_errors.m"
            case (MR_Integer) 6:
#line 62 "module_qual.qual_errors.m"
              {
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_50_50;

#line 62 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 62 "module_qual.qual_errors.m"
                if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                  {
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 3627 "parse_tree.module_qual.qual_errors.c"
                    {
#line 3629 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__V_49_49, parse_tree__module_qual__qual_errors__V_50_50);
                    }
#line 62 "module_qual.qual_errors.m"
                  }
#line 62 "module_qual.qual_errors.m"
              }
#line 62 "module_qual.qual_errors.m"
              break;
#line 62 "module_qual.qual_errors.m"
            case (MR_Integer) 7:
#line 62 "module_qual.qual_errors.m"
              {
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_52_52;

#line 62 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 62 "module_qual.qual_errors.m"
                if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                  {
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 3655 "parse_tree.module_qual.qual_errors.c"
                    {
#line 3657 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__V_51_51, parse_tree__module_qual__qual_errors__V_52_52);
                    }
#line 62 "module_qual.qual_errors.m"
                  }
#line 62 "module_qual.qual_errors.m"
              }
#line 62 "module_qual.qual_errors.m"
              break;
#line 62 "module_qual.qual_errors.m"
            case (MR_Integer) 8:
#line 62 "module_qual.qual_errors.m"
              {
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_54_54;

#line 62 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 62 "module_qual.qual_errors.m"
                if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                  {
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 3683 "parse_tree.module_qual.qual_errors.c"
                    {
#line 3685 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__V_53_53, parse_tree__module_qual__qual_errors__V_54_54);
                    }
#line 62 "module_qual.qual_errors.m"
                  }
#line 62 "module_qual.qual_errors.m"
              }
#line 62 "module_qual.qual_errors.m"
              break;
#line 62 "module_qual.qual_errors.m"
            case (MR_Integer) 9:
#line 62 "module_qual.qual_errors.m"
              {
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_57_57;
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_58_58;

#line 62 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 62 "module_qual.qual_errors.m"
                if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                  {
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 3717 "parse_tree.module_qual.qual_errors.c"
                    {
#line 3719 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__V_55_55, parse_tree__module_qual__qual_errors__V_57_57);
                    }
#line 62 "module_qual.qual_errors.m"
                    if (parse_tree__module_qual__qual_errors__succeeded)
#line 3724 "parse_tree.module_qual.qual_errors.c"
                      {
#line 3726 "parse_tree.module_qual.qual_errors.c"
                        parse_tree__module_qual__qual_errors__succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(parse_tree__module_qual__qual_errors__V_56_56, parse_tree__module_qual__qual_errors__V_58_58);
                      }
#line 62 "module_qual.qual_errors.m"
                  }
#line 62 "module_qual.qual_errors.m"
              }
#line 62 "module_qual.qual_errors.m"
              break;
#line 62 "module_qual.qual_errors.m"
            case (MR_Integer) 10:
#line 62 "module_qual.qual_errors.m"
              {
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_61_61;
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_62_62;

#line 62 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 62 "module_qual.qual_errors.m"
                if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                  {
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 3758 "parse_tree.module_qual.qual_errors.c"
                    {
#line 3760 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__V_59_59, parse_tree__module_qual__qual_errors__V_61_61);
                    }
#line 62 "module_qual.qual_errors.m"
                    if (parse_tree__module_qual__qual_errors__succeeded)
#line 3765 "parse_tree.module_qual.qual_errors.c"
                      {
#line 3767 "parse_tree.module_qual.qual_errors.c"
                        parse_tree__module_qual__qual_errors__succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(parse_tree__module_qual__qual_errors__V_60_60, parse_tree__module_qual__qual_errors__V_62_62);
                      }
#line 62 "module_qual.qual_errors.m"
                  }
#line 62 "module_qual.qual_errors.m"
              }
#line 62 "module_qual.qual_errors.m"
              break;
#line 62 "module_qual.qual_errors.m"
            case (MR_Integer) 11:
#line 62 "module_qual.qual_errors.m"
              {
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                MR_String parse_tree__module_qual__qual_errors__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_65_65;
#line 62 "module_qual.qual_errors.m"
                MR_String parse_tree__module_qual__qual_errors__V_66_66;

#line 62 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 62 "module_qual.qual_errors.m"
                if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                  {
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_66_66 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 3799 "parse_tree.module_qual.qual_errors.c"
                    {
#line 3801 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__V_63_63, parse_tree__module_qual__qual_errors__V_65_65);
                    }
#line 62 "module_qual.qual_errors.m"
                    if (parse_tree__module_qual__qual_errors__succeeded)
#line 3806 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = (strcmp(parse_tree__module_qual__qual_errors__V_64_64, parse_tree__module_qual__qual_errors__V_66_66) == 0);
#line 62 "module_qual.qual_errors.m"
                  }
#line 62 "module_qual.qual_errors.m"
              }
#line 62 "module_qual.qual_errors.m"
              break;
#line 62 "module_qual.qual_errors.m"
            case (MR_Integer) 12:
#line 62 "module_qual.qual_errors.m"
              {
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                MR_String parse_tree__module_qual__qual_errors__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                MR_String parse_tree__module_qual__qual_errors__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 3)));
#line 62 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_70_70;
#line 62 "module_qual.qual_errors.m"
                MR_String parse_tree__module_qual__qual_errors__V_71_71;
#line 62 "module_qual.qual_errors.m"
                MR_String parse_tree__module_qual__qual_errors__V_72_72;

#line 62 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 62 "module_qual.qual_errors.m"
                if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                  {
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 62 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_72_72 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
#line 3843 "parse_tree.module_qual.qual_errors.c"
                    {
#line 3845 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__V_67_67, parse_tree__module_qual__qual_errors__V_70_70);
                    }
#line 62 "module_qual.qual_errors.m"
                    if (parse_tree__module_qual__qual_errors__succeeded)
#line 62 "module_qual.qual_errors.m"
                      {
#line 3852 "parse_tree.module_qual.qual_errors.c"
                        parse_tree__module_qual__qual_errors__succeeded = (strcmp(parse_tree__module_qual__qual_errors__V_68_68, parse_tree__module_qual__qual_errors__V_71_71) == 0);
#line 62 "module_qual.qual_errors.m"
                        if (parse_tree__module_qual__qual_errors__succeeded)
#line 3856 "parse_tree.module_qual.qual_errors.c"
                          parse_tree__module_qual__qual_errors__succeeded = (strcmp(parse_tree__module_qual__qual_errors__V_69_69, parse_tree__module_qual__qual_errors__V_72_72) == 0);
#line 62 "module_qual.qual_errors.m"
                      }
#line 62 "module_qual.qual_errors.m"
                  }
#line 62 "module_qual.qual_errors.m"
              }
#line 62 "module_qual.qual_errors.m"
              break;
#line 62 "module_qual.qual_errors.m"
          }
#line 62 "module_qual.qual_errors.m"
          break;
#line 62 "module_qual.qual_errors.m"
      }
#line 62 "module_qual.qual_errors.m"
    return parse_tree__module_qual__qual_errors__succeeded;
#line 62 "module_qual.qual_errors.m"
  }
#line 62 "module_qual.qual_errors.m"
}

#line 25 "module_qual.qual_errors.m"
void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0(
#line 25 "module_qual.qual_errors.m"
  MR_Word * parse_tree__module_qual__qual_errors__HeadVar__1_1,
#line 25 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2,
#line 25 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__3_3)
#line 25 "module_qual.qual_errors.m"
{
#line 25 "module_qual.qual_errors.m"
  {
#line 25 "module_qual.qual_errors.m"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
#line 25 "module_qual.qual_errors.m"
    MR_Integer parse_tree__module_qual__qual_errors__CastX_175 = (MR_Integer) parse_tree__module_qual__qual_errors__HeadVar__2_2;
#line 25 "module_qual.qual_errors.m"
    MR_Integer parse_tree__module_qual__qual_errors__CastY_176 = (MR_Integer) parse_tree__module_qual__qual_errors__HeadVar__3_3;

#line 25 "module_qual.qual_errors.m"
    parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__CastX_175 == parse_tree__module_qual__qual_errors__CastY_176);
#line 25 "module_qual.qual_errors.m"
    if (parse_tree__module_qual__qual_errors__succeeded)
#line 3903 "parse_tree.module_qual.qual_errors.c"
      *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 0;
#line 25 "module_qual.qual_errors.m"
    else
#line 25 "module_qual.qual_errors.m"
#line 25 "module_qual.qual_errors.m"
      switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) {
#line 25 "module_qual.qual_errors.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 25 "module_qual.qual_errors.m"
        case (MR_Integer) 0:
#line 25 "module_qual.qual_errors.m"
          {
#line 25 "module_qual.qual_errors.m"
            MR_Integer parse_tree__module_qual__qual_errors__V_193_193 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));

#line 25 "module_qual.qual_errors.m"
#line 25 "module_qual.qual_errors.m"
            switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) {
#line 25 "module_qual.qual_errors.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 25 "module_qual.qual_errors.m"
              case (MR_Integer) 0:
#line 25 "module_qual.qual_errors.m"
                {
#line 25 "module_qual.qual_errors.m"
                  MR_Word parse_tree__module_qual__qual_errors__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)));
#line 25 "module_qual.qual_errors.m"
                  MR_Word parse_tree__module_qual__qual_errors__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 25 "module_qual.qual_errors.m"
                  MR_Integer parse_tree__module_qual__qual_errors__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 25 "module_qual.qual_errors.m"
                  MR_Word parse_tree__module_qual__qual_errors__V_10_10;

#line 25 "module_qual.qual_errors.m"
                  {
#line 25 "module_qual.qual_errors.m"
                    mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__V_10_10, parse_tree__module_qual__qual_errors__V_195_195, parse_tree__module_qual__qual_errors__V_7_7);
                  }
#line 3946 "parse_tree.module_qual.qual_errors.c"
                  parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_10_10 == (MR_Integer) 0);
#line 25 "module_qual.qual_errors.m"
                  parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 25 "module_qual.qual_errors.m"
                  if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__V_10_10;
#line 25 "module_qual.qual_errors.m"
                  else
#line 25 "module_qual.qual_errors.m"
                    {
#line 25 "module_qual.qual_errors.m"
                      MR_Word parse_tree__module_qual__qual_errors__V_11_11;

#line 25 "module_qual.qual_errors.m"
                      {
#line 25 "module_qual.qual_errors.m"
                        mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__module_qual__qual_errors__V_11_11, parse_tree__module_qual__qual_errors__V_194_194, parse_tree__module_qual__qual_errors__V_8_8);
                      }
#line 3966 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_11_11 == (MR_Integer) 0);
#line 25 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 25 "module_qual.qual_errors.m"
                      if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
                        *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__V_11_11;
#line 25 "module_qual.qual_errors.m"
                      else
#line 25 "module_qual.qual_errors.m"
                        {
#line 25 "module_qual.qual_errors.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__qual_errors__HeadVar__1_1, parse_tree__module_qual__qual_errors__V_193_193, parse_tree__module_qual__qual_errors__V_9_9);
                        }
#line 25 "module_qual.qual_errors.m"
                    }
#line 25 "module_qual.qual_errors.m"
                }
#line 25 "module_qual.qual_errors.m"
                break;
#line 25 "module_qual.qual_errors.m"
              case (MR_Integer) 1:
#line 3989 "parse_tree.module_qual.qual_errors.c"
                *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 25 "module_qual.qual_errors.m"
                break;
#line 25 "module_qual.qual_errors.m"
              case (MR_Integer) 2:
#line 3995 "parse_tree.module_qual.qual_errors.c"
                *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 25 "module_qual.qual_errors.m"
                break;
#line 25 "module_qual.qual_errors.m"
              case (MR_Integer) 3:
#line 25 "module_qual.qual_errors.m"
#line 25 "module_qual.qual_errors.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) {
#line 25 "module_qual.qual_errors.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 25 "module_qual.qual_errors.m"
                  case (MR_Integer) 0:
#line 4008 "parse_tree.module_qual.qual_errors.c"
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 25 "module_qual.qual_errors.m"
                    break;
#line 25 "module_qual.qual_errors.m"
                  case (MR_Integer) 1:
#line 4014 "parse_tree.module_qual.qual_errors.c"
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 25 "module_qual.qual_errors.m"
                    break;
#line 25 "module_qual.qual_errors.m"
                }
#line 25 "module_qual.qual_errors.m"
                break;
#line 25 "module_qual.qual_errors.m"
            }
#line 25 "module_qual.qual_errors.m"
          }
#line 25 "module_qual.qual_errors.m"
          break;
#line 25 "module_qual.qual_errors.m"
        case (MR_Integer) 1:
#line 25 "module_qual.qual_errors.m"
          {
#line 25 "module_qual.qual_errors.m"
            MR_String parse_tree__module_qual__qual_errors__V_196_196 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));

#line 25 "module_qual.qual_errors.m"
#line 25 "module_qual.qual_errors.m"
            switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) {
#line 25 "module_qual.qual_errors.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 25 "module_qual.qual_errors.m"
              case (MR_Integer) 0:
#line 4046 "parse_tree.module_qual.qual_errors.c"
                *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 25 "module_qual.qual_errors.m"
                break;
#line 25 "module_qual.qual_errors.m"
              case (MR_Integer) 1:
#line 25 "module_qual.qual_errors.m"
                {
#line 25 "module_qual.qual_errors.m"
                  MR_Word parse_tree__module_qual__qual_errors__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)));
#line 25 "module_qual.qual_errors.m"
                  MR_Word parse_tree__module_qual__qual_errors__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 25 "module_qual.qual_errors.m"
                  MR_String parse_tree__module_qual__qual_errors__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 25 "module_qual.qual_errors.m"
                  MR_Word parse_tree__module_qual__qual_errors__V_49_49;

#line 25 "module_qual.qual_errors.m"
                  {
#line 25 "module_qual.qual_errors.m"
                    mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__V_49_49, parse_tree__module_qual__qual_errors__V_198_198, parse_tree__module_qual__qual_errors__V_46_46);
                  }
#line 4068 "parse_tree.module_qual.qual_errors.c"
                  parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_49_49 == (MR_Integer) 0);
#line 25 "module_qual.qual_errors.m"
                  parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 25 "module_qual.qual_errors.m"
                  if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__V_49_49;
#line 25 "module_qual.qual_errors.m"
                  else
#line 25 "module_qual.qual_errors.m"
                    {
#line 25 "module_qual.qual_errors.m"
                      MR_Word parse_tree__module_qual__qual_errors__V_50_50;
#line 25 "module_qual.qual_errors.m"
                      MR_Integer parse_tree__module_qual__qual_errors__V_209_209 = (MR_Integer) parse_tree__module_qual__qual_errors__V_197_197;
#line 25 "module_qual.qual_errors.m"
                      MR_Integer parse_tree__module_qual__qual_errors__V_210_210 = (MR_Integer) parse_tree__module_qual__qual_errors__V_47_47;

#line 25 "module_qual.qual_errors.m"
                      {
#line 25 "module_qual.qual_errors.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__qual_errors__V_50_50, parse_tree__module_qual__qual_errors__V_209_209, parse_tree__module_qual__qual_errors__V_210_210);
                      }
#line 4092 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_50_50 == (MR_Integer) 0);
#line 25 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 25 "module_qual.qual_errors.m"
                      if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
                        *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__V_50_50;
#line 25 "module_qual.qual_errors.m"
                      else
#line 25 "module_qual.qual_errors.m"
                        {
#line 25 "module_qual.qual_errors.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__module_qual__qual_errors__HeadVar__1_1, parse_tree__module_qual__qual_errors__V_196_196, parse_tree__module_qual__qual_errors__V_48_48);
                        }
#line 25 "module_qual.qual_errors.m"
                    }
#line 25 "module_qual.qual_errors.m"
                }
#line 25 "module_qual.qual_errors.m"
                break;
#line 25 "module_qual.qual_errors.m"
              case (MR_Integer) 2:
#line 4115 "parse_tree.module_qual.qual_errors.c"
                *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 25 "module_qual.qual_errors.m"
                break;
#line 25 "module_qual.qual_errors.m"
              case (MR_Integer) 3:
#line 25 "module_qual.qual_errors.m"
#line 25 "module_qual.qual_errors.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) {
#line 25 "module_qual.qual_errors.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 25 "module_qual.qual_errors.m"
                  case (MR_Integer) 0:
#line 4128 "parse_tree.module_qual.qual_errors.c"
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 25 "module_qual.qual_errors.m"
                    break;
#line 25 "module_qual.qual_errors.m"
                  case (MR_Integer) 1:
#line 4134 "parse_tree.module_qual.qual_errors.c"
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 25 "module_qual.qual_errors.m"
                    break;
#line 25 "module_qual.qual_errors.m"
                }
#line 25 "module_qual.qual_errors.m"
                break;
#line 25 "module_qual.qual_errors.m"
            }
#line 25 "module_qual.qual_errors.m"
          }
#line 25 "module_qual.qual_errors.m"
          break;
#line 25 "module_qual.qual_errors.m"
        case (MR_Integer) 2:
#line 25 "module_qual.qual_errors.m"
          {
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));

#line 25 "module_qual.qual_errors.m"
#line 25 "module_qual.qual_errors.m"
            switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) {
#line 25 "module_qual.qual_errors.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 25 "module_qual.qual_errors.m"
              case (MR_Integer) 0:
#line 4166 "parse_tree.module_qual.qual_errors.c"
                *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 25 "module_qual.qual_errors.m"
                break;
#line 25 "module_qual.qual_errors.m"
              case (MR_Integer) 1:
#line 4172 "parse_tree.module_qual.qual_errors.c"
                *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 25 "module_qual.qual_errors.m"
                break;
#line 25 "module_qual.qual_errors.m"
              case (MR_Integer) 2:
#line 25 "module_qual.qual_errors.m"
                {
#line 25 "module_qual.qual_errors.m"
                  MR_Word parse_tree__module_qual__qual_errors__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)));
#line 25 "module_qual.qual_errors.m"
                  MR_Word parse_tree__module_qual__qual_errors__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 25 "module_qual.qual_errors.m"
                  MR_Word parse_tree__module_qual__qual_errors__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 25 "module_qual.qual_errors.m"
                  MR_Word parse_tree__module_qual__qual_errors__V_88_88;

#line 25 "module_qual.qual_errors.m"
                  {
#line 25 "module_qual.qual_errors.m"
                    mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__V_88_88, parse_tree__module_qual__qual_errors__V_201_201, parse_tree__module_qual__qual_errors__V_85_85);
                  }
#line 4194 "parse_tree.module_qual.qual_errors.c"
                  parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_88_88 == (MR_Integer) 0);
#line 25 "module_qual.qual_errors.m"
                  parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 25 "module_qual.qual_errors.m"
                  if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__V_88_88;
#line 25 "module_qual.qual_errors.m"
                  else
#line 25 "module_qual.qual_errors.m"
                    {
#line 25 "module_qual.qual_errors.m"
                      MR_Word parse_tree__module_qual__qual_errors__V_89_89;

#line 25 "module_qual.qual_errors.m"
                      {
#line 25 "module_qual.qual_errors.m"
                        mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__module_qual__qual_errors__V_89_89, parse_tree__module_qual__qual_errors__V_200_200, parse_tree__module_qual__qual_errors__V_86_86);
                      }
#line 4214 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_89_89 == (MR_Integer) 0);
#line 25 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 25 "module_qual.qual_errors.m"
                      if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
                        *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__V_89_89;
#line 25 "module_qual.qual_errors.m"
                      else
#line 25 "module_qual.qual_errors.m"
                        {
#line 25 "module_qual.qual_errors.m"
                          {
#line 25 "module_qual.qual_errors.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_1[0], parse_tree__module_qual__qual_errors__HeadVar__1_1, ((MR_Box) (parse_tree__module_qual__qual_errors__V_199_199)), ((MR_Box) (parse_tree__module_qual__qual_errors__V_87_87)));
                          }
#line 25 "module_qual.qual_errors.m"
                        }
#line 25 "module_qual.qual_errors.m"
                    }
#line 25 "module_qual.qual_errors.m"
                }
#line 25 "module_qual.qual_errors.m"
                break;
#line 25 "module_qual.qual_errors.m"
              case (MR_Integer) 3:
#line 25 "module_qual.qual_errors.m"
#line 25 "module_qual.qual_errors.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) {
#line 25 "module_qual.qual_errors.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 25 "module_qual.qual_errors.m"
                  case (MR_Integer) 0:
#line 4248 "parse_tree.module_qual.qual_errors.c"
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 25 "module_qual.qual_errors.m"
                    break;
#line 25 "module_qual.qual_errors.m"
                  case (MR_Integer) 1:
#line 4254 "parse_tree.module_qual.qual_errors.c"
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 25 "module_qual.qual_errors.m"
                    break;
#line 25 "module_qual.qual_errors.m"
                }
#line 25 "module_qual.qual_errors.m"
                break;
#line 25 "module_qual.qual_errors.m"
            }
#line 25 "module_qual.qual_errors.m"
          }
#line 25 "module_qual.qual_errors.m"
          break;
#line 25 "module_qual.qual_errors.m"
        case (MR_Integer) 3:
#line 25 "module_qual.qual_errors.m"
#line 25 "module_qual.qual_errors.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) {
#line 25 "module_qual.qual_errors.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 25 "module_qual.qual_errors.m"
            case (MR_Integer) 0:
#line 25 "module_qual.qual_errors.m"
              {
#line 25 "module_qual.qual_errors.m"
                MR_String parse_tree__module_qual__qual_errors__V_206_206 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
#line 25 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 25 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));

#line 25 "module_qual.qual_errors.m"
#line 25 "module_qual.qual_errors.m"
                switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) {
#line 25 "module_qual.qual_errors.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 25 "module_qual.qual_errors.m"
                  case (MR_Integer) 0:
#line 4293 "parse_tree.module_qual.qual_errors.c"
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 25 "module_qual.qual_errors.m"
                    break;
#line 25 "module_qual.qual_errors.m"
                  case (MR_Integer) 1:
#line 4299 "parse_tree.module_qual.qual_errors.c"
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 25 "module_qual.qual_errors.m"
                    break;
#line 25 "module_qual.qual_errors.m"
                  case (MR_Integer) 2:
#line 4305 "parse_tree.module_qual.qual_errors.c"
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 25 "module_qual.qual_errors.m"
                    break;
#line 25 "module_qual.qual_errors.m"
                  case (MR_Integer) 3:
#line 25 "module_qual.qual_errors.m"
#line 25 "module_qual.qual_errors.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) {
#line 25 "module_qual.qual_errors.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 25 "module_qual.qual_errors.m"
                      case (MR_Integer) 0:
#line 25 "module_qual.qual_errors.m"
                        {
#line 25 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 25 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 25 "module_qual.qual_errors.m"
                          MR_String parse_tree__module_qual__qual_errors__V_126_126 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 3)));
#line 25 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_127_127;

#line 25 "module_qual.qual_errors.m"
                          {
#line 25 "module_qual.qual_errors.m"
                            mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__V_127_127, parse_tree__module_qual__qual_errors__V_208_208, parse_tree__module_qual__qual_errors__V_124_124);
                          }
#line 4334 "parse_tree.module_qual.qual_errors.c"
                          parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_127_127 == (MR_Integer) 0);
#line 25 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 25 "module_qual.qual_errors.m"
                          if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
                            *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__V_127_127;
#line 25 "module_qual.qual_errors.m"
                          else
#line 25 "module_qual.qual_errors.m"
                            {
#line 25 "module_qual.qual_errors.m"
                              MR_Word parse_tree__module_qual__qual_errors__V_128_128;

#line 25 "module_qual.qual_errors.m"
                              {
#line 25 "module_qual.qual_errors.m"
                                parse_tree__prog_data____Compare____type_ctor_0_0(&parse_tree__module_qual__qual_errors__V_128_128, parse_tree__module_qual__qual_errors__V_207_207, parse_tree__module_qual__qual_errors__V_125_125);
                              }
#line 4354 "parse_tree.module_qual.qual_errors.c"
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_128_128 == (MR_Integer) 0);
#line 25 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 25 "module_qual.qual_errors.m"
                              if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
                                *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__V_128_128;
#line 25 "module_qual.qual_errors.m"
                              else
#line 25 "module_qual.qual_errors.m"
                                {
#line 25 "module_qual.qual_errors.m"
                                  mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__module_qual__qual_errors__HeadVar__1_1, parse_tree__module_qual__qual_errors__V_206_206, parse_tree__module_qual__qual_errors__V_126_126);
                                }
#line 25 "module_qual.qual_errors.m"
                            }
#line 25 "module_qual.qual_errors.m"
                        }
#line 25 "module_qual.qual_errors.m"
                        break;
#line 25 "module_qual.qual_errors.m"
                      case (MR_Integer) 1:
#line 4377 "parse_tree.module_qual.qual_errors.c"
                        *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 25 "module_qual.qual_errors.m"
                        break;
#line 25 "module_qual.qual_errors.m"
                    }
#line 25 "module_qual.qual_errors.m"
                    break;
#line 25 "module_qual.qual_errors.m"
                }
#line 25 "module_qual.qual_errors.m"
              }
#line 25 "module_qual.qual_errors.m"
              break;
#line 25 "module_qual.qual_errors.m"
            case (MR_Integer) 1:
#line 25 "module_qual.qual_errors.m"
              {
#line 25 "module_qual.qual_errors.m"
                MR_Integer parse_tree__module_qual__qual_errors__V_202_202 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 4)));
#line 25 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
#line 25 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 25 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));

#line 25 "module_qual.qual_errors.m"
#line 25 "module_qual.qual_errors.m"
                switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) {
#line 25 "module_qual.qual_errors.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 25 "module_qual.qual_errors.m"
                  case (MR_Integer) 0:
#line 4411 "parse_tree.module_qual.qual_errors.c"
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 25 "module_qual.qual_errors.m"
                    break;
#line 25 "module_qual.qual_errors.m"
                  case (MR_Integer) 1:
#line 4417 "parse_tree.module_qual.qual_errors.c"
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 25 "module_qual.qual_errors.m"
                    break;
#line 25 "module_qual.qual_errors.m"
                  case (MR_Integer) 2:
#line 4423 "parse_tree.module_qual.qual_errors.c"
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 25 "module_qual.qual_errors.m"
                    break;
#line 25 "module_qual.qual_errors.m"
                  case (MR_Integer) 3:
#line 25 "module_qual.qual_errors.m"
#line 25 "module_qual.qual_errors.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) {
#line 25 "module_qual.qual_errors.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 25 "module_qual.qual_errors.m"
                      case (MR_Integer) 0:
#line 4436 "parse_tree.module_qual.qual_errors.c"
                        *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 25 "module_qual.qual_errors.m"
                        break;
#line 25 "module_qual.qual_errors.m"
                      case (MR_Integer) 1:
#line 25 "module_qual.qual_errors.m"
                        {
#line 25 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 25 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 25 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 3)));
#line 25 "module_qual.qual_errors.m"
                          MR_Integer parse_tree__module_qual__qual_errors__V_171_171 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 4)));
#line 25 "module_qual.qual_errors.m"
                          MR_Word parse_tree__module_qual__qual_errors__V_172_172;

#line 25 "module_qual.qual_errors.m"
                          {
#line 25 "module_qual.qual_errors.m"
                            mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__V_172_172, parse_tree__module_qual__qual_errors__V_205_205, parse_tree__module_qual__qual_errors__V_168_168);
                          }
#line 4460 "parse_tree.module_qual.qual_errors.c"
                          parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_172_172 == (MR_Integer) 0);
#line 25 "module_qual.qual_errors.m"
                          parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 25 "module_qual.qual_errors.m"
                          if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
                            *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__V_172_172;
#line 25 "module_qual.qual_errors.m"
                          else
#line 25 "module_qual.qual_errors.m"
                            {
#line 25 "module_qual.qual_errors.m"
                              MR_Word parse_tree__module_qual__qual_errors__V_173_173;
#line 25 "module_qual.qual_errors.m"
                              MR_Integer parse_tree__module_qual__qual_errors__V_211_211 = (MR_Integer) parse_tree__module_qual__qual_errors__V_204_204;
#line 25 "module_qual.qual_errors.m"
                              MR_Integer parse_tree__module_qual__qual_errors__V_212_212 = (MR_Integer) parse_tree__module_qual__qual_errors__V_169_169;

#line 25 "module_qual.qual_errors.m"
                              {
#line 25 "module_qual.qual_errors.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__qual_errors__V_173_173, parse_tree__module_qual__qual_errors__V_211_211, parse_tree__module_qual__qual_errors__V_212_212);
                              }
#line 4484 "parse_tree.module_qual.qual_errors.c"
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_173_173 == (MR_Integer) 0);
#line 25 "module_qual.qual_errors.m"
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 25 "module_qual.qual_errors.m"
                              if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
                                *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__V_173_173;
#line 25 "module_qual.qual_errors.m"
                              else
#line 25 "module_qual.qual_errors.m"
                                {
#line 25 "module_qual.qual_errors.m"
                                  MR_Word parse_tree__module_qual__qual_errors__V_174_174;

#line 25 "module_qual.qual_errors.m"
                                  {
#line 25 "module_qual.qual_errors.m"
                                    mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__module_qual__qual_errors__V_174_174, parse_tree__module_qual__qual_errors__V_203_203, parse_tree__module_qual__qual_errors__V_170_170);
                                  }
#line 4504 "parse_tree.module_qual.qual_errors.c"
                                  parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_174_174 == (MR_Integer) 0);
#line 25 "module_qual.qual_errors.m"
                                  parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
#line 25 "module_qual.qual_errors.m"
                                  if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
                                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__V_174_174;
#line 25 "module_qual.qual_errors.m"
                                  else
#line 25 "module_qual.qual_errors.m"
                                    {
#line 25 "module_qual.qual_errors.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__qual_errors__HeadVar__1_1, parse_tree__module_qual__qual_errors__V_202_202, parse_tree__module_qual__qual_errors__V_171_171);
                                    }
#line 25 "module_qual.qual_errors.m"
                                }
#line 25 "module_qual.qual_errors.m"
                            }
#line 25 "module_qual.qual_errors.m"
                        }
#line 25 "module_qual.qual_errors.m"
                        break;
#line 25 "module_qual.qual_errors.m"
                    }
#line 25 "module_qual.qual_errors.m"
                    break;
#line 25 "module_qual.qual_errors.m"
                }
#line 25 "module_qual.qual_errors.m"
              }
#line 25 "module_qual.qual_errors.m"
              break;
#line 25 "module_qual.qual_errors.m"
          }
#line 25 "module_qual.qual_errors.m"
          break;
#line 25 "module_qual.qual_errors.m"
      }
#line 25 "module_qual.qual_errors.m"
  }
#line 25 "module_qual.qual_errors.m"
}

#line 25 "module_qual.qual_errors.m"
MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0(
#line 25 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1,
#line 25 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2)
#line 25 "module_qual.qual_errors.m"
{
#line 25 "module_qual.qual_errors.m"
  {
#line 25 "module_qual.qual_errors.m"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
#line 25 "module_qual.qual_errors.m"
    MR_Integer parse_tree__module_qual__qual_errors__CastX_35 = (MR_Integer) parse_tree__module_qual__qual_errors__HeadVar__1_1;
#line 25 "module_qual.qual_errors.m"
    MR_Integer parse_tree__module_qual__qual_errors__CastY_36 = (MR_Integer) parse_tree__module_qual__qual_errors__HeadVar__2_2;

#line 25 "module_qual.qual_errors.m"
    parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__CastX_35 == parse_tree__module_qual__qual_errors__CastY_36);
#line 25 "module_qual.qual_errors.m"
    if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
#line 25 "module_qual.qual_errors.m"
    else
#line 25 "module_qual.qual_errors.m"
#line 25 "module_qual.qual_errors.m"
      switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__1_1)) {
#line 25 "module_qual.qual_errors.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 25 "module_qual.qual_errors.m"
        case (MR_Integer) 0:
#line 25 "module_qual.qual_errors.m"
          {
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 25 "module_qual.qual_errors.m"
            MR_Integer parse_tree__module_qual__qual_errors__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_6_6;
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_7_7;
#line 25 "module_qual.qual_errors.m"
            MR_Integer parse_tree__module_qual__qual_errors__V_8_8;

#line 25 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 25 "module_qual.qual_errors.m"
            if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
              {
#line 25 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 25 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 25 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 4608 "parse_tree.module_qual.qual_errors.c"
                {
#line 4610 "parse_tree.module_qual.qual_errors.c"
                  parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__V_3_3, parse_tree__module_qual__qual_errors__V_6_6);
                }
#line 25 "module_qual.qual_errors.m"
                if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
                  {
#line 4617 "parse_tree.module_qual.qual_errors.c"
                    {
#line 4619 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__module_qual__qual_errors__V_4_4, parse_tree__module_qual__qual_errors__V_7_7);
                    }
#line 25 "module_qual.qual_errors.m"
                    if (parse_tree__module_qual__qual_errors__succeeded)
#line 4624 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_5_5 == parse_tree__module_qual__qual_errors__V_8_8);
#line 25 "module_qual.qual_errors.m"
                  }
#line 25 "module_qual.qual_errors.m"
              }
#line 25 "module_qual.qual_errors.m"
          }
#line 25 "module_qual.qual_errors.m"
          break;
#line 25 "module_qual.qual_errors.m"
        case (MR_Integer) 1:
#line 25 "module_qual.qual_errors.m"
          {
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 25 "module_qual.qual_errors.m"
            MR_String parse_tree__module_qual__qual_errors__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_12_12;
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_13_13;
#line 25 "module_qual.qual_errors.m"
            MR_String parse_tree__module_qual__qual_errors__V_14_14;

#line 25 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 25 "module_qual.qual_errors.m"
            if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
              {
#line 25 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 25 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 25 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 4663 "parse_tree.module_qual.qual_errors.c"
                {
#line 4665 "parse_tree.module_qual.qual_errors.c"
                  parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__V_9_9, parse_tree__module_qual__qual_errors__V_12_12);
                }
#line 25 "module_qual.qual_errors.m"
                if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
                  {
#line 4672 "parse_tree.module_qual.qual_errors.c"
                    parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_10_10 == parse_tree__module_qual__qual_errors__V_13_13);
#line 25 "module_qual.qual_errors.m"
                    if (parse_tree__module_qual__qual_errors__succeeded)
#line 4676 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = (strcmp(parse_tree__module_qual__qual_errors__V_11_11, parse_tree__module_qual__qual_errors__V_14_14) == 0);
#line 25 "module_qual.qual_errors.m"
                  }
#line 25 "module_qual.qual_errors.m"
              }
#line 25 "module_qual.qual_errors.m"
          }
#line 25 "module_qual.qual_errors.m"
          break;
#line 25 "module_qual.qual_errors.m"
        case (MR_Integer) 2:
#line 25 "module_qual.qual_errors.m"
          {
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__TypeInfo_42_42;
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_18_18;
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_19_19;
#line 25 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_20_20;

#line 25 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 25 "module_qual.qual_errors.m"
            if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
              {
#line 25 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 25 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 25 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 4717 "parse_tree.module_qual.qual_errors.c"
                {
#line 4719 "parse_tree.module_qual.qual_errors.c"
                  parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__V_15_15, parse_tree__module_qual__qual_errors__V_18_18);
                }
#line 25 "module_qual.qual_errors.m"
                if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
                  {
#line 4726 "parse_tree.module_qual.qual_errors.c"
                    {
#line 4728 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__module_qual__qual_errors__V_16_16, parse_tree__module_qual__qual_errors__V_19_19);
                    }
#line 25 "module_qual.qual_errors.m"
                    if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
                      {
#line 4735 "parse_tree.module_qual.qual_errors.c"
                        parse_tree__module_qual__qual_errors__TypeInfo_42_42 = (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_1[0];
#line 4737 "parse_tree.module_qual.qual_errors.c"
                        {
#line 4739 "parse_tree.module_qual.qual_errors.c"
                          parse_tree__module_qual__qual_errors__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__qual_errors__TypeInfo_42_42, ((MR_Box) (parse_tree__module_qual__qual_errors__V_17_17)), ((MR_Box) (parse_tree__module_qual__qual_errors__V_20_20)));
                        }
#line 25 "module_qual.qual_errors.m"
                      }
#line 25 "module_qual.qual_errors.m"
                  }
#line 25 "module_qual.qual_errors.m"
              }
#line 25 "module_qual.qual_errors.m"
          }
#line 25 "module_qual.qual_errors.m"
          break;
#line 25 "module_qual.qual_errors.m"
        case (MR_Integer) 3:
#line 25 "module_qual.qual_errors.m"
#line 25 "module_qual.qual_errors.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)))) {
#line 25 "module_qual.qual_errors.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 25 "module_qual.qual_errors.m"
            case (MR_Integer) 0:
#line 25 "module_qual.qual_errors.m"
              {
#line 25 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 25 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 25 "module_qual.qual_errors.m"
                MR_String parse_tree__module_qual__qual_errors__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 3)));
#line 25 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_24_24;
#line 25 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_25_25;
#line 25 "module_qual.qual_errors.m"
                MR_String parse_tree__module_qual__qual_errors__V_26_26;

#line 25 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 25 "module_qual.qual_errors.m"
                if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
                  {
#line 25 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 25 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 25 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
#line 4788 "parse_tree.module_qual.qual_errors.c"
                    {
#line 4790 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__V_21_21, parse_tree__module_qual__qual_errors__V_24_24);
                    }
#line 25 "module_qual.qual_errors.m"
                    if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
                      {
#line 4797 "parse_tree.module_qual.qual_errors.c"
                        {
#line 4799 "parse_tree.module_qual.qual_errors.c"
                          parse_tree__module_qual__qual_errors__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(parse_tree__module_qual__qual_errors__V_22_22, parse_tree__module_qual__qual_errors__V_25_25);
                        }
#line 25 "module_qual.qual_errors.m"
                        if (parse_tree__module_qual__qual_errors__succeeded)
#line 4804 "parse_tree.module_qual.qual_errors.c"
                          parse_tree__module_qual__qual_errors__succeeded = (strcmp(parse_tree__module_qual__qual_errors__V_23_23, parse_tree__module_qual__qual_errors__V_26_26) == 0);
#line 25 "module_qual.qual_errors.m"
                      }
#line 25 "module_qual.qual_errors.m"
                  }
#line 25 "module_qual.qual_errors.m"
              }
#line 25 "module_qual.qual_errors.m"
              break;
#line 25 "module_qual.qual_errors.m"
            case (MR_Integer) 1:
#line 25 "module_qual.qual_errors.m"
              {
#line 25 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 25 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 25 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 3)));
#line 25 "module_qual.qual_errors.m"
                MR_Integer parse_tree__module_qual__qual_errors__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 4)));
#line 25 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_31_31;
#line 25 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_32_32;
#line 25 "module_qual.qual_errors.m"
                MR_Word parse_tree__module_qual__qual_errors__V_33_33;
#line 25 "module_qual.qual_errors.m"
                MR_Integer parse_tree__module_qual__qual_errors__V_34_34;

#line 25 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 25 "module_qual.qual_errors.m"
                if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
                  {
#line 25 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 25 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 25 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
#line 25 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 4)));
#line 4849 "parse_tree.module_qual.qual_errors.c"
                    {
#line 4851 "parse_tree.module_qual.qual_errors.c"
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__V_27_27, parse_tree__module_qual__qual_errors__V_31_31);
                    }
#line 25 "module_qual.qual_errors.m"
                    if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
                      {
#line 4858 "parse_tree.module_qual.qual_errors.c"
                        parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_28_28 == parse_tree__module_qual__qual_errors__V_32_32);
#line 25 "module_qual.qual_errors.m"
                        if (parse_tree__module_qual__qual_errors__succeeded)
#line 25 "module_qual.qual_errors.m"
                          {
#line 4864 "parse_tree.module_qual.qual_errors.c"
                            {
#line 4866 "parse_tree.module_qual.qual_errors.c"
                              parse_tree__module_qual__qual_errors__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__module_qual__qual_errors__V_29_29, parse_tree__module_qual__qual_errors__V_33_33);
                            }
#line 25 "module_qual.qual_errors.m"
                            if (parse_tree__module_qual__qual_errors__succeeded)
#line 4871 "parse_tree.module_qual.qual_errors.c"
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_30_30 == parse_tree__module_qual__qual_errors__V_34_34);
#line 25 "module_qual.qual_errors.m"
                          }
#line 25 "module_qual.qual_errors.m"
                      }
#line 25 "module_qual.qual_errors.m"
                  }
#line 25 "module_qual.qual_errors.m"
              }
#line 25 "module_qual.qual_errors.m"
              break;
#line 25 "module_qual.qual_errors.m"
          }
#line 25 "module_qual.qual_errors.m"
          break;
#line 25 "module_qual.qual_errors.m"
      }
#line 25 "module_qual.qual_errors.m"
    return parse_tree__module_qual__qual_errors__succeeded;
#line 25 "module_qual.qual_errors.m"
  }
#line 25 "module_qual.qual_errors.m"
}

#line 599 "module_qual.qual_errors.m"
static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__wrap_id_1_f_0(
#line 599 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1)
#line 599 "module_qual.qual_errors.m"
{
#line 601 "module_qual.qual_errors.m"
  {
#line 601 "module_qual.qual_errors.m"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
#line 601 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2;
#line 601 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 601 "module_qual.qual_errors.m"
    MR_Integer parse_tree__module_qual__qual_errors__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 601 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_5_5;

#line 601 "module_qual.qual_errors.m"
    {
#line 601 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 601 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_5_5, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__SymName_3));
#line 601 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_5_5, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Arity_4));
#line 601 "module_qual.qual_errors.m"
    }
#line 601 "module_qual.qual_errors.m"
    {
#line 601 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 601 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 601 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_5_5));
#line 601 "module_qual.qual_errors.m"
    }
#line 601 "module_qual.qual_errors.m"
    return parse_tree__module_qual__qual_errors__HeadVar__2_2;
#line 601 "module_qual.qual_errors.m"
  }
#line 599 "module_qual.qual_errors.m"
}

#line 594 "module_qual.qual_errors.m"
static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__wrap_type_ctor_1_f_0(
#line 594 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1)
#line 594 "module_qual.qual_errors.m"
{
#line 596 "module_qual.qual_errors.m"
  {
#line 596 "module_qual.qual_errors.m"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
#line 596 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2;
#line 596 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 596 "module_qual.qual_errors.m"
    MR_Integer parse_tree__module_qual__qual_errors__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 596 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_5_5;

#line 597 "module_qual.qual_errors.m"
    {
#line 597 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 597 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_5_5, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__SymName_3));
#line 597 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_5_5, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Arity_4));
#line 597 "module_qual.qual_errors.m"
    }
#line 597 "module_qual.qual_errors.m"
    {
#line 597 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 597 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_5_5));
#line 597 "module_qual.qual_errors.m"
    }
#line 596 "module_qual.qual_errors.m"
    return parse_tree__module_qual__qual_errors__HeadVar__2_2;
#line 596 "module_qual.qual_errors.m"
  }
#line 594 "module_qual.qual_errors.m"
}

#line 590 "module_qual.qual_errors.m"
static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(
#line 590 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__SymName_3)
#line 590 "module_qual.qual_errors.m"
{
#line 592 "module_qual.qual_errors.m"
  {
#line 592 "module_qual.qual_errors.m"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
#line 592 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2;

#line 592 "module_qual.qual_errors.m"
    {
#line 592 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 592 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__SymName_3));
#line 592 "module_qual.qual_errors.m"
    }
#line 592 "module_qual.qual_errors.m"
    return parse_tree__module_qual__qual_errors__HeadVar__2_2;
#line 592 "module_qual.qual_errors.m"
  }
#line 590 "module_qual.qual_errors.m"
}

#line 586 "module_qual.qual_errors.m"
static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__id_to_sym_name_and_arity_1_f_0(
#line 586 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1)
#line 586 "module_qual.qual_errors.m"
{
#line 588 "module_qual.qual_errors.m"
  {
#line 588 "module_qual.qual_errors.m"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
#line 588 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2;
#line 588 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 588 "module_qual.qual_errors.m"
    MR_Integer parse_tree__module_qual__qual_errors__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));

#line 588 "module_qual.qual_errors.m"
    {
#line 588 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 588 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__SymName_3));
#line 588 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Arity_4));
#line 588 "module_qual.qual_errors.m"
    }
#line 588 "module_qual.qual_errors.m"
    return parse_tree__module_qual__qual_errors__HeadVar__2_2;
#line 588 "module_qual.qual_errors.m"
  }
#line 586 "module_qual.qual_errors.m"
}

#line 577 "module_qual.qual_errors.m"
static void MR_CALL 
parse_tree__module_qual__qual_errors__id_types_to_string_2_p_0(
#line 577 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1,
#line 577 "module_qual.qual_errors.m"
  MR_String * parse_tree__module_qual__qual_errors__HeadVar__2_2)
#line 577 "module_qual.qual_errors.m"
{
#line 579 "module_qual.qual_errors.m"
  {
#line 579 "module_qual.qual_errors.m"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;

#line 579 "module_qual.qual_errors.m"
    *parse_tree__module_qual__qual_errors__HeadVar__2_2 = ((&parse_tree__module_qual__qual_errors_vector_common_4[8 + parse_tree__module_qual__qual_errors__HeadVar__1_1]))->parse_tree__module_qual__qual_errors__vector_common_type_4_0__vct_4_f_0;
#line 579 "module_qual.qual_errors.m"
  }
#line 577 "module_qual.qual_errors.m"
}

#line 570 "module_qual.qual_errors.m"
static void MR_CALL 
parse_tree__module_qual__qual_errors__id_type_to_string_2_p_0(
#line 570 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1,
#line 570 "module_qual.qual_errors.m"
  MR_String * parse_tree__module_qual__qual_errors__HeadVar__2_2)
#line 570 "module_qual.qual_errors.m"
{
#line 572 "module_qual.qual_errors.m"
  {
#line 572 "module_qual.qual_errors.m"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;

#line 572 "module_qual.qual_errors.m"
    *parse_tree__module_qual__qual_errors__HeadVar__2_2 = ((&parse_tree__module_qual__qual_errors_vector_common_4[4 + parse_tree__module_qual__qual_errors__HeadVar__1_1]))->parse_tree__module_qual__qual_errors__vector_common_type_4_0__vct_4_f_0;
#line 572 "module_qual.qual_errors.m"
  }
#line 570 "module_qual.qual_errors.m"
}

#line 381 "module_qual.qual_errors.m"
static void MR_CALL 
parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_3_p_0(
#line 381 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__ErrorContext_4,
#line 381 "module_qual.qual_errors.m"
  MR_Word * parse_tree__module_qual__qual_errors__Context_5,
#line 381 "module_qual.qual_errors.m"
  MR_Word * parse_tree__module_qual__qual_errors__Pieces_6)
#line 381 "module_qual.qual_errors.m"
{
#line 386 "module_qual.qual_errors.m"
  {
#line 386 "module_qual.qual_errors.m"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;

#line 386 "module_qual.qual_errors.m"
#line 386 "module_qual.qual_errors.m"
    switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__ErrorContext_4)) {
#line 386 "module_qual.qual_errors.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 386 "module_qual.qual_errors.m"
      case (MR_Integer) 0:
#line 386 "module_qual.qual_errors.m"
        {
#line 386 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__TypeCtor_7;
#line 386 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_177_177;
#line 386 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_178_178;

#line 386 "module_qual.qual_errors.m"
          *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 0)));
#line 386 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
#line 387 "module_qual.qual_errors.m"
          {
#line 387 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_178_178 = parse_tree__module_qual__qual_errors__wrap_type_ctor_1_f_0(parse_tree__module_qual__qual_errors__TypeCtor_7);
          }
#line 387 "module_qual.qual_errors.m"
          {
#line 387 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_177_177, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_178_178));
#line 387 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_177_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "module_qual.qual_errors.m"
          }
#line 387 "module_qual.qual_errors.m"
          {
#line 387 "module_qual.qual_errors.m"
            MR_Word base;
#line 387 "module_qual.qual_errors.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "module_qual.qual_errors.m"
            *parse_tree__module_qual__qual_errors__Pieces_6 = base;
#line 387 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[87])));
#line 387 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_177_177));
#line 387 "module_qual.qual_errors.m"
          }
#line 386 "module_qual.qual_errors.m"
        }
#line 386 "module_qual.qual_errors.m"
        break;
#line 386 "module_qual.qual_errors.m"
      case (MR_Integer) 1:
#line 390 "module_qual.qual_errors.m"
        {
#line 390 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__TypeCtorInfo_195_195;
#line 390 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__ContainingTypeCtor_8;
#line 390 "module_qual.qual_errors.m"
          MR_String parse_tree__module_qual__qual_errors__FunctionSymbol_9;
#line 390 "module_qual.qual_errors.m"
          MR_Integer parse_tree__module_qual__qual_errors__ArgNum_10;
#line 390 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__MaybeCtorFieldName_11;
#line 390 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__FieldNamePieces_12;
#line 390 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_154_154;
#line 390 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_157_157;
#line 390 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_158_158;
#line 390 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_159_159;
#line 390 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_162_162;
#line 390 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_165_165;
#line 390 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_166_166;
#line 390 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_168_168;
#line 390 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_169_169;
#line 390 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_172_172;
#line 390 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_173_173;

#line 389 "module_qual.qual_errors.m"
          *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 0)));
#line 389 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__ContainingTypeCtor_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
#line 389 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__FunctionSymbol_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
#line 389 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__ArgNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 3)));
#line 389 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__MaybeCtorFieldName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 4)));
#line 394 "module_qual.qual_errors.m"
          if ((parse_tree__module_qual__qual_errors__MaybeCtorFieldName_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__FieldNamePieces_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 394 "module_qual.qual_errors.m"
          else
#line 395 "module_qual.qual_errors.m"
            {
#line 395 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__CtorFieldName_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__MaybeCtorFieldName_11, (MR_Integer) 0)));
#line 395 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__FieldSymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__CtorFieldName_13, (MR_Integer) 0)));
#line 395 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_147_147;
#line 395 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_148_148;
#line 395 "module_qual.qual_errors.m"
              MR_String parse_tree__module_qual__qual_errors__V_149_149;
#line 396 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors___FieldContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__CtorFieldName_13, (MR_Integer) 1)));

#line 398 "module_qual.qual_errors.m"
              {
#line 398 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_149_149 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__module_qual__qual_errors__FieldSymName_14);
              }
#line 398 "module_qual.qual_errors.m"
              {
#line 398 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_148_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_148_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 398 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_148_148, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_149_149));
#line 398 "module_qual.qual_errors.m"
              }
#line 398 "module_qual.qual_errors.m"
              {
#line 398 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_147_147, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_148_148));
#line 398 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_147_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[73])));
#line 398 "module_qual.qual_errors.m"
              }
#line 397 "module_qual.qual_errors.m"
              {
#line 397 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__FieldNamePieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__FieldNamePieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[71])));
#line 397 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__FieldNamePieces_12, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_147_147));
#line 397 "module_qual.qual_errors.m"
              }
#line 395 "module_qual.qual_errors.m"
            }
#line 5274 "parse_tree.module_qual.qual_errors.c"
          parse_tree__module_qual__qual_errors__TypeCtorInfo_195_195 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 400 "module_qual.qual_errors.m"
          {
#line 400 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_158_158 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_158_158, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 400 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_158_158, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__ArgNum_10));
#line 400 "module_qual.qual_errors.m"
          }
#line 401 "module_qual.qual_errors.m"
          {
#line 401 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_166_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_166_166, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 401 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_166_166, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__FunctionSymbol_9));
#line 401 "module_qual.qual_errors.m"
          }
#line 401 "module_qual.qual_errors.m"
          {
#line 401 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_165_165, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_166_166));
#line 401 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_165_165, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 401 "module_qual.qual_errors.m"
          }
#line 401 "module_qual.qual_errors.m"
          {
#line 401 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_162_162, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[66])));
#line 401 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_162_162, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_165_165));
#line 401 "module_qual.qual_errors.m"
          }
#line 400 "module_qual.qual_errors.m"
          {
#line 400 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_159_159, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[75])));
#line 400 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_159_159, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_162_162));
#line 400 "module_qual.qual_errors.m"
          }
#line 400 "module_qual.qual_errors.m"
          {
#line 400 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_157_157, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_158_158));
#line 400 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_157_157, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_159_159));
#line 400 "module_qual.qual_errors.m"
          }
#line 400 "module_qual.qual_errors.m"
          {
#line 400 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_154_154, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[74])));
#line 400 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_154_154, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_157_157));
#line 400 "module_qual.qual_errors.m"
          }
#line 403 "module_qual.qual_errors.m"
          {
#line 403 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_173_173 = parse_tree__module_qual__qual_errors__wrap_type_ctor_1_f_0(parse_tree__module_qual__qual_errors__ContainingTypeCtor_8);
          }
#line 403 "module_qual.qual_errors.m"
          {
#line 403 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_172_172, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_173_173));
#line 403 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_172_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 403 "module_qual.qual_errors.m"
          }
#line 403 "module_qual.qual_errors.m"
          {
#line 403 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_169_169, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[76])));
#line 403 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_169_169, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_172_172));
#line 403 "module_qual.qual_errors.m"
          }
#line 402 "module_qual.qual_errors.m"
          {
#line 402 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_168_168 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_195_195, parse_tree__module_qual__qual_errors__FieldNamePieces_12, parse_tree__module_qual__qual_errors__V_169_169);
          }
#line 401 "module_qual.qual_errors.m"
          {
#line 401 "module_qual.qual_errors.m"
            *parse_tree__module_qual__qual_errors__Pieces_6 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_195_195, parse_tree__module_qual__qual_errors__V_154_154, parse_tree__module_qual__qual_errors__V_168_168);
          }
#line 390 "module_qual.qual_errors.m"
        }
#line 386 "module_qual.qual_errors.m"
        break;
#line 386 "module_qual.qual_errors.m"
      case (MR_Integer) 2:
#line 405 "module_qual.qual_errors.m"
        {
#line 405 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__ConstraintErrorContext_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 0)));
#line 406 "module_qual.qual_errors.m"
          MR_String parse_tree__module_qual__qual_errors___Start_17;

#line 406 "module_qual.qual_errors.m"
          {
#line 406 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__mq_constraint_error_context_to_pieces_4_p_0(parse_tree__module_qual__qual_errors__ConstraintErrorContext_16, parse_tree__module_qual__qual_errors__Context_5, &parse_tree__module_qual__qual_errors___Start_17, parse_tree__module_qual__qual_errors__Pieces_6);
          }
#line 405 "module_qual.qual_errors.m"
        }
#line 386 "module_qual.qual_errors.m"
        break;
#line 386 "module_qual.qual_errors.m"
      case (MR_Integer) 3:
#line 386 "module_qual.qual_errors.m"
#line 386 "module_qual.qual_errors.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 0)))) {
#line 386 "module_qual.qual_errors.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 386 "module_qual.qual_errors.m"
          case (MR_Integer) 0:
#line 410 "module_qual.qual_errors.m"
            {
#line 410 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__ClassName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
#line 410 "module_qual.qual_errors.m"
              MR_Integer parse_tree__module_qual__qual_errors__Arity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
#line 410 "module_qual.qual_errors.m"
              MR_String parse_tree__module_qual__qual_errors__Start_20;
#line 410 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__ConstraintErrorContextPieces_21;
#line 410 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_140_140;
#line 410 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_141_141;
#line 410 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_142_142;
#line 410 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_143_143;
#line 410 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_144_144;
#line 410 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__ConstraintErrorContext_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 3)));

#line 411 "module_qual.qual_errors.m"
              {
#line 411 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__mq_constraint_error_context_to_pieces_4_p_0(parse_tree__module_qual__qual_errors__ConstraintErrorContext_180, parse_tree__module_qual__qual_errors__Context_5, &parse_tree__module_qual__qual_errors__Start_20, &parse_tree__module_qual__qual_errors__ConstraintErrorContextPieces_21);
              }
#line 414 "module_qual.qual_errors.m"
              {
#line 414 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 414 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_142_142, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__ClassName_18));
#line 414 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_142_142, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Arity_19));
#line 414 "module_qual.qual_errors.m"
              }
#line 414 "module_qual.qual_errors.m"
              {
#line 414 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_141_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_141_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 414 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_141_141, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_142_142));
#line 414 "module_qual.qual_errors.m"
              }
#line 414 "module_qual.qual_errors.m"
              {
#line 414 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 414 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_144_144, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Start_20));
#line 414 "module_qual.qual_errors.m"
              }
#line 414 "module_qual.qual_errors.m"
              {
#line 414 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_143_143, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_144_144));
#line 414 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_143_143, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__ConstraintErrorContextPieces_21));
#line 414 "module_qual.qual_errors.m"
              }
#line 414 "module_qual.qual_errors.m"
              {
#line 414 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_140_140, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_141_141));
#line 414 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_140_140, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_143_143));
#line 414 "module_qual.qual_errors.m"
              }
#line 413 "module_qual.qual_errors.m"
              {
#line 413 "module_qual.qual_errors.m"
                MR_Word base;
#line 413 "module_qual.qual_errors.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "module_qual.qual_errors.m"
                *parse_tree__module_qual__qual_errors__Pieces_6 = base;
#line 413 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[90])));
#line 413 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_140_140));
#line 413 "module_qual.qual_errors.m"
              }
#line 410 "module_qual.qual_errors.m"
            }
#line 386 "module_qual.qual_errors.m"
            break;
#line 386 "module_qual.qual_errors.m"
          case (MR_Integer) 1:
#line 420 "module_qual.qual_errors.m"
            {
#line 420 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_130_130;
#line 420 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_131_131;
#line 420 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__Id_181;

#line 420 "module_qual.qual_errors.m"
              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
#line 420 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__Id_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
#line 421 "module_qual.qual_errors.m"
              {
#line 421 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_131_131 = parse_tree__module_qual__qual_errors__wrap_id_1_f_0(parse_tree__module_qual__qual_errors__Id_181);
              }
#line 421 "module_qual.qual_errors.m"
              {
#line 421 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_130_130, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_131_131));
#line 421 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 421 "module_qual.qual_errors.m"
              }
#line 421 "module_qual.qual_errors.m"
              {
#line 421 "module_qual.qual_errors.m"
                MR_Word base;
#line 421 "module_qual.qual_errors.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "module_qual.qual_errors.m"
                *parse_tree__module_qual__qual_errors__Pieces_6 = base;
#line 421 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[79])));
#line 421 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_130_130));
#line 421 "module_qual.qual_errors.m"
              }
#line 420 "module_qual.qual_errors.m"
            }
#line 386 "module_qual.qual_errors.m"
            break;
#line 386 "module_qual.qual_errors.m"
          case (MR_Integer) 2:
#line 417 "module_qual.qual_errors.m"
            {
#line 417 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__Id_22;
#line 417 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_135_135;
#line 417 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_136_136;

#line 417 "module_qual.qual_errors.m"
              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
#line 417 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__Id_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
#line 418 "module_qual.qual_errors.m"
              {
#line 418 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_136_136 = parse_tree__module_qual__qual_errors__wrap_id_1_f_0(parse_tree__module_qual__qual_errors__Id_22);
              }
#line 418 "module_qual.qual_errors.m"
              {
#line 418 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_135_135, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_136_136));
#line 418 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "module_qual.qual_errors.m"
              }
#line 418 "module_qual.qual_errors.m"
              {
#line 418 "module_qual.qual_errors.m"
                MR_Word base;
#line 418 "module_qual.qual_errors.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "module_qual.qual_errors.m"
                *parse_tree__module_qual__qual_errors__Pieces_6 = base;
#line 418 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[83])));
#line 418 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_135_135));
#line 418 "module_qual.qual_errors.m"
              }
#line 417 "module_qual.qual_errors.m"
            }
#line 386 "module_qual.qual_errors.m"
            break;
#line 386 "module_qual.qual_errors.m"
          case (MR_Integer) 3:
#line 423 "module_qual.qual_errors.m"
            {
#line 423 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__PredOrFunc_23;
#line 423 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__SymName_24;
#line 423 "module_qual.qual_errors.m"
              MR_Integer parse_tree__module_qual__qual_errors__OrigArity_25;
#line 423 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_121_121;
#line 423 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_122_122;
#line 423 "module_qual.qual_errors.m"
              MR_String parse_tree__module_qual__qual_errors__V_123_123;
#line 423 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_124_124;
#line 423 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_125_125;
#line 423 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_126_126;
#line 423 "module_qual.qual_errors.m"
              MR_Integer parse_tree__module_qual__qual_errors__Arity_182;
#line 423 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__Id_183;

#line 423 "module_qual.qual_errors.m"
              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
#line 423 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
#line 423 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__Id_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 3)));
#line 424 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__SymName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Id_183, (MR_Integer) 0)));
#line 424 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__OrigArity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Id_183, (MR_Integer) 1)));
#line 425 "module_qual.qual_errors.m"
              {
#line 425 "module_qual.qual_errors.m"
                parse_tree__prog_util__adjust_func_arity_3_p_0(parse_tree__module_qual__qual_errors__PredOrFunc_23, parse_tree__module_qual__qual_errors__OrigArity_25, &parse_tree__module_qual__qual_errors__Arity_182);
              }
#line 427 "module_qual.qual_errors.m"
              {
#line 427 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_123_123 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(parse_tree__module_qual__qual_errors__PredOrFunc_23);
              }
#line 427 "module_qual.qual_errors.m"
              {
#line 427 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_122_122 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 427 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__V_122_122, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_123_123));
#line 427 "module_qual.qual_errors.m"
              }
#line 428 "module_qual.qual_errors.m"
              {
#line 428 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 428 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_126_126, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__SymName_24));
#line 428 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_126_126, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Arity_182));
#line 428 "module_qual.qual_errors.m"
              }
#line 428 "module_qual.qual_errors.m"
              {
#line 428 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 428 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_125_125, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_126_126));
#line 428 "module_qual.qual_errors.m"
              }
#line 428 "module_qual.qual_errors.m"
              {
#line 428 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_124_124, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_125_125));
#line 428 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 428 "module_qual.qual_errors.m"
              }
#line 427 "module_qual.qual_errors.m"
              {
#line 427 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_121_121, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_122_122));
#line 427 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_121_121, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_124_124));
#line 427 "module_qual.qual_errors.m"
              }
#line 426 "module_qual.qual_errors.m"
              {
#line 426 "module_qual.qual_errors.m"
                MR_Word base;
#line 426 "module_qual.qual_errors.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "module_qual.qual_errors.m"
                *parse_tree__module_qual__qual_errors__Pieces_6 = base;
#line 426 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[65])));
#line 426 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_121_121));
#line 426 "module_qual.qual_errors.m"
              }
#line 423 "module_qual.qual_errors.m"
            }
#line 386 "module_qual.qual_errors.m"
            break;
#line 386 "module_qual.qual_errors.m"
          case (MR_Integer) 4:
#line 430 "module_qual.qual_errors.m"
            {
#line 430 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__MaybePredOrFunc_26;
#line 430 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__Id_189;
#line 430 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__SymName_191;
#line 430 "module_qual.qual_errors.m"
              MR_Integer parse_tree__module_qual__qual_errors__OrigArity_192;

#line 430 "module_qual.qual_errors.m"
              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
#line 430 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__MaybePredOrFunc_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
#line 430 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__Id_189 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 3)));
#line 431 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__SymName_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Id_189, (MR_Integer) 0)));
#line 431 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__OrigArity_192 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Id_189, (MR_Integer) 1)));
#line 438 "module_qual.qual_errors.m"
              if ((parse_tree__module_qual__qual_errors__MaybePredOrFunc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 439 "module_qual.qual_errors.m"
                {
#line 439 "module_qual.qual_errors.m"
                  MR_Word parse_tree__module_qual__qual_errors__V_106_106;
#line 439 "module_qual.qual_errors.m"
                  MR_Word parse_tree__module_qual__qual_errors__V_107_107;
#line 439 "module_qual.qual_errors.m"
                  MR_Word parse_tree__module_qual__qual_errors__V_108_108;

#line 441 "module_qual.qual_errors.m"
                  {
#line 441 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 441 "module_qual.qual_errors.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_108_108, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__SymName_191));
#line 441 "module_qual.qual_errors.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_108_108, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__OrigArity_192));
#line 441 "module_qual.qual_errors.m"
                  }
#line 441 "module_qual.qual_errors.m"
                  {
#line 441 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_107_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "module_qual.qual_errors.m"
                    MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_107_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 441 "module_qual.qual_errors.m"
                    MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_107_107, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_108_108));
#line 441 "module_qual.qual_errors.m"
                  }
#line 441 "module_qual.qual_errors.m"
                  {
#line 441 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "module_qual.qual_errors.m"
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_106_106, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_107_107));
#line 441 "module_qual.qual_errors.m"
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 441 "module_qual.qual_errors.m"
                  }
#line 440 "module_qual.qual_errors.m"
                  {
#line 440 "module_qual.qual_errors.m"
                    MR_Word base;
#line 440 "module_qual.qual_errors.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "module_qual.qual_errors.m"
                    *parse_tree__module_qual__qual_errors__Pieces_6 = base;
#line 440 "module_qual.qual_errors.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[86])));
#line 440 "module_qual.qual_errors.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_106_106));
#line 440 "module_qual.qual_errors.m"
                  }
#line 439 "module_qual.qual_errors.m"
                }
#line 438 "module_qual.qual_errors.m"
              else
#line 433 "module_qual.qual_errors.m"
                {
#line 433 "module_qual.qual_errors.m"
                  MR_Word parse_tree__module_qual__qual_errors__V_112_112;
#line 433 "module_qual.qual_errors.m"
                  MR_Word parse_tree__module_qual__qual_errors__V_113_113;
#line 433 "module_qual.qual_errors.m"
                  MR_String parse_tree__module_qual__qual_errors__V_114_114;
#line 433 "module_qual.qual_errors.m"
                  MR_Word parse_tree__module_qual__qual_errors__V_115_115;
#line 433 "module_qual.qual_errors.m"
                  MR_Word parse_tree__module_qual__qual_errors__V_116_116;
#line 433 "module_qual.qual_errors.m"
                  MR_Word parse_tree__module_qual__qual_errors__V_117_117;
#line 433 "module_qual.qual_errors.m"
                  MR_Integer parse_tree__module_qual__qual_errors__Arity_184;
#line 433 "module_qual.qual_errors.m"
                  MR_Word parse_tree__module_qual__qual_errors__PredOrFunc_185 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__MaybePredOrFunc_26, (MR_Integer) 0)));

#line 434 "module_qual.qual_errors.m"
                  {
#line 434 "module_qual.qual_errors.m"
                    parse_tree__prog_util__adjust_func_arity_3_p_0(parse_tree__module_qual__qual_errors__PredOrFunc_185, parse_tree__module_qual__qual_errors__OrigArity_192, &parse_tree__module_qual__qual_errors__Arity_184);
                  }
#line 436 "module_qual.qual_errors.m"
                  {
#line 436 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_114_114 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(parse_tree__module_qual__qual_errors__PredOrFunc_185);
                  }
#line 436 "module_qual.qual_errors.m"
                  {
#line 436 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_113_113 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 436 "module_qual.qual_errors.m"
                    MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__V_113_113, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_114_114));
#line 436 "module_qual.qual_errors.m"
                  }
#line 437 "module_qual.qual_errors.m"
                  {
#line 437 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 437 "module_qual.qual_errors.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_117_117, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__SymName_191));
#line 437 "module_qual.qual_errors.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_117_117, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Arity_184));
#line 437 "module_qual.qual_errors.m"
                  }
#line 437 "module_qual.qual_errors.m"
                  {
#line 437 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_116_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "module_qual.qual_errors.m"
                    MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_116_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 437 "module_qual.qual_errors.m"
                    MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_116_116, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_117_117));
#line 437 "module_qual.qual_errors.m"
                  }
#line 437 "module_qual.qual_errors.m"
                  {
#line 437 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "module_qual.qual_errors.m"
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_115_115, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_116_116));
#line 437 "module_qual.qual_errors.m"
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 437 "module_qual.qual_errors.m"
                  }
#line 436 "module_qual.qual_errors.m"
                  {
#line 436 "module_qual.qual_errors.m"
                    parse_tree__module_qual__qual_errors__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "module_qual.qual_errors.m"
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_112_112, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_113_113));
#line 436 "module_qual.qual_errors.m"
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_112_112, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_115_115));
#line 436 "module_qual.qual_errors.m"
                  }
#line 435 "module_qual.qual_errors.m"
                  {
#line 435 "module_qual.qual_errors.m"
                    MR_Word base;
#line 435 "module_qual.qual_errors.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "module_qual.qual_errors.m"
                    *parse_tree__module_qual__qual_errors__Pieces_6 = base;
#line 435 "module_qual.qual_errors.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[86])));
#line 435 "module_qual.qual_errors.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_112_112));
#line 435 "module_qual.qual_errors.m"
                  }
#line 433 "module_qual.qual_errors.m"
                }
#line 430 "module_qual.qual_errors.m"
            }
#line 386 "module_qual.qual_errors.m"
            break;
#line 386 "module_qual.qual_errors.m"
          case (MR_Integer) 5:
#line 450 "module_qual.qual_errors.m"
            {
#line 450 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__Pragma_27;
#line 450 "module_qual.qual_errors.m"
              MR_String parse_tree__module_qual__qual_errors__PragmaName_29;
#line 450 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_95_95;
#line 450 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_96_96;

#line 450 "module_qual.qual_errors.m"
              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
#line 450 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__Pragma_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
#line 454 "module_qual.qual_errors.m"
#line 454 "module_qual.qual_errors.m"
              switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__Pragma_27)) {
#line 454 "module_qual.qual_errors.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 454 "module_qual.qual_errors.m"
                case (MR_Integer) 0:
#line 453 "module_qual.qual_errors.m"
                  parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "foreign_decl";
#line 454 "module_qual.qual_errors.m"
                  break;
#line 454 "module_qual.qual_errors.m"
                case (MR_Integer) 1:
#line 456 "module_qual.qual_errors.m"
                  parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "foreign_code";
#line 454 "module_qual.qual_errors.m"
                  break;
#line 454 "module_qual.qual_errors.m"
                case (MR_Integer) 2:
#line 459 "module_qual.qual_errors.m"
                  parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "foreign_proc";
#line 454 "module_qual.qual_errors.m"
                  break;
#line 454 "module_qual.qual_errors.m"
                case (MR_Integer) 3:
#line 454 "module_qual.qual_errors.m"
#line 454 "module_qual.qual_errors.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Pragma_27, (MR_Integer) 0)))) {
#line 454 "module_qual.qual_errors.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 0:
#line 465 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "foreign_proc_export";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 1:
#line 468 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "foreign_export_enum";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 2:
#line 471 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "foreign_enum";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 3:
#line 474 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "external_proc";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 4:
#line 477 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "type_spec";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 5:
#line 480 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "inline";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 6:
#line 483 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "no_inline";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 7:
#line 486 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "unused_args";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 8:
#line 489 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "exceptions";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 9:
#line 492 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "trailing_info";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 10:
#line 495 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "mm_tabling_info";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 11:
#line 498 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "obsolete";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 12:
#line 501 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "no_detism_warning";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 13:
#line 504 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "tabled";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 14:
#line 507 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "fact_table";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 15:
#line 513 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "oisu";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 16:
#line 516 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "promise_equivalent_clauses";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 17:
#line 519 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "promise_pure";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 18:
#line 522 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "promise_semipure";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 19:
#line 525 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "termination_info";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 20:
#line 528 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "termination2_info";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 21:
#line 531 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "terminates";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 22:
#line 534 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "does_not_terminate";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 23:
#line 537 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "check_termination";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 24:
#line 540 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "mode_check_clauses";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 25:
#line 543 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "structure_sharing";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 26:
#line 546 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "structure_reuse";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 27:
#line 462 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "foreign_import_module";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 28:
#line 510 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "reserve_tag";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                    case (MR_Integer) 29:
#line 549 "module_qual.qual_errors.m"
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "require_feature_set";
#line 454 "module_qual.qual_errors.m"
                      break;
#line 454 "module_qual.qual_errors.m"
                  }
#line 454 "module_qual.qual_errors.m"
                  break;
#line 454 "module_qual.qual_errors.m"
              }
#line 551 "module_qual.qual_errors.m"
              {
#line 551 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_96_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_96_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 551 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_96_96, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__PragmaName_29));
#line 551 "module_qual.qual_errors.m"
              }
#line 551 "module_qual.qual_errors.m"
              {
#line 551 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_95_95, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_96_96));
#line 551 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 551 "module_qual.qual_errors.m"
              }
#line 551 "module_qual.qual_errors.m"
              {
#line 551 "module_qual.qual_errors.m"
                MR_Word base;
#line 551 "module_qual.qual_errors.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "module_qual.qual_errors.m"
                *parse_tree__module_qual__qual_errors__Pieces_6 = base;
#line 551 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[85])));
#line 551 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_95_95));
#line 551 "module_qual.qual_errors.m"
              }
#line 450 "module_qual.qual_errors.m"
            }
#line 386 "module_qual.qual_errors.m"
            break;
#line 386 "module_qual.qual_errors.m"
          case (MR_Integer) 6:
#line 444 "module_qual.qual_errors.m"
            {
#line 444 "module_qual.qual_errors.m"
              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
#line 445 "module_qual.qual_errors.m"
              *parse_tree__module_qual__qual_errors__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[82]);
#line 444 "module_qual.qual_errors.m"
            }
#line 386 "module_qual.qual_errors.m"
            break;
#line 386 "module_qual.qual_errors.m"
          case (MR_Integer) 7:
#line 447 "module_qual.qual_errors.m"
            {
#line 447 "module_qual.qual_errors.m"
              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
#line 448 "module_qual.qual_errors.m"
              *parse_tree__module_qual__qual_errors__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[70]);
#line 447 "module_qual.qual_errors.m"
            }
#line 386 "module_qual.qual_errors.m"
            break;
#line 386 "module_qual.qual_errors.m"
          case (MR_Integer) 8:
#line 553 "module_qual.qual_errors.m"
            {
#line 553 "module_qual.qual_errors.m"
              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
#line 554 "module_qual.qual_errors.m"
              *parse_tree__module_qual__qual_errors__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[89]);
#line 553 "module_qual.qual_errors.m"
            }
#line 386 "module_qual.qual_errors.m"
            break;
#line 386 "module_qual.qual_errors.m"
          case (MR_Integer) 9:
#line 556 "module_qual.qual_errors.m"
            {
#line 556 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_87_87;
#line 556 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_88_88;
#line 556 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__Id_193;

#line 556 "module_qual.qual_errors.m"
              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
#line 556 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__Id_193 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
#line 557 "module_qual.qual_errors.m"
              {
#line 557 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_88_88 = parse_tree__module_qual__qual_errors__wrap_id_1_f_0(parse_tree__module_qual__qual_errors__Id_193);
              }
#line 557 "module_qual.qual_errors.m"
              {
#line 557 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_87_87, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_88_88));
#line 557 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 557 "module_qual.qual_errors.m"
              }
#line 557 "module_qual.qual_errors.m"
              {
#line 557 "module_qual.qual_errors.m"
                MR_Word base;
#line 557 "module_qual.qual_errors.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "module_qual.qual_errors.m"
                *parse_tree__module_qual__qual_errors__Pieces_6 = base;
#line 557 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[68])));
#line 557 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_87_87));
#line 557 "module_qual.qual_errors.m"
              }
#line 556 "module_qual.qual_errors.m"
            }
#line 386 "module_qual.qual_errors.m"
            break;
#line 386 "module_qual.qual_errors.m"
          case (MR_Integer) 10:
#line 559 "module_qual.qual_errors.m"
            {
#line 559 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_82_82;
#line 559 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_83_83;
#line 559 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__Id_194;

#line 559 "module_qual.qual_errors.m"
              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
#line 559 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__Id_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
#line 560 "module_qual.qual_errors.m"
              {
#line 560 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_83_83 = parse_tree__module_qual__qual_errors__wrap_id_1_f_0(parse_tree__module_qual__qual_errors__Id_194);
              }
#line 560 "module_qual.qual_errors.m"
              {
#line 560 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_82_82, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_83_83));
#line 560 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 560 "module_qual.qual_errors.m"
              }
#line 560 "module_qual.qual_errors.m"
              {
#line 560 "module_qual.qual_errors.m"
                MR_Word base;
#line 560 "module_qual.qual_errors.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "module_qual.qual_errors.m"
                *parse_tree__module_qual__qual_errors__Pieces_6 = base;
#line 560 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[80])));
#line 560 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_82_82));
#line 560 "module_qual.qual_errors.m"
              }
#line 559 "module_qual.qual_errors.m"
            }
#line 386 "module_qual.qual_errors.m"
            break;
#line 386 "module_qual.qual_errors.m"
          case (MR_Integer) 11:
#line 562 "module_qual.qual_errors.m"
            {
#line 562 "module_qual.qual_errors.m"
              MR_String parse_tree__module_qual__qual_errors__Name_62;
#line 562 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_77_77;
#line 562 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_78_78;

#line 562 "module_qual.qual_errors.m"
              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
#line 562 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__Name_62 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
#line 563 "module_qual.qual_errors.m"
              {
#line 563 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 563 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_78_78, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Name_62));
#line 563 "module_qual.qual_errors.m"
              }
#line 563 "module_qual.qual_errors.m"
              {
#line 563 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_77_77, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_78_78));
#line 563 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 563 "module_qual.qual_errors.m"
              }
#line 563 "module_qual.qual_errors.m"
              {
#line 563 "module_qual.qual_errors.m"
                MR_Word base;
#line 563 "module_qual.qual_errors.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "module_qual.qual_errors.m"
                *parse_tree__module_qual__qual_errors__Pieces_6 = base;
#line 563 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[84])));
#line 563 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_77_77));
#line 563 "module_qual.qual_errors.m"
              }
#line 562 "module_qual.qual_errors.m"
            }
#line 386 "module_qual.qual_errors.m"
            break;
#line 386 "module_qual.qual_errors.m"
          case (MR_Integer) 12:
#line 565 "module_qual.qual_errors.m"
            {
#line 565 "module_qual.qual_errors.m"
              MR_String parse_tree__module_qual__qual_errors__EventName_63;
#line 565 "module_qual.qual_errors.m"
              MR_String parse_tree__module_qual__qual_errors__AttrName_64;
#line 565 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_67_67;
#line 565 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_68_68;
#line 565 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_69_69;
#line 565 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_72_72;
#line 565 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_73_73;

#line 565 "module_qual.qual_errors.m"
              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
#line 565 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__EventName_63 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
#line 565 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__AttrName_64 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 3)));
#line 566 "module_qual.qual_errors.m"
              {
#line 566 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 566 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_68_68, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__AttrName_64));
#line 566 "module_qual.qual_errors.m"
              }
#line 567 "module_qual.qual_errors.m"
              {
#line 567 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 567 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_73_73, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__EventName_63));
#line 567 "module_qual.qual_errors.m"
              }
#line 567 "module_qual.qual_errors.m"
              {
#line 567 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_72_72, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_73_73));
#line 567 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 567 "module_qual.qual_errors.m"
              }
#line 567 "module_qual.qual_errors.m"
              {
#line 567 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_69_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[78])));
#line 567 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_69_69, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_72_72));
#line 567 "module_qual.qual_errors.m"
              }
#line 566 "module_qual.qual_errors.m"
              {
#line 566 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_67_67, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_68_68));
#line 566 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_67_67, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_69_69));
#line 566 "module_qual.qual_errors.m"
              }
#line 566 "module_qual.qual_errors.m"
              {
#line 566 "module_qual.qual_errors.m"
                MR_Word base;
#line 566 "module_qual.qual_errors.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "module_qual.qual_errors.m"
                *parse_tree__module_qual__qual_errors__Pieces_6 = base;
#line 566 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[77])));
#line 566 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_67_67));
#line 566 "module_qual.qual_errors.m"
              }
#line 565 "module_qual.qual_errors.m"
            }
#line 386 "module_qual.qual_errors.m"
            break;
#line 386 "module_qual.qual_errors.m"
        }
#line 386 "module_qual.qual_errors.m"
        break;
#line 386 "module_qual.qual_errors.m"
    }
#line 386 "module_qual.qual_errors.m"
  }
#line 381 "module_qual.qual_errors.m"
}

#line 341 "module_qual.qual_errors.m"
static void MR_CALL 
parse_tree__module_qual__qual_errors__mq_constraint_error_context_to_pieces_4_p_0(
#line 341 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__ConstraintErrorContext_5,
#line 341 "module_qual.qual_errors.m"
  MR_Word * parse_tree__module_qual__qual_errors__Context_6,
#line 341 "module_qual.qual_errors.m"
  MR_String * parse_tree__module_qual__qual_errors__Start_7,
#line 341 "module_qual.qual_errors.m"
  MR_Word * parse_tree__module_qual__qual_errors__Pieces_8)
#line 341 "module_qual.qual_errors.m"
{
#line 347 "module_qual.qual_errors.m"
  {
#line 347 "module_qual.qual_errors.m"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;

#line 347 "module_qual.qual_errors.m"
#line 347 "module_qual.qual_errors.m"
    switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__ConstraintErrorContext_5)) {
#line 347 "module_qual.qual_errors.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 347 "module_qual.qual_errors.m"
      case (MR_Integer) 0:
#line 347 "module_qual.qual_errors.m"
        {
#line 347 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__ClassName_9;
#line 347 "module_qual.qual_errors.m"
          MR_Integer parse_tree__module_qual__qual_errors__Arity_10;
#line 347 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_56_56;
#line 347 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_57_57;
#line 347 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_58_58;

#line 347 "module_qual.qual_errors.m"
          *parse_tree__module_qual__qual_errors__Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 0)));
#line 347 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__ClassName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 1)));
#line 347 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 2)));
#line 348 "module_qual.qual_errors.m"
          *parse_tree__module_qual__qual_errors__Start_7 = (MR_String) "in";
#line 350 "module_qual.qual_errors.m"
          {
#line 350 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 350 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_58_58, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__ClassName_9));
#line 350 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_58_58, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Arity_10));
#line 350 "module_qual.qual_errors.m"
          }
#line 350 "module_qual.qual_errors.m"
          {
#line 350 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 350 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_57_57, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_58_58));
#line 350 "module_qual.qual_errors.m"
          }
#line 350 "module_qual.qual_errors.m"
          {
#line 350 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_56_56, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_57_57));
#line 350 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "module_qual.qual_errors.m"
          }
#line 349 "module_qual.qual_errors.m"
          {
#line 349 "module_qual.qual_errors.m"
            MR_Word base;
#line 349 "module_qual.qual_errors.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "module_qual.qual_errors.m"
            *parse_tree__module_qual__qual_errors__Pieces_8 = base;
#line 349 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[62])));
#line 349 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_56_56));
#line 349 "module_qual.qual_errors.m"
          }
#line 347 "module_qual.qual_errors.m"
        }
#line 347 "module_qual.qual_errors.m"
        break;
#line 347 "module_qual.qual_errors.m"
      case (MR_Integer) 1:
#line 353 "module_qual.qual_errors.m"
        {
#line 353 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__PredOrFunc_11;
#line 353 "module_qual.qual_errors.m"
          MR_String parse_tree__module_qual__qual_errors__MethodName_12;
#line 353 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_49_49;
#line 353 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_50_50;
#line 353 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_51_51;
#line 353 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_52_52;

#line 352 "module_qual.qual_errors.m"
          *parse_tree__module_qual__qual_errors__Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 0)));
#line 352 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 1)));
#line 352 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__MethodName_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 2)));
#line 354 "module_qual.qual_errors.m"
          *parse_tree__module_qual__qual_errors__Start_7 = (MR_String) "on";
#line 356 "module_qual.qual_errors.m"
          {
#line 356 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 356 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_50_50, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__PredOrFunc_11));
#line 356 "module_qual.qual_errors.m"
          }
#line 356 "module_qual.qual_errors.m"
          {
#line 356 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 356 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_52_52, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__MethodName_12));
#line 356 "module_qual.qual_errors.m"
          }
#line 356 "module_qual.qual_errors.m"
          {
#line 356 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_51_51, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_52_52));
#line 356 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 356 "module_qual.qual_errors.m"
          }
#line 356 "module_qual.qual_errors.m"
          {
#line 356 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_49_49, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_50_50));
#line 356 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_49_49, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_51_51));
#line 356 "module_qual.qual_errors.m"
          }
#line 355 "module_qual.qual_errors.m"
          {
#line 355 "module_qual.qual_errors.m"
            MR_Word base;
#line 355 "module_qual.qual_errors.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "module_qual.qual_errors.m"
            *parse_tree__module_qual__qual_errors__Pieces_8 = base;
#line 355 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[63])));
#line 355 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_49_49));
#line 355 "module_qual.qual_errors.m"
          }
#line 353 "module_qual.qual_errors.m"
        }
#line 347 "module_qual.qual_errors.m"
        break;
#line 347 "module_qual.qual_errors.m"
      case (MR_Integer) 2:
#line 359 "module_qual.qual_errors.m"
        {
#line 359 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__ArgTypes_13;
#line 359 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_42_42;
#line 359 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_43_43;
#line 359 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__V_44_44;
#line 359 "module_qual.qual_errors.m"
          MR_Integer parse_tree__module_qual__qual_errors__V_45_45;
#line 359 "module_qual.qual_errors.m"
          MR_Word parse_tree__module_qual__qual_errors__ClassName_60;

#line 358 "module_qual.qual_errors.m"
          *parse_tree__module_qual__qual_errors__Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 0)));
#line 358 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__ClassName_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 1)));
#line 358 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__ArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 2)));
#line 360 "module_qual.qual_errors.m"
          *parse_tree__module_qual__qual_errors__Start_7 = (MR_String) "on";
#line 362 "module_qual.qual_errors.m"
          {
#line 362 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_45_45 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__module_qual__qual_errors__ArgTypes_13);
          }
#line 362 "module_qual.qual_errors.m"
          {
#line 362 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 362 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_44_44, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__ClassName_60));
#line 362 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_44_44, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_45_45));
#line 362 "module_qual.qual_errors.m"
          }
#line 362 "module_qual.qual_errors.m"
          {
#line 362 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 362 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_43_43, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_44_44));
#line 362 "module_qual.qual_errors.m"
          }
#line 362 "module_qual.qual_errors.m"
          {
#line 362 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_42_42, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_43_43));
#line 362 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "module_qual.qual_errors.m"
          }
#line 361 "module_qual.qual_errors.m"
          {
#line 361 "module_qual.qual_errors.m"
            MR_Word base;
#line 361 "module_qual.qual_errors.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "module_qual.qual_errors.m"
            *parse_tree__module_qual__qual_errors__Pieces_8 = base;
#line 361 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[64])));
#line 361 "module_qual.qual_errors.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_42_42));
#line 361 "module_qual.qual_errors.m"
          }
#line 359 "module_qual.qual_errors.m"
        }
#line 347 "module_qual.qual_errors.m"
        break;
#line 347 "module_qual.qual_errors.m"
      case (MR_Integer) 3:
#line 347 "module_qual.qual_errors.m"
#line 347 "module_qual.qual_errors.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 0)))) {
#line 347 "module_qual.qual_errors.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 347 "module_qual.qual_errors.m"
          case (MR_Integer) 0:
#line 365 "module_qual.qual_errors.m"
            {
#line 365 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__TypeCtor_14;
#line 365 "module_qual.qual_errors.m"
              MR_String parse_tree__module_qual__qual_errors__FunctionSymbol_15;
#line 365 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__TypeCtorSymName_16;
#line 365 "module_qual.qual_errors.m"
              MR_Integer parse_tree__module_qual__qual_errors__TypeCtorArity_17;
#line 365 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_31_31;
#line 365 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_32_32;
#line 365 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_33_33;
#line 365 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_36_36;
#line 365 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_37_37;
#line 365 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_38_38;

#line 364 "module_qual.qual_errors.m"
              *parse_tree__module_qual__qual_errors__Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 1)));
#line 364 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__TypeCtor_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 2)));
#line 364 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__FunctionSymbol_15 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 3)));
#line 366 "module_qual.qual_errors.m"
              *parse_tree__module_qual__qual_errors__Start_7 = (MR_String) "on";
#line 367 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__TypeCtorSymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__TypeCtor_14, (MR_Integer) 0)));
#line 367 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__TypeCtorArity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__TypeCtor_14, (MR_Integer) 1)));
#line 368 "module_qual.qual_errors.m"
              {
#line 368 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 368 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_32_32, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__FunctionSymbol_15));
#line 368 "module_qual.qual_errors.m"
              }
#line 370 "module_qual.qual_errors.m"
              {
#line 370 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 370 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_38_38, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__TypeCtorSymName_16));
#line 370 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_38_38, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__TypeCtorArity_17));
#line 370 "module_qual.qual_errors.m"
              }
#line 370 "module_qual.qual_errors.m"
              {
#line 370 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 370 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_37_37, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_38_38));
#line 370 "module_qual.qual_errors.m"
              }
#line 370 "module_qual.qual_errors.m"
              {
#line 370 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_36_36, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_37_37));
#line 370 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 370 "module_qual.qual_errors.m"
              }
#line 369 "module_qual.qual_errors.m"
              {
#line 369 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[67])));
#line 369 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_33_33, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_36_36));
#line 369 "module_qual.qual_errors.m"
              }
#line 368 "module_qual.qual_errors.m"
              {
#line 368 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_31_31, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_32_32));
#line 368 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_31_31, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_33_33));
#line 368 "module_qual.qual_errors.m"
              }
#line 368 "module_qual.qual_errors.m"
              {
#line 368 "module_qual.qual_errors.m"
                MR_Word base;
#line 368 "module_qual.qual_errors.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "module_qual.qual_errors.m"
                *parse_tree__module_qual__qual_errors__Pieces_8 = base;
#line 368 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[66])));
#line 368 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_31_31));
#line 368 "module_qual.qual_errors.m"
              }
#line 365 "module_qual.qual_errors.m"
            }
#line 347 "module_qual.qual_errors.m"
            break;
#line 347 "module_qual.qual_errors.m"
          case (MR_Integer) 1:
#line 373 "module_qual.qual_errors.m"
            {
#line 373 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__SymName_18;
#line 373 "module_qual.qual_errors.m"
              MR_Integer parse_tree__module_qual__qual_errors__OrigArity_19;
#line 373 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_22_22;
#line 373 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_23_23;
#line 373 "module_qual.qual_errors.m"
              MR_String parse_tree__module_qual__qual_errors__V_24_24;
#line 373 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_25_25;
#line 373 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_26_26;
#line 373 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__V_27_27;
#line 373 "module_qual.qual_errors.m"
              MR_Integer parse_tree__module_qual__qual_errors__Arity_61;
#line 373 "module_qual.qual_errors.m"
              MR_Word parse_tree__module_qual__qual_errors__PredOrFunc_62;

#line 372 "module_qual.qual_errors.m"
              *parse_tree__module_qual__qual_errors__Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 1)));
#line 372 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__PredOrFunc_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 2)));
#line 372 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 3)));
#line 372 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__OrigArity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 4)));
#line 374 "module_qual.qual_errors.m"
              *parse_tree__module_qual__qual_errors__Start_7 = (MR_String) "on";
#line 375 "module_qual.qual_errors.m"
              {
#line 375 "module_qual.qual_errors.m"
                parse_tree__prog_util__adjust_func_arity_3_p_0(parse_tree__module_qual__qual_errors__PredOrFunc_62, parse_tree__module_qual__qual_errors__OrigArity_19, &parse_tree__module_qual__qual_errors__Arity_61);
              }
#line 377 "module_qual.qual_errors.m"
              {
#line 377 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_24_24 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(parse_tree__module_qual__qual_errors__PredOrFunc_62);
              }
#line 377 "module_qual.qual_errors.m"
              {
#line 377 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 377 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__V_23_23, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_24_24));
#line 377 "module_qual.qual_errors.m"
              }
#line 378 "module_qual.qual_errors.m"
              {
#line 378 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 378 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_27_27, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__SymName_18));
#line 378 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_27_27, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Arity_61));
#line 378 "module_qual.qual_errors.m"
              }
#line 378 "module_qual.qual_errors.m"
              {
#line 378 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 378 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_26_26, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_27_27));
#line 378 "module_qual.qual_errors.m"
              }
#line 378 "module_qual.qual_errors.m"
              {
#line 378 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_25_25, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_26_26));
#line 378 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 378 "module_qual.qual_errors.m"
              }
#line 377 "module_qual.qual_errors.m"
              {
#line 377 "module_qual.qual_errors.m"
                parse_tree__module_qual__qual_errors__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_22_22, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_23_23));
#line 377 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_22_22, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_25_25));
#line 377 "module_qual.qual_errors.m"
              }
#line 376 "module_qual.qual_errors.m"
              {
#line 376 "module_qual.qual_errors.m"
                MR_Word base;
#line 376 "module_qual.qual_errors.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "module_qual.qual_errors.m"
                *parse_tree__module_qual__qual_errors__Pieces_8 = base;
#line 376 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[65])));
#line 376 "module_qual.qual_errors.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_22_22));
#line 376 "module_qual.qual_errors.m"
              }
#line 373 "module_qual.qual_errors.m"
            }
#line 347 "module_qual.qual_errors.m"
            break;
#line 347 "module_qual.qual_errors.m"
        }
#line 347 "module_qual.qual_errors.m"
        break;
#line 347 "module_qual.qual_errors.m"
    }
#line 347 "module_qual.qual_errors.m"
  }
#line 341 "module_qual.qual_errors.m"
}

#line 330 "module_qual.qual_errors.m"
static void MR_CALL 
parse_tree__module_qual__qual_errors__warn_redundant_import_context_3_p_0(
#line 330 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__ImportedModuleName_4,
#line 330 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__Context_5,
#line 330 "module_qual.qual_errors.m"
  MR_Word * parse_tree__module_qual__qual_errors__Msg_6)
#line 330 "module_qual.qual_errors.m"
{
#line 333 "module_qual.qual_errors.m"
  {
#line 333 "module_qual.qual_errors.m"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
#line 333 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__Pieces_7;
#line 333 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_10_10;
#line 333 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_11_11;
#line 333 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_18_18;
#line 333 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_19_19;

#line 334 "module_qual.qual_errors.m"
    {
#line 334 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 334 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_11_11, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__ImportedModuleName_4));
#line 334 "module_qual.qual_errors.m"
    }
#line 334 "module_qual.qual_errors.m"
    {
#line 334 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_10_10, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_11_11));
#line 334 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[36])));
#line 334 "module_qual.qual_errors.m"
    }
#line 334 "module_qual.qual_errors.m"
    {
#line 334 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Pieces_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[61])));
#line 334 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Pieces_7, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_10_10));
#line 334 "module_qual.qual_errors.m"
    }
#line 336 "module_qual.qual_errors.m"
    {
#line 336 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 336 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_19_19, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Pieces_7));
#line 336 "module_qual.qual_errors.m"
    }
#line 336 "module_qual.qual_errors.m"
    {
#line 336 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_18_18, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_19_19));
#line 336 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 336 "module_qual.qual_errors.m"
    }
#line 336 "module_qual.qual_errors.m"
    {
#line 336 "module_qual.qual_errors.m"
      MR_Word base;
#line 336 "module_qual.qual_errors.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 336 "module_qual.qual_errors.m"
      *parse_tree__module_qual__qual_errors__Msg_6 = base;
#line 336 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Context_5));
#line 336 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_18_18));
#line 336 "module_qual.qual_errors.m"
    }
#line 333 "module_qual.qual_errors.m"
  }
#line 330 "module_qual.qual_errors.m"
}

#line 242 "module_qual.qual_errors.m"
static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__module_name_matches_some_2_f_0(
#line 242 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1,
#line 242 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2)
#line 242 "module_qual.qual_errors.m"
{
#line 244 "module_qual.qual_errors.m"
  while (MR_TRUE)
#line 244 "module_qual.qual_errors.m"
    {
#line 244 "module_qual.qual_errors.m"
      /* tailcall optimized into a loop */
#line 244 "module_qual.qual_errors.m"
      {
#line 244 "module_qual.qual_errors.m"
        MR_bool parse_tree__module_qual__qual_errors__succeeded;
#line 244 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__HeadVar__3_3;

#line 244 "module_qual.qual_errors.m"
        if ((parse_tree__module_qual__qual_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 244 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__HeadVar__3_3 = (MR_Integer) 0;
#line 244 "module_qual.qual_errors.m"
        else
#line 246 "module_qual.qual_errors.m"
          {
#line 246 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__ModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 246 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__ModuleNames_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));

#line 247 "module_qual.qual_errors.m"
            {
#line 247 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__module_qual__qual_errors__HeadVar__1_1, parse_tree__module_qual__qual_errors__ModuleName_6);
            }
#line 247 "module_qual.qual_errors.m"
            if (parse_tree__module_qual__qual_errors__succeeded)
#line 248 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__HeadVar__3_3 = (MR_Integer) 1;
#line 247 "module_qual.qual_errors.m"
            else
#line 250 "module_qual.qual_errors.m"
              {
#line 250 "module_qual.qual_errors.m"
                /* direct tailcall eliminated */
#line 250 "module_qual.qual_errors.m"
                {
#line 250 "module_qual.qual_errors.m"
                  MR_Word parse_tree__module_qual__qual_errors__HeadVar__2__tmp_copy_2 = parse_tree__module_qual__qual_errors__ModuleNames_7;

#line 250 "module_qual.qual_errors.m"
                  parse_tree__module_qual__qual_errors__HeadVar__2_2 = parse_tree__module_qual__qual_errors__HeadVar__2__tmp_copy_2;
#line 250 "module_qual.qual_errors.m"
                }
#line 250 "module_qual.qual_errors.m"
                continue;
#line 250 "module_qual.qual_errors.m"
              }
#line 246 "module_qual.qual_errors.m"
          }
#line 244 "module_qual.qual_errors.m"
        return parse_tree__module_qual__qual_errors__HeadVar__3_3;
#line 244 "module_qual.qual_errors.m"
      }
#line 244 "module_qual.qual_errors.m"
      break;
#line 244 "module_qual.qual_errors.m"
    }
#line 242 "module_qual.qual_errors.m"
}

#line 324 "module_qual.qual_errors.m"
static void MR_CALL 
parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0_1(
#line 324 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
#line 324 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1,
#line 324 "module_qual.qual_errors.m"
  MR_Box * parse_tree__module_qual__qual_errors__wrapper_arg_2)
#line 324 "module_qual.qual_errors.m"
{
#line 324 "module_qual.qual_errors.m"
  {
#line 324 "module_qual.qual_errors.m"
    MR_Box parse_tree__module_qual__qual_errors__closure = parse_tree__module_qual__qual_errors__closure_arg;
#line 324 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__conv0_Msg_6;

#line 324 "module_qual.qual_errors.m"
    {
#line 324 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__warn_redundant_import_context_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_1), &parse_tree__module_qual__qual_errors__conv0_Msg_6);
    }
#line 324 "module_qual.qual_errors.m"
    *parse_tree__module_qual__qual_errors__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__qual_errors__conv0_Msg_6));
#line 324 "module_qual.qual_errors.m"
  }
#line 324 "module_qual.qual_errors.m"
}

#line 161 "module_qual.qual_errors.m"
void MR_CALL 
parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0(
#line 161 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__ParentModuleName_5,
#line 161 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2,
#line 161 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_15,
#line 161 "module_qual.qual_errors.m"
  MR_Word * parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_16)
#line 161 "module_qual.qual_errors.m"
{
#line 315 "module_qual.qual_errors.m"
  {
#line 315 "module_qual.qual_errors.m"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
#line 315 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__ImportedModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 315 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__ImportContexts_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 315 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__HeadContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__ImportContexts_7, (MR_Integer) 0)));
#line 315 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__TailContexts_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__ImportContexts_7, (MR_Integer) 1)));
#line 315 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__HeadPieces_11;
#line 315 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__HeadMsg_12;
#line 315 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__TailMsgs_13;
#line 315 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__Spec_14;
#line 315 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_19_19;
#line 315 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_20_20;
#line 315 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_21_21;
#line 315 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_24_24;
#line 315 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_26_26;
#line 315 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_29_29;
#line 315 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_30_30;
#line 315 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_40_40;
#line 315 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_41_41;
#line 315 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_43_43;
#line 315 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_46_46;

#line 318 "module_qual.qual_errors.m"
    {
#line 318 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 318 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_20_20, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__ParentModuleName_5));
#line 318 "module_qual.qual_errors.m"
    }
#line 319 "module_qual.qual_errors.m"
    {
#line 319 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 319 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_30_30, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__ImportedModuleName_6));
#line 319 "module_qual.qual_errors.m"
    }
#line 319 "module_qual.qual_errors.m"
    {
#line 319 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_29_29, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_30_30));
#line 319 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[34])));
#line 319 "module_qual.qual_errors.m"
    }
#line 319 "module_qual.qual_errors.m"
    {
#line 319 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[60])));
#line 319 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_26_26, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_29_29));
#line 319 "module_qual.qual_errors.m"
    }
#line 318 "module_qual.qual_errors.m"
    {
#line 318 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_24_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 318 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_24_24, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_26_26));
#line 318 "module_qual.qual_errors.m"
    }
#line 318 "module_qual.qual_errors.m"
    {
#line 318 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[39])));
#line 318 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_21_21, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_24_24));
#line 318 "module_qual.qual_errors.m"
    }
#line 318 "module_qual.qual_errors.m"
    {
#line 318 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_19_19, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_20_20));
#line 318 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_19_19, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_21_21));
#line 318 "module_qual.qual_errors.m"
    }
#line 318 "module_qual.qual_errors.m"
    {
#line 318 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__HeadPieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadPieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[59])));
#line 318 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadPieces_11, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_19_19));
#line 318 "module_qual.qual_errors.m"
    }
#line 322 "module_qual.qual_errors.m"
    {
#line 322 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 322 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_41_41, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__HeadPieces_11));
#line 322 "module_qual.qual_errors.m"
    }
#line 322 "module_qual.qual_errors.m"
    {
#line 322 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_40_40, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_41_41));
#line 322 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "module_qual.qual_errors.m"
    }
#line 322 "module_qual.qual_errors.m"
    {
#line 322 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__HeadMsg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 322 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadMsg_12, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__HeadContext_9));
#line 322 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadMsg_12, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_40_40));
#line 322 "module_qual.qual_errors.m"
    }
#line 324 "module_qual.qual_errors.m"
    {
#line 324 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 324 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_43_43, 0) = ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_5[0]));
#line 324 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_43_43, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0_1));
#line 324 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 324 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_43_43, 3) = ((MR_Box) (parse_tree__module_qual__qual_errors__ImportedModuleName_6));
#line 324 "module_qual.qual_errors.m"
    }
#line 324 "module_qual.qual_errors.m"
    {
#line 324 "module_qual.qual_errors.m"
      mercury__list__map_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_context_0, (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, parse_tree__module_qual__qual_errors__V_43_43, parse_tree__module_qual__qual_errors__TailContexts_10, &parse_tree__module_qual__qual_errors__TailMsgs_13);
    }
#line 327 "module_qual.qual_errors.m"
    {
#line 327 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_46_46, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__HeadMsg_12));
#line 327 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_46_46, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__TailMsgs_13));
#line 327 "module_qual.qual_errors.m"
    }
#line 326 "module_qual.qual_errors.m"
    {
#line 326 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 326 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 326 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 326 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_14, 2) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_46_46));
#line 326 "module_qual.qual_errors.m"
    }
#line 328 "module_qual.qual_errors.m"
    {
#line 328 "module_qual.qual_errors.m"
      MR_Word base;
#line 328 "module_qual.qual_errors.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "module_qual.qual_errors.m"
      *parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_16 = base;
#line 328 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Spec_14));
#line 328 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_15));
#line 328 "module_qual.qual_errors.m"
    }
#line 315 "module_qual.qual_errors.m"
  }
#line 161 "module_qual.qual_errors.m"
}

#line 155 "module_qual.qual_errors.m"
void MR_CALL 
parse_tree__module_qual__qual_errors__report_invalid_user_inst_5_p_0(
#line 155 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors___SymName_6,
#line 155 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors___Insts_7,
#line 155 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__ErrorContext_8,
#line 155 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_15,
#line 155 "module_qual.qual_errors.m"
  MR_Word * parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_16)
#line 155 "module_qual.qual_errors.m"
{
#line 304 "module_qual.qual_errors.m"
  {
#line 304 "module_qual.qual_errors.m"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;

#line 304 "module_qual.qual_errors.m"
    {
#line 304 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_105_110_118_97_108_105_100_95_117_115_101_114_95_105_110_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(parse_tree__module_qual__qual_errors__ErrorContext_8, parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_15, parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_16);
    }
#line 304 "module_qual.qual_errors.m"
  }
#line 155 "module_qual.qual_errors.m"
}

#line 149 "module_qual.qual_errors.m"
void MR_CALL 
parse_tree__module_qual__qual_errors__report_may_not_use_in_interface_6_p_0(
#line 149 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__ErrorContext_7,
#line 149 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__IdType_8,
#line 149 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__BadSymName_9,
#line 149 "module_qual.qual_errors.m"
  MR_Integer parse_tree__module_qual__qual_errors__BadArity_10,
#line 149 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_19,
#line 149 "module_qual.qual_errors.m"
  MR_Word * parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_20)
#line 149 "module_qual.qual_errors.m"
{
#line 291 "module_qual.qual_errors.m"
  {
#line 291 "module_qual.qual_errors.m"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
#line 291 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__TypeCtorInfo_55_55;
#line 291 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__Context_12;
#line 291 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__ErrorContextPieces_13;
#line 291 "module_qual.qual_errors.m"
    MR_String parse_tree__module_qual__qual_errors__IdStr_14;
#line 291 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__SNA_15;
#line 291 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__MainPieces_16;
#line 291 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__Msg_17;
#line 291 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__Spec_18;
#line 291 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_21_21;
#line 291 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_26_26;
#line 291 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_27_27;
#line 291 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_30_30;
#line 291 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_32_32;
#line 291 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_35_35;
#line 291 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_36_36;
#line 291 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_37_37;
#line 291 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_47_47;
#line 291 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_48_48;
#line 291 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_52_52;

#line 292 "module_qual.qual_errors.m"
    {
#line 292 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_3_p_0(parse_tree__module_qual__qual_errors__ErrorContext_7, &parse_tree__module_qual__qual_errors__Context_12, &parse_tree__module_qual__qual_errors__ErrorContextPieces_13);
    }
#line 572 "module_qual.qual_errors.m"
    parse_tree__module_qual__qual_errors__IdStr_14 = ((&parse_tree__module_qual__qual_errors_vector_common_4[0 + parse_tree__module_qual__qual_errors__IdType_8]))->parse_tree__module_qual__qual_errors__vector_common_type_4_0__vct_4_f_0;
#line 294 "module_qual.qual_errors.m"
    {
#line 294 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 294 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_21_21, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__BadSymName_9));
#line 294 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_21_21, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__BadArity_10));
#line 294 "module_qual.qual_errors.m"
    }
#line 294 "module_qual.qual_errors.m"
    {
#line 294 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__SNA_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__SNA_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 294 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__SNA_15, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_21_21));
#line 294 "module_qual.qual_errors.m"
    }
#line 7495 "parse_tree.module_qual.qual_errors.c"
    parse_tree__module_qual__qual_errors__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 296 "module_qual.qual_errors.m"
    {
#line 296 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_36_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 296 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__V_36_36, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__IdStr_14));
#line 296 "module_qual.qual_errors.m"
    }
#line 296 "module_qual.qual_errors.m"
    {
#line 296 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_37_37, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__SNA_15));
#line 296 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[25])));
#line 296 "module_qual.qual_errors.m"
    }
#line 296 "module_qual.qual_errors.m"
    {
#line 296 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_35_35, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_36_36));
#line 296 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_35_35, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_37_37));
#line 296 "module_qual.qual_errors.m"
    }
#line 296 "module_qual.qual_errors.m"
    {
#line 296 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_32_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[58])));
#line 296 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_32_32, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_35_35));
#line 296 "module_qual.qual_errors.m"
    }
#line 295 "module_qual.qual_errors.m"
    {
#line 295 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 295 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_30_30, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_32_32));
#line 295 "module_qual.qual_errors.m"
    }
#line 295 "module_qual.qual_errors.m"
    {
#line 295 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_27_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[39])));
#line 295 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_27_27, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_30_30));
#line 295 "module_qual.qual_errors.m"
    }
#line 295 "module_qual.qual_errors.m"
    {
#line 295 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_26_26 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_55_55, parse_tree__module_qual__qual_errors__ErrorContextPieces_13, parse_tree__module_qual__qual_errors__V_27_27);
    }
#line 295 "module_qual.qual_errors.m"
    {
#line 295 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__MainPieces_16 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_55_55, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[38]), parse_tree__module_qual__qual_errors__V_26_26);
    }
#line 298 "module_qual.qual_errors.m"
    {
#line 298 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 298 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_48_48, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__MainPieces_16));
#line 298 "module_qual.qual_errors.m"
    }
#line 298 "module_qual.qual_errors.m"
    {
#line 298 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_47_47, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_48_48));
#line 298 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "module_qual.qual_errors.m"
    }
#line 298 "module_qual.qual_errors.m"
    {
#line 298 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 298 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Msg_17, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Context_12));
#line 298 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Msg_17, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_47_47));
#line 298 "module_qual.qual_errors.m"
    }
#line 299 "module_qual.qual_errors.m"
    {
#line 299 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_52_52, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Msg_17));
#line 299 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 299 "module_qual.qual_errors.m"
    }
#line 299 "module_qual.qual_errors.m"
    {
#line 299 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 299 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 299 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 299 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_18, 2) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_52_52));
#line 299 "module_qual.qual_errors.m"
    }
#line 300 "module_qual.qual_errors.m"
    {
#line 300 "module_qual.qual_errors.m"
      MR_Word base;
#line 300 "module_qual.qual_errors.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "module_qual.qual_errors.m"
      *parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_20 = base;
#line 300 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Spec_18));
#line 300 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_19));
#line 300 "module_qual.qual_errors.m"
    }
#line 291 "module_qual.qual_errors.m"
  }
#line 149 "module_qual.qual_errors.m"
}

#line 275 "module_qual.qual_errors.m"
static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_3(
#line 275 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
#line 275 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1)
#line 275 "module_qual.qual_errors.m"
{
#line 275 "module_qual.qual_errors.m"
  {
#line 275 "module_qual.qual_errors.m"
    MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2;
#line 275 "module_qual.qual_errors.m"
    MR_Box parse_tree__module_qual__qual_errors__closure = parse_tree__module_qual__qual_errors__closure_arg;
#line 275 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__conv2_HeadVar__2_2;

#line 275 "module_qual.qual_errors.m"
    {
#line 275 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__conv2_HeadVar__2_2 = parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_1));
    }
#line 275 "module_qual.qual_errors.m"
    parse_tree__module_qual__qual_errors__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__qual_errors__conv2_HeadVar__2_2));
#line 275 "module_qual.qual_errors.m"
    return parse_tree__module_qual__qual_errors__wrapper_arg_2;
#line 275 "module_qual.qual_errors.m"
  }
#line 275 "module_qual.qual_errors.m"
}

#line 275 "module_qual.qual_errors.m"
static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_2(
#line 275 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
#line 275 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1)
#line 275 "module_qual.qual_errors.m"
{
#line 275 "module_qual.qual_errors.m"
  {
#line 275 "module_qual.qual_errors.m"
    MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2;
#line 275 "module_qual.qual_errors.m"
    MR_Box parse_tree__module_qual__qual_errors__closure = parse_tree__module_qual__qual_errors__closure_arg;
#line 275 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__conv1_HeadVar__2_2;

#line 275 "module_qual.qual_errors.m"
    {
#line 275 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__conv1_HeadVar__2_2 = parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_1));
    }
#line 275 "module_qual.qual_errors.m"
    parse_tree__module_qual__qual_errors__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__qual_errors__conv1_HeadVar__2_2));
#line 275 "module_qual.qual_errors.m"
    return parse_tree__module_qual__qual_errors__wrapper_arg_2;
#line 275 "module_qual.qual_errors.m"
  }
#line 275 "module_qual.qual_errors.m"
}

#line 257 "module_qual.qual_errors.m"
static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_1(
#line 257 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
#line 257 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1)
#line 257 "module_qual.qual_errors.m"
{
#line 257 "module_qual.qual_errors.m"
  {
#line 257 "module_qual.qual_errors.m"
    MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2;
#line 257 "module_qual.qual_errors.m"
    MR_Box parse_tree__module_qual__qual_errors__closure = parse_tree__module_qual__qual_errors__closure_arg;
#line 257 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__conv0_HeadVar__2_2;

#line 257 "module_qual.qual_errors.m"
    {
#line 257 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__conv0_HeadVar__2_2 = parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_1));
    }
#line 257 "module_qual.qual_errors.m"
    parse_tree__module_qual__qual_errors__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__qual_errors__conv0_HeadVar__2_2));
#line 257 "module_qual.qual_errors.m"
    return parse_tree__module_qual__qual_errors__wrapper_arg_2;
#line 257 "module_qual.qual_errors.m"
  }
#line 257 "module_qual.qual_errors.m"
}

#line 145 "module_qual.qual_errors.m"
void MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0(
#line 145 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__ErrorContext_8,
#line 145 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__Id_9,
#line 145 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__IdType_10,
#line 145 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__UsableModuleNames_11,
#line 145 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__UnusableModuleNames_12,
#line 145 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_29,
#line 145 "module_qual.qual_errors.m"
  MR_Word * parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_30)
#line 145 "module_qual.qual_errors.m"
{
#line 254 "module_qual.qual_errors.m"
  {
#line 254 "module_qual.qual_errors.m"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__TypeCtorInfo_106_106;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__TypeCtorInfo_107_107;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__Context_14;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__ErrorContextPieces_15;
#line 254 "module_qual.qual_errors.m"
    MR_String parse_tree__module_qual__qual_errors__IdStr_16;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__UsableModuleSymNames_17;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__MainPieces_18;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__UnusablePieces_19;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__Msg_27;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__Spec_28;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_36_36;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_37_37;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_38_38;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_41_41;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_43_43;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_46_46;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_47_47;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_48_48;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_49_49;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_59_59;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_93_93;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_94_94;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_95_95;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_96_96;
#line 254 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_103_103;

#line 255 "module_qual.qual_errors.m"
    {
#line 255 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_3_p_0(parse_tree__module_qual__qual_errors__ErrorContext_8, &parse_tree__module_qual__qual_errors__Context_14, &parse_tree__module_qual__qual_errors__ErrorContextPieces_15);
    }
#line 256 "module_qual.qual_errors.m"
    {
#line 256 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__id_type_to_string_2_p_0(parse_tree__module_qual__qual_errors__IdType_10, &parse_tree__module_qual__qual_errors__IdStr_16);
    }
#line 7814 "parse_tree.module_qual.qual_errors.c"
    parse_tree__module_qual__qual_errors__TypeCtorInfo_106_106 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 7816 "parse_tree.module_qual.qual_errors.c"
    parse_tree__module_qual__qual_errors__TypeCtorInfo_107_107 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 257 "module_qual.qual_errors.m"
    {
#line 257 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__UsableModuleSymNames_17 = mercury__list__map_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_106_106, parse_tree__module_qual__qual_errors__TypeCtorInfo_107_107, (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_3[2], parse_tree__module_qual__qual_errors__UsableModuleNames_11);
    }
#line 260 "module_qual.qual_errors.m"
    {
#line 260 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 260 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__V_47_47, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__IdStr_16));
#line 260 "module_qual.qual_errors.m"
    }
#line 260 "module_qual.qual_errors.m"
    {
#line 260 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_49_49 = parse_tree__module_qual__qual_errors__wrap_id_1_f_0(parse_tree__module_qual__qual_errors__Id_9);
    }
#line 260 "module_qual.qual_errors.m"
    {
#line 260 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_48_48, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_49_49));
#line 260 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[15])));
#line 260 "module_qual.qual_errors.m"
    }
#line 260 "module_qual.qual_errors.m"
    {
#line 260 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_46_46, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_47_47));
#line 260 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_46_46, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_48_48));
#line 260 "module_qual.qual_errors.m"
    }
#line 259 "module_qual.qual_errors.m"
    {
#line 259 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[46])));
#line 259 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_43_43, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_46_46));
#line 259 "module_qual.qual_errors.m"
    }
#line 258 "module_qual.qual_errors.m"
    {
#line 258 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_41_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 258 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_41_41, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_43_43));
#line 258 "module_qual.qual_errors.m"
    }
#line 258 "module_qual.qual_errors.m"
    {
#line 258 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[39])));
#line 258 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_38_38, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_41_41));
#line 258 "module_qual.qual_errors.m"
    }
#line 262 "module_qual.qual_errors.m"
    {
#line 262 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_59_59 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_107_107, parse_tree__module_qual__qual_errors__UsableModuleSymNames_17, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[5]));
    }
#line 261 "module_qual.qual_errors.m"
    {
#line 261 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_37_37 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_107_107, parse_tree__module_qual__qual_errors__V_38_38, parse_tree__module_qual__qual_errors__V_59_59);
    }
#line 258 "module_qual.qual_errors.m"
    {
#line 258 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_36_36 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_107_107, parse_tree__module_qual__qual_errors__ErrorContextPieces_15, parse_tree__module_qual__qual_errors__V_37_37);
    }
#line 258 "module_qual.qual_errors.m"
    {
#line 258 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__MainPieces_18 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_107_107, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[38]), parse_tree__module_qual__qual_errors__V_36_36);
    }
#line 266 "module_qual.qual_errors.m"
    if ((parse_tree__module_qual__qual_errors__UnusableModuleNames_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 264 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__UnusablePieces_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 266 "module_qual.qual_errors.m"
    else
#line 266 "module_qual.qual_errors.m"
      {
#line 266 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__UnusableModuleNames_12, (MR_Integer) 1)));
#line 268 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__UnusableModuleNames_12, (MR_Integer) 0)));

#line 266 "module_qual.qual_errors.m"
        if ((parse_tree__module_qual__qual_errors__V_128_128 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 273 "module_qual.qual_errors.m"
          {
#line 273 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__UnusableModuleSymNames_25;
#line 273 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_78_78;

#line 275 "module_qual.qual_errors.m"
            {
#line 275 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__UnusableModuleSymNames_25 = mercury__list__map_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_106_106, parse_tree__module_qual__qual_errors__TypeCtorInfo_107_107, (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_3[3], parse_tree__module_qual__qual_errors__UnusableModuleNames_12);
            }
#line 277 "module_qual.qual_errors.m"
            {
#line 277 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__V_78_78 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_107_107, parse_tree__module_qual__qual_errors__UnusableModuleSymNames_25, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[17]));
            }
#line 277 "module_qual.qual_errors.m"
            {
#line 277 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__UnusablePieces_19 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_107_107, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[52]), parse_tree__module_qual__qual_errors__V_78_78);
            }
#line 273 "module_qual.qual_errors.m"
          }
#line 266 "module_qual.qual_errors.m"
        else
#line 273 "module_qual.qual_errors.m"
          {
#line 273 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__UnusableModuleSymNames_115;
#line 273 "module_qual.qual_errors.m"
            MR_Word parse_tree__module_qual__qual_errors__V_126_126;

#line 275 "module_qual.qual_errors.m"
            {
#line 275 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__UnusableModuleSymNames_115 = mercury__list__map_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_106_106, parse_tree__module_qual__qual_errors__TypeCtorInfo_107_107, (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_3[4], parse_tree__module_qual__qual_errors__UnusableModuleNames_12);
            }
#line 277 "module_qual.qual_errors.m"
            {
#line 277 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__V_126_126 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_107_107, parse_tree__module_qual__qual_errors__UnusableModuleSymNames_115, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[17]));
            }
#line 277 "module_qual.qual_errors.m"
            {
#line 277 "module_qual.qual_errors.m"
              parse_tree__module_qual__qual_errors__UnusablePieces_19 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_107_107, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[55]), parse_tree__module_qual__qual_errors__V_126_126);
            }
#line 273 "module_qual.qual_errors.m"
          }
#line 266 "module_qual.qual_errors.m"
      }
#line 283 "module_qual.qual_errors.m"
    {
#line 283 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 283 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_94_94, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__MainPieces_18));
#line 283 "module_qual.qual_errors.m"
    }
#line 283 "module_qual.qual_errors.m"
    {
#line 283 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 283 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_96_96, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__UnusablePieces_19));
#line 283 "module_qual.qual_errors.m"
    }
#line 283 "module_qual.qual_errors.m"
    {
#line 283 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_95_95, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_96_96));
#line 283 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[57])));
#line 283 "module_qual.qual_errors.m"
    }
#line 283 "module_qual.qual_errors.m"
    {
#line 283 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_93_93, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_94_94));
#line 283 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_93_93, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_95_95));
#line 283 "module_qual.qual_errors.m"
    }
#line 282 "module_qual.qual_errors.m"
    {
#line 282 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__Msg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 282 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Msg_27, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Context_14));
#line 282 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Msg_27, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_93_93));
#line 282 "module_qual.qual_errors.m"
    }
#line 285 "module_qual.qual_errors.m"
    {
#line 285 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_103_103, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Msg_27));
#line 285 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "module_qual.qual_errors.m"
    }
#line 285 "module_qual.qual_errors.m"
    {
#line 285 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 285 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 285 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_28, 2) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_103_103));
#line 285 "module_qual.qual_errors.m"
    }
#line 286 "module_qual.qual_errors.m"
    {
#line 286 "module_qual.qual_errors.m"
      MR_Word base;
#line 286 "module_qual.qual_errors.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "module_qual.qual_errors.m"
      *parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_30 = base;
#line 286 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Spec_28));
#line 286 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_29));
#line 286 "module_qual.qual_errors.m"
    }
#line 254 "module_qual.qual_errors.m"
  }
#line 145 "module_qual.qual_errors.m"
}

#line 229 "module_qual.qual_errors.m"
static void MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_8_p_0_2(
#line 229 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
#line 229 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1,
#line 229 "module_qual.qual_errors.m"
  MR_Box * parse_tree__module_qual__qual_errors__wrapper_arg_2)
#line 229 "module_qual.qual_errors.m"
{
#line 229 "module_qual.qual_errors.m"
  {
#line 229 "module_qual.qual_errors.m"
    MR_Box parse_tree__module_qual__qual_errors__closure = parse_tree__module_qual__qual_errors__closure_arg;
#line 229 "module_qual.qual_errors.m"
    MR_String parse_tree__module_qual__qual_errors__conv4_HeadVar__2_2;

#line 229 "module_qual.qual_errors.m"
    {
#line 229 "module_qual.qual_errors.m"
      mercury__string__int_to_string_2_p_0(((MR_Integer) parse_tree__module_qual__qual_errors__wrapper_arg_1), &parse_tree__module_qual__qual_errors__conv4_HeadVar__2_2);
    }
#line 229 "module_qual.qual_errors.m"
    *parse_tree__module_qual__qual_errors__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__qual_errors__conv4_HeadVar__2_2));
#line 229 "module_qual.qual_errors.m"
  }
#line 229 "module_qual.qual_errors.m"
}

#line 212 "module_qual.qual_errors.m"
static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_8_p_0_1(
#line 212 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
#line 212 "module_qual.qual_errors.m"
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1)
#line 212 "module_qual.qual_errors.m"
{
#line 212 "module_qual.qual_errors.m"
  {
#line 212 "module_qual.qual_errors.m"
    MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2;
#line 212 "module_qual.qual_errors.m"
    MR_Box parse_tree__module_qual__qual_errors__closure = parse_tree__module_qual__qual_errors__closure_arg;
#line 212 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__conv0_HeadVar__2_2;

#line 212 "module_qual.qual_errors.m"
    {
#line 212 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__conv0_HeadVar__2_2 = parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_1));
    }
#line 212 "module_qual.qual_errors.m"
    parse_tree__module_qual__qual_errors__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__qual_errors__conv0_HeadVar__2_2));
#line 212 "module_qual.qual_errors.m"
    return parse_tree__module_qual__qual_errors__wrapper_arg_2;
#line 212 "module_qual.qual_errors.m"
  }
#line 212 "module_qual.qual_errors.m"
}

#line 138 "module_qual.qual_errors.m"
void MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_8_p_0(
#line 138 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__Info_9,
#line 138 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__ErrorContext_10,
#line 138 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__Id_11,
#line 138 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__IdType_12,
#line 138 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__UnusableModules_13,
#line 138 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__PossibleAritiesSet_14,
#line 138 "module_qual.qual_errors.m"
  MR_Word parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_48,
#line 138 "module_qual.qual_errors.m"
  MR_Word * parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_49)
#line 138 "module_qual.qual_errors.m"
{
#line 178 "module_qual.qual_errors.m"
  {
#line 178 "module_qual.qual_errors.m"
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__TypeCtorInfo_145_145;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__TypeCtorInfo_150_150;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__Context_16;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__ErrorContextPieces_17;
#line 178 "module_qual.qual_errors.m"
    MR_String parse_tree__module_qual__qual_errors__IdStr_18;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__Pieces1_19;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__Pieces2_26;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__PossibleArities_34;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__Pieces3_45;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__Msg_46;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__Spec_47;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_54_54;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_55_55;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_58_58;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_60_60;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_63_63;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_64_64;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_65_65;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_66_66;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_67_67;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_135_135;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_136_136;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_137_137;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_138_138;
#line 178 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_142_142;
#line 184 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__ModuleName_20;
#line 188 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__TypeCtorInfo_146_146;
#line 188 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__ImportedModuleNames_24;
#line 188 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_74_74;
#line 188 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_76_76;
#line 188 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__ModuleName_156;
#line 188 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__ModuleNames_157;
#line 188 "module_qual.qual_errors.m"
    MR_Integer parse_tree__module_qual__qual_errors___Arity_22;
#line 188 "module_qual.qual_errors.m"
    MR_String parse_tree__module_qual__qual_errors__V_21_21;
#line 221 "module_qual.qual_errors.m"
    MR_Integer parse_tree__module_qual__qual_errors__V_35_35;
#line 221 "module_qual.qual_errors.m"
    MR_Word parse_tree__module_qual__qual_errors__V_36_36;

#line 179 "module_qual.qual_errors.m"
    {
#line 179 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_3_p_0(parse_tree__module_qual__qual_errors__ErrorContext_10, &parse_tree__module_qual__qual_errors__Context_16, &parse_tree__module_qual__qual_errors__ErrorContextPieces_17);
    }
#line 180 "module_qual.qual_errors.m"
    {
#line 180 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__id_type_to_string_2_p_0(parse_tree__module_qual__qual_errors__IdType_12, &parse_tree__module_qual__qual_errors__IdStr_18);
    }
#line 8230 "parse_tree.module_qual.qual_errors.c"
    parse_tree__module_qual__qual_errors__TypeCtorInfo_145_145 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 182 "module_qual.qual_errors.m"
    {
#line 182 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_64_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 182 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__V_64_64, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__IdStr_18));
#line 182 "module_qual.qual_errors.m"
    }
#line 183 "module_qual.qual_errors.m"
    {
#line 183 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_67_67 = parse_tree__module_qual__qual_errors__id_to_sym_name_and_arity_1_f_0(parse_tree__module_qual__qual_errors__Id_11);
    }
#line 183 "module_qual.qual_errors.m"
    {
#line 183 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 183 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 183 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_66_66, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_67_67));
#line 183 "module_qual.qual_errors.m"
    }
#line 183 "module_qual.qual_errors.m"
    {
#line 183 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 183 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_65_65, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_66_66));
#line 183 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[5])));
#line 183 "module_qual.qual_errors.m"
    }
#line 182 "module_qual.qual_errors.m"
    {
#line 182 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_63_63, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_64_64));
#line 182 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_63_63, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_65_65));
#line 182 "module_qual.qual_errors.m"
    }
#line 182 "module_qual.qual_errors.m"
    {
#line 182 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[40])));
#line 182 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_60_60, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_63_63));
#line 182 "module_qual.qual_errors.m"
    }
#line 181 "module_qual.qual_errors.m"
    {
#line 181 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 181 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_58_58, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_60_60));
#line 181 "module_qual.qual_errors.m"
    }
#line 181 "module_qual.qual_errors.m"
    {
#line 181 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_55_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[39])));
#line 181 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_55_55, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_58_58));
#line 181 "module_qual.qual_errors.m"
    }
#line 181 "module_qual.qual_errors.m"
    {
#line 181 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_54_54 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_145_145, parse_tree__module_qual__qual_errors__ErrorContextPieces_17, parse_tree__module_qual__qual_errors__V_55_55);
    }
#line 181 "module_qual.qual_errors.m"
    {
#line 181 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__Pieces1_19 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_145_145, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[38]), parse_tree__module_qual__qual_errors__V_54_54);
    }
#line 188 "module_qual.qual_errors.m"
    parse_tree__module_qual__qual_errors__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Id_11, (MR_Integer) 0)));
#line 188 "module_qual.qual_errors.m"
    parse_tree__module_qual__qual_errors___Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Id_11, (MR_Integer) 1)));
#line 188 "module_qual.qual_errors.m"
    parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__V_74_74)) == (MR_mktag((MR_Integer) 1)));
#line 188 "module_qual.qual_errors.m"
    if (parse_tree__module_qual__qual_errors__succeeded)
#line 188 "module_qual.qual_errors.m"
      {
#line 188 "module_qual.qual_errors.m"
        parse_tree__module_qual__qual_errors__ModuleName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_74_74, (MR_Integer) 0)));
#line 188 "module_qual.qual_errors.m"
        parse_tree__module_qual__qual_errors__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_74_74, (MR_Integer) 1)));
#line 189 "module_qual.qual_errors.m"
        {
#line 189 "module_qual.qual_errors.m"
          parse_tree__module_qual__mq_info_get_this_module_2_p_0(parse_tree__module_qual__qual_errors__Info_9, &parse_tree__module_qual__qual_errors__ModuleName_156);
        }
#line 190 "module_qual.qual_errors.m"
        {
#line 190 "module_qual.qual_errors.m"
          parse_tree__module_qual__mq_info_get_imported_modules_2_p_0(parse_tree__module_qual__qual_errors__Info_9, &parse_tree__module_qual__qual_errors__ImportedModuleNames_24);
        }
#line 8339 "parse_tree.module_qual.qual_errors.c"
        parse_tree__module_qual__qual_errors__TypeCtorInfo_146_146 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 192 "module_qual.qual_errors.m"
        {
#line 192 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__ModuleNames_157 = mercury__set__to_sorted_list_1_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_146_146, parse_tree__module_qual__qual_errors__ImportedModuleNames_24);
        }
#line 247 "module_qual.qual_errors.m"
        {
#line 247 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__module_qual__qual_errors__ModuleName_20, parse_tree__module_qual__qual_errors__ModuleName_156);
        }
#line 247 "module_qual.qual_errors.m"
        if (parse_tree__module_qual__qual_errors__succeeded)
#line 248 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_76_76 = (MR_Integer) 1;
#line 247 "module_qual.qual_errors.m"
        else
#line 250 "module_qual.qual_errors.m"
          {
#line 250 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__V_76_76 = parse_tree__module_qual__qual_errors__module_name_matches_some_2_f_0(parse_tree__module_qual__qual_errors__ModuleName_20, parse_tree__module_qual__qual_errors__ModuleNames_157);
          }
#line 193 "module_qual.qual_errors.m"
        parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__V_76_76 == (MR_Integer) 0);
#line 188 "module_qual.qual_errors.m"
      }
#line 184 "module_qual.qual_errors.m"
    if (parse_tree__module_qual__qual_errors__succeeded)
#line 195 "module_qual.qual_errors.m"
      {
#line 195 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_79_79;
#line 195 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_80_80;

#line 195 "module_qual.qual_errors.m"
        {
#line 195 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 195 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_80_80, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__ModuleName_20));
#line 195 "module_qual.qual_errors.m"
        }
#line 195 "module_qual.qual_errors.m"
        {
#line 195 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_79_79, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_80_80));
#line 195 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[7])));
#line 195 "module_qual.qual_errors.m"
        }
#line 195 "module_qual.qual_errors.m"
        {
#line 195 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__Pieces2_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Pieces2_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[41])));
#line 195 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Pieces2_26, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_79_79));
#line 195 "module_qual.qual_errors.m"
        }
#line 195 "module_qual.qual_errors.m"
      }
#line 184 "module_qual.qual_errors.m"
    else
#line 201 "module_qual.qual_errors.m"
    if ((parse_tree__module_qual__qual_errors__UnusableModules_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 200 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__Pieces2_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 201 "module_qual.qual_errors.m"
    else
#line 202 "module_qual.qual_errors.m"
      {
#line 202 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__UnusableModulesTail_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__UnusableModules_13, (MR_Integer) 1)));
#line 202 "module_qual.qual_errors.m"
        MR_String parse_tree__module_qual__qual_errors__ModuleWord_29;
#line 202 "module_qual.qual_errors.m"
        MR_String parse_tree__module_qual__qual_errors__HasWord_30;
#line 202 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__UnusableSymNames_33;
#line 202 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_88_88;
#line 202 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_91_91;
#line 202 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_92_92;
#line 202 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_94_94;
#line 202 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_95_95;
#line 202 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_96_96;
#line 202 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_97_97;
#line 202 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__UnusableModules_13, (MR_Integer) 0)));

#line 207 "module_qual.qual_errors.m"
        if ((parse_tree__module_qual__qual_errors__UnusableModulesTail_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 204 "module_qual.qual_errors.m"
          {
#line 205 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__ModuleWord_29 = (MR_String) "module";
#line 206 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__HasWord_30 = (MR_String) "has";
#line 204 "module_qual.qual_errors.m"
          }
#line 207 "module_qual.qual_errors.m"
        else
#line 208 "module_qual.qual_errors.m"
          {
#line 209 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__ModuleWord_29 = (MR_String) "modules";
#line 210 "module_qual.qual_errors.m"
            parse_tree__module_qual__qual_errors__HasWord_30 = (MR_String) "have";
#line 208 "module_qual.qual_errors.m"
          }
#line 212 "module_qual.qual_errors.m"
        {
#line 212 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__UnusableSymNames_33 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__module_qual__qual_errors__TypeCtorInfo_145_145, (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_3[0], parse_tree__module_qual__qual_errors__UnusableModules_13);
        }
#line 213 "module_qual.qual_errors.m"
        {
#line 213 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_92_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 213 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__V_92_92, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__ModuleWord_29));
#line 213 "module_qual.qual_errors.m"
        }
#line 213 "module_qual.qual_errors.m"
        {
#line 213 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_91_91, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_92_92));
#line 213 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 213 "module_qual.qual_errors.m"
        }
#line 213 "module_qual.qual_errors.m"
        {
#line 213 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_88_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[42])));
#line 213 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_88_88, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_91_91));
#line 213 "module_qual.qual_errors.m"
        }
#line 214 "module_qual.qual_errors.m"
        {
#line 214 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_95_95 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__module_qual__qual_errors__UnusableSymNames_33);
        }
#line 215 "module_qual.qual_errors.m"
        {
#line 215 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_97_97 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 215 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__V_97_97, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__HasWord_30));
#line 215 "module_qual.qual_errors.m"
        }
#line 215 "module_qual.qual_errors.m"
        {
#line 215 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_96_96, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_97_97));
#line 215 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[9])));
#line 215 "module_qual.qual_errors.m"
        }
#line 214 "module_qual.qual_errors.m"
        {
#line 214 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_94_94 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_145_145, parse_tree__module_qual__qual_errors__V_95_95, parse_tree__module_qual__qual_errors__V_96_96);
        }
#line 213 "module_qual.qual_errors.m"
        {
#line 213 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__Pieces2_26 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_145_145, parse_tree__module_qual__qual_errors__V_88_88, parse_tree__module_qual__qual_errors__V_94_94);
        }
#line 202 "module_qual.qual_errors.m"
      }
#line 8530 "parse_tree.module_qual.qual_errors.c"
    parse_tree__module_qual__qual_errors__TypeCtorInfo_150_150 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 219 "module_qual.qual_errors.m"
    {
#line 219 "module_qual.qual_errors.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_150_150, parse_tree__module_qual__qual_errors__PossibleAritiesSet_14, &parse_tree__module_qual__qual_errors__PossibleArities_34);
    }
#line 221 "module_qual.qual_errors.m"
    parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__PossibleArities_34)) == (MR_mktag((MR_Integer) 1)));
#line 221 "module_qual.qual_errors.m"
    if (parse_tree__module_qual__qual_errors__succeeded)
#line 221 "module_qual.qual_errors.m"
      {
#line 221 "module_qual.qual_errors.m"
        parse_tree__module_qual__qual_errors__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__PossibleArities_34, (MR_Integer) 0)));
#line 221 "module_qual.qual_errors.m"
        parse_tree__module_qual__qual_errors__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__PossibleArities_34, (MR_Integer) 1)));
#line 222 "module_qual.qual_errors.m"
        parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Pieces2_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 221 "module_qual.qual_errors.m"
      }
#line 220 "module_qual.qual_errors.m"
    if (parse_tree__module_qual__qual_errors__succeeded)
#line 224 "module_qual.qual_errors.m"
      {
#line 224 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__TypeCtorInfo_151_151;
#line 224 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__SymName_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Id_11, (MR_Integer) 0)));
#line 224 "module_qual.qual_errors.m"
        MR_String parse_tree__module_qual__qual_errors__IdsStr_39;
#line 224 "module_qual.qual_errors.m"
        MR_String parse_tree__module_qual__qual_errors__IsAre_40;
#line 224 "module_qual.qual_errors.m"
        MR_String parse_tree__module_qual__qual_errors__KindKinds_41;
#line 224 "module_qual.qual_errors.m"
        MR_String parse_tree__module_qual__qual_errors__ArityArities_42;
#line 224 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__PossibleArityStrs_43;
#line 224 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__PossibleAritiesPieces_44;
#line 224 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_109_109;
#line 224 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_112_112;
#line 224 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_113_113;
#line 224 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_114_114;
#line 224 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_115_115;
#line 224 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_116_116;
#line 224 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_119_119;
#line 224 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_120_120;
#line 224 "module_qual.qual_errors.m"
        MR_String parse_tree__module_qual__qual_errors__V_121_121;
#line 224 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_122_122;
#line 224 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_125_125;
#line 224 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_126_126;
#line 224 "module_qual.qual_errors.m"
        MR_Word parse_tree__module_qual__qual_errors__V_128_128;
#line 224 "module_qual.qual_errors.m"
        MR_Integer parse_tree__module_qual__qual_errors__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Id_11, (MR_Integer) 1)));
#line 226 "module_qual.qual_errors.m"
        MR_Box parse_tree__module_qual__qual_errors__conv1_IsAre_40;
#line 227 "module_qual.qual_errors.m"
        MR_Box parse_tree__module_qual__qual_errors__conv2_KindKinds_41;
#line 228 "module_qual.qual_errors.m"
        MR_Box parse_tree__module_qual__qual_errors__conv3_ArityArities_42;

#line 225 "module_qual.qual_errors.m"
        {
#line 225 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__id_types_to_string_2_p_0(parse_tree__module_qual__qual_errors__IdType_12, &parse_tree__module_qual__qual_errors__IdsStr_39);
        }
#line 8611 "parse_tree.module_qual.qual_errors.c"
        parse_tree__module_qual__qual_errors__TypeCtorInfo_151_151 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 226 "module_qual.qual_errors.m"
        {
#line 226 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__conv1_IsAre_40 = parse_tree__error_util__choose_number_3_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_150_150, parse_tree__module_qual__qual_errors__TypeCtorInfo_151_151, parse_tree__module_qual__qual_errors__PossibleArities_34, ((MR_Box) ((MR_String) "is a")), ((MR_Box) ((MR_String) "are")));
        }
#line 226 "module_qual.qual_errors.m"
        parse_tree__module_qual__qual_errors__IsAre_40 = ((MR_String) parse_tree__module_qual__qual_errors__conv1_IsAre_40);
#line 227 "module_qual.qual_errors.m"
        {
#line 227 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__conv2_KindKinds_41 = parse_tree__error_util__choose_number_3_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_150_150, parse_tree__module_qual__qual_errors__TypeCtorInfo_151_151, parse_tree__module_qual__qual_errors__PossibleArities_34, ((MR_Box) (parse_tree__module_qual__qual_errors__IdStr_18)), ((MR_Box) (parse_tree__module_qual__qual_errors__IdsStr_39)));
        }
#line 227 "module_qual.qual_errors.m"
        parse_tree__module_qual__qual_errors__KindKinds_41 = ((MR_String) parse_tree__module_qual__qual_errors__conv2_KindKinds_41);
#line 228 "module_qual.qual_errors.m"
        {
#line 228 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__conv3_ArityArities_42 = parse_tree__error_util__choose_number_3_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_150_150, parse_tree__module_qual__qual_errors__TypeCtorInfo_151_151, parse_tree__module_qual__qual_errors__PossibleArities_34, ((MR_Box) ((MR_String) "arity")), ((MR_Box) ((MR_String) "arities")));
        }
#line 228 "module_qual.qual_errors.m"
        parse_tree__module_qual__qual_errors__ArityArities_42 = ((MR_String) parse_tree__module_qual__qual_errors__conv3_ArityArities_42);
#line 229 "module_qual.qual_errors.m"
        {
#line 229 "module_qual.qual_errors.m"
          mercury__list__map_3_p_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_150_150, parse_tree__module_qual__qual_errors__TypeCtorInfo_151_151, (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_3[1], parse_tree__module_qual__qual_errors__PossibleArities_34, &parse_tree__module_qual__qual_errors__PossibleArityStrs_43);
        }
#line 230 "module_qual.qual_errors.m"
        {
#line 230 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__PossibleAritiesPieces_44 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__module_qual__qual_errors__PossibleArityStrs_43);
        }
#line 231 "module_qual.qual_errors.m"
        {
#line 231 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 231 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_113_113, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__IsAre_40));
#line 231 "module_qual.qual_errors.m"
        }
#line 231 "module_qual.qual_errors.m"
        {
#line 231 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 231 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_115_115, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__KindKinds_41));
#line 231 "module_qual.qual_errors.m"
        }
#line 232 "module_qual.qual_errors.m"
        {
#line 232 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_121_121 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__module_qual__qual_errors__SymName_37);
        }
#line 232 "module_qual.qual_errors.m"
        {
#line 232 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_120_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_120_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 232 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_120_120, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_121_121));
#line 232 "module_qual.qual_errors.m"
        }
#line 233 "module_qual.qual_errors.m"
        {
#line 233 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 233 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__V_126_126, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__ArityArities_42));
#line 233 "module_qual.qual_errors.m"
        }
#line 233 "module_qual.qual_errors.m"
        {
#line 233 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_125_125, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_126_126));
#line 233 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 233 "module_qual.qual_errors.m"
        }
#line 233 "module_qual.qual_errors.m"
        {
#line 233 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_122_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[45])));
#line 233 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_122_122, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_125_125));
#line 233 "module_qual.qual_errors.m"
        }
#line 232 "module_qual.qual_errors.m"
        {
#line 232 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_119_119, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_120_120));
#line 232 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_119_119, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_122_122));
#line 232 "module_qual.qual_errors.m"
        }
#line 232 "module_qual.qual_errors.m"
        {
#line 232 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_116_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[44])));
#line 232 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_116_116, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_119_119));
#line 232 "module_qual.qual_errors.m"
        }
#line 231 "module_qual.qual_errors.m"
        {
#line 231 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_114_114, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_115_115));
#line 231 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_114_114, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_116_116));
#line 231 "module_qual.qual_errors.m"
        }
#line 231 "module_qual.qual_errors.m"
        {
#line 231 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_112_112, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_113_113));
#line 231 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_112_112, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_114_114));
#line 231 "module_qual.qual_errors.m"
        }
#line 231 "module_qual.qual_errors.m"
        {
#line 231 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_109_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[43])));
#line 231 "module_qual.qual_errors.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_109_109, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_112_112));
#line 231 "module_qual.qual_errors.m"
        }
#line 234 "module_qual.qual_errors.m"
        {
#line 234 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__V_128_128 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_145_145, parse_tree__module_qual__qual_errors__PossibleAritiesPieces_44, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[11]));
        }
#line 233 "module_qual.qual_errors.m"
        {
#line 233 "module_qual.qual_errors.m"
          parse_tree__module_qual__qual_errors__Pieces3_45 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_145_145, parse_tree__module_qual__qual_errors__V_109_109, parse_tree__module_qual__qual_errors__V_128_128);
        }
#line 224 "module_qual.qual_errors.m"
      }
#line 220 "module_qual.qual_errors.m"
    else
#line 236 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__Pieces3_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 238 "module_qual.qual_errors.m"
    {
#line 238 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_138_138 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_145_145, parse_tree__module_qual__qual_errors__Pieces2_26, parse_tree__module_qual__qual_errors__Pieces3_45);
    }
#line 238 "module_qual.qual_errors.m"
    {
#line 238 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_137_137 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_145_145, parse_tree__module_qual__qual_errors__Pieces1_19, parse_tree__module_qual__qual_errors__V_138_138);
    }
#line 238 "module_qual.qual_errors.m"
    {
#line 238 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 238 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__V_136_136, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_137_137));
#line 238 "module_qual.qual_errors.m"
    }
#line 238 "module_qual.qual_errors.m"
    {
#line 238 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_135_135, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_136_136));
#line 238 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "module_qual.qual_errors.m"
    }
#line 238 "module_qual.qual_errors.m"
    {
#line 238 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__Msg_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 238 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Msg_46, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Context_16));
#line 238 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Msg_46, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_135_135));
#line 238 "module_qual.qual_errors.m"
    }
#line 239 "module_qual.qual_errors.m"
    {
#line 239 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_142_142, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Msg_46));
#line 239 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "module_qual.qual_errors.m"
    }
#line 239 "module_qual.qual_errors.m"
    {
#line 239 "module_qual.qual_errors.m"
      parse_tree__module_qual__qual_errors__Spec_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 239 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 239 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_47, 2) = ((MR_Box) (parse_tree__module_qual__qual_errors__V_142_142));
#line 239 "module_qual.qual_errors.m"
    }
#line 240 "module_qual.qual_errors.m"
    {
#line 240 "module_qual.qual_errors.m"
      MR_Word base;
#line 240 "module_qual.qual_errors.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "module_qual.qual_errors.m"
      *parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_49 = base;
#line 240 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Spec_47));
#line 240 "module_qual.qual_errors.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_48));
#line 240 "module_qual.qual_errors.m"
    }
#line 178 "module_qual.qual_errors.m"
  }
#line 138 "module_qual.qual_errors.m"
}

void mercury__parse_tree__module_qual__qual_errors__init(void)
{
}

void mercury__parse_tree__module_qual__qual_errors__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_mq_constraint_error_context_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_mq_error_context_0);
}

void mercury__parse_tree__module_qual__qual_errors__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.module_qual.qual_errors. */
