/*
** Automatically generated from `mdbcomp.prim_data.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module mdbcomp.prim_data. */
/* :- implementation. */

/*
INIT mercury__mdbcomp__prim_data__init
ENDINIT
*/

#include "mdbcomp.prim_data.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "io.mih"
#include "library.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




#line 67 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_0;

#line 70 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_1;

#line 73 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_pred_or_func_0[2];

#line 76 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_pred_or_func_0[2];

#line 79 "mdbcomp.prim_data.c"
static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_pred_or_func_0[2];

#line 82 "mdbcomp.prim_data.c"
static const MR_PseudoTypeInfo mdbcomp__prim_data__mdbcomp__prim_data__field_types_proc_label_0_0[6];

#line 85 "mdbcomp.prim_data.c"
static const MR_ConstString mdbcomp__prim_data__mdbcomp__prim_data__field_names_proc_label_0_0[6];

#line 88 "mdbcomp.prim_data.c"
static const MR_DuFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_0;

#line 91 "mdbcomp.prim_data.c"
static const MR_PseudoTypeInfo mdbcomp__prim_data__mdbcomp__prim_data__field_types_proc_label_0_1[6];

#line 94 "mdbcomp.prim_data.c"
static const MR_ConstString mdbcomp__prim_data__mdbcomp__prim_data__field_names_proc_label_0_1[6];

#line 97 "mdbcomp.prim_data.c"
static const MR_DuFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_1;

#line 100 "mdbcomp.prim_data.c"
static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_proc_label_0_0[1];

#line 103 "mdbcomp.prim_data.c"
static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_proc_label_0_1[1];

#line 106 "mdbcomp.prim_data.c"
static const MR_DuPtagLayout mdbcomp__prim_data__mdbcomp__prim_data__du_ptag_ordered_proc_label_0[2];

#line 109 "mdbcomp.prim_data.c"
static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_name_ordered_proc_label_0[2];

#line 112 "mdbcomp.prim_data.c"
static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_proc_label_0[2];

#line 115 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_0;

#line 118 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_1;

#line 121 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_2;

#line 124 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_3;

#line 127 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_special_pred_id_0[4];

#line 130 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_special_pred_id_0[4];

#line 133 "mdbcomp.prim_data.c"
static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_special_pred_id_0[4];

#line 136 "mdbcomp.prim_data.c"
static const MR_PseudoTypeInfo mdbcomp__prim_data__mdbcomp__prim_data__field_types_sym_name_0_0[1];

#line 139 "mdbcomp.prim_data.c"
static const MR_DuFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_sym_name_0_0;

#line 142 "mdbcomp.prim_data.c"
static const MR_PseudoTypeInfo mdbcomp__prim_data__mdbcomp__prim_data__field_types_sym_name_0_1[2];

#line 145 "mdbcomp.prim_data.c"
static const MR_DuFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_sym_name_0_1;

#line 148 "mdbcomp.prim_data.c"
static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_sym_name_0_0[1];

#line 151 "mdbcomp.prim_data.c"
static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_sym_name_0_1[1];

#line 154 "mdbcomp.prim_data.c"
static const MR_DuPtagLayout mdbcomp__prim_data__mdbcomp__prim_data__du_ptag_ordered_sym_name_0[2];

#line 157 "mdbcomp.prim_data.c"
static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_name_ordered_sym_name_0[2];

#line 160 "mdbcomp.prim_data.c"
static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_sym_name_0[2];

#line 163 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_0;

#line 166 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_1;

#line 169 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_2;

#line 172 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_3;

#line 175 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_4;

#line 178 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_5;

#line 181 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_6;

#line 184 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_7;

#line 187 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_8;

#line 190 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_9;

#line 193 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_10;

#line 196 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_11;

#line 199 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_12;

#line 202 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_13;

#line 205 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_14;

#line 208 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_15;

#line 211 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_trace_port_0[16];

#line 214 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_trace_port_0[16];

#line 217 "mdbcomp.prim_data.c"
static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_trace_port_0[16];

#line 220 "mdbcomp.prim_data.c"
static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____module_name_0_0_10001(
#line 223 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
#line 225 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2);

#line 228 "mdbcomp.prim_data.c"
static void MR_CALL 
mdbcomp__prim_data____Compare____module_name_0_0_10001(
#line 231 "mdbcomp.prim_data.c"
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
#line 233 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
#line 235 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_3);

#line 238 "mdbcomp.prim_data.c"
static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____pred_or_func_0_0_10001(
#line 241 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
#line 243 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2);

#line 246 "mdbcomp.prim_data.c"
static void MR_CALL 
mdbcomp__prim_data____Compare____pred_or_func_0_0_10001(
#line 249 "mdbcomp.prim_data.c"
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
#line 251 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
#line 253 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_3);

#line 256 "mdbcomp.prim_data.c"
static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____proc_label_0_0_10001(
#line 259 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
#line 261 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2);

#line 264 "mdbcomp.prim_data.c"
static void MR_CALL 
mdbcomp__prim_data____Compare____proc_label_0_0_10001(
#line 267 "mdbcomp.prim_data.c"
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
#line 269 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
#line 271 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_3);

#line 274 "mdbcomp.prim_data.c"
static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____special_pred_id_0_0_10001(
#line 277 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
#line 279 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2);

#line 282 "mdbcomp.prim_data.c"
static void MR_CALL 
mdbcomp__prim_data____Compare____special_pred_id_0_0_10001(
#line 285 "mdbcomp.prim_data.c"
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
#line 287 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
#line 289 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_3);

#line 292 "mdbcomp.prim_data.c"
static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____sym_name_0_0_10001(
#line 295 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
#line 297 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2);

#line 300 "mdbcomp.prim_data.c"
static void MR_CALL 
mdbcomp__prim_data____Compare____sym_name_0_0_10001(
#line 303 "mdbcomp.prim_data.c"
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
#line 305 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
#line 307 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_3);

#line 310 "mdbcomp.prim_data.c"
static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____trace_port_0_0_10001(
#line 313 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
#line 315 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2);

#line 318 "mdbcomp.prim_data.c"
static void MR_CALL 
mdbcomp__prim_data____Compare____trace_port_0_0_10001(
#line 321 "mdbcomp.prim_data.c"
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
#line 323 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
#line 325 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_3);

#line 402 "prim_data.m"
static MR_Word MR_CALL 
mdbcomp__prim_data__get_ancestors_2_2_f_0(
#line 402 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__1_1,
#line 402 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2);


static /* final */ const MR_Box mdbcomp__prim_data_scalar_common_1[16][1];

static /* final */ const MR_Box mdbcomp__prim_data_scalar_common_2[11][2];




static /* final */ const MR_Box mdbcomp__prim_data_scalar_common_1[16][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "builtin"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "private_builtin"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "region_builtin"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "stm_builtin"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "table_builtin"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "table_statistics"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "profiling_builtin"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "term_size_prof_builtin"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "par_builtin"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "rtti_implementation"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "ssdb"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "exception"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "univ"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "list"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "string"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "io"))
  },
};

static /* final */ const MR_Box mdbcomp__prim_data_scalar_common_2[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mdbcomp__prim_data_scalar_common_1[10])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdbcomp__prim_data_scalar_common_1[9])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__prim_data_scalar_common_2[0])))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdbcomp__prim_data_scalar_common_1[8])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__prim_data_scalar_common_2[1])))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdbcomp__prim_data_scalar_common_1[7])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__prim_data_scalar_common_2[2])))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdbcomp__prim_data_scalar_common_1[6])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__prim_data_scalar_common_2[3])))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdbcomp__prim_data_scalar_common_1[5])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__prim_data_scalar_common_2[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdbcomp__prim_data_scalar_common_1[4])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__prim_data_scalar_common_2[5])))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdbcomp__prim_data_scalar_common_1[3])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__prim_data_scalar_common_2[6])))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdbcomp__prim_data_scalar_common_1[2])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__prim_data_scalar_common_2[7])))
  },
  /* row 9 */
  {
    ((MR_Box) (&mdbcomp__prim_data_scalar_common_1[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__prim_data_scalar_common_2[8])))
  },
  /* row 10 */
  {
    ((MR_Box) (&mdbcomp__prim_data_scalar_common_1[0])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__prim_data_scalar_common_2[9])))
  },
};



#include "mdbcomp.mh"
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



#line 485 "mdbcomp.prim_data.c"
const MR_TypeCtorInfo_Struct mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_module_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__prim_data____Unify____module_name_0_0_10001)),
  ((MR_Box) (mdbcomp__prim_data____Compare____module_name_0_0_10001)),
  (MR_String) "mdbcomp.prim_data",
  (MR_String) "module_name",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 506 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_0 = {
  (MR_String) "pf_predicate",
  (MR_Integer) 0
};

#line 512 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_1 = {
  (MR_String) "pf_function",
  (MR_Integer) 1
};

#line 518 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_pred_or_func_0[2] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_0,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_1
};

#line 524 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_pred_or_func_0[2] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_1,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_0
};

#line 530 "mdbcomp.prim_data.c"
static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_pred_or_func_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 536 "mdbcomp.prim_data.c"
const MR_TypeCtorInfo_Struct mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__prim_data____Unify____pred_or_func_0_0_10001)),
  ((MR_Box) (mdbcomp__prim_data____Compare____pred_or_func_0_0_10001)),
  (MR_String) "mdbcomp.prim_data",
  (MR_String) "pred_or_func",
  {
    mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_pred_or_func_0
  },
  {
    mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_pred_or_func_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_pred_or_func_0
};

#line 557 "mdbcomp.prim_data.c"
static const MR_PseudoTypeInfo mdbcomp__prim_data__mdbcomp__prim_data__field_types_proc_label_0_0[6] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 567 "mdbcomp.prim_data.c"
static const MR_ConstString mdbcomp__prim_data__mdbcomp__prim_data__field_names_proc_label_0_0[6] = {
  (MR_String) "ord_defining_module",
  (MR_String) "ord_p_or_f",
  (MR_String) "ord_declaring_module",
  (MR_String) "ord_pred_name",
  (MR_String) "ord_arity",
  (MR_String) "ord_mode_number"
};

#line 577 "mdbcomp.prim_data.c"
static const MR_DuFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_0 = {
  (MR_String) "ordinary_proc_label",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__prim_data__mdbcomp__prim_data__field_types_proc_label_0_0,
  mdbcomp__prim_data__mdbcomp__prim_data__field_names_proc_label_0_0,
  NULL,
  NULL
};

#line 592 "mdbcomp.prim_data.c"
static const MR_PseudoTypeInfo mdbcomp__prim_data__mdbcomp__prim_data__field_types_proc_label_0_1[6] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 602 "mdbcomp.prim_data.c"
static const MR_ConstString mdbcomp__prim_data__mdbcomp__prim_data__field_names_proc_label_0_1[6] = {
  (MR_String) "spec_defining_module",
  (MR_String) "spec_spec_id",
  (MR_String) "spec_type_module",
  (MR_String) "spec_type_name",
  (MR_String) "spec_type_arity",
  (MR_String) "spec_mode_number"
};

#line 612 "mdbcomp.prim_data.c"
static const MR_DuFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_1 = {
  (MR_String) "special_proc_label",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__prim_data__mdbcomp__prim_data__field_types_proc_label_0_1,
  mdbcomp__prim_data__mdbcomp__prim_data__field_names_proc_label_0_1,
  NULL,
  NULL
};

#line 627 "mdbcomp.prim_data.c"
static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_proc_label_0_0[1] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_0
};

#line 632 "mdbcomp.prim_data.c"
static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_proc_label_0_1[1] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_1
};

#line 637 "mdbcomp.prim_data.c"
static const MR_DuPtagLayout mdbcomp__prim_data__mdbcomp__prim_data__du_ptag_ordered_proc_label_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_proc_label_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_proc_label_0_1
  }
};

#line 651 "mdbcomp.prim_data.c"
static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_name_ordered_proc_label_0[2] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_0,
  &mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_1
};

#line 657 "mdbcomp.prim_data.c"
static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_proc_label_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 663 "mdbcomp.prim_data.c"
const MR_TypeCtorInfo_Struct mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__prim_data____Unify____proc_label_0_0_10001)),
  ((MR_Box) (mdbcomp__prim_data____Compare____proc_label_0_0_10001)),
  (MR_String) "mdbcomp.prim_data",
  (MR_String) "proc_label",
  {
    mdbcomp__prim_data__mdbcomp__prim_data__du_name_ordered_proc_label_0
  },
  {
    mdbcomp__prim_data__mdbcomp__prim_data__du_ptag_ordered_proc_label_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_proc_label_0
};

#line 684 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_0 = {
  (MR_String) "spec_pred_unify",
  (MR_Integer) 0
};

#line 690 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_1 = {
  (MR_String) "spec_pred_index",
  (MR_Integer) 1
};

#line 696 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_2 = {
  (MR_String) "spec_pred_compare",
  (MR_Integer) 2
};

#line 702 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_3 = {
  (MR_String) "spec_pred_init",
  (MR_Integer) 3
};

#line 708 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_special_pred_id_0[4] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_0,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_1,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_2,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_3
};

#line 716 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_special_pred_id_0[4] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_2,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_1,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_3,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_0
};

#line 724 "mdbcomp.prim_data.c"
static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_special_pred_id_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 732 "mdbcomp.prim_data.c"
const MR_TypeCtorInfo_Struct mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__prim_data____Unify____special_pred_id_0_0_10001)),
  ((MR_Box) (mdbcomp__prim_data____Compare____special_pred_id_0_0_10001)),
  (MR_String) "mdbcomp.prim_data",
  (MR_String) "special_pred_id",
  {
    mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_special_pred_id_0
  },
  {
    mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_special_pred_id_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_special_pred_id_0
};

#line 753 "mdbcomp.prim_data.c"
static const MR_PseudoTypeInfo mdbcomp__prim_data__mdbcomp__prim_data__field_types_sym_name_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 758 "mdbcomp.prim_data.c"
static const MR_DuFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_sym_name_0_0 = {
  (MR_String) "unqualified",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__prim_data__mdbcomp__prim_data__field_types_sym_name_0_0,
  NULL,
  NULL,
  NULL
};

#line 773 "mdbcomp.prim_data.c"
static const MR_PseudoTypeInfo mdbcomp__prim_data__mdbcomp__prim_data__field_types_sym_name_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 779 "mdbcomp.prim_data.c"
static const MR_DuFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_sym_name_0_1 = {
  (MR_String) "qualified",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__prim_data__mdbcomp__prim_data__field_types_sym_name_0_1,
  NULL,
  NULL,
  NULL
};

#line 794 "mdbcomp.prim_data.c"
static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_sym_name_0_0[1] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_sym_name_0_0
};

#line 799 "mdbcomp.prim_data.c"
static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_sym_name_0_1[1] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_sym_name_0_1
};

#line 804 "mdbcomp.prim_data.c"
static const MR_DuPtagLayout mdbcomp__prim_data__mdbcomp__prim_data__du_ptag_ordered_sym_name_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_sym_name_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_sym_name_0_1
  }
};

#line 818 "mdbcomp.prim_data.c"
static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_name_ordered_sym_name_0[2] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_sym_name_0_1,
  &mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_sym_name_0_0
};

#line 824 "mdbcomp.prim_data.c"
static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_sym_name_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 830 "mdbcomp.prim_data.c"
const MR_TypeCtorInfo_Struct mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__prim_data____Unify____sym_name_0_0_10001)),
  ((MR_Box) (mdbcomp__prim_data____Compare____sym_name_0_0_10001)),
  (MR_String) "mdbcomp.prim_data",
  (MR_String) "sym_name",
  {
    mdbcomp__prim_data__mdbcomp__prim_data__du_name_ordered_sym_name_0
  },
  {
    mdbcomp__prim_data__mdbcomp__prim_data__du_ptag_ordered_sym_name_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_sym_name_0
};

#line 851 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_0 = {
  (MR_String) "port_call",
  (MR_Integer) 0
};

#line 857 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_1 = {
  (MR_String) "port_exit",
  (MR_Integer) 1
};

#line 863 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_2 = {
  (MR_String) "port_redo",
  (MR_Integer) 2
};

#line 869 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_3 = {
  (MR_String) "port_fail",
  (MR_Integer) 3
};

#line 875 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_4 = {
  (MR_String) "port_tailrec_call",
  (MR_Integer) 4
};

#line 881 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_5 = {
  (MR_String) "port_exception",
  (MR_Integer) 5
};

#line 887 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_6 = {
  (MR_String) "port_ite_cond",
  (MR_Integer) 6
};

#line 893 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_7 = {
  (MR_String) "port_ite_then",
  (MR_Integer) 7
};

#line 899 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_8 = {
  (MR_String) "port_ite_else",
  (MR_Integer) 8
};

#line 905 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_9 = {
  (MR_String) "port_neg_enter",
  (MR_Integer) 9
};

#line 911 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_10 = {
  (MR_String) "port_neg_success",
  (MR_Integer) 10
};

#line 917 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_11 = {
  (MR_String) "port_neg_failure",
  (MR_Integer) 11
};

#line 923 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_12 = {
  (MR_String) "port_disj_first",
  (MR_Integer) 12
};

#line 929 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_13 = {
  (MR_String) "port_disj_later",
  (MR_Integer) 13
};

#line 935 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_14 = {
  (MR_String) "port_switch",
  (MR_Integer) 14
};

#line 941 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_15 = {
  (MR_String) "port_user",
  (MR_Integer) 15
};

#line 947 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_trace_port_0[16] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_0,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_1,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_2,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_3,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_4,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_5,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_6,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_7,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_8,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_9,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_10,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_11,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_12,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_13,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_14,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_15
};

#line 967 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_trace_port_0[16] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_0,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_12,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_13,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_5,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_1,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_3,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_6,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_8,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_7,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_9,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_11,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_10,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_2,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_14,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_4,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_15
};

#line 987 "mdbcomp.prim_data.c"
static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_trace_port_0[16] = {
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 12,
  (MR_Integer) 5,
  (MR_Integer) 14,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 8,
  (MR_Integer) 7,
  (MR_Integer) 9,
  (MR_Integer) 11,
  (MR_Integer) 10,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 13,
  (MR_Integer) 15
};

#line 1007 "mdbcomp.prim_data.c"
const MR_TypeCtorInfo_Struct mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__prim_data____Unify____trace_port_0_0_10001)),
  ((MR_Box) (mdbcomp__prim_data____Compare____trace_port_0_0_10001)),
  (MR_String) "mdbcomp.prim_data",
  (MR_String) "trace_port",
  {
    mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_trace_port_0
  },
  {
    mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_trace_port_0
  },
  (MR_Integer) 16,
  (MR_Integer) 4,
  mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_trace_port_0
};

#line 1028 "mdbcomp.prim_data.c"
static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____module_name_0_0_10001(
#line 1031 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
#line 1033 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2)
#line 1035 "mdbcomp.prim_data.c"
{
#line 1037 "mdbcomp.prim_data.c"
  {
#line 1039 "mdbcomp.prim_data.c"
    MR_bool mdbcomp__prim_data__succeeded;

#line 1042 "mdbcomp.prim_data.c"
    {
#line 1044 "mdbcomp.prim_data.c"
      mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____module_name_0_0(((MR_Word) mdbcomp__prim_data__wrapper_arg_1), ((MR_Word) mdbcomp__prim_data__wrapper_arg_2));
    }
#line 1047 "mdbcomp.prim_data.c"
    return mdbcomp__prim_data__succeeded;
#line 1049 "mdbcomp.prim_data.c"
  }
#line 1051 "mdbcomp.prim_data.c"
}

#line 1054 "mdbcomp.prim_data.c"
static void MR_CALL 
mdbcomp__prim_data____Compare____module_name_0_0_10001(
#line 1057 "mdbcomp.prim_data.c"
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
#line 1059 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
#line 1061 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_3)
#line 1063 "mdbcomp.prim_data.c"
{
#line 1065 "mdbcomp.prim_data.c"
  {
#line 1067 "mdbcomp.prim_data.c"
    MR_Word mdbcomp__prim_data__conv0_HeadVar__1_1;

#line 1070 "mdbcomp.prim_data.c"
    {
#line 1072 "mdbcomp.prim_data.c"
      mdbcomp__prim_data____Compare____module_name_0_0(&mdbcomp__prim_data__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__prim_data__wrapper_arg_2), ((MR_Word) mdbcomp__prim_data__wrapper_arg_3));
    }
#line 1075 "mdbcomp.prim_data.c"
    *mdbcomp__prim_data__wrapper_arg_1 = ((MR_Box) (mdbcomp__prim_data__conv0_HeadVar__1_1));
#line 1077 "mdbcomp.prim_data.c"
  }
#line 1079 "mdbcomp.prim_data.c"
}

#line 1082 "mdbcomp.prim_data.c"
static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____pred_or_func_0_0_10001(
#line 1085 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
#line 1087 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2)
#line 1089 "mdbcomp.prim_data.c"
{
#line 1091 "mdbcomp.prim_data.c"
  {
#line 1093 "mdbcomp.prim_data.c"
    MR_bool mdbcomp__prim_data__succeeded;

#line 1096 "mdbcomp.prim_data.c"
    {
#line 1098 "mdbcomp.prim_data.c"
      mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____pred_or_func_0_0(((MR_Word) mdbcomp__prim_data__wrapper_arg_1), ((MR_Word) mdbcomp__prim_data__wrapper_arg_2));
    }
#line 1101 "mdbcomp.prim_data.c"
    return mdbcomp__prim_data__succeeded;
#line 1103 "mdbcomp.prim_data.c"
  }
#line 1105 "mdbcomp.prim_data.c"
}

#line 1108 "mdbcomp.prim_data.c"
static void MR_CALL 
mdbcomp__prim_data____Compare____pred_or_func_0_0_10001(
#line 1111 "mdbcomp.prim_data.c"
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
#line 1113 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
#line 1115 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_3)
#line 1117 "mdbcomp.prim_data.c"
{
#line 1119 "mdbcomp.prim_data.c"
  {
#line 1121 "mdbcomp.prim_data.c"
    MR_Word mdbcomp__prim_data__conv0_HeadVar__1_1;

#line 1124 "mdbcomp.prim_data.c"
    {
#line 1126 "mdbcomp.prim_data.c"
      mdbcomp__prim_data____Compare____pred_or_func_0_0(&mdbcomp__prim_data__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__prim_data__wrapper_arg_2), ((MR_Word) mdbcomp__prim_data__wrapper_arg_3));
    }
#line 1129 "mdbcomp.prim_data.c"
    *mdbcomp__prim_data__wrapper_arg_1 = ((MR_Box) (mdbcomp__prim_data__conv0_HeadVar__1_1));
#line 1131 "mdbcomp.prim_data.c"
  }
#line 1133 "mdbcomp.prim_data.c"
}

#line 1136 "mdbcomp.prim_data.c"
static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____proc_label_0_0_10001(
#line 1139 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
#line 1141 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2)
#line 1143 "mdbcomp.prim_data.c"
{
#line 1145 "mdbcomp.prim_data.c"
  {
#line 1147 "mdbcomp.prim_data.c"
    MR_bool mdbcomp__prim_data__succeeded;

#line 1150 "mdbcomp.prim_data.c"
    {
#line 1152 "mdbcomp.prim_data.c"
      mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(((MR_Word) mdbcomp__prim_data__wrapper_arg_1), ((MR_Word) mdbcomp__prim_data__wrapper_arg_2));
    }
#line 1155 "mdbcomp.prim_data.c"
    return mdbcomp__prim_data__succeeded;
#line 1157 "mdbcomp.prim_data.c"
  }
#line 1159 "mdbcomp.prim_data.c"
}

#line 1162 "mdbcomp.prim_data.c"
static void MR_CALL 
mdbcomp__prim_data____Compare____proc_label_0_0_10001(
#line 1165 "mdbcomp.prim_data.c"
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
#line 1167 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
#line 1169 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_3)
#line 1171 "mdbcomp.prim_data.c"
{
#line 1173 "mdbcomp.prim_data.c"
  {
#line 1175 "mdbcomp.prim_data.c"
    MR_Word mdbcomp__prim_data__conv0_HeadVar__1_1;

#line 1178 "mdbcomp.prim_data.c"
    {
#line 1180 "mdbcomp.prim_data.c"
      mdbcomp__prim_data____Compare____proc_label_0_0(&mdbcomp__prim_data__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__prim_data__wrapper_arg_2), ((MR_Word) mdbcomp__prim_data__wrapper_arg_3));
    }
#line 1183 "mdbcomp.prim_data.c"
    *mdbcomp__prim_data__wrapper_arg_1 = ((MR_Box) (mdbcomp__prim_data__conv0_HeadVar__1_1));
#line 1185 "mdbcomp.prim_data.c"
  }
#line 1187 "mdbcomp.prim_data.c"
}

#line 1190 "mdbcomp.prim_data.c"
static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____special_pred_id_0_0_10001(
#line 1193 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
#line 1195 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2)
#line 1197 "mdbcomp.prim_data.c"
{
#line 1199 "mdbcomp.prim_data.c"
  {
#line 1201 "mdbcomp.prim_data.c"
    MR_bool mdbcomp__prim_data__succeeded;

#line 1204 "mdbcomp.prim_data.c"
    {
#line 1206 "mdbcomp.prim_data.c"
      mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____special_pred_id_0_0(((MR_Word) mdbcomp__prim_data__wrapper_arg_1), ((MR_Word) mdbcomp__prim_data__wrapper_arg_2));
    }
#line 1209 "mdbcomp.prim_data.c"
    return mdbcomp__prim_data__succeeded;
#line 1211 "mdbcomp.prim_data.c"
  }
#line 1213 "mdbcomp.prim_data.c"
}

#line 1216 "mdbcomp.prim_data.c"
static void MR_CALL 
mdbcomp__prim_data____Compare____special_pred_id_0_0_10001(
#line 1219 "mdbcomp.prim_data.c"
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
#line 1221 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
#line 1223 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_3)
#line 1225 "mdbcomp.prim_data.c"
{
#line 1227 "mdbcomp.prim_data.c"
  {
#line 1229 "mdbcomp.prim_data.c"
    MR_Word mdbcomp__prim_data__conv0_HeadVar__1_1;

#line 1232 "mdbcomp.prim_data.c"
    {
#line 1234 "mdbcomp.prim_data.c"
      mdbcomp__prim_data____Compare____special_pred_id_0_0(&mdbcomp__prim_data__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__prim_data__wrapper_arg_2), ((MR_Word) mdbcomp__prim_data__wrapper_arg_3));
    }
#line 1237 "mdbcomp.prim_data.c"
    *mdbcomp__prim_data__wrapper_arg_1 = ((MR_Box) (mdbcomp__prim_data__conv0_HeadVar__1_1));
#line 1239 "mdbcomp.prim_data.c"
  }
#line 1241 "mdbcomp.prim_data.c"
}

#line 1244 "mdbcomp.prim_data.c"
static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____sym_name_0_0_10001(
#line 1247 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
#line 1249 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2)
#line 1251 "mdbcomp.prim_data.c"
{
#line 1253 "mdbcomp.prim_data.c"
  {
#line 1255 "mdbcomp.prim_data.c"
    MR_bool mdbcomp__prim_data__succeeded;

#line 1258 "mdbcomp.prim_data.c"
    {
#line 1260 "mdbcomp.prim_data.c"
      mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(((MR_Word) mdbcomp__prim_data__wrapper_arg_1), ((MR_Word) mdbcomp__prim_data__wrapper_arg_2));
    }
#line 1263 "mdbcomp.prim_data.c"
    return mdbcomp__prim_data__succeeded;
#line 1265 "mdbcomp.prim_data.c"
  }
#line 1267 "mdbcomp.prim_data.c"
}

#line 1270 "mdbcomp.prim_data.c"
static void MR_CALL 
mdbcomp__prim_data____Compare____sym_name_0_0_10001(
#line 1273 "mdbcomp.prim_data.c"
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
#line 1275 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
#line 1277 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_3)
#line 1279 "mdbcomp.prim_data.c"
{
#line 1281 "mdbcomp.prim_data.c"
  {
#line 1283 "mdbcomp.prim_data.c"
    MR_Word mdbcomp__prim_data__conv0_HeadVar__1_1;

#line 1286 "mdbcomp.prim_data.c"
    {
#line 1288 "mdbcomp.prim_data.c"
      mdbcomp__prim_data____Compare____sym_name_0_0(&mdbcomp__prim_data__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__prim_data__wrapper_arg_2), ((MR_Word) mdbcomp__prim_data__wrapper_arg_3));
    }
#line 1291 "mdbcomp.prim_data.c"
    *mdbcomp__prim_data__wrapper_arg_1 = ((MR_Box) (mdbcomp__prim_data__conv0_HeadVar__1_1));
#line 1293 "mdbcomp.prim_data.c"
  }
#line 1295 "mdbcomp.prim_data.c"
}

#line 1298 "mdbcomp.prim_data.c"
static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____trace_port_0_0_10001(
#line 1301 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
#line 1303 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2)
#line 1305 "mdbcomp.prim_data.c"
{
#line 1307 "mdbcomp.prim_data.c"
  {
#line 1309 "mdbcomp.prim_data.c"
    MR_bool mdbcomp__prim_data__succeeded;

#line 1312 "mdbcomp.prim_data.c"
    {
#line 1314 "mdbcomp.prim_data.c"
      mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____trace_port_0_0(((MR_Word) mdbcomp__prim_data__wrapper_arg_1), ((MR_Word) mdbcomp__prim_data__wrapper_arg_2));
    }
#line 1317 "mdbcomp.prim_data.c"
    return mdbcomp__prim_data__succeeded;
#line 1319 "mdbcomp.prim_data.c"
  }
#line 1321 "mdbcomp.prim_data.c"
}

#line 1324 "mdbcomp.prim_data.c"
static void MR_CALL 
mdbcomp__prim_data____Compare____trace_port_0_0_10001(
#line 1327 "mdbcomp.prim_data.c"
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
#line 1329 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
#line 1331 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_3)
#line 1333 "mdbcomp.prim_data.c"
{
#line 1335 "mdbcomp.prim_data.c"
  {
#line 1337 "mdbcomp.prim_data.c"
    MR_Word mdbcomp__prim_data__conv0_HeadVar__1_1;

#line 1340 "mdbcomp.prim_data.c"
    {
#line 1342 "mdbcomp.prim_data.c"
      mdbcomp__prim_data____Compare____trace_port_0_0(&mdbcomp__prim_data__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__prim_data__wrapper_arg_2), ((MR_Word) mdbcomp__prim_data__wrapper_arg_3));
    }
#line 1345 "mdbcomp.prim_data.c"
    *mdbcomp__prim_data__wrapper_arg_1 = ((MR_Box) (mdbcomp__prim_data__conv0_HeadVar__1_1));
#line 1347 "mdbcomp.prim_data.c"
  }
#line 1349 "mdbcomp.prim_data.c"
}

#line 38 "prim_data.m"
void MR_CALL 
mdbcomp__prim_data____Compare____trace_port_0_0(
#line 38 "prim_data.m"
  MR_Word * mdbcomp__prim_data__HeadVar__1_1,
#line 38 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2,
#line 38 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__3_3)
#line 38 "prim_data.m"
{
#line 38 "prim_data.m"
  {
#line 38 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 38 "prim_data.m"
    MR_Integer mdbcomp__prim_data__Cast_HeadVar1_4 = (MR_Integer) mdbcomp__prim_data__HeadVar__2_2;
#line 38 "prim_data.m"
    MR_Integer mdbcomp__prim_data__Cast_HeadVar2_5 = (MR_Integer) mdbcomp__prim_data__HeadVar__3_3;

#line 38 "prim_data.m"
    {
#line 38 "prim_data.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__prim_data__HeadVar__1_1, mdbcomp__prim_data__Cast_HeadVar1_4, mdbcomp__prim_data__Cast_HeadVar2_5);
#line 38 "prim_data.m"
      return;
    }
#line 38 "prim_data.m"
  }
#line 38 "prim_data.m"
}

#line 38 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data____Unify____trace_port_0_0(
#line 38 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_1,
#line 38 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2)
#line 38 "prim_data.m"
{
#line 1393 "mdbcomp.prim_data.c"
  {
#line 1395 "mdbcomp.prim_data.c"
    MR_bool mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__HeadVar__2_1 == mdbcomp__prim_data__HeadVar__2_2);

#line 1398 "mdbcomp.prim_data.c"
    return mdbcomp__prim_data__succeeded;
#line 1400 "mdbcomp.prim_data.c"
  }
#line 38 "prim_data.m"
}

#line 59 "prim_data.m"
void MR_CALL 
mdbcomp__prim_data____Compare____sym_name_0_0(
#line 59 "prim_data.m"
  MR_Word * mdbcomp__prim_data__HeadVar__1_1,
#line 59 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2,
#line 59 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__3_3)
#line 59 "prim_data.m"
{
#line 59 "prim_data.m"
  {
#line 59 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 59 "prim_data.m"
    MR_Integer mdbcomp__prim_data__CastX_17 = (MR_Integer) mdbcomp__prim_data__HeadVar__2_2;
#line 59 "prim_data.m"
    MR_Integer mdbcomp__prim_data__CastY_18 = (MR_Integer) mdbcomp__prim_data__HeadVar__3_3;

#line 59 "prim_data.m"
    mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__CastX_17 == mdbcomp__prim_data__CastY_18);
#line 59 "prim_data.m"
    if (mdbcomp__prim_data__succeeded)
#line 1429 "mdbcomp.prim_data.c"
      *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 0;
#line 59 "prim_data.m"
    else
#line 59 "prim_data.m"
      if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 59 "prim_data.m"
        {
#line 59 "prim_data.m"
          MR_String mdbcomp__prim_data__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 1)));
#line 59 "prim_data.m"
          MR_Word mdbcomp__prim_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 0)));

#line 59 "prim_data.m"
          if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 59 "prim_data.m"
            {
#line 59 "prim_data.m"
              MR_Word mdbcomp__prim_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 0)));
#line 59 "prim_data.m"
              MR_String mdbcomp__prim_data__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 1)));
#line 59 "prim_data.m"
              MR_Word mdbcomp__prim_data__V_16_16;

#line 59 "prim_data.m"
              {
#line 59 "prim_data.m"
                mdbcomp__prim_data____Compare____sym_name_0_0(&mdbcomp__prim_data__V_16_16, mdbcomp__prim_data__V_23_23, mdbcomp__prim_data__V_14_14);
              }
#line 1458 "mdbcomp.prim_data.c"
              mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_16_16 == (MR_Integer) 0);
#line 59 "prim_data.m"
              mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
#line 59 "prim_data.m"
              if (mdbcomp__prim_data__succeeded)
#line 59 "prim_data.m"
                *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__V_16_16;
#line 59 "prim_data.m"
              else
#line 59 "prim_data.m"
                {
#line 59 "prim_data.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__prim_data__HeadVar__1_1, mdbcomp__prim_data__V_22_22, mdbcomp__prim_data__V_15_15);
#line 59 "prim_data.m"
                  return;
                }
#line 59 "prim_data.m"
            }
#line 59 "prim_data.m"
          else
#line 1479 "mdbcomp.prim_data.c"
            *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 2;
#line 59 "prim_data.m"
        }
#line 59 "prim_data.m"
      else
#line 59 "prim_data.m"
        {
#line 59 "prim_data.m"
          MR_String mdbcomp__prim_data__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 0)));

#line 59 "prim_data.m"
          if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1492 "mdbcomp.prim_data.c"
            *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 1;
#line 59 "prim_data.m"
          else
#line 59 "prim_data.m"
            {
#line 59 "prim_data.m"
              MR_String mdbcomp__prim_data__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 0)));

#line 59 "prim_data.m"
              {
#line 59 "prim_data.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__prim_data__HeadVar__1_1, mdbcomp__prim_data__V_24_24, mdbcomp__prim_data__V_5_5);
#line 59 "prim_data.m"
                return;
              }
#line 59 "prim_data.m"
            }
#line 59 "prim_data.m"
        }
#line 59 "prim_data.m"
  }
#line 59 "prim_data.m"
}

#line 59 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data____Unify____sym_name_0_0(
#line 59 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__1_1,
#line 59 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2)
#line 59 "prim_data.m"
{
#line 59 "prim_data.m"
  {
#line 59 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 59 "prim_data.m"
    MR_Integer mdbcomp__prim_data__CastX_9 = (MR_Integer) mdbcomp__prim_data__HeadVar__1_1;
#line 59 "prim_data.m"
    MR_Integer mdbcomp__prim_data__CastY_10 = (MR_Integer) mdbcomp__prim_data__HeadVar__2_2;

#line 59 "prim_data.m"
    mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__CastX_9 == mdbcomp__prim_data__CastY_10);
#line 59 "prim_data.m"
    if (mdbcomp__prim_data__succeeded)
#line 59 "prim_data.m"
      mdbcomp__prim_data__succeeded = MR_TRUE;
#line 59 "prim_data.m"
    else
#line 59 "prim_data.m"
      if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 59 "prim_data.m"
        {
#line 59 "prim_data.m"
          MR_Word mdbcomp__prim_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 0)));
#line 59 "prim_data.m"
          MR_String mdbcomp__prim_data__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 1)));
#line 59 "prim_data.m"
          MR_Word mdbcomp__prim_data__V_7_7;
#line 59 "prim_data.m"
          MR_String mdbcomp__prim_data__V_8_8;

#line 59 "prim_data.m"
          mdbcomp__prim_data__succeeded = ((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 59 "prim_data.m"
          if (mdbcomp__prim_data__succeeded)
#line 59 "prim_data.m"
            {
#line 59 "prim_data.m"
              mdbcomp__prim_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 0)));
#line 59 "prim_data.m"
              mdbcomp__prim_data__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 1)));
#line 1566 "mdbcomp.prim_data.c"
              {
#line 1568 "mdbcomp.prim_data.c"
                mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(mdbcomp__prim_data__V_5_5, mdbcomp__prim_data__V_7_7);
              }
#line 59 "prim_data.m"
              if (mdbcomp__prim_data__succeeded)
#line 1573 "mdbcomp.prim_data.c"
                mdbcomp__prim_data__succeeded = (strcmp(mdbcomp__prim_data__V_6_6, mdbcomp__prim_data__V_8_8) == 0);
#line 59 "prim_data.m"
            }
#line 59 "prim_data.m"
        }
#line 59 "prim_data.m"
      else
#line 59 "prim_data.m"
        {
#line 59 "prim_data.m"
          MR_String mdbcomp__prim_data__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 0)));
#line 59 "prim_data.m"
          MR_String mdbcomp__prim_data__V_4_4;

#line 59 "prim_data.m"
          mdbcomp__prim_data__succeeded = ((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 59 "prim_data.m"
          if (mdbcomp__prim_data__succeeded)
#line 59 "prim_data.m"
            {
#line 59 "prim_data.m"
              mdbcomp__prim_data__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 0)));
#line 1596 "mdbcomp.prim_data.c"
              mdbcomp__prim_data__succeeded = (strcmp(mdbcomp__prim_data__V_3_3, mdbcomp__prim_data__V_4_4) == 0);
#line 59 "prim_data.m"
            }
#line 59 "prim_data.m"
        }
#line 59 "prim_data.m"
    return mdbcomp__prim_data__succeeded;
#line 59 "prim_data.m"
  }
#line 59 "prim_data.m"
}

#line 106 "prim_data.m"
void MR_CALL 
mdbcomp__prim_data____Compare____special_pred_id_0_0(
#line 106 "prim_data.m"
  MR_Word * mdbcomp__prim_data__HeadVar__1_1,
#line 106 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2,
#line 106 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__3_3)
#line 106 "prim_data.m"
{
#line 106 "prim_data.m"
  {
#line 106 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 106 "prim_data.m"
    MR_Integer mdbcomp__prim_data__Cast_HeadVar1_4 = (MR_Integer) mdbcomp__prim_data__HeadVar__2_2;
#line 106 "prim_data.m"
    MR_Integer mdbcomp__prim_data__Cast_HeadVar2_5 = (MR_Integer) mdbcomp__prim_data__HeadVar__3_3;

#line 106 "prim_data.m"
    {
#line 106 "prim_data.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__prim_data__HeadVar__1_1, mdbcomp__prim_data__Cast_HeadVar1_4, mdbcomp__prim_data__Cast_HeadVar2_5);
#line 106 "prim_data.m"
      return;
    }
#line 106 "prim_data.m"
  }
#line 106 "prim_data.m"
}

#line 106 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data____Unify____special_pred_id_0_0(
#line 106 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_1,
#line 106 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2)
#line 106 "prim_data.m"
{
#line 1650 "mdbcomp.prim_data.c"
  {
#line 1652 "mdbcomp.prim_data.c"
    MR_bool mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__HeadVar__2_1 == mdbcomp__prim_data__HeadVar__2_2);

#line 1655 "mdbcomp.prim_data.c"
    return mdbcomp__prim_data__succeeded;
#line 1657 "mdbcomp.prim_data.c"
  }
#line 106 "prim_data.m"
}

#line 86 "prim_data.m"
void MR_CALL 
mdbcomp__prim_data____Compare____proc_label_0_0(
#line 86 "prim_data.m"
  MR_Word * mdbcomp__prim_data__HeadVar__1_1,
#line 86 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2,
#line 86 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__3_3)
#line 86 "prim_data.m"
{
#line 86 "prim_data.m"
  {
#line 86 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 86 "prim_data.m"
    MR_Integer mdbcomp__prim_data__CastX_62 = (MR_Integer) mdbcomp__prim_data__HeadVar__2_2;
#line 86 "prim_data.m"
    MR_Integer mdbcomp__prim_data__CastY_63 = (MR_Integer) mdbcomp__prim_data__HeadVar__3_3;

#line 86 "prim_data.m"
    mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__CastX_62 == mdbcomp__prim_data__CastY_63);
#line 86 "prim_data.m"
    if (mdbcomp__prim_data__succeeded)
#line 1686 "mdbcomp.prim_data.c"
      *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 0;
#line 86 "prim_data.m"
    else
#line 86 "prim_data.m"
      if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 86 "prim_data.m"
        {
#line 86 "prim_data.m"
          MR_Integer mdbcomp__prim_data__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 5)));
#line 86 "prim_data.m"
          MR_Integer mdbcomp__prim_data__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 4)));
#line 86 "prim_data.m"
          MR_String mdbcomp__prim_data__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 3)));
#line 86 "prim_data.m"
          MR_Word mdbcomp__prim_data__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 2)));
#line 86 "prim_data.m"
          MR_Word mdbcomp__prim_data__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 1)));
#line 86 "prim_data.m"
          MR_Word mdbcomp__prim_data__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 0)));

#line 86 "prim_data.m"
          if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 86 "prim_data.m"
            {
#line 86 "prim_data.m"
              MR_Word mdbcomp__prim_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 0)));
#line 86 "prim_data.m"
              MR_Word mdbcomp__prim_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 1)));
#line 86 "prim_data.m"
              MR_Word mdbcomp__prim_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 2)));
#line 86 "prim_data.m"
              MR_String mdbcomp__prim_data__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 3)));
#line 86 "prim_data.m"
              MR_Integer mdbcomp__prim_data__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 4)));
#line 86 "prim_data.m"
              MR_Integer mdbcomp__prim_data__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 5)));
#line 86 "prim_data.m"
              MR_Word mdbcomp__prim_data__V_16_16;

#line 86 "prim_data.m"
              {
#line 86 "prim_data.m"
                mdbcomp__prim_data____Compare____sym_name_0_0(&mdbcomp__prim_data__V_16_16, mdbcomp__prim_data__V_81_81, mdbcomp__prim_data__V_10_10);
              }
#line 1731 "mdbcomp.prim_data.c"
              mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_16_16 == (MR_Integer) 0);
#line 86 "prim_data.m"
              mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
#line 86 "prim_data.m"
              if (mdbcomp__prim_data__succeeded)
#line 86 "prim_data.m"
                *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__V_16_16;
#line 86 "prim_data.m"
              else
#line 86 "prim_data.m"
                {
#line 86 "prim_data.m"
                  MR_Word mdbcomp__prim_data__V_17_17;
#line 86 "prim_data.m"
                  MR_Integer mdbcomp__prim_data__V_88_88 = (MR_Integer) mdbcomp__prim_data__V_80_80;
#line 86 "prim_data.m"
                  MR_Integer mdbcomp__prim_data__V_89_89 = (MR_Integer) mdbcomp__prim_data__V_11_11;

#line 86 "prim_data.m"
                  {
#line 86 "prim_data.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__prim_data__V_17_17, mdbcomp__prim_data__V_88_88, mdbcomp__prim_data__V_89_89);
                  }
#line 1755 "mdbcomp.prim_data.c"
                  mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_17_17 == (MR_Integer) 0);
#line 86 "prim_data.m"
                  mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
#line 86 "prim_data.m"
                  if (mdbcomp__prim_data__succeeded)
#line 86 "prim_data.m"
                    *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__V_17_17;
#line 86 "prim_data.m"
                  else
#line 86 "prim_data.m"
                    {
#line 86 "prim_data.m"
                      MR_Word mdbcomp__prim_data__V_18_18;

#line 86 "prim_data.m"
                      {
#line 86 "prim_data.m"
                        mdbcomp__prim_data____Compare____sym_name_0_0(&mdbcomp__prim_data__V_18_18, mdbcomp__prim_data__V_79_79, mdbcomp__prim_data__V_12_12);
                      }
#line 1775 "mdbcomp.prim_data.c"
                      mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_18_18 == (MR_Integer) 0);
#line 86 "prim_data.m"
                      mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
#line 86 "prim_data.m"
                      if (mdbcomp__prim_data__succeeded)
#line 86 "prim_data.m"
                        *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__V_18_18;
#line 86 "prim_data.m"
                      else
#line 86 "prim_data.m"
                        {
#line 86 "prim_data.m"
                          MR_Word mdbcomp__prim_data__V_19_19;

#line 86 "prim_data.m"
                          {
#line 86 "prim_data.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__prim_data__V_19_19, mdbcomp__prim_data__V_78_78, mdbcomp__prim_data__V_13_13);
                          }
#line 1795 "mdbcomp.prim_data.c"
                          mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_19_19 == (MR_Integer) 0);
#line 86 "prim_data.m"
                          mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
#line 86 "prim_data.m"
                          if (mdbcomp__prim_data__succeeded)
#line 86 "prim_data.m"
                            *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__V_19_19;
#line 86 "prim_data.m"
                          else
#line 86 "prim_data.m"
                            {
#line 86 "prim_data.m"
                              MR_Word mdbcomp__prim_data__V_20_20;

#line 86 "prim_data.m"
                              {
#line 86 "prim_data.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__prim_data__V_20_20, mdbcomp__prim_data__V_77_77, mdbcomp__prim_data__V_14_14);
                              }
#line 1815 "mdbcomp.prim_data.c"
                              mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_20_20 == (MR_Integer) 0);
#line 86 "prim_data.m"
                              mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
#line 86 "prim_data.m"
                              if (mdbcomp__prim_data__succeeded)
#line 86 "prim_data.m"
                                *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__V_20_20;
#line 86 "prim_data.m"
                              else
#line 86 "prim_data.m"
                                {
#line 86 "prim_data.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__prim_data__HeadVar__1_1, mdbcomp__prim_data__V_76_76, mdbcomp__prim_data__V_15_15);
#line 86 "prim_data.m"
                                  return;
                                }
#line 86 "prim_data.m"
                            }
#line 86 "prim_data.m"
                        }
#line 86 "prim_data.m"
                    }
#line 86 "prim_data.m"
                }
#line 86 "prim_data.m"
            }
#line 86 "prim_data.m"
          else
#line 1844 "mdbcomp.prim_data.c"
            *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 1;
#line 86 "prim_data.m"
        }
#line 86 "prim_data.m"
      else
#line 86 "prim_data.m"
        {
#line 86 "prim_data.m"
          MR_Integer mdbcomp__prim_data__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 5)));
#line 86 "prim_data.m"
          MR_Integer mdbcomp__prim_data__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 4)));
#line 86 "prim_data.m"
          MR_String mdbcomp__prim_data__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 3)));
#line 86 "prim_data.m"
          MR_Word mdbcomp__prim_data__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 2)));
#line 86 "prim_data.m"
          MR_Word mdbcomp__prim_data__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 1)));
#line 86 "prim_data.m"
          MR_Word mdbcomp__prim_data__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 0)));

#line 86 "prim_data.m"
          if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1867 "mdbcomp.prim_data.c"
            *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 2;
#line 86 "prim_data.m"
          else
#line 86 "prim_data.m"
            {
#line 86 "prim_data.m"
              MR_Word mdbcomp__prim_data__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 0)));
#line 86 "prim_data.m"
              MR_Word mdbcomp__prim_data__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 1)));
#line 86 "prim_data.m"
              MR_Word mdbcomp__prim_data__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 2)));
#line 86 "prim_data.m"
              MR_String mdbcomp__prim_data__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 3)));
#line 86 "prim_data.m"
              MR_Integer mdbcomp__prim_data__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 4)));
#line 86 "prim_data.m"
              MR_Integer mdbcomp__prim_data__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 5)));
#line 86 "prim_data.m"
              MR_Word mdbcomp__prim_data__V_57_57;

#line 86 "prim_data.m"
              {
#line 86 "prim_data.m"
                mdbcomp__prim_data____Compare____sym_name_0_0(&mdbcomp__prim_data__V_57_57, mdbcomp__prim_data__V_87_87, mdbcomp__prim_data__V_51_51);
              }
#line 1893 "mdbcomp.prim_data.c"
              mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_57_57 == (MR_Integer) 0);
#line 86 "prim_data.m"
              mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
#line 86 "prim_data.m"
              if (mdbcomp__prim_data__succeeded)
#line 86 "prim_data.m"
                *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__V_57_57;
#line 86 "prim_data.m"
              else
#line 86 "prim_data.m"
                {
#line 86 "prim_data.m"
                  MR_Word mdbcomp__prim_data__V_58_58;
#line 86 "prim_data.m"
                  MR_Integer mdbcomp__prim_data__V_90_90 = (MR_Integer) mdbcomp__prim_data__V_86_86;
#line 86 "prim_data.m"
                  MR_Integer mdbcomp__prim_data__V_91_91 = (MR_Integer) mdbcomp__prim_data__V_52_52;

#line 86 "prim_data.m"
                  {
#line 86 "prim_data.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__prim_data__V_58_58, mdbcomp__prim_data__V_90_90, mdbcomp__prim_data__V_91_91);
                  }
#line 1917 "mdbcomp.prim_data.c"
                  mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_58_58 == (MR_Integer) 0);
#line 86 "prim_data.m"
                  mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
#line 86 "prim_data.m"
                  if (mdbcomp__prim_data__succeeded)
#line 86 "prim_data.m"
                    *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__V_58_58;
#line 86 "prim_data.m"
                  else
#line 86 "prim_data.m"
                    {
#line 86 "prim_data.m"
                      MR_Word mdbcomp__prim_data__V_59_59;

#line 86 "prim_data.m"
                      {
#line 86 "prim_data.m"
                        mdbcomp__prim_data____Compare____sym_name_0_0(&mdbcomp__prim_data__V_59_59, mdbcomp__prim_data__V_85_85, mdbcomp__prim_data__V_53_53);
                      }
#line 1937 "mdbcomp.prim_data.c"
                      mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_59_59 == (MR_Integer) 0);
#line 86 "prim_data.m"
                      mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
#line 86 "prim_data.m"
                      if (mdbcomp__prim_data__succeeded)
#line 86 "prim_data.m"
                        *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__V_59_59;
#line 86 "prim_data.m"
                      else
#line 86 "prim_data.m"
                        {
#line 86 "prim_data.m"
                          MR_Word mdbcomp__prim_data__V_60_60;

#line 86 "prim_data.m"
                          {
#line 86 "prim_data.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__prim_data__V_60_60, mdbcomp__prim_data__V_84_84, mdbcomp__prim_data__V_54_54);
                          }
#line 1957 "mdbcomp.prim_data.c"
                          mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_60_60 == (MR_Integer) 0);
#line 86 "prim_data.m"
                          mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
#line 86 "prim_data.m"
                          if (mdbcomp__prim_data__succeeded)
#line 86 "prim_data.m"
                            *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__V_60_60;
#line 86 "prim_data.m"
                          else
#line 86 "prim_data.m"
                            {
#line 86 "prim_data.m"
                              MR_Word mdbcomp__prim_data__V_61_61;

#line 86 "prim_data.m"
                              {
#line 86 "prim_data.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__prim_data__V_61_61, mdbcomp__prim_data__V_83_83, mdbcomp__prim_data__V_55_55);
                              }
#line 1977 "mdbcomp.prim_data.c"
                              mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_61_61 == (MR_Integer) 0);
#line 86 "prim_data.m"
                              mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
#line 86 "prim_data.m"
                              if (mdbcomp__prim_data__succeeded)
#line 86 "prim_data.m"
                                *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__V_61_61;
#line 86 "prim_data.m"
                              else
#line 86 "prim_data.m"
                                {
#line 86 "prim_data.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__prim_data__HeadVar__1_1, mdbcomp__prim_data__V_82_82, mdbcomp__prim_data__V_56_56);
#line 86 "prim_data.m"
                                  return;
                                }
#line 86 "prim_data.m"
                            }
#line 86 "prim_data.m"
                        }
#line 86 "prim_data.m"
                    }
#line 86 "prim_data.m"
                }
#line 86 "prim_data.m"
            }
#line 86 "prim_data.m"
        }
#line 86 "prim_data.m"
  }
#line 86 "prim_data.m"
}

#line 86 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data____Unify____proc_label_0_0(
#line 86 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__1_1,
#line 86 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2)
#line 86 "prim_data.m"
{
#line 86 "prim_data.m"
  {
#line 86 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 86 "prim_data.m"
    MR_Integer mdbcomp__prim_data__CastX_27 = (MR_Integer) mdbcomp__prim_data__HeadVar__1_1;
#line 86 "prim_data.m"
    MR_Integer mdbcomp__prim_data__CastY_28 = (MR_Integer) mdbcomp__prim_data__HeadVar__2_2;

#line 86 "prim_data.m"
    mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__CastX_27 == mdbcomp__prim_data__CastY_28);
#line 86 "prim_data.m"
    if (mdbcomp__prim_data__succeeded)
#line 86 "prim_data.m"
      mdbcomp__prim_data__succeeded = MR_TRUE;
#line 86 "prim_data.m"
    else
#line 86 "prim_data.m"
      if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 86 "prim_data.m"
        {
#line 86 "prim_data.m"
          MR_Word mdbcomp__prim_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 0)));
#line 86 "prim_data.m"
          MR_Word mdbcomp__prim_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 1)));
#line 86 "prim_data.m"
          MR_Word mdbcomp__prim_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 2)));
#line 86 "prim_data.m"
          MR_String mdbcomp__prim_data__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 3)));
#line 86 "prim_data.m"
          MR_Integer mdbcomp__prim_data__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 4)));
#line 86 "prim_data.m"
          MR_Integer mdbcomp__prim_data__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 5)));
#line 86 "prim_data.m"
          MR_Word mdbcomp__prim_data__V_9_9;
#line 86 "prim_data.m"
          MR_Word mdbcomp__prim_data__V_10_10;
#line 86 "prim_data.m"
          MR_Word mdbcomp__prim_data__V_11_11;
#line 86 "prim_data.m"
          MR_String mdbcomp__prim_data__V_12_12;
#line 86 "prim_data.m"
          MR_Integer mdbcomp__prim_data__V_13_13;
#line 86 "prim_data.m"
          MR_Integer mdbcomp__prim_data__V_14_14;

#line 86 "prim_data.m"
          mdbcomp__prim_data__succeeded = ((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 86 "prim_data.m"
          if (mdbcomp__prim_data__succeeded)
#line 86 "prim_data.m"
            {
#line 86 "prim_data.m"
              mdbcomp__prim_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 0)));
#line 86 "prim_data.m"
              mdbcomp__prim_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 1)));
#line 86 "prim_data.m"
              mdbcomp__prim_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 2)));
#line 86 "prim_data.m"
              mdbcomp__prim_data__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 3)));
#line 86 "prim_data.m"
              mdbcomp__prim_data__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 4)));
#line 86 "prim_data.m"
              mdbcomp__prim_data__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 5)));
#line 2084 "mdbcomp.prim_data.c"
              {
#line 2086 "mdbcomp.prim_data.c"
                mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(mdbcomp__prim_data__V_3_3, mdbcomp__prim_data__V_9_9);
              }
#line 86 "prim_data.m"
              if (mdbcomp__prim_data__succeeded)
#line 86 "prim_data.m"
                {
#line 2093 "mdbcomp.prim_data.c"
                  mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_4_4 == mdbcomp__prim_data__V_10_10);
#line 86 "prim_data.m"
                  if (mdbcomp__prim_data__succeeded)
#line 86 "prim_data.m"
                    {
#line 2099 "mdbcomp.prim_data.c"
                      {
#line 2101 "mdbcomp.prim_data.c"
                        mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(mdbcomp__prim_data__V_5_5, mdbcomp__prim_data__V_11_11);
                      }
#line 86 "prim_data.m"
                      if (mdbcomp__prim_data__succeeded)
#line 86 "prim_data.m"
                        {
#line 2108 "mdbcomp.prim_data.c"
                          mdbcomp__prim_data__succeeded = (strcmp(mdbcomp__prim_data__V_6_6, mdbcomp__prim_data__V_12_12) == 0);
#line 86 "prim_data.m"
                          if (mdbcomp__prim_data__succeeded)
#line 86 "prim_data.m"
                            {
#line 2114 "mdbcomp.prim_data.c"
                              mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_7_7 == mdbcomp__prim_data__V_13_13);
#line 86 "prim_data.m"
                              if (mdbcomp__prim_data__succeeded)
#line 2118 "mdbcomp.prim_data.c"
                                mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_8_8 == mdbcomp__prim_data__V_14_14);
#line 86 "prim_data.m"
                            }
#line 86 "prim_data.m"
                        }
#line 86 "prim_data.m"
                    }
#line 86 "prim_data.m"
                }
#line 86 "prim_data.m"
            }
#line 86 "prim_data.m"
        }
#line 86 "prim_data.m"
      else
#line 86 "prim_data.m"
        {
#line 86 "prim_data.m"
          MR_Word mdbcomp__prim_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 0)));
#line 86 "prim_data.m"
          MR_Word mdbcomp__prim_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 1)));
#line 86 "prim_data.m"
          MR_Word mdbcomp__prim_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 2)));
#line 86 "prim_data.m"
          MR_String mdbcomp__prim_data__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 3)));
#line 86 "prim_data.m"
          MR_Integer mdbcomp__prim_data__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 4)));
#line 86 "prim_data.m"
          MR_Integer mdbcomp__prim_data__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 5)));
#line 86 "prim_data.m"
          MR_Word mdbcomp__prim_data__V_21_21;
#line 86 "prim_data.m"
          MR_Word mdbcomp__prim_data__V_22_22;
#line 86 "prim_data.m"
          MR_Word mdbcomp__prim_data__V_23_23;
#line 86 "prim_data.m"
          MR_String mdbcomp__prim_data__V_24_24;
#line 86 "prim_data.m"
          MR_Integer mdbcomp__prim_data__V_25_25;
#line 86 "prim_data.m"
          MR_Integer mdbcomp__prim_data__V_26_26;

#line 86 "prim_data.m"
          mdbcomp__prim_data__succeeded = ((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 86 "prim_data.m"
          if (mdbcomp__prim_data__succeeded)
#line 86 "prim_data.m"
            {
#line 86 "prim_data.m"
              mdbcomp__prim_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 0)));
#line 86 "prim_data.m"
              mdbcomp__prim_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 1)));
#line 86 "prim_data.m"
              mdbcomp__prim_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 2)));
#line 86 "prim_data.m"
              mdbcomp__prim_data__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 3)));
#line 86 "prim_data.m"
              mdbcomp__prim_data__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 4)));
#line 86 "prim_data.m"
              mdbcomp__prim_data__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 5)));
#line 2179 "mdbcomp.prim_data.c"
              {
#line 2181 "mdbcomp.prim_data.c"
                mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(mdbcomp__prim_data__V_15_15, mdbcomp__prim_data__V_21_21);
              }
#line 86 "prim_data.m"
              if (mdbcomp__prim_data__succeeded)
#line 86 "prim_data.m"
                {
#line 2188 "mdbcomp.prim_data.c"
                  mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_16_16 == mdbcomp__prim_data__V_22_22);
#line 86 "prim_data.m"
                  if (mdbcomp__prim_data__succeeded)
#line 86 "prim_data.m"
                    {
#line 2194 "mdbcomp.prim_data.c"
                      {
#line 2196 "mdbcomp.prim_data.c"
                        mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(mdbcomp__prim_data__V_17_17, mdbcomp__prim_data__V_23_23);
                      }
#line 86 "prim_data.m"
                      if (mdbcomp__prim_data__succeeded)
#line 86 "prim_data.m"
                        {
#line 2203 "mdbcomp.prim_data.c"
                          mdbcomp__prim_data__succeeded = (strcmp(mdbcomp__prim_data__V_18_18, mdbcomp__prim_data__V_24_24) == 0);
#line 86 "prim_data.m"
                          if (mdbcomp__prim_data__succeeded)
#line 86 "prim_data.m"
                            {
#line 2209 "mdbcomp.prim_data.c"
                              mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_19_19 == mdbcomp__prim_data__V_25_25);
#line 86 "prim_data.m"
                              if (mdbcomp__prim_data__succeeded)
#line 2213 "mdbcomp.prim_data.c"
                                mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_20_20 == mdbcomp__prim_data__V_26_26);
#line 86 "prim_data.m"
                            }
#line 86 "prim_data.m"
                        }
#line 86 "prim_data.m"
                    }
#line 86 "prim_data.m"
                }
#line 86 "prim_data.m"
            }
#line 86 "prim_data.m"
        }
#line 86 "prim_data.m"
    return mdbcomp__prim_data__succeeded;
#line 86 "prim_data.m"
  }
#line 86 "prim_data.m"
}

#line 26 "prim_data.m"
void MR_CALL 
mdbcomp__prim_data____Compare____pred_or_func_0_0(
#line 26 "prim_data.m"
  MR_Word * mdbcomp__prim_data__HeadVar__1_1,
#line 26 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2,
#line 26 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__3_3)
#line 26 "prim_data.m"
{
#line 26 "prim_data.m"
  {
#line 26 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 26 "prim_data.m"
    MR_Integer mdbcomp__prim_data__Cast_HeadVar1_4 = (MR_Integer) mdbcomp__prim_data__HeadVar__2_2;
#line 26 "prim_data.m"
    MR_Integer mdbcomp__prim_data__Cast_HeadVar2_5 = (MR_Integer) mdbcomp__prim_data__HeadVar__3_3;

#line 26 "prim_data.m"
    {
#line 26 "prim_data.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__prim_data__HeadVar__1_1, mdbcomp__prim_data__Cast_HeadVar1_4, mdbcomp__prim_data__Cast_HeadVar2_5);
#line 26 "prim_data.m"
      return;
    }
#line 26 "prim_data.m"
  }
#line 26 "prim_data.m"
}

#line 26 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data____Unify____pred_or_func_0_0(
#line 26 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_1,
#line 26 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2)
#line 26 "prim_data.m"
{
#line 2275 "mdbcomp.prim_data.c"
  {
#line 2277 "mdbcomp.prim_data.c"
    MR_bool mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__HeadVar__2_1 == mdbcomp__prim_data__HeadVar__2_2);

#line 2280 "mdbcomp.prim_data.c"
    return mdbcomp__prim_data__succeeded;
#line 2282 "mdbcomp.prim_data.c"
  }
#line 26 "prim_data.m"
}

#line 63 "prim_data.m"
void MR_CALL 
mdbcomp__prim_data____Compare____module_name_0_0(
#line 63 "prim_data.m"
  MR_Word * mdbcomp__prim_data__HeadVar__1_1,
#line 63 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2,
#line 63 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__3_3)
#line 63 "prim_data.m"
{
#line 63 "prim_data.m"
  {
#line 63 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 63 "prim_data.m"
    MR_Word mdbcomp__prim_data__Cast_HeadVar1_4 = mdbcomp__prim_data__HeadVar__2_2;
#line 63 "prim_data.m"
    MR_Word mdbcomp__prim_data__Cast_HeadVar2_5 = mdbcomp__prim_data__HeadVar__3_3;

#line 63 "prim_data.m"
    {
#line 63 "prim_data.m"
      mdbcomp__prim_data____Compare____sym_name_0_0(mdbcomp__prim_data__HeadVar__1_1, mdbcomp__prim_data__Cast_HeadVar1_4, mdbcomp__prim_data__Cast_HeadVar2_5);
#line 63 "prim_data.m"
      return;
    }
#line 63 "prim_data.m"
  }
#line 63 "prim_data.m"
}

#line 63 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data____Unify____module_name_0_0(
#line 63 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__1_1,
#line 63 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2)
#line 63 "prim_data.m"
{
#line 63 "prim_data.m"
  {
#line 63 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 63 "prim_data.m"
    MR_Word mdbcomp__prim_data__Cast_HeadVar1_3 = mdbcomp__prim_data__HeadVar__1_1;
#line 63 "prim_data.m"
    MR_Word mdbcomp__prim_data__Cast_HeadVar2_4 = mdbcomp__prim_data__HeadVar__2_2;

#line 63 "prim_data.m"
    {
#line 63 "prim_data.m"
      return mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(mdbcomp__prim_data__Cast_HeadVar1_3, mdbcomp__prim_data__Cast_HeadVar2_4);
    }
#line 63 "prim_data.m"
    return mdbcomp__prim_data__succeeded;
#line 63 "prim_data.m"
  }
#line 63 "prim_data.m"
}

#line 402 "prim_data.m"
static MR_Word MR_CALL 
mdbcomp__prim_data__get_ancestors_2_2_f_0(
#line 402 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__1_1,
#line 402 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2)
#line 402 "prim_data.m"
{
#line 404 "prim_data.m"
  while (MR_TRUE)
#line 404 "prim_data.m"
    {
#line 404 "prim_data.m"
      /* tailcall optimized into a loop */
#line 404 "prim_data.m"
      {
#line 404 "prim_data.m"
        MR_bool mdbcomp__prim_data__succeeded;
#line 404 "prim_data.m"
        MR_Word mdbcomp__prim_data__HeadVar__3_3;

#line 404 "prim_data.m"
        if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 405 "prim_data.m"
          {
#line 405 "prim_data.m"
            MR_Word mdbcomp__prim_data__Parent_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 0)));
#line 405 "prim_data.m"
            MR_Word mdbcomp__prim_data__V_9_9;
#line 405 "prim_data.m"
            MR_String mdbcomp__prim_data__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 1)));

#line 406 "prim_data.m"
            {
#line 406 "prim_data.m"
              mdbcomp__prim_data__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "prim_data.m"
              MR_hl_field(MR_mktag(1), mdbcomp__prim_data__V_9_9, 0) = ((MR_Box) (mdbcomp__prim_data__Parent_6));
#line 406 "prim_data.m"
              MR_hl_field(MR_mktag(1), mdbcomp__prim_data__V_9_9, 1) = ((MR_Box) (mdbcomp__prim_data__HeadVar__2_2));
#line 406 "prim_data.m"
            }
#line 406 "prim_data.m"
            /* direct tailcall eliminated */
#line 406 "prim_data.m"
            {
#line 406 "prim_data.m"
              MR_Word mdbcomp__prim_data__HeadVar__1__tmp_copy_1 = mdbcomp__prim_data__Parent_6;
#line 406 "prim_data.m"
              MR_Word mdbcomp__prim_data__HeadVar__2__tmp_copy_2 = mdbcomp__prim_data__V_9_9;

#line 406 "prim_data.m"
              mdbcomp__prim_data__HeadVar__2_2 = mdbcomp__prim_data__HeadVar__2__tmp_copy_2;
#line 406 "prim_data.m"
              mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__HeadVar__1__tmp_copy_1;
#line 406 "prim_data.m"
            }
#line 406 "prim_data.m"
            continue;
#line 405 "prim_data.m"
          }
#line 404 "prim_data.m"
        else
#line 404 "prim_data.m"
          mdbcomp__prim_data__HeadVar__3_3 = mdbcomp__prim_data__HeadVar__2_2;
#line 404 "prim_data.m"
        return mdbcomp__prim_data__HeadVar__3_3;
#line 404 "prim_data.m"
      }
#line 404 "prim_data.m"
      break;
#line 404 "prim_data.m"
    }
#line 402 "prim_data.m"
}

#line 386 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data__non_traced_mercury_builtin_module_1_p_0(
#line 386 "prim_data.m"
  MR_Word mdbcomp__prim_data__Module_2)
#line 386 "prim_data.m"
{
#line 628 "prim_data.m"
  {
#line 628 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 628 "prim_data.m"
    {
#line 628 "prim_data.m"
      mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(mdbcomp__prim_data__Module_2, (MR_Word) &mdbcomp__prim_data_scalar_common_1[4]);
    }
#line 628 "prim_data.m"
    if (!(mdbcomp__prim_data__succeeded))
#line 628 "prim_data.m"
      {
#line 629 "prim_data.m"
        {
#line 629 "prim_data.m"
          mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(mdbcomp__prim_data__Module_2, (MR_Word) &mdbcomp__prim_data_scalar_common_1[6]);
        }
#line 628 "prim_data.m"
        if (!(mdbcomp__prim_data__succeeded))
#line 628 "prim_data.m"
          {
#line 630 "prim_data.m"
            {
#line 630 "prim_data.m"
              mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(mdbcomp__prim_data__Module_2, (MR_Word) &mdbcomp__prim_data_scalar_common_1[7]);
            }
#line 628 "prim_data.m"
            if (!(mdbcomp__prim_data__succeeded))
#line 628 "prim_data.m"
              {
#line 631 "prim_data.m"
                {
#line 631 "prim_data.m"
                  mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(mdbcomp__prim_data__Module_2, (MR_Word) &mdbcomp__prim_data_scalar_common_1[8]);
                }
#line 628 "prim_data.m"
                if (!(mdbcomp__prim_data__succeeded))
#line 632 "prim_data.m"
                  {
#line 632 "prim_data.m"
                    {
#line 632 "prim_data.m"
                      return mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(mdbcomp__prim_data__Module_2, (MR_Word) &mdbcomp__prim_data_scalar_common_1[10]);
                    }
#line 632 "prim_data.m"
                  }
#line 628 "prim_data.m"
              }
#line 628 "prim_data.m"
          }
#line 628 "prim_data.m"
      }
#line 628 "prim_data.m"
    return mdbcomp__prim_data__succeeded;
#line 628 "prim_data.m"
  }
#line 386 "prim_data.m"
}

#line 382 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data__any_mercury_builtin_module_1_p_0(
#line 382 "prim_data.m"
  MR_Word mdbcomp__prim_data__Module_2)
#line 382 "prim_data.m"
{
#line 617 "prim_data.m"
  {
#line 617 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 617 "prim_data.m"
    {
#line 617 "prim_data.m"
      mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(mdbcomp__prim_data__Module_2, (MR_Word) &mdbcomp__prim_data_scalar_common_1[0]);
    }
#line 617 "prim_data.m"
    if (!(mdbcomp__prim_data__succeeded))
#line 617 "prim_data.m"
      {
#line 618 "prim_data.m"
        {
#line 618 "prim_data.m"
          mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(mdbcomp__prim_data__Module_2, (MR_Word) &mdbcomp__prim_data_scalar_common_1[1]);
        }
#line 617 "prim_data.m"
        if (!(mdbcomp__prim_data__succeeded))
#line 617 "prim_data.m"
          {
#line 619 "prim_data.m"
            {
#line 619 "prim_data.m"
              mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(mdbcomp__prim_data__Module_2, (MR_Word) &mdbcomp__prim_data_scalar_common_1[2]);
            }
#line 617 "prim_data.m"
            if (!(mdbcomp__prim_data__succeeded))
#line 617 "prim_data.m"
              {
#line 620 "prim_data.m"
                {
#line 620 "prim_data.m"
                  mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(mdbcomp__prim_data__Module_2, (MR_Word) &mdbcomp__prim_data_scalar_common_1[4]);
                }
#line 617 "prim_data.m"
                if (!(mdbcomp__prim_data__succeeded))
#line 617 "prim_data.m"
                  {
#line 621 "prim_data.m"
                    {
#line 621 "prim_data.m"
                      mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(mdbcomp__prim_data__Module_2, (MR_Word) &mdbcomp__prim_data_scalar_common_1[6]);
                    }
#line 617 "prim_data.m"
                    if (!(mdbcomp__prim_data__succeeded))
#line 617 "prim_data.m"
                      {
#line 622 "prim_data.m"
                        {
#line 622 "prim_data.m"
                          mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(mdbcomp__prim_data__Module_2, (MR_Word) &mdbcomp__prim_data_scalar_common_1[7]);
                        }
#line 617 "prim_data.m"
                        if (!(mdbcomp__prim_data__succeeded))
#line 617 "prim_data.m"
                          {
#line 623 "prim_data.m"
                            {
#line 623 "prim_data.m"
                              mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(mdbcomp__prim_data__Module_2, (MR_Word) &mdbcomp__prim_data_scalar_common_1[8]);
                            }
#line 617 "prim_data.m"
                            if (!(mdbcomp__prim_data__succeeded))
#line 624 "prim_data.m"
                              {
#line 624 "prim_data.m"
                                {
#line 624 "prim_data.m"
                                  return mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(mdbcomp__prim_data__Module_2, (MR_Word) &mdbcomp__prim_data_scalar_common_1[10]);
                                }
#line 624 "prim_data.m"
                              }
#line 617 "prim_data.m"
                          }
#line 617 "prim_data.m"
                      }
#line 617 "prim_data.m"
                  }
#line 617 "prim_data.m"
              }
#line 617 "prim_data.m"
          }
#line 617 "prim_data.m"
      }
#line 617 "prim_data.m"
    return mdbcomp__prim_data__succeeded;
#line 617 "prim_data.m"
  }
#line 382 "prim_data.m"
}

#line 377 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data__is_std_lib_module_name_2_p_0(
#line 377 "prim_data.m"
  MR_Word mdbcomp__prim_data__ModuleName_3,
#line 377 "prim_data.m"
  MR_String * mdbcomp__prim_data__Name_4)
#line 377 "prim_data.m"
{
#line 606 "prim_data.m"
  {
#line 606 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 437 "prim_data.m"
    {
#line 437 "prim_data.m"
      *mdbcomp__prim_data__Name_4 = mdbcomp__prim_data__sym_name_to_string_sep_2_f_0(mdbcomp__prim_data__ModuleName_3, (MR_String) ".");
    }
#line 610 "prim_data.m"
    {
#line 610 "prim_data.m"
      return mdbcomp__prim_data__succeeded = mercury__library__mercury_std_library_module_1_p_0(*mdbcomp__prim_data__Name_4);
    }
#line 606 "prim_data.m"
    return mdbcomp__prim_data__succeeded;
#line 606 "prim_data.m"
  }
#line 377 "prim_data.m"
}

#line 375 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__mercury_std_lib_module_name_1_f_0(
#line 375 "prim_data.m"
  MR_Word mdbcomp__prim_data__ModuleName_3)
#line 375 "prim_data.m"
{
#line 612 "prim_data.m"
  {
#line 612 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 612 "prim_data.m"
    MR_Word mdbcomp__prim_data__ModuleName_2 = mdbcomp__prim_data__ModuleName_3;

#line 612 "prim_data.m"
    return mdbcomp__prim_data__ModuleName_2;
#line 612 "prim_data.m"
  }
#line 375 "prim_data.m"
}

#line 370 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__mercury_io_module_0_f_0(void)
#line 370 "prim_data.m"
{
#line 604 "prim_data.m"
  {
#line 604 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 604 "prim_data.m"
    return (MR_Word) &mdbcomp__prim_data_scalar_common_1[15];
#line 604 "prim_data.m"
  }
#line 370 "prim_data.m"
}

#line 366 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__mercury_string_module_0_f_0(void)
#line 366 "prim_data.m"
{
#line 603 "prim_data.m"
  {
#line 603 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 603 "prim_data.m"
    return (MR_Word) &mdbcomp__prim_data_scalar_common_1[14];
#line 603 "prim_data.m"
  }
#line 366 "prim_data.m"
}

#line 362 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__mercury_list_module_0_f_0(void)
#line 362 "prim_data.m"
{
#line 602 "prim_data.m"
  {
#line 602 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 602 "prim_data.m"
    return (MR_Word) &mdbcomp__prim_data_scalar_common_1[13];
#line 602 "prim_data.m"
  }
#line 362 "prim_data.m"
}

#line 358 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__mercury_ssdb_builtin_module_0_f_0(void)
#line 358 "prim_data.m"
{
#line 601 "prim_data.m"
  {
#line 601 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 601 "prim_data.m"
    return (MR_Word) &mdbcomp__prim_data_scalar_common_1[10];
#line 601 "prim_data.m"
  }
#line 358 "prim_data.m"
}

#line 353 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__mercury_rtti_implementation_builtin_module_0_f_0(void)
#line 353 "prim_data.m"
{
#line 599 "prim_data.m"
  {
#line 599 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 599 "prim_data.m"
    return (MR_Word) &mdbcomp__prim_data_scalar_common_1[9];
#line 599 "prim_data.m"
  }
#line 353 "prim_data.m"
}

#line 348 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__mercury_par_builtin_module_0_f_0(void)
#line 348 "prim_data.m"
{
#line 598 "prim_data.m"
  {
#line 598 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 598 "prim_data.m"
    return (MR_Word) &mdbcomp__prim_data_scalar_common_1[8];
#line 598 "prim_data.m"
  }
#line 348 "prim_data.m"
}

#line 343 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_f_0(void)
#line 343 "prim_data.m"
{
#line 597 "prim_data.m"
  {
#line 597 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 597 "prim_data.m"
    return (MR_Word) &mdbcomp__prim_data_scalar_common_1[7];
#line 597 "prim_data.m"
  }
#line 343 "prim_data.m"
}

#line 337 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__mercury_profiling_builtin_module_0_f_0(void)
#line 337 "prim_data.m"
{
#line 596 "prim_data.m"
  {
#line 596 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 596 "prim_data.m"
    return (MR_Word) &mdbcomp__prim_data_scalar_common_1[6];
#line 596 "prim_data.m"
  }
#line 337 "prim_data.m"
}

#line 331 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__mercury_table_statistics_module_0_f_0(void)
#line 331 "prim_data.m"
{
#line 595 "prim_data.m"
  {
#line 595 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 595 "prim_data.m"
    return (MR_Word) &mdbcomp__prim_data_scalar_common_1[5];
#line 595 "prim_data.m"
  }
#line 331 "prim_data.m"
}

#line 323 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__mercury_table_builtin_module_0_f_0(void)
#line 323 "prim_data.m"
{
#line 594 "prim_data.m"
  {
#line 594 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 594 "prim_data.m"
    return (MR_Word) &mdbcomp__prim_data_scalar_common_1[4];
#line 594 "prim_data.m"
  }
#line 323 "prim_data.m"
}

#line 316 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__mercury_univ_module_0_f_0(void)
#line 316 "prim_data.m"
{
#line 593 "prim_data.m"
  {
#line 593 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 593 "prim_data.m"
    return (MR_Word) &mdbcomp__prim_data_scalar_common_1[12];
#line 593 "prim_data.m"
  }
#line 316 "prim_data.m"
}

#line 311 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__mercury_exception_module_0_f_0(void)
#line 311 "prim_data.m"
{
#line 591 "prim_data.m"
  {
#line 591 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 591 "prim_data.m"
    return (MR_Word) &mdbcomp__prim_data_scalar_common_1[11];
#line 591 "prim_data.m"
  }
#line 311 "prim_data.m"
}

#line 306 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0(void)
#line 306 "prim_data.m"
{
#line 589 "prim_data.m"
  {
#line 589 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 589 "prim_data.m"
    return (MR_Word) &mdbcomp__prim_data_scalar_common_1[3];
#line 589 "prim_data.m"
  }
#line 306 "prim_data.m"
}

#line 300 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__mercury_region_builtin_module_0_f_0(void)
#line 300 "prim_data.m"
{
#line 588 "prim_data.m"
  {
#line 588 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 588 "prim_data.m"
    return (MR_Word) &mdbcomp__prim_data_scalar_common_1[2];
#line 588 "prim_data.m"
  }
#line 300 "prim_data.m"
}

#line 294 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__mercury_private_builtin_module_0_f_0(void)
#line 294 "prim_data.m"
{
#line 587 "prim_data.m"
  {
#line 587 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 587 "prim_data.m"
    return (MR_Word) &mdbcomp__prim_data_scalar_common_1[1];
#line 587 "prim_data.m"
  }
#line 294 "prim_data.m"
}

#line 286 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__mercury_public_builtin_module_0_f_0(void)
#line 286 "prim_data.m"
{
#line 586 "prim_data.m"
  {
#line 586 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 586 "prim_data.m"
    return (MR_Word) &mdbcomp__prim_data_scalar_common_1[0];
#line 586 "prim_data.m"
  }
#line 286 "prim_data.m"
}

#line 279 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__all_builtin_modules_0_f_0(void)
#line 279 "prim_data.m"
{
#line 568 "prim_data.m"
  {
#line 568 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 568 "prim_data.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__prim_data_scalar_common_2[10]);
#line 568 "prim_data.m"
  }
#line 279 "prim_data.m"
}

#line 272 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data__strip_outermost_qualifier_3_p_0(
#line 272 "prim_data.m"
  MR_Word mdbcomp__prim_data__SymName0_4,
#line 272 "prim_data.m"
  MR_String * mdbcomp__prim_data__OuterModuleName_5,
#line 272 "prim_data.m"
  MR_Word * mdbcomp__prim_data__SymName_6)
#line 272 "prim_data.m"
{
#line 536 "prim_data.m"
  {
#line 536 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded = ((MR_tag((MR_Word) mdbcomp__prim_data__SymName0_4)) == (MR_mktag((MR_Integer) 1)));
#line 536 "prim_data.m"
    MR_Word mdbcomp__prim_data__ModuleSymName0_7;
#line 536 "prim_data.m"
    MR_String mdbcomp__prim_data__Name_8;

#line 537 "prim_data.m"
    if (mdbcomp__prim_data__succeeded)
#line 537 "prim_data.m"
      {
#line 537 "prim_data.m"
        mdbcomp__prim_data__ModuleSymName0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName0_4, (MR_Integer) 0)));
#line 537 "prim_data.m"
        mdbcomp__prim_data__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName0_4, (MR_Integer) 1)));
#line 541 "prim_data.m"
        if (((MR_tag((MR_Word) mdbcomp__prim_data__ModuleSymName0_7)) == (MR_mktag((MR_Integer) 1))))
#line 542 "prim_data.m"
          {
#line 542 "prim_data.m"
            MR_Word mdbcomp__prim_data__ModuleSymName_11;

#line 543 "prim_data.m"
            {
#line 543 "prim_data.m"
              mdbcomp__prim_data__succeeded = mdbcomp__prim_data__strip_outermost_qualifier_3_p_0(mdbcomp__prim_data__ModuleSymName0_7, mdbcomp__prim_data__OuterModuleName_5, &mdbcomp__prim_data__ModuleSymName_11);
            }
#line 542 "prim_data.m"
            if (mdbcomp__prim_data__succeeded)
#line 542 "prim_data.m"
              {
#line 545 "prim_data.m"
                {
#line 545 "prim_data.m"
                  MR_Word base;
#line 545 "prim_data.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "prim_data.m"
                  *mdbcomp__prim_data__SymName_6 = base;
#line 545 "prim_data.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__prim_data__ModuleSymName_11));
#line 545 "prim_data.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdbcomp__prim_data__Name_8));
#line 545 "prim_data.m"
                }
#line 545 "prim_data.m"
                mdbcomp__prim_data__succeeded = MR_TRUE;
#line 542 "prim_data.m"
              }
#line 542 "prim_data.m"
          }
#line 541 "prim_data.m"
        else
#line 539 "prim_data.m"
          {
#line 539 "prim_data.m"
            *mdbcomp__prim_data__OuterModuleName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__ModuleSymName0_7, (MR_Integer) 0)));
#line 540 "prim_data.m"
            {
#line 540 "prim_data.m"
              MR_Word base;
#line 540 "prim_data.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 540 "prim_data.m"
              *mdbcomp__prim_data__SymName_6 = base;
#line 540 "prim_data.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__prim_data__Name_8));
#line 540 "prim_data.m"
            }
#line 539 "prim_data.m"
            mdbcomp__prim_data__succeeded = MR_TRUE;
#line 539 "prim_data.m"
          }
#line 537 "prim_data.m"
      }
#line 536 "prim_data.m"
    return mdbcomp__prim_data__succeeded;
#line 536 "prim_data.m"
  }
#line 272 "prim_data.m"
}

#line 268 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__add_outermost_qualifier_2_f_0(
#line 268 "prim_data.m"
  MR_String mdbcomp__prim_data__ModuleName_4,
#line 268 "prim_data.m"
  MR_Word mdbcomp__prim_data__SymName0_5)
#line 268 "prim_data.m"
{
#line 528 "prim_data.m"
  {
#line 528 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 528 "prim_data.m"
    MR_Word mdbcomp__prim_data__SymName_6;

#line 528 "prim_data.m"
    if (((MR_tag((MR_Word) mdbcomp__prim_data__SymName0_5)) == (MR_mktag((MR_Integer) 1))))
#line 531 "prim_data.m"
      {
#line 531 "prim_data.m"
        MR_Word mdbcomp__prim_data__ModuleSymName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName0_5, (MR_Integer) 0)));
#line 531 "prim_data.m"
        MR_Word mdbcomp__prim_data__ModuleSymName_9;
#line 531 "prim_data.m"
        MR_String mdbcomp__prim_data__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName0_5, (MR_Integer) 1)));

#line 532 "prim_data.m"
        {
#line 532 "prim_data.m"
          mdbcomp__prim_data__ModuleSymName_9 = mdbcomp__prim_data__add_outermost_qualifier_2_f_0(mdbcomp__prim_data__ModuleName_4, mdbcomp__prim_data__ModuleSymName0_8);
        }
#line 533 "prim_data.m"
        {
#line 533 "prim_data.m"
          mdbcomp__prim_data__SymName_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "prim_data.m"
          MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName_6, 0) = ((MR_Box) (mdbcomp__prim_data__ModuleSymName_9));
#line 533 "prim_data.m"
          MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName_6, 1) = ((MR_Box) (mdbcomp__prim_data__Name_11));
#line 533 "prim_data.m"
        }
#line 531 "prim_data.m"
      }
#line 528 "prim_data.m"
    else
#line 528 "prim_data.m"
      {
#line 528 "prim_data.m"
        MR_String mdbcomp__prim_data__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__SymName0_5, (MR_Integer) 0)));
#line 528 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_10_10;

#line 529 "prim_data.m"
        {
#line 529 "prim_data.m"
          mdbcomp__prim_data__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 529 "prim_data.m"
          MR_hl_field(MR_mktag(0), mdbcomp__prim_data__V_10_10, 0) = ((MR_Box) (mdbcomp__prim_data__ModuleName_4));
#line 529 "prim_data.m"
        }
#line 529 "prim_data.m"
        {
#line 529 "prim_data.m"
          mdbcomp__prim_data__SymName_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "prim_data.m"
          MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName_6, 0) = ((MR_Box) (mdbcomp__prim_data__V_10_10));
#line 529 "prim_data.m"
          MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName_6, 1) = ((MR_Box) (mdbcomp__prim_data__Name_7));
#line 529 "prim_data.m"
        }
#line 528 "prim_data.m"
      }
#line 528 "prim_data.m"
    return mdbcomp__prim_data__SymName_6;
#line 528 "prim_data.m"
  }
#line 268 "prim_data.m"
}

#line 261 "prim_data.m"
MR_String MR_CALL 
mdbcomp__prim_data__outermost_qualifier_1_f_0(
#line 261 "prim_data.m"
  MR_Word mdbcomp__prim_data__SymName_3)
#line 261 "prim_data.m"
{
#line 520 "prim_data.m"
  while (MR_TRUE)
#line 520 "prim_data.m"
    {
#line 520 "prim_data.m"
      /* tailcall optimized into a loop */
#line 520 "prim_data.m"
      {
#line 520 "prim_data.m"
        MR_bool mdbcomp__prim_data__succeeded;
#line 520 "prim_data.m"
        MR_String mdbcomp__prim_data__Name_4;

#line 520 "prim_data.m"
        if (((MR_tag((MR_Word) mdbcomp__prim_data__SymName_3)) == (MR_mktag((MR_Integer) 1))))
#line 522 "prim_data.m"
          {
#line 522 "prim_data.m"
            MR_Word mdbcomp__prim_data__ModuleSymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName_3, (MR_Integer) 0)));
#line 522 "prim_data.m"
            MR_String mdbcomp__prim_data__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName_3, (MR_Integer) 1)));

#line 523 "prim_data.m"
            /* direct tailcall eliminated */
#line 523 "prim_data.m"
            {
#line 523 "prim_data.m"
              MR_Word mdbcomp__prim_data__SymName__tmp_copy_3 = mdbcomp__prim_data__ModuleSymName_5;

#line 523 "prim_data.m"
              mdbcomp__prim_data__SymName_3 = mdbcomp__prim_data__SymName__tmp_copy_3;
#line 523 "prim_data.m"
            }
#line 523 "prim_data.m"
            continue;
#line 522 "prim_data.m"
          }
#line 520 "prim_data.m"
        else
#line 520 "prim_data.m"
          mdbcomp__prim_data__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__SymName_3, (MR_Integer) 0)));
#line 520 "prim_data.m"
        return mdbcomp__prim_data__Name_4;
#line 520 "prim_data.m"
      }
#line 520 "prim_data.m"
      break;
#line 520 "prim_data.m"
    }
#line 261 "prim_data.m"
}

#line 257 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__transform_sym_base_name_2_f_0(
#line 257 "prim_data.m"
  MR_Word mdbcomp__prim_data__TransformFunc_4,
#line 257 "prim_data.m"
  MR_Word mdbcomp__prim_data__SymName0_5)
#line 257 "prim_data.m"
{
#line 511 "prim_data.m"
  {
#line 511 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 511 "prim_data.m"
    MR_Word mdbcomp__prim_data__SymName_6;

#line 511 "prim_data.m"
    if (((MR_tag((MR_Word) mdbcomp__prim_data__SymName0_5)) == (MR_mktag((MR_Integer) 1))))
#line 514 "prim_data.m"
      {
#line 514 "prim_data.m"
        MR_Word mdbcomp__prim_data__Module_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName0_5, (MR_Integer) 0)));
#line 514 "prim_data.m"
        MR_String mdbcomp__prim_data__V_9_9;
#line 514 "prim_data.m"
        MR_String mdbcomp__prim_data__Name0_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName0_5, (MR_Integer) 1)));
#line 515 "prim_data.m"
        MR_Box MR_CALL (* mdbcomp__prim_data__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__TransformFunc_4, (MR_Integer) 1)));
#line 515 "prim_data.m"
        MR_Box mdbcomp__prim_data__conv1_V_9_9;

#line 515 "prim_data.m"
        {
#line 515 "prim_data.m"
          mdbcomp__prim_data__conv1_V_9_9 = mdbcomp__prim_data__func_0(((MR_Box) mdbcomp__prim_data__TransformFunc_4), ((MR_Box) (mdbcomp__prim_data__Name0_11)));
        }
#line 515 "prim_data.m"
        mdbcomp__prim_data__V_9_9 = ((MR_String) mdbcomp__prim_data__conv1_V_9_9);
#line 515 "prim_data.m"
        {
#line 515 "prim_data.m"
          mdbcomp__prim_data__SymName_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "prim_data.m"
          MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName_6, 0) = ((MR_Box) (mdbcomp__prim_data__Module_8));
#line 515 "prim_data.m"
          MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName_6, 1) = ((MR_Box) (mdbcomp__prim_data__V_9_9));
#line 515 "prim_data.m"
        }
#line 514 "prim_data.m"
      }
#line 511 "prim_data.m"
    else
#line 511 "prim_data.m"
      {
#line 511 "prim_data.m"
        MR_String mdbcomp__prim_data__Name0_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__SymName0_5, (MR_Integer) 0)));
#line 511 "prim_data.m"
        MR_String mdbcomp__prim_data__V_10_10;
#line 512 "prim_data.m"
        MR_Box MR_CALL (* mdbcomp__prim_data__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__TransformFunc_4, (MR_Integer) 1)));
#line 512 "prim_data.m"
        MR_Box mdbcomp__prim_data__conv3_V_10_10;

#line 512 "prim_data.m"
        {
#line 512 "prim_data.m"
          mdbcomp__prim_data__conv3_V_10_10 = mdbcomp__prim_data__func_2(((MR_Box) mdbcomp__prim_data__TransformFunc_4), ((MR_Box) (mdbcomp__prim_data__Name0_7)));
        }
#line 512 "prim_data.m"
        mdbcomp__prim_data__V_10_10 = ((MR_String) mdbcomp__prim_data__conv3_V_10_10);
#line 512 "prim_data.m"
        {
#line 512 "prim_data.m"
          mdbcomp__prim_data__SymName_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 512 "prim_data.m"
          MR_hl_field(MR_mktag(0), mdbcomp__prim_data__SymName_6, 0) = ((MR_Box) (mdbcomp__prim_data__V_10_10));
#line 512 "prim_data.m"
        }
#line 511 "prim_data.m"
      }
#line 511 "prim_data.m"
    return mdbcomp__prim_data__SymName_6;
#line 511 "prim_data.m"
  }
#line 257 "prim_data.m"
}

#line 249 "prim_data.m"
void MR_CALL 
mdbcomp__prim_data__add_sym_name_suffix_3_p_0(
#line 249 "prim_data.m"
  MR_Word mdbcomp__prim_data__SymName0_4,
#line 249 "prim_data.m"
  MR_String mdbcomp__prim_data__Suffix_5,
#line 249 "prim_data.m"
  MR_Word * mdbcomp__prim_data__SymName_6)
#line 249 "prim_data.m"
{
#line 500 "prim_data.m"
  {
#line 500 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 500 "prim_data.m"
    if (((MR_tag((MR_Word) mdbcomp__prim_data__SymName0_4)) == (MR_mktag((MR_Integer) 1))))
#line 504 "prim_data.m"
      {
#line 504 "prim_data.m"
        MR_Word mdbcomp__prim_data__Module_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName0_4, (MR_Integer) 0)));
#line 504 "prim_data.m"
        MR_String mdbcomp__prim_data__Name0_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName0_4, (MR_Integer) 1)));
#line 504 "prim_data.m"
        MR_String mdbcomp__prim_data__Name_11;

#line 505 "prim_data.m"
        {
#line 505 "prim_data.m"
          mercury__string__append_3_p_2(mdbcomp__prim_data__Name0_10, mdbcomp__prim_data__Suffix_5, &mdbcomp__prim_data__Name_11);
        }
#line 506 "prim_data.m"
        {
#line 506 "prim_data.m"
          MR_Word base;
#line 506 "prim_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 506 "prim_data.m"
          *mdbcomp__prim_data__SymName_6 = base;
#line 506 "prim_data.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__prim_data__Module_9));
#line 506 "prim_data.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdbcomp__prim_data__Name_11));
#line 506 "prim_data.m"
        }
#line 504 "prim_data.m"
      }
#line 500 "prim_data.m"
    else
#line 500 "prim_data.m"
      {
#line 500 "prim_data.m"
        MR_String mdbcomp__prim_data__Name0_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__SymName0_4, (MR_Integer) 0)));
#line 500 "prim_data.m"
        MR_String mdbcomp__prim_data__Name_8;

#line 501 "prim_data.m"
        {
#line 501 "prim_data.m"
          mercury__string__append_3_p_2(mdbcomp__prim_data__Name0_7, mdbcomp__prim_data__Suffix_5, &mdbcomp__prim_data__Name_8);
        }
#line 502 "prim_data.m"
        {
#line 502 "prim_data.m"
          MR_Word base;
#line 502 "prim_data.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 502 "prim_data.m"
          *mdbcomp__prim_data__SymName_6 = base;
#line 502 "prim_data.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__prim_data__Name_8));
#line 502 "prim_data.m"
        }
#line 500 "prim_data.m"
      }
#line 500 "prim_data.m"
  }
#line 249 "prim_data.m"
}

#line 240 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data__remove_sym_name_suffix_3_p_0(
#line 240 "prim_data.m"
  MR_Word mdbcomp__prim_data__SymName0_4,
#line 240 "prim_data.m"
  MR_String mdbcomp__prim_data__Suffix_5,
#line 240 "prim_data.m"
  MR_Word * mdbcomp__prim_data__SymName_6)
#line 240 "prim_data.m"
{
#line 489 "prim_data.m"
  {
#line 489 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 489 "prim_data.m"
    if (((MR_tag((MR_Word) mdbcomp__prim_data__SymName0_4)) == (MR_mktag((MR_Integer) 1))))
#line 493 "prim_data.m"
      {
#line 493 "prim_data.m"
        MR_Word mdbcomp__prim_data__Module_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName0_4, (MR_Integer) 0)));
#line 493 "prim_data.m"
        MR_String mdbcomp__prim_data__Name0_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName0_4, (MR_Integer) 1)));
#line 493 "prim_data.m"
        MR_String mdbcomp__prim_data__Name_11;

#line 494 "prim_data.m"
        {
#line 494 "prim_data.m"
          mdbcomp__prim_data__succeeded = mercury__string__remove_suffix_3_p_0(mdbcomp__prim_data__Name0_10, mdbcomp__prim_data__Suffix_5, &mdbcomp__prim_data__Name_11);
        }
#line 493 "prim_data.m"
        if (mdbcomp__prim_data__succeeded)
#line 493 "prim_data.m"
          {
#line 495 "prim_data.m"
            {
#line 495 "prim_data.m"
              MR_Word base;
#line 495 "prim_data.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "prim_data.m"
              *mdbcomp__prim_data__SymName_6 = base;
#line 495 "prim_data.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__prim_data__Module_9));
#line 495 "prim_data.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdbcomp__prim_data__Name_11));
#line 495 "prim_data.m"
            }
#line 495 "prim_data.m"
            mdbcomp__prim_data__succeeded = MR_TRUE;
#line 493 "prim_data.m"
          }
#line 493 "prim_data.m"
      }
#line 489 "prim_data.m"
    else
#line 489 "prim_data.m"
      {
#line 489 "prim_data.m"
        MR_String mdbcomp__prim_data__Name0_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__SymName0_4, (MR_Integer) 0)));
#line 489 "prim_data.m"
        MR_String mdbcomp__prim_data__Name_8;

#line 490 "prim_data.m"
        {
#line 490 "prim_data.m"
          mdbcomp__prim_data__succeeded = mercury__string__remove_suffix_3_p_0(mdbcomp__prim_data__Name0_7, mdbcomp__prim_data__Suffix_5, &mdbcomp__prim_data__Name_8);
        }
#line 489 "prim_data.m"
        if (mdbcomp__prim_data__succeeded)
#line 489 "prim_data.m"
          {
#line 491 "prim_data.m"
            {
#line 491 "prim_data.m"
              MR_Word base;
#line 491 "prim_data.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 491 "prim_data.m"
              *mdbcomp__prim_data__SymName_6 = base;
#line 491 "prim_data.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__prim_data__Name_8));
#line 491 "prim_data.m"
            }
#line 491 "prim_data.m"
            mdbcomp__prim_data__succeeded = MR_TRUE;
#line 489 "prim_data.m"
          }
#line 489 "prim_data.m"
      }
#line 489 "prim_data.m"
    return mdbcomp__prim_data__succeeded;
#line 489 "prim_data.m"
  }
#line 240 "prim_data.m"
}

#line 231 "prim_data.m"
void MR_CALL 
mdbcomp__prim_data__remove_sym_name_prefix_3_p_1(
#line 231 "prim_data.m"
  MR_Word * mdbcomp__prim_data__SymName0_4,
#line 231 "prim_data.m"
  MR_String mdbcomp__prim_data__Prefix_5,
#line 231 "prim_data.m"
  MR_Word mdbcomp__prim_data__SymName_6)
#line 231 "prim_data.m"
{
#line 478 "prim_data.m"
  {
#line 478 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 478 "prim_data.m"
    if (((MR_tag((MR_Word) mdbcomp__prim_data__SymName_6)) == (MR_mktag((MR_Integer) 1))))
#line 482 "prim_data.m"
      {
#line 482 "prim_data.m"
        MR_Word mdbcomp__prim_data__Module_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName_6, (MR_Integer) 0)));
#line 482 "prim_data.m"
        MR_String mdbcomp__prim_data__Name0_10;
#line 482 "prim_data.m"
        MR_String mdbcomp__prim_data__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName_6, (MR_Integer) 1)));

#line 483 "prim_data.m"
        {
#line 483 "prim_data.m"
          mercury__string__append_3_p_2(mdbcomp__prim_data__Prefix_5, mdbcomp__prim_data__Name_11, &mdbcomp__prim_data__Name0_10);
        }
#line 482 "prim_data.m"
        {
#line 482 "prim_data.m"
          MR_Word base;
#line 482 "prim_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "prim_data.m"
          *mdbcomp__prim_data__SymName0_4 = base;
#line 482 "prim_data.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__prim_data__Module_9));
#line 482 "prim_data.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdbcomp__prim_data__Name0_10));
#line 482 "prim_data.m"
        }
#line 482 "prim_data.m"
      }
#line 478 "prim_data.m"
    else
#line 478 "prim_data.m"
      {
#line 478 "prim_data.m"
        MR_String mdbcomp__prim_data__Name0_7;
#line 478 "prim_data.m"
        MR_String mdbcomp__prim_data__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__SymName_6, (MR_Integer) 0)));

#line 479 "prim_data.m"
        {
#line 479 "prim_data.m"
          mercury__string__append_3_p_2(mdbcomp__prim_data__Prefix_5, mdbcomp__prim_data__Name_8, &mdbcomp__prim_data__Name0_7);
        }
#line 478 "prim_data.m"
        {
#line 478 "prim_data.m"
          MR_Word base;
#line 478 "prim_data.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 478 "prim_data.m"
          *mdbcomp__prim_data__SymName0_4 = base;
#line 478 "prim_data.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__prim_data__Name0_7));
#line 478 "prim_data.m"
        }
#line 478 "prim_data.m"
      }
#line 478 "prim_data.m"
  }
#line 231 "prim_data.m"
}

#line 230 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data__remove_sym_name_prefix_3_p_0(
#line 230 "prim_data.m"
  MR_Word mdbcomp__prim_data__SymName0_4,
#line 230 "prim_data.m"
  MR_String mdbcomp__prim_data__Prefix_5,
#line 230 "prim_data.m"
  MR_Word * mdbcomp__prim_data__SymName_6)
#line 230 "prim_data.m"
{
#line 478 "prim_data.m"
  {
#line 478 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 478 "prim_data.m"
    if (((MR_tag((MR_Word) mdbcomp__prim_data__SymName0_4)) == (MR_mktag((MR_Integer) 1))))
#line 482 "prim_data.m"
      {
#line 482 "prim_data.m"
        MR_Word mdbcomp__prim_data__Module_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName0_4, (MR_Integer) 0)));
#line 482 "prim_data.m"
        MR_String mdbcomp__prim_data__Name0_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName0_4, (MR_Integer) 1)));
#line 482 "prim_data.m"
        MR_String mdbcomp__prim_data__Name_11;

#line 483 "prim_data.m"
        {
#line 483 "prim_data.m"
          mdbcomp__prim_data__succeeded = mercury__string__append_3_p_1(mdbcomp__prim_data__Prefix_5, &mdbcomp__prim_data__Name_11, mdbcomp__prim_data__Name0_10);
        }
#line 482 "prim_data.m"
        if (mdbcomp__prim_data__succeeded)
#line 482 "prim_data.m"
          {
#line 484 "prim_data.m"
            {
#line 484 "prim_data.m"
              MR_Word base;
#line 484 "prim_data.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "prim_data.m"
              *mdbcomp__prim_data__SymName_6 = base;
#line 484 "prim_data.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__prim_data__Module_9));
#line 484 "prim_data.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdbcomp__prim_data__Name_11));
#line 484 "prim_data.m"
            }
#line 484 "prim_data.m"
            mdbcomp__prim_data__succeeded = MR_TRUE;
#line 482 "prim_data.m"
          }
#line 482 "prim_data.m"
      }
#line 478 "prim_data.m"
    else
#line 478 "prim_data.m"
      {
#line 478 "prim_data.m"
        MR_String mdbcomp__prim_data__Name0_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__SymName0_4, (MR_Integer) 0)));
#line 478 "prim_data.m"
        MR_String mdbcomp__prim_data__Name_8;

#line 479 "prim_data.m"
        {
#line 479 "prim_data.m"
          mdbcomp__prim_data__succeeded = mercury__string__append_3_p_1(mdbcomp__prim_data__Prefix_5, &mdbcomp__prim_data__Name_8, mdbcomp__prim_data__Name0_7);
        }
#line 478 "prim_data.m"
        if (mdbcomp__prim_data__succeeded)
#line 478 "prim_data.m"
          {
#line 480 "prim_data.m"
            {
#line 480 "prim_data.m"
              MR_Word base;
#line 480 "prim_data.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 480 "prim_data.m"
              *mdbcomp__prim_data__SymName_6 = base;
#line 480 "prim_data.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__prim_data__Name_8));
#line 480 "prim_data.m"
            }
#line 480 "prim_data.m"
            mdbcomp__prim_data__succeeded = MR_TRUE;
#line 478 "prim_data.m"
          }
#line 478 "prim_data.m"
      }
#line 478 "prim_data.m"
    return mdbcomp__prim_data__succeeded;
#line 478 "prim_data.m"
  }
#line 230 "prim_data.m"
}

#line 220 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data__match_sym_name_2_p_0(
#line 220 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__1_1,
#line 220 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2)
#line 220 "prim_data.m"
{
#line 471 "prim_data.m"
  while (MR_TRUE)
#line 471 "prim_data.m"
    {
#line 471 "prim_data.m"
      /* tailcall optimized into a loop */
#line 471 "prim_data.m"
      {
#line 471 "prim_data.m"
        MR_bool mdbcomp__prim_data__succeeded;

#line 471 "prim_data.m"
        if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 471 "prim_data.m"
          {
#line 471 "prim_data.m"
            MR_Word mdbcomp__prim_data__Module1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 0)));
#line 471 "prim_data.m"
            MR_String mdbcomp__prim_data__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 1)));
#line 471 "prim_data.m"
            MR_Word mdbcomp__prim_data__Module2_5;
#line 471 "prim_data.m"
            MR_String mdbcomp__prim_data__V_9_9;

#line 471 "prim_data.m"
            mdbcomp__prim_data__succeeded = ((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 471 "prim_data.m"
            if (mdbcomp__prim_data__succeeded)
#line 471 "prim_data.m"
              {
#line 471 "prim_data.m"
                mdbcomp__prim_data__Module2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 0)));
#line 471 "prim_data.m"
                mdbcomp__prim_data__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 1)));
#line 471 "prim_data.m"
                mdbcomp__prim_data__succeeded = (strcmp(mdbcomp__prim_data__Name_4, mdbcomp__prim_data__V_9_9) == 0);
#line 471 "prim_data.m"
                if (mdbcomp__prim_data__succeeded)
#line 472 "prim_data.m"
                  {
#line 472 "prim_data.m"
                    /* direct tailcall eliminated */
#line 472 "prim_data.m"
                    {
#line 472 "prim_data.m"
                      MR_Word mdbcomp__prim_data__HeadVar__1__tmp_copy_1 = mdbcomp__prim_data__Module1_3;
#line 472 "prim_data.m"
                      MR_Word mdbcomp__prim_data__HeadVar__2__tmp_copy_2 = mdbcomp__prim_data__Module2_5;

#line 472 "prim_data.m"
                      mdbcomp__prim_data__HeadVar__2_2 = mdbcomp__prim_data__HeadVar__2__tmp_copy_2;
#line 472 "prim_data.m"
                      mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__HeadVar__1__tmp_copy_1;
#line 472 "prim_data.m"
                    }
#line 472 "prim_data.m"
                    continue;
#line 472 "prim_data.m"
                  }
#line 471 "prim_data.m"
              }
#line 471 "prim_data.m"
          }
#line 471 "prim_data.m"
        else
#line 471 "prim_data.m"
          {
#line 471 "prim_data.m"
            MR_String mdbcomp__prim_data__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 0)));

#line 471 "prim_data.m"
            if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 474 "prim_data.m"
              {
#line 474 "prim_data.m"
                MR_String mdbcomp__prim_data__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 1)));
#line 474 "prim_data.m"
                MR_Word mdbcomp__prim_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 0)));

#line 474 "prim_data.m"
                mdbcomp__prim_data__succeeded = (strcmp(mdbcomp__prim_data__V_12_12, mdbcomp__prim_data__V_11_11) == 0);
#line 474 "prim_data.m"
              }
#line 471 "prim_data.m"
            else
#line 473 "prim_data.m"
              {
#line 473 "prim_data.m"
                MR_String mdbcomp__prim_data__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 0)));

#line 473 "prim_data.m"
                mdbcomp__prim_data__succeeded = (strcmp(mdbcomp__prim_data__V_12_12, mdbcomp__prim_data__V_10_10) == 0);
#line 473 "prim_data.m"
              }
#line 471 "prim_data.m"
          }
#line 471 "prim_data.m"
        return mdbcomp__prim_data__succeeded;
#line 471 "prim_data.m"
      }
#line 471 "prim_data.m"
      break;
#line 471 "prim_data.m"
    }
#line 220 "prim_data.m"
}

#line 212 "prim_data.m"
void MR_CALL 
mdbcomp__prim_data__sym_name_get_module_name_default_name_4_p_0(
#line 212 "prim_data.m"
  MR_Word mdbcomp__prim_data__SymName_5,
#line 212 "prim_data.m"
  MR_Word mdbcomp__prim_data__DefaultModuleName_6,
#line 212 "prim_data.m"
  MR_Word * mdbcomp__prim_data__ModuleName_7,
#line 212 "prim_data.m"
  MR_String * mdbcomp__prim_data__Name_8)
#line 212 "prim_data.m"
{
#line 460 "prim_data.m"
  {
#line 460 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 460 "prim_data.m"
    if (((MR_tag((MR_Word) mdbcomp__prim_data__SymName_5)) == (MR_mktag((MR_Integer) 1))))
#line 463 "prim_data.m"
      {
#line 463 "prim_data.m"
        *mdbcomp__prim_data__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName_5, (MR_Integer) 0)));
#line 463 "prim_data.m"
        *mdbcomp__prim_data__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName_5, (MR_Integer) 1)));
#line 463 "prim_data.m"
      }
#line 460 "prim_data.m"
    else
#line 460 "prim_data.m"
      {
#line 460 "prim_data.m"
        *mdbcomp__prim_data__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__SymName_5, (MR_Integer) 0)));
#line 461 "prim_data.m"
        *mdbcomp__prim_data__ModuleName_7 = mdbcomp__prim_data__DefaultModuleName_6;
#line 460 "prim_data.m"
      }
#line 460 "prim_data.m"
  }
#line 212 "prim_data.m"
}

#line 204 "prim_data.m"
void MR_CALL 
mdbcomp__prim_data__sym_name_get_module_name_default_3_p_0(
#line 204 "prim_data.m"
  MR_Word mdbcomp__prim_data__SymName_4,
#line 204 "prim_data.m"
  MR_Word mdbcomp__prim_data__DefaultModuleName_5,
#line 204 "prim_data.m"
  MR_Word * mdbcomp__prim_data__ModuleName_6)
#line 204 "prim_data.m"
{
#line 451 "prim_data.m"
  {
#line 451 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 451 "prim_data.m"
    if (((MR_tag((MR_Word) mdbcomp__prim_data__SymName_4)) == (MR_mktag((MR_Integer) 1))))
#line 454 "prim_data.m"
      {
#line 454 "prim_data.m"
        MR_String mdbcomp__prim_data__V_8_8;

#line 454 "prim_data.m"
        *mdbcomp__prim_data__ModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName_4, (MR_Integer) 0)));
#line 454 "prim_data.m"
        mdbcomp__prim_data__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__SymName_4, (MR_Integer) 1)));
#line 454 "prim_data.m"
      }
#line 451 "prim_data.m"
    else
#line 452 "prim_data.m"
      *mdbcomp__prim_data__ModuleName_6 = mdbcomp__prim_data__DefaultModuleName_5;
#line 451 "prim_data.m"
  }
#line 204 "prim_data.m"
}

#line 196 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data__sym_name_get_module_name_2_p_0(
#line 196 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__1_1,
#line 196 "prim_data.m"
  MR_Word * mdbcomp__prim_data__ModuleName_2)
#line 196 "prim_data.m"
{
#line 3823 "mdbcomp.prim_data.c"
  {
#line 3825 "mdbcomp.prim_data.c"
    MR_bool mdbcomp__prim_data__succeeded = ((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 3827 "mdbcomp.prim_data.c"
    MR_String mdbcomp__prim_data__V_8_8;

#line 3830 "mdbcomp.prim_data.c"
    if (mdbcomp__prim_data__succeeded)
#line 3832 "mdbcomp.prim_data.c"
      {
#line 3834 "mdbcomp.prim_data.c"
        *mdbcomp__prim_data__ModuleName_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 0)));
#line 3836 "mdbcomp.prim_data.c"
        mdbcomp__prim_data__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 1)));
#line 3838 "mdbcomp.prim_data.c"
      }
#line 3840 "mdbcomp.prim_data.c"
    return mdbcomp__prim_data__succeeded;
#line 3842 "mdbcomp.prim_data.c"
  }
#line 196 "prim_data.m"
}

#line 189 "prim_data.m"
MR_String MR_CALL 
mdbcomp__prim_data__unqualify_name_1_f_0(
#line 189 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__1_1)
#line 189 "prim_data.m"
{
#line 443 "prim_data.m"
  {
#line 443 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 443 "prim_data.m"
    MR_String mdbcomp__prim_data__Name_2;

#line 443 "prim_data.m"
    if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 444 "prim_data.m"
      {
#line 444 "prim_data.m"
        MR_Word mdbcomp__prim_data___ModuleName_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 0)));

#line 444 "prim_data.m"
        mdbcomp__prim_data__Name_2 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 1)));
#line 444 "prim_data.m"
      }
#line 443 "prim_data.m"
    else
#line 443 "prim_data.m"
      mdbcomp__prim_data__Name_2 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 0)));
#line 443 "prim_data.m"
    return mdbcomp__prim_data__Name_2;
#line 443 "prim_data.m"
  }
#line 189 "prim_data.m"
}

#line 185 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data__is_submodule_2_p_0(
#line 185 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__1_1,
#line 185 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2)
#line 185 "prim_data.m"
{
#line 550 "prim_data.m"
  while (MR_TRUE)
#line 550 "prim_data.m"
    {
#line 550 "prim_data.m"
      /* tailcall optimized into a loop */
#line 550 "prim_data.m"
      {
#line 550 "prim_data.m"
        MR_bool mdbcomp__prim_data__succeeded;

#line 550 "prim_data.m"
        {
#line 550 "prim_data.m"
          mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(mdbcomp__prim_data__HeadVar__2_2, mdbcomp__prim_data__HeadVar__1_1);
        }
#line 550 "prim_data.m"
        if (!(mdbcomp__prim_data__succeeded))
#line 551 "prim_data.m"
          {
#line 551 "prim_data.m"
            MR_Word mdbcomp__prim_data__SymNameA_4;
#line 551 "prim_data.m"
            MR_String mdbcomp__prim_data__V_5_5;

#line 551 "prim_data.m"
            mdbcomp__prim_data__succeeded = ((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 551 "prim_data.m"
            if (mdbcomp__prim_data__succeeded)
#line 551 "prim_data.m"
              {
#line 551 "prim_data.m"
                mdbcomp__prim_data__SymNameA_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 0)));
#line 551 "prim_data.m"
                mdbcomp__prim_data__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 1)));
#line 552 "prim_data.m"
                /* direct tailcall eliminated */
#line 552 "prim_data.m"
                {
#line 552 "prim_data.m"
                  MR_Word mdbcomp__prim_data__HeadVar__1__tmp_copy_1 = mdbcomp__prim_data__SymNameA_4;

#line 552 "prim_data.m"
                  mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__HeadVar__1__tmp_copy_1;
#line 552 "prim_data.m"
                }
#line 552 "prim_data.m"
                continue;
#line 551 "prim_data.m"
              }
#line 551 "prim_data.m"
          }
#line 550 "prim_data.m"
        return mdbcomp__prim_data__succeeded;
#line 550 "prim_data.m"
      }
#line 550 "prim_data.m"
      break;
#line 550 "prim_data.m"
    }
#line 185 "prim_data.m"
}

#line 178 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__sym_name_to_list_1_f_0(
#line 178 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__1_1)
#line 178 "prim_data.m"
{
#line 439 "prim_data.m"
  {
#line 439 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 439 "prim_data.m"
    MR_Word mdbcomp__prim_data__HeadVar__2_2;

#line 439 "prim_data.m"
    if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 441 "prim_data.m"
      {
#line 441 "prim_data.m"
        MR_Word mdbcomp__prim_data__Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 0)));
#line 441 "prim_data.m"
        MR_String mdbcomp__prim_data__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 1)));
#line 441 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_7_7;
#line 441 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_8_8;

#line 441 "prim_data.m"
        {
#line 441 "prim_data.m"
          mdbcomp__prim_data__V_7_7 = mdbcomp__prim_data__sym_name_to_list_1_f_0(mdbcomp__prim_data__Module_5);
        }
#line 441 "prim_data.m"
        {
#line 441 "prim_data.m"
          mdbcomp__prim_data__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "prim_data.m"
          MR_hl_field(MR_mktag(1), mdbcomp__prim_data__V_8_8, 0) = ((MR_Box) (mdbcomp__prim_data__Name_6));
#line 441 "prim_data.m"
          MR_hl_field(MR_mktag(1), mdbcomp__prim_data__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 441 "prim_data.m"
        }
#line 441 "prim_data.m"
        {
#line 441 "prim_data.m"
          mdbcomp__prim_data__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdbcomp__prim_data__V_7_7, mdbcomp__prim_data__V_8_8);
        }
#line 441 "prim_data.m"
      }
#line 439 "prim_data.m"
    else
#line 439 "prim_data.m"
      {
#line 439 "prim_data.m"
        MR_String mdbcomp__prim_data__Name_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 0)));

#line 439 "prim_data.m"
        {
#line 439 "prim_data.m"
          mdbcomp__prim_data__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "prim_data.m"
          MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, 0) = ((MR_Box) (mdbcomp__prim_data__Name_3));
#line 439 "prim_data.m"
          MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "prim_data.m"
        }
#line 439 "prim_data.m"
      }
#line 439 "prim_data.m"
    return mdbcomp__prim_data__HeadVar__2_2;
#line 439 "prim_data.m"
  }
#line 178 "prim_data.m"
}

#line 172 "prim_data.m"
MR_String MR_CALL 
mdbcomp__prim_data__sym_name_to_string_1_f_0(
#line 172 "prim_data.m"
  MR_Word mdbcomp__prim_data__SymName_3)
#line 172 "prim_data.m"
{
#line 437 "prim_data.m"
  {
#line 437 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 437 "prim_data.m"
    MR_String mdbcomp__prim_data__HeadVar__2_2;

#line 437 "prim_data.m"
    {
#line 437 "prim_data.m"
      return mdbcomp__prim_data__HeadVar__2_2 = mdbcomp__prim_data__sym_name_to_string_sep_2_f_0(mdbcomp__prim_data__SymName_3, (MR_String) ".");
    }
#line 437 "prim_data.m"
    return mdbcomp__prim_data__HeadVar__2_2;
#line 437 "prim_data.m"
  }
#line 172 "prim_data.m"
}

#line 165 "prim_data.m"
MR_String MR_CALL 
mdbcomp__prim_data__sym_name_to_string_sep_2_f_0(
#line 165 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__1_1,
#line 165 "prim_data.m"
  MR_String mdbcomp__prim_data__HeadVar__2_2)
#line 165 "prim_data.m"
{
#line 432 "prim_data.m"
  {
#line 432 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 432 "prim_data.m"
    MR_String mdbcomp__prim_data__HeadVar__3_3;

#line 432 "prim_data.m"
    if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 433 "prim_data.m"
      {
#line 433 "prim_data.m"
        MR_Word mdbcomp__prim_data__ModuleSym_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 0)));
#line 433 "prim_data.m"
        MR_String mdbcomp__prim_data__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 1)));
#line 433 "prim_data.m"
        MR_String mdbcomp__prim_data__ModuleName_10;
#line 433 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_11_11;
#line 433 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_12_12;
#line 433 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_13_13;

#line 434 "prim_data.m"
        {
#line 434 "prim_data.m"
          mdbcomp__prim_data__ModuleName_10 = mdbcomp__prim_data__sym_name_to_string_sep_2_f_0(mdbcomp__prim_data__ModuleSym_6, mdbcomp__prim_data__HeadVar__2_2);
        }
#line 435 "prim_data.m"
        {
#line 435 "prim_data.m"
          mdbcomp__prim_data__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "prim_data.m"
          MR_hl_field(MR_mktag(1), mdbcomp__prim_data__V_13_13, 0) = ((MR_Box) (mdbcomp__prim_data__Name_7));
#line 435 "prim_data.m"
          MR_hl_field(MR_mktag(1), mdbcomp__prim_data__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 435 "prim_data.m"
        }
#line 435 "prim_data.m"
        {
#line 435 "prim_data.m"
          mdbcomp__prim_data__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "prim_data.m"
          MR_hl_field(MR_mktag(1), mdbcomp__prim_data__V_12_12, 0) = ((MR_Box) (mdbcomp__prim_data__HeadVar__2_2));
#line 435 "prim_data.m"
          MR_hl_field(MR_mktag(1), mdbcomp__prim_data__V_12_12, 1) = ((MR_Box) (mdbcomp__prim_data__V_13_13));
#line 435 "prim_data.m"
        }
#line 435 "prim_data.m"
        {
#line 435 "prim_data.m"
          mdbcomp__prim_data__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "prim_data.m"
          MR_hl_field(MR_mktag(1), mdbcomp__prim_data__V_11_11, 0) = ((MR_Box) (mdbcomp__prim_data__ModuleName_10));
#line 435 "prim_data.m"
          MR_hl_field(MR_mktag(1), mdbcomp__prim_data__V_11_11, 1) = ((MR_Box) (mdbcomp__prim_data__V_12_12));
#line 435 "prim_data.m"
        }
#line 435 "prim_data.m"
        {
#line 435 "prim_data.m"
          mercury__string__append_list_2_p_0(mdbcomp__prim_data__V_11_11, &mdbcomp__prim_data__HeadVar__3_3);
        }
#line 433 "prim_data.m"
      }
#line 432 "prim_data.m"
    else
#line 432 "prim_data.m"
      mdbcomp__prim_data__HeadVar__3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 0)));
#line 432 "prim_data.m"
    return mdbcomp__prim_data__HeadVar__3_3;
#line 432 "prim_data.m"
  }
#line 165 "prim_data.m"
}

#line 158 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__string_to_sym_name_1_f_0(
#line 158 "prim_data.m"
  MR_String mdbcomp__prim_data__String_3)
#line 158 "prim_data.m"
{
#line 430 "prim_data.m"
  {
#line 430 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 430 "prim_data.m"
    MR_Word mdbcomp__prim_data__HeadVar__2_2;

#line 430 "prim_data.m"
    {
#line 430 "prim_data.m"
      return mdbcomp__prim_data__HeadVar__2_2 = mdbcomp__prim_data__string_to_sym_name_sep_2_f_0(mdbcomp__prim_data__String_3, (MR_String) ".");
    }
#line 430 "prim_data.m"
    return mdbcomp__prim_data__HeadVar__2_2;
#line 430 "prim_data.m"
  }
#line 158 "prim_data.m"
}

#line 151 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__string_to_sym_name_sep_2_f_0(
#line 151 "prim_data.m"
  MR_String mdbcomp__prim_data__String_4,
#line 151 "prim_data.m"
  MR_String mdbcomp__prim_data__ModuleSeparator_5)
#line 151 "prim_data.m"
{
#line 426 "prim_data.m"
  {
#line 426 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 426 "prim_data.m"
    MR_Word mdbcomp__prim_data__Result_6;
#line 426 "prim_data.m"
    MR_Integer mdbcomp__prim_data__LeftLength_7;
#line 416 "prim_data.m"
    MR_Integer mdbcomp__prim_data__V_14_14;

#line 416 "prim_data.m"
    {
#line 416 "prim_data.m"
      mdbcomp__prim_data__succeeded = mercury__string__sub_string_search_3_p_0(mdbcomp__prim_data__String_4, mdbcomp__prim_data__ModuleSeparator_5, &mdbcomp__prim_data__LeftLength_7);
    }
#line 416 "prim_data.m"
    if (mdbcomp__prim_data__succeeded)
#line 416 "prim_data.m"
      {
#line 417 "prim_data.m"
        mdbcomp__prim_data__V_14_14 = (MR_Integer) 0;
#line 417 "prim_data.m"
        mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__LeftLength_7 > mdbcomp__prim_data__V_14_14);
#line 416 "prim_data.m"
      }
#line 426 "prim_data.m"
    if (mdbcomp__prim_data__succeeded)
#line 419 "prim_data.m"
      {
#line 419 "prim_data.m"
        MR_String mdbcomp__prim_data__ModuleName_8;
#line 419 "prim_data.m"
        MR_Integer mdbcomp__prim_data__StringLength_9;
#line 419 "prim_data.m"
        MR_Integer mdbcomp__prim_data__SeparatorLength_10;
#line 419 "prim_data.m"
        MR_Integer mdbcomp__prim_data__RightLength_11;
#line 419 "prim_data.m"
        MR_String mdbcomp__prim_data__Name_12;
#line 419 "prim_data.m"
        MR_Word mdbcomp__prim_data__NameSym_13;
#line 419 "prim_data.m"
        MR_Integer mdbcomp__prim_data__V_15_15;

#line 419 "prim_data.m"
        {
#line 419 "prim_data.m"
          mercury__string__left_3_p_0(mdbcomp__prim_data__String_4, mdbcomp__prim_data__LeftLength_7, &mdbcomp__prim_data__ModuleName_8);
        }
#line 420 "prim_data.m"
        {
#line 420 "prim_data.m"
          mercury__string__length_2_p_0(mdbcomp__prim_data__String_4, &mdbcomp__prim_data__StringLength_9);
        }
#line 421 "prim_data.m"
        {
#line 421 "prim_data.m"
          mercury__string__length_2_p_0(mdbcomp__prim_data__ModuleSeparator_5, &mdbcomp__prim_data__SeparatorLength_10);
        }
#line 422 "prim_data.m"
        mdbcomp__prim_data__V_15_15 = (mdbcomp__prim_data__StringLength_9 - mdbcomp__prim_data__LeftLength_7);
#line 422 "prim_data.m"
        mdbcomp__prim_data__RightLength_11 = (mdbcomp__prim_data__V_15_15 - mdbcomp__prim_data__SeparatorLength_10);
#line 423 "prim_data.m"
        {
#line 423 "prim_data.m"
          mercury__string__right_3_p_0(mdbcomp__prim_data__String_4, mdbcomp__prim_data__RightLength_11, &mdbcomp__prim_data__Name_12);
        }
#line 424 "prim_data.m"
        {
#line 424 "prim_data.m"
          mdbcomp__prim_data__NameSym_13 = mdbcomp__prim_data__string_to_sym_name_sep_2_f_0(mdbcomp__prim_data__Name_12, mdbcomp__prim_data__ModuleSeparator_5);
        }
#line 425 "prim_data.m"
        {
#line 425 "prim_data.m"
          return mdbcomp__prim_data__Result_6 = mdbcomp__prim_data__add_outermost_qualifier_2_f_0(mdbcomp__prim_data__ModuleName_8, mdbcomp__prim_data__NameSym_13);
        }
#line 419 "prim_data.m"
      }
#line 426 "prim_data.m"
    else
#line 427 "prim_data.m"
      {
#line 427 "prim_data.m"
        mdbcomp__prim_data__Result_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 427 "prim_data.m"
        MR_hl_field(MR_mktag(0), mdbcomp__prim_data__Result_6, 0) = ((MR_Box) (mdbcomp__prim_data__String_4));
#line 427 "prim_data.m"
      }
#line 426 "prim_data.m"
    return mdbcomp__prim_data__Result_6;
#line 426 "prim_data.m"
  }
#line 151 "prim_data.m"
}

#line 142 "prim_data.m"
MR_Integer MR_CALL 
mdbcomp__prim_data__get_special_pred_id_arity_1_f_0(
#line 142 "prim_data.m"
  MR_Word mdbcomp__prim_data__Id_3)
#line 142 "prim_data.m"
{
#line 566 "prim_data.m"
  {
#line 566 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 566 "prim_data.m"
    MR_Integer mdbcomp__prim_data__Arity_4;
#line 566 "prim_data.m"
    MR_String mdbcomp__prim_data__V_5_5;
#line 566 "prim_data.m"
    MR_String mdbcomp__prim_data__V_6_6;

#line 566 "prim_data.m"
    {
#line 566 "prim_data.m"
      mdbcomp__prim_data__special_pred_name_arity_4_p_0(mdbcomp__prim_data__Id_3, &mdbcomp__prim_data__V_5_5, &mdbcomp__prim_data__V_6_6, &mdbcomp__prim_data__Arity_4);
    }
#line 566 "prim_data.m"
    return mdbcomp__prim_data__Arity_4;
#line 566 "prim_data.m"
  }
#line 142 "prim_data.m"
}

#line 136 "prim_data.m"
MR_String MR_CALL 
mdbcomp__prim_data__get_special_pred_id_target_name_1_f_0(
#line 136 "prim_data.m"
  MR_Word mdbcomp__prim_data__Id_3)
#line 136 "prim_data.m"
{
#line 563 "prim_data.m"
  {
#line 563 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 563 "prim_data.m"
    MR_String mdbcomp__prim_data__Name_4;
#line 563 "prim_data.m"
    MR_String mdbcomp__prim_data__V_5_5;
#line 563 "prim_data.m"
    MR_Integer mdbcomp__prim_data__V_6_6;

#line 563 "prim_data.m"
    {
#line 563 "prim_data.m"
      mdbcomp__prim_data__special_pred_name_arity_4_p_0(mdbcomp__prim_data__Id_3, &mdbcomp__prim_data__V_5_5, &mdbcomp__prim_data__Name_4, &mdbcomp__prim_data__V_6_6);
    }
#line 563 "prim_data.m"
    return mdbcomp__prim_data__Name_4;
#line 563 "prim_data.m"
  }
#line 136 "prim_data.m"
}

#line 129 "prim_data.m"
MR_String MR_CALL 
mdbcomp__prim_data__get_special_pred_id_generic_name_1_f_0(
#line 129 "prim_data.m"
  MR_Word mdbcomp__prim_data__Id_3)
#line 129 "prim_data.m"
{
#line 560 "prim_data.m"
  {
#line 560 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 560 "prim_data.m"
    MR_String mdbcomp__prim_data__Name_4;
#line 560 "prim_data.m"
    MR_String mdbcomp__prim_data__V_5_5;
#line 560 "prim_data.m"
    MR_Integer mdbcomp__prim_data__V_6_6;

#line 560 "prim_data.m"
    {
#line 560 "prim_data.m"
      mdbcomp__prim_data__special_pred_name_arity_4_p_0(mdbcomp__prim_data__Id_3, &mdbcomp__prim_data__Name_4, &mdbcomp__prim_data__V_5_5, &mdbcomp__prim_data__V_6_6);
    }
#line 560 "prim_data.m"
    return mdbcomp__prim_data__Name_4;
#line 560 "prim_data.m"
  }
#line 129 "prim_data.m"
}

#line 122 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data__special_pred_name_arity_4_p_2(
#line 122 "prim_data.m"
  MR_Word * mdbcomp__prim_data__HeadVar__1_1,
#line 122 "prim_data.m"
  MR_String * mdbcomp__prim_data__HeadVar__2_2,
#line 122 "prim_data.m"
  MR_String mdbcomp__prim_data__HeadVar__3_3,
#line 122 "prim_data.m"
  MR_Integer * mdbcomp__prim_data__HeadVar__4_4)
#line 122 "prim_data.m"
{
#line 554 "prim_data.m"
  {
#line 554 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 554 "prim_data.m"
    if ((strcmp(mdbcomp__prim_data__HeadVar__3_3, (MR_String) "__Index__") == 0))
#line 555 "prim_data.m"
      {
#line 555 "prim_data.m"
        *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 1;
#line 555 "prim_data.m"
        *mdbcomp__prim_data__HeadVar__2_2 = (MR_String) "index";
#line 555 "prim_data.m"
        *mdbcomp__prim_data__HeadVar__4_4 = (MR_Integer) 2;
#line 555 "prim_data.m"
        mdbcomp__prim_data__succeeded = MR_TRUE;
#line 555 "prim_data.m"
      }
#line 554 "prim_data.m"
    else
#line 554 "prim_data.m"
      if ((strcmp(mdbcomp__prim_data__HeadVar__3_3, (MR_String) "__Unify__") == 0))
#line 554 "prim_data.m"
        {
#line 554 "prim_data.m"
          *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 0;
#line 554 "prim_data.m"
          *mdbcomp__prim_data__HeadVar__2_2 = (MR_String) "unify";
#line 554 "prim_data.m"
          *mdbcomp__prim_data__HeadVar__4_4 = (MR_Integer) 2;
#line 554 "prim_data.m"
          mdbcomp__prim_data__succeeded = MR_TRUE;
#line 554 "prim_data.m"
        }
#line 554 "prim_data.m"
      else
#line 554 "prim_data.m"
        if ((strcmp(mdbcomp__prim_data__HeadVar__3_3, (MR_String) "__Compare__") == 0))
#line 556 "prim_data.m"
          {
#line 556 "prim_data.m"
            *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 2;
#line 556 "prim_data.m"
            *mdbcomp__prim_data__HeadVar__2_2 = (MR_String) "compare";
#line 556 "prim_data.m"
            *mdbcomp__prim_data__HeadVar__4_4 = (MR_Integer) 3;
#line 556 "prim_data.m"
            mdbcomp__prim_data__succeeded = MR_TRUE;
#line 556 "prim_data.m"
          }
#line 554 "prim_data.m"
        else
#line 554 "prim_data.m"
          if ((strcmp(mdbcomp__prim_data__HeadVar__3_3, (MR_String) "__Initialise__") == 0))
#line 557 "prim_data.m"
            {
#line 557 "prim_data.m"
              *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 3;
#line 557 "prim_data.m"
              *mdbcomp__prim_data__HeadVar__2_2 = (MR_String) "initialise";
#line 557 "prim_data.m"
              *mdbcomp__prim_data__HeadVar__4_4 = (MR_Integer) 1;
#line 557 "prim_data.m"
              mdbcomp__prim_data__succeeded = MR_TRUE;
#line 557 "prim_data.m"
            }
#line 554 "prim_data.m"
          else
#line 554 "prim_data.m"
            mdbcomp__prim_data__succeeded = MR_FALSE;
#line 554 "prim_data.m"
    return mdbcomp__prim_data__succeeded;
#line 554 "prim_data.m"
  }
#line 122 "prim_data.m"
}

#line 121 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data__special_pred_name_arity_4_p_1(
#line 121 "prim_data.m"
  MR_Word * mdbcomp__prim_data__HeadVar__1_1,
#line 121 "prim_data.m"
  MR_String mdbcomp__prim_data__HeadVar__2_2,
#line 121 "prim_data.m"
  MR_String * mdbcomp__prim_data__HeadVar__3_3,
#line 121 "prim_data.m"
  MR_Integer * mdbcomp__prim_data__HeadVar__4_4)
#line 121 "prim_data.m"
{
#line 554 "prim_data.m"
  {
#line 554 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 554 "prim_data.m"
    if ((strcmp(mdbcomp__prim_data__HeadVar__2_2, (MR_String) "index") == 0))
#line 555 "prim_data.m"
      {
#line 555 "prim_data.m"
        *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 1;
#line 555 "prim_data.m"
        *mdbcomp__prim_data__HeadVar__3_3 = (MR_String) "__Index__";
#line 555 "prim_data.m"
        *mdbcomp__prim_data__HeadVar__4_4 = (MR_Integer) 2;
#line 555 "prim_data.m"
        mdbcomp__prim_data__succeeded = MR_TRUE;
#line 555 "prim_data.m"
      }
#line 554 "prim_data.m"
    else
#line 554 "prim_data.m"
      if ((strcmp(mdbcomp__prim_data__HeadVar__2_2, (MR_String) "unify") == 0))
#line 554 "prim_data.m"
        {
#line 554 "prim_data.m"
          *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 0;
#line 554 "prim_data.m"
          *mdbcomp__prim_data__HeadVar__3_3 = (MR_String) "__Unify__";
#line 554 "prim_data.m"
          *mdbcomp__prim_data__HeadVar__4_4 = (MR_Integer) 2;
#line 554 "prim_data.m"
          mdbcomp__prim_data__succeeded = MR_TRUE;
#line 554 "prim_data.m"
        }
#line 554 "prim_data.m"
      else
#line 554 "prim_data.m"
        if ((strcmp(mdbcomp__prim_data__HeadVar__2_2, (MR_String) "compare") == 0))
#line 556 "prim_data.m"
          {
#line 556 "prim_data.m"
            *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 2;
#line 556 "prim_data.m"
            *mdbcomp__prim_data__HeadVar__3_3 = (MR_String) "__Compare__";
#line 556 "prim_data.m"
            *mdbcomp__prim_data__HeadVar__4_4 = (MR_Integer) 3;
#line 556 "prim_data.m"
            mdbcomp__prim_data__succeeded = MR_TRUE;
#line 556 "prim_data.m"
          }
#line 554 "prim_data.m"
        else
#line 554 "prim_data.m"
          if ((strcmp(mdbcomp__prim_data__HeadVar__2_2, (MR_String) "initialise") == 0))
#line 557 "prim_data.m"
            {
#line 557 "prim_data.m"
              *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 3;
#line 557 "prim_data.m"
              *mdbcomp__prim_data__HeadVar__3_3 = (MR_String) "__Initialise__";
#line 557 "prim_data.m"
              *mdbcomp__prim_data__HeadVar__4_4 = (MR_Integer) 1;
#line 557 "prim_data.m"
              mdbcomp__prim_data__succeeded = MR_TRUE;
#line 557 "prim_data.m"
            }
#line 554 "prim_data.m"
          else
#line 554 "prim_data.m"
            mdbcomp__prim_data__succeeded = MR_FALSE;
#line 554 "prim_data.m"
    return mdbcomp__prim_data__succeeded;
#line 554 "prim_data.m"
  }
#line 121 "prim_data.m"
}

#line 120 "prim_data.m"
void MR_CALL 
mdbcomp__prim_data__special_pred_name_arity_4_p_0(
#line 120 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__1_1,
#line 120 "prim_data.m"
  MR_String * mdbcomp__prim_data__HeadVar__2_2,
#line 120 "prim_data.m"
  MR_String * mdbcomp__prim_data__HeadVar__3_3,
#line 120 "prim_data.m"
  MR_Integer * mdbcomp__prim_data__HeadVar__4_4)
#line 120 "prim_data.m"
{
#line 554 "prim_data.m"
  {
#line 554 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 554 "prim_data.m"
    if ((mdbcomp__prim_data__HeadVar__1_1 == (MR_Integer) 2))
#line 556 "prim_data.m"
      {
#line 556 "prim_data.m"
        *mdbcomp__prim_data__HeadVar__2_2 = (MR_String) "compare";
#line 556 "prim_data.m"
        *mdbcomp__prim_data__HeadVar__3_3 = (MR_String) "__Compare__";
#line 556 "prim_data.m"
        *mdbcomp__prim_data__HeadVar__4_4 = (MR_Integer) 3;
#line 556 "prim_data.m"
      }
#line 554 "prim_data.m"
    else
#line 554 "prim_data.m"
      if ((mdbcomp__prim_data__HeadVar__1_1 == (MR_Integer) 1))
#line 555 "prim_data.m"
        {
#line 555 "prim_data.m"
          *mdbcomp__prim_data__HeadVar__2_2 = (MR_String) "index";
#line 555 "prim_data.m"
          *mdbcomp__prim_data__HeadVar__3_3 = (MR_String) "__Index__";
#line 555 "prim_data.m"
          *mdbcomp__prim_data__HeadVar__4_4 = (MR_Integer) 2;
#line 555 "prim_data.m"
        }
#line 554 "prim_data.m"
      else
#line 554 "prim_data.m"
        if ((mdbcomp__prim_data__HeadVar__1_1 == (MR_Integer) 3))
#line 557 "prim_data.m"
          {
#line 557 "prim_data.m"
            *mdbcomp__prim_data__HeadVar__2_2 = (MR_String) "initialise";
#line 557 "prim_data.m"
            *mdbcomp__prim_data__HeadVar__3_3 = (MR_String) "__Initialise__";
#line 557 "prim_data.m"
            *mdbcomp__prim_data__HeadVar__4_4 = (MR_Integer) 1;
#line 557 "prim_data.m"
          }
#line 554 "prim_data.m"
        else
#line 554 "prim_data.m"
          {
#line 554 "prim_data.m"
            *mdbcomp__prim_data__HeadVar__2_2 = (MR_String) "unify";
#line 554 "prim_data.m"
            *mdbcomp__prim_data__HeadVar__3_3 = (MR_String) "__Unify__";
#line 554 "prim_data.m"
            *mdbcomp__prim_data__HeadVar__4_4 = (MR_Integer) 2;
#line 554 "prim_data.m"
          }
#line 554 "prim_data.m"
  }
#line 120 "prim_data.m"
}

#line 71 "prim_data.m"
MR_Word MR_CALL 
mdbcomp__prim_data__get_ancestors_1_f_0(
#line 71 "prim_data.m"
  MR_Word mdbcomp__prim_data__ModuleName_3)
#line 71 "prim_data.m"
{
#line 400 "prim_data.m"
  {
#line 400 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 400 "prim_data.m"
    MR_Word mdbcomp__prim_data__HeadVar__2_2;

#line 400 "prim_data.m"
    {
#line 400 "prim_data.m"
      return mdbcomp__prim_data__HeadVar__2_2 = mdbcomp__prim_data__get_ancestors_2_2_f_0(mdbcomp__prim_data__ModuleName_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 400 "prim_data.m"
    return mdbcomp__prim_data__HeadVar__2_2;
#line 400 "prim_data.m"
  }
#line 71 "prim_data.m"
}

void mercury__mdbcomp__prim_data__init(void)
{
}

void mercury__mdbcomp__prim_data__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_module_name_0);
	MR_register_type_ctor_info(&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0);
	MR_register_type_ctor_info(&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0);
	MR_register_type_ctor_info(&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0);
	MR_register_type_ctor_info(&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0);
	MR_register_type_ctor_info(&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0);
}

void mercury__mdbcomp__prim_data__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdbcomp.prim_data. */
