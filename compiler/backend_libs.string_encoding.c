/*
** Automatically generated from `string_encoding.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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


/* :- module backend_libs.string_encoding. */
/* :- implementation. */

/*
INIT mercury__backend_libs__string_encoding__init
ENDINIT
*/

#include "backend_libs.string_encoding.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
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
#include "enum.mih"
#include "getopt_io.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 133 "backend_libs.string_encoding.c"
static const MR_EnumFunctorDesc backend_libs__string_encoding__backend_libs__string_encoding__enum_functor_desc_string_encoding_0_0;

#line 136 "backend_libs.string_encoding.c"
static const MR_EnumFunctorDesc backend_libs__string_encoding__backend_libs__string_encoding__enum_functor_desc_string_encoding_0_1;

#line 139 "backend_libs.string_encoding.c"
static const MR_EnumFunctorDescPtr backend_libs__string_encoding__backend_libs__string_encoding__enum_value_ordered_string_encoding_0[2];

#line 142 "backend_libs.string_encoding.c"
static const MR_EnumFunctorDescPtr backend_libs__string_encoding__backend_libs__string_encoding__enum_name_ordered_string_encoding_0[2];

#line 145 "backend_libs.string_encoding.c"
static const MR_Integer backend_libs__string_encoding__backend_libs__string_encoding__functor_number_map_string_encoding_0[2];

#line 148 "backend_libs.string_encoding.c"
static MR_bool MR_CALL 
backend_libs__string_encoding____Unify____string_encoding_0_0_10001(
#line 151 "backend_libs.string_encoding.c"
  MR_Box backend_libs__string_encoding__wrapper_arg_1,
#line 153 "backend_libs.string_encoding.c"
  MR_Box backend_libs__string_encoding__wrapper_arg_2);

#line 156 "backend_libs.string_encoding.c"
static void MR_CALL 
backend_libs__string_encoding____Compare____string_encoding_0_0_10001(
#line 159 "backend_libs.string_encoding.c"
  MR_Box * backend_libs__string_encoding__wrapper_arg_1,
#line 161 "backend_libs.string_encoding.c"
  MR_Box backend_libs__string_encoding__wrapper_arg_2,
#line 163 "backend_libs.string_encoding.c"
  MR_Box backend_libs__string_encoding__wrapper_arg_3);



#line 48 "string_encoding.m"
/* sealed */ struct backend_libs__string_encoding__vector_common_type_1_0_s {
#line 48 "string_encoding.m"
  const MR_Word backend_libs__string_encoding__vector_common_type_1_0__vct_1_f_0;
#line 48 "string_encoding.m"
};

static /* final */ const struct backend_libs__string_encoding__vector_common_type_1_0_s backend_libs__string_encoding_vector_common_1[5];




static /* final */ const struct backend_libs__string_encoding__vector_common_type_1_0_s backend_libs__string_encoding_vector_common_1[5] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 1 },
  /* row 4 */   {     (MR_Integer) 0 },
};


#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 204 "backend_libs.string_encoding.c"
static const MR_EnumFunctorDesc backend_libs__string_encoding__backend_libs__string_encoding__enum_functor_desc_string_encoding_0_0 = {
  (MR_String) "utf8",
  (MR_Integer) 0
};

#line 210 "backend_libs.string_encoding.c"
static const MR_EnumFunctorDesc backend_libs__string_encoding__backend_libs__string_encoding__enum_functor_desc_string_encoding_0_1 = {
  (MR_String) "utf16",
  (MR_Integer) 1
};

#line 216 "backend_libs.string_encoding.c"
static const MR_EnumFunctorDescPtr backend_libs__string_encoding__backend_libs__string_encoding__enum_value_ordered_string_encoding_0[2] = {
  &backend_libs__string_encoding__backend_libs__string_encoding__enum_functor_desc_string_encoding_0_0,
  &backend_libs__string_encoding__backend_libs__string_encoding__enum_functor_desc_string_encoding_0_1
};

#line 222 "backend_libs.string_encoding.c"
static const MR_EnumFunctorDescPtr backend_libs__string_encoding__backend_libs__string_encoding__enum_name_ordered_string_encoding_0[2] = {
  &backend_libs__string_encoding__backend_libs__string_encoding__enum_functor_desc_string_encoding_0_1,
  &backend_libs__string_encoding__backend_libs__string_encoding__enum_functor_desc_string_encoding_0_0
};

#line 228 "backend_libs.string_encoding.c"
static const MR_Integer backend_libs__string_encoding__backend_libs__string_encoding__functor_number_map_string_encoding_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 234 "backend_libs.string_encoding.c"
const MR_TypeCtorInfo_Struct backend_libs__string_encoding__backend_libs__string_encoding__type_ctor_info_string_encoding_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__string_encoding____Unify____string_encoding_0_0_10001)),
  ((MR_Box) (backend_libs__string_encoding____Compare____string_encoding_0_0_10001)),
  (MR_String) "backend_libs.string_encoding",
  (MR_String) "string_encoding",
  {     backend_libs__string_encoding__backend_libs__string_encoding__enum_name_ordered_string_encoding_0 },
  {     backend_libs__string_encoding__backend_libs__string_encoding__enum_value_ordered_string_encoding_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__string_encoding__backend_libs__string_encoding__functor_number_map_string_encoding_0
};

#line 251 "backend_libs.string_encoding.c"
static MR_bool MR_CALL 
backend_libs__string_encoding____Unify____string_encoding_0_0_10001(
#line 254 "backend_libs.string_encoding.c"
  MR_Box backend_libs__string_encoding__wrapper_arg_1,
#line 256 "backend_libs.string_encoding.c"
  MR_Box backend_libs__string_encoding__wrapper_arg_2)
#line 258 "backend_libs.string_encoding.c"
{
#line 260 "backend_libs.string_encoding.c"
  {
#line 262 "backend_libs.string_encoding.c"
    MR_bool backend_libs__string_encoding__succeeded;

#line 265 "backend_libs.string_encoding.c"
    {
#line 267 "backend_libs.string_encoding.c"
      backend_libs__string_encoding__succeeded = backend_libs__string_encoding____Unify____string_encoding_0_0(((MR_Word) backend_libs__string_encoding__wrapper_arg_1), ((MR_Word) backend_libs__string_encoding__wrapper_arg_2));
    }
#line 270 "backend_libs.string_encoding.c"
    return backend_libs__string_encoding__succeeded;
#line 272 "backend_libs.string_encoding.c"
  }
#line 274 "backend_libs.string_encoding.c"
}

#line 277 "backend_libs.string_encoding.c"
static void MR_CALL 
backend_libs__string_encoding____Compare____string_encoding_0_0_10001(
#line 280 "backend_libs.string_encoding.c"
  MR_Box * backend_libs__string_encoding__wrapper_arg_1,
#line 282 "backend_libs.string_encoding.c"
  MR_Box backend_libs__string_encoding__wrapper_arg_2,
#line 284 "backend_libs.string_encoding.c"
  MR_Box backend_libs__string_encoding__wrapper_arg_3)
#line 286 "backend_libs.string_encoding.c"
{
#line 288 "backend_libs.string_encoding.c"
  {
#line 290 "backend_libs.string_encoding.c"
    MR_Word backend_libs__string_encoding__conv0_HeadVar__1_1;

#line 293 "backend_libs.string_encoding.c"
    {
#line 295 "backend_libs.string_encoding.c"
      backend_libs__string_encoding____Compare____string_encoding_0_0(&backend_libs__string_encoding__conv0_HeadVar__1_1, ((MR_Word) backend_libs__string_encoding__wrapper_arg_2), ((MR_Word) backend_libs__string_encoding__wrapper_arg_3));
    }
#line 298 "backend_libs.string_encoding.c"
    *backend_libs__string_encoding__wrapper_arg_1 = ((MR_Box) (backend_libs__string_encoding__conv0_HeadVar__1_1));
#line 300 "backend_libs.string_encoding.c"
  }
#line 302 "backend_libs.string_encoding.c"
}

#line 22 "string_encoding.m"
void MR_CALL 
backend_libs__string_encoding__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_114_103_101_116_95_99_104_97_114_95_114_97_110_103_101_95_95_91_49_93_95_48_3_p_0(
#line 22 "string_encoding.m"
  MR_Integer * backend_libs__string_encoding__Min_5,
#line 22 "string_encoding.m"
  MR_Integer * backend_libs__string_encoding__Max_6)
#line 22 "string_encoding.m"
{
#line 39 "string_encoding.m"
  {
#line 39 "string_encoding.m"
    MR_bool backend_libs__string_encoding__succeeded;

#line 41 "string_encoding.m"
    *backend_libs__string_encoding__Min_5 = (MR_Integer) 0;
#line 42 "string_encoding.m"
    *backend_libs__string_encoding__Max_6 = (MR_Integer) 1114111;
#line 39 "string_encoding.m"
  }
#line 22 "string_encoding.m"
}

#line 17 "string_encoding.m"
void MR_CALL 
backend_libs__string_encoding____Compare____string_encoding_0_0(
#line 17 "string_encoding.m"
  MR_Word * backend_libs__string_encoding__HeadVar__1_1,
#line 17 "string_encoding.m"
  MR_Word backend_libs__string_encoding__HeadVar__2_2,
#line 17 "string_encoding.m"
  MR_Word backend_libs__string_encoding__HeadVar__3_3)
#line 17 "string_encoding.m"
{
#line 17 "string_encoding.m"
  {
#line 17 "string_encoding.m"
    MR_bool backend_libs__string_encoding__succeeded;
#line 17 "string_encoding.m"
    MR_Integer backend_libs__string_encoding__Cast_HeadVar1_4 = (MR_Integer) backend_libs__string_encoding__HeadVar__2_2;
#line 17 "string_encoding.m"
    MR_Integer backend_libs__string_encoding__Cast_HeadVar2_5 = (MR_Integer) backend_libs__string_encoding__HeadVar__3_3;

#line 17 "string_encoding.m"
    {
#line 17 "string_encoding.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__string_encoding__HeadVar__1_1, backend_libs__string_encoding__Cast_HeadVar1_4, backend_libs__string_encoding__Cast_HeadVar2_5);
#line 17 "string_encoding.m"
      return;
    }
#line 17 "string_encoding.m"
  }
#line 17 "string_encoding.m"
}

#line 17 "string_encoding.m"
MR_bool MR_CALL 
backend_libs__string_encoding____Unify____string_encoding_0_0(
#line 17 "string_encoding.m"
  MR_Word backend_libs__string_encoding__HeadVar__2_1,
#line 17 "string_encoding.m"
  MR_Word backend_libs__string_encoding__HeadVar__2_2)
#line 17 "string_encoding.m"
{
#line 369 "backend_libs.string_encoding.c"
  {
#line 371 "backend_libs.string_encoding.c"
    MR_bool backend_libs__string_encoding__succeeded = (backend_libs__string_encoding__HeadVar__2_1 == backend_libs__string_encoding__HeadVar__2_2);

#line 374 "backend_libs.string_encoding.c"
    return backend_libs__string_encoding__succeeded;
#line 376 "backend_libs.string_encoding.c"
  }
#line 17 "string_encoding.m"
}

#line 29 "string_encoding.m"
MR_bool MR_CALL 
backend_libs__string_encoding__from_code_unit_list_3_p_0(
#line 29 "string_encoding.m"
  MR_Word backend_libs__string_encoding__Encoding_4,
#line 29 "string_encoding.m"
  MR_Word backend_libs__string_encoding__CodeUnits_5,
#line 29 "string_encoding.m"
  MR_String * backend_libs__string_encoding__String_6)
#line 29 "string_encoding.m"
{
#line 72 "string_encoding.m"
  {
#line 72 "string_encoding.m"
    MR_bool backend_libs__string_encoding__succeeded;

#line 72 "string_encoding.m"
#line 72 "string_encoding.m"
    switch (backend_libs__string_encoding__Encoding_4) {
#line 72 "string_encoding.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 72 "string_encoding.m"
      case (MR_Integer) 1:
#line 74 "string_encoding.m"
        {
#line 74 "string_encoding.m"
          return backend_libs__string_encoding__succeeded = mercury__string__from_utf16_code_unit_list_2_p_0(backend_libs__string_encoding__CodeUnits_5, backend_libs__string_encoding__String_6);
        }
#line 72 "string_encoding.m"
        break;
#line 72 "string_encoding.m"
      case (MR_Integer) 0:
#line 71 "string_encoding.m"
        {
#line 71 "string_encoding.m"
          return backend_libs__string_encoding__succeeded = mercury__string__from_utf8_code_unit_list_2_p_0(backend_libs__string_encoding__CodeUnits_5, backend_libs__string_encoding__String_6);
        }
#line 72 "string_encoding.m"
        break;
#line 72 "string_encoding.m"
    }
#line 72 "string_encoding.m"
    return backend_libs__string_encoding__succeeded;
#line 72 "string_encoding.m"
  }
#line 29 "string_encoding.m"
}

#line 26 "string_encoding.m"
void MR_CALL 
backend_libs__string_encoding__to_code_unit_list_3_p_0(
#line 26 "string_encoding.m"
  MR_Word backend_libs__string_encoding__Encoding_4,
#line 26 "string_encoding.m"
  MR_String backend_libs__string_encoding__String_5,
#line 26 "string_encoding.m"
  MR_Word * backend_libs__string_encoding__CodeUnits_6)
#line 26 "string_encoding.m"
{
#line 60 "string_encoding.m"
  {
#line 60 "string_encoding.m"
    MR_bool backend_libs__string_encoding__succeeded;

#line 60 "string_encoding.m"
#line 60 "string_encoding.m"
    switch (backend_libs__string_encoding__Encoding_4) {
#line 60 "string_encoding.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 60 "string_encoding.m"
      case (MR_Integer) 1:
#line 64 "string_encoding.m"
        {
#line 64 "string_encoding.m"
          mercury__string__to_utf16_code_unit_list_2_p_0(backend_libs__string_encoding__String_5, backend_libs__string_encoding__CodeUnits_6);
#line 64 "string_encoding.m"
          return;
        }
#line 60 "string_encoding.m"
        break;
#line 60 "string_encoding.m"
      case (MR_Integer) 0:
#line 61 "string_encoding.m"
        {
#line 61 "string_encoding.m"
          mercury__string__to_utf8_code_unit_list_2_p_0(backend_libs__string_encoding__String_5, backend_libs__string_encoding__CodeUnits_6);
#line 61 "string_encoding.m"
          return;
        }
#line 60 "string_encoding.m"
        break;
#line 60 "string_encoding.m"
    }
#line 60 "string_encoding.m"
  }
#line 26 "string_encoding.m"
}

#line 24 "string_encoding.m"
MR_Word MR_CALL 
backend_libs__string_encoding__target_string_encoding_1_f_0(
#line 24 "string_encoding.m"
  MR_Word backend_libs__string_encoding__Target_3)
#line 24 "string_encoding.m"
{
#line 48 "string_encoding.m"
  {
#line 48 "string_encoding.m"
    MR_bool backend_libs__string_encoding__succeeded;
#line 48 "string_encoding.m"
    MR_Word backend_libs__string_encoding__Encoding_4 = ((&backend_libs__string_encoding_vector_common_1[0 + backend_libs__string_encoding__Target_3]))->backend_libs__string_encoding__vector_common_type_1_0__vct_1_f_0;

#line 48 "string_encoding.m"
    return backend_libs__string_encoding__Encoding_4;
#line 48 "string_encoding.m"
  }
#line 24 "string_encoding.m"
}

#line 22 "string_encoding.m"
void MR_CALL 
backend_libs__string_encoding__target_char_range_3_p_0(
#line 22 "string_encoding.m"
  MR_Word backend_libs__string_encoding___Target_4,
#line 22 "string_encoding.m"
  MR_Integer * backend_libs__string_encoding__Min_5,
#line 22 "string_encoding.m"
  MR_Integer * backend_libs__string_encoding__Max_6)
#line 22 "string_encoding.m"
{
#line 39 "string_encoding.m"
  {
#line 39 "string_encoding.m"
    MR_bool backend_libs__string_encoding__succeeded;

#line 39 "string_encoding.m"
    {
#line 39 "string_encoding.m"
      backend_libs__string_encoding__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_114_103_101_116_95_99_104_97_114_95_114_97_110_103_101_95_95_91_49_93_95_48_3_p_0(backend_libs__string_encoding__Min_5, backend_libs__string_encoding__Max_6);
#line 39 "string_encoding.m"
      return;
    }
#line 39 "string_encoding.m"
  }
#line 22 "string_encoding.m"
}

void mercury__backend_libs__string_encoding__init(void)
{
}

void mercury__backend_libs__string_encoding__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&backend_libs__string_encoding__backend_libs__string_encoding__type_ctor_info_string_encoding_0);
}

void mercury__backend_libs__string_encoding__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module backend_libs.string_encoding. */
