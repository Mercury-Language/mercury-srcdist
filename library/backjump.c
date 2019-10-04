/*
** Automatically generated from `backjump.m'
** by the Mercury compiler,
** version rotd-2019-10-04
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


// :- module backjump.
// :- implementation.

/*
INIT mercury__backjump__init
ENDINIT
*/

#include "backjump.mih"
#include "backjump.mh"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static MR_Integer MR_CALL 
mercury__backjump__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__backjump__report_invalid_backjump_3_p_0(
  MR_Integer Id_4);

void MR_CALL 
mercury__backjump__builtin_backjump_1_p_0(
  MR_Integer HeadVar__1_1);

void MR_CALL 
mercury__backjump__builtin_choice_id_1_p_0(
  MR_Integer * HeadVar__1_1,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mercury__backjump____Unify____choice_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__backjump____Compare____choice_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__backjump_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__backjump_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__backjump_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__backjump_scalar_common_4[1][1];




static /* final */ const MR_Box mercury__backjump_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__backjump_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__backjump_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__backjump_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__backjump_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__backjump_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__backjump_scalar_common_4[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "array.mh"
#include "backjump.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "math.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#line 151 "backjump.m"

#ifdef MR_HIGHLEVEL_CODE

#ifdef MR_NATIVE_GC

// XXX code is needed to trace the local variables
// in the builtin_choice_id predicate for accurate GC.

#endif // MR_NATIVE_GC

void MR_CALL
mercury__backjump__builtin_choice_id_1_p_0(MR_Integer *id, MR_CONT_PARAMS)
{
    MR_BackJumpHandler this_handler;

    this_handler.MR_bjh_prev = MR_GET_BACKJUMP_HANDLER();
    this_handler.MR_bjh_id = MR_GET_NEXT_CHOICE_ID();
    MR_SET_BACKJUMP_HANDLER(&this_handler);

    if (setjmp(this_handler.MR_bjh_handler) == 0) {
    #ifdef MR_DEBUG_JMPBUFS
        fprintf(stderr, "choice setjmp %p\n", this_handler.MR_bjh_handler);
    #endif

        *id = this_handler.MR_bjh_id;
        MR_CONT_CALL();
    } else {
    #ifdef MR_DEBUG_JMPBUFS
        fprintf(stderr, "choice caught jmp %p\n",
            this_handler.MR_bjh_handler);
    #endif
    }

    MR_SET_BACKJUMP_HANDLER(this_handler.MR_bjh_prev);
}

void MR_CALL
mercury__backjump__builtin_backjump_1_p_0(MR_BackJumpChoiceId id)
{
    MR_BackJumpHandler *backjump_handler;

    backjump_handler = MR_GET_BACKJUMP_HANDLER();

    // XXX when we commit and prune away nondet stack frames, we leave the
    // backjump handlers on the stack. If the caller tries to backjump to
    // a frame that has been pruned away, the handler may still be on the
    // stack and we won't detect the problem.
    //
    // We could avoid this problem by adding a trailing function which
    // prunes back the handler stack on a commit, which would mean that in
    // this case we will reach the bottom of the stack and call
    // ML_report_invalid_backjump rather than seg faulting. But that would
    // require trailing to be always available. Instead, we just rely on
    // the caller only backjumping to frames that actually do exist.
    //
    // (The same problem would occur if the caller tries to backjump to a
    // frame that has already failed. In this case, though, the choice ID
    // will also no longer be live since the call to get_choice_id would have
    // been backtracked over, so this isn't as much of a problem as with
    // commits.)

    while (backjump_handler != NULL) {
        if (backjump_handler->MR_bjh_id == id) {
            break;
        }
        backjump_handler = backjump_handler->MR_bjh_prev;
    }

    if (backjump_handler == NULL) {
        ML_report_invalid_backjump(id);
        exit(EXIT_FAILURE);
    } else {

  #ifdef MR_DEBUG_JMPBUFS
        fprintf(stderr, "backjump longjmp %p\n",
            backjump_handler->MR_bjh_handler);
  #endif
        longjmp(backjump_handler->MR_bjh_handler, 1);
    }
}

#endif // MR_HIGHLEVEL_CODE

#line 254 "backjump.m"

void mercury_sys_init_backjumps_init(void);
void mercury_sys_init_backjumps_init_type_tables(void);
#ifdef MR_DEEP_PROFILING
void mercury_sys_init_backjumps_write_out_proc_statics(FILE *deep_fp,
    FILE *procrep_fp);
#endif

#ifndef MR_HIGHLEVEL_CODE

#define ML_DUMMY_LINE 0

#define ML_BACKJUMP_STRUCT     (((MR_BackJumpHandler *) (MR_curfr + 1 - MR_NONDET_FIXED_SIZE)) - 1)

#ifdef ML_DEBUG_BACKJUMPS
#define ML_BACKJUMP_CHECKPOINT(s, p)     do {         fflush(stdout);         fprintf(stderr, "backjumps (%s): "             "loc %p, prev %p, id %d, sp %p, fr %p\n",             s, p, p->MR_bjh_prev, p->MR_bjh_id, p->MR_bjh_saved_sp,             p->MR_bjh_saved_fr);     } while (0)
#else
#define ML_BACKJUMP_CHECKPOINT(s, p)
#endif

MR_define_extern_entry(mercury__backjump__builtin_choice_id_1_0);
MR_define_extern_entry(mercury__backjump__builtin_backjump_1_0);

MR_declare_label(mercury__backjump__builtin_choice_id_1_0_i1);

MR_proc_static_user_no_site(backjump, builtin_choice_id, 1, 0,
    "backjump.m", ML_DUMMY_LINE, MR_TRUE);
MR_proc_static_user_no_site(backjump, builtin_backjump, 1, 0,
    "backjump.m", ML_DUMMY_LINE, MR_TRUE);

MR_EXTERN_USER_PROC_STATIC_PROC_LAYOUT(MR_DETISM_NON,
    MR_PROC_NO_SLOT_COUNT, -1, MR_PREDICATE, backjump, builtin_choice_id,
    1, 0);
MR_EXTERN_USER_PROC_STATIC_PROC_LAYOUT(MR_DETISM_DET, 1,
    MR_LONG_LVAL_STACKVAR_INT(1), MR_PREDICATE, backjump,
    builtin_backjump, 1, 0);

MR_MAKE_USER_INTERNAL_LAYOUT(backjump, builtin_choice_id, 1, 0, 1);

MR_BEGIN_MODULE(hand_written_backjump_module)
    MR_init_entry_sl(mercury__backjump__builtin_choice_id_1_0);
    MR_init_entry_sl(mercury__backjump__builtin_backjump_1_0);

    MR_init_label_sl(mercury__backjump__builtin_choice_id_1_0_i1);
MR_BEGIN_CODE

MR_define_entry(mercury__backjump__builtin_choice_id_1_0);
{
    MR_mkpragmaframe("builtin_choice_id/1", 0, MR_BackJumpHandler_Struct,
        MR_LABEL(mercury__backjump__builtin_choice_id_1_0_i1));

    #if defined(MR_DEEP_PROFILING)
        MR_fatal_error(
            "builtin_choice_id: NYI backjumping and deep profiling");
    #endif

    ML_BACKJUMP_STRUCT->MR_bjh_prev = MR_GET_BACKJUMP_HANDLER();
    ML_BACKJUMP_STRUCT->MR_bjh_id = MR_GET_NEXT_CHOICE_ID();
    ML_BACKJUMP_STRUCT->MR_bjh_saved_sp = MR_sp;
    ML_BACKJUMP_STRUCT->MR_bjh_saved_fr = MR_curfr;
    MR_SET_BACKJUMP_HANDLER(ML_BACKJUMP_STRUCT);

    ML_BACKJUMP_CHECKPOINT("create", ML_BACKJUMP_STRUCT);

    MR_r1 = (MR_Word) ML_BACKJUMP_STRUCT->MR_bjh_id;
    MR_succeed();
}
MR_define_label(mercury__backjump__builtin_choice_id_1_0_i1);
{
    // Restore the previous handler.
    MR_SET_BACKJUMP_HANDLER(ML_BACKJUMP_STRUCT->MR_bjh_prev);
    MR_fail();
}

MR_define_entry(mercury__backjump__builtin_backjump_1_0);
{
    MR_BackJumpChoiceId id = MR_r1;
    MR_BackJumpHandler *backjump_handler;

    backjump_handler = MR_GET_BACKJUMP_HANDLER();

    #if defined(MR_DEEP_PROFILING)
        MR_fatal_error(
            "builtin_backjump: NYI backjumping and deep profiling");
    #endif

    // XXX see comments in the high-level implementation.
    while (backjump_handler != NULL) {
        if (backjump_handler->MR_bjh_id == id) {
            break;
        }

        ML_BACKJUMP_CHECKPOINT("scan", backjump_handler);

        backjump_handler = backjump_handler->MR_bjh_prev;
    }

    if (backjump_handler == NULL) {
        ML_report_invalid_backjump(id);
        exit(EXIT_FAILURE);
    } else {
        ML_BACKJUMP_CHECKPOINT("found", backjump_handler);

        // XXX we should produce some EXCP trace events here, to give
        // the user an opportunity to retry a goal that calculated a
        // (possibly incorrect) backjump.

        MR_SET_BACKJUMP_HANDLER(backjump_handler->MR_bjh_prev);
        MR_sp_word = (MR_Word) backjump_handler->MR_bjh_saved_sp;
        MR_maxfr_word = (MR_Word) backjump_handler->MR_bjh_saved_fr;
        MR_fail();
    }
}

MR_END_MODULE

#endif // !MR_HIGHLEVEL_CODE

/*
INIT mercury_sys_init_backjumps
*/

void mercury_sys_init_backjumps_init(void)
{
#ifndef MR_HIGHLEVEL_CODE
    hand_written_backjump_module();
#endif
}

void mercury_sys_init_backjumps_init_type_tables(void)
{
    // no types to register
}

#ifdef MR_DEEP_PROFILING
void
mercury_sys_init_backjumps_write_out_proc_statics(FILE *deep_fp,
    FILE *procrep_fp)
{
    MR_write_out_user_proc_static(deep_fp, procrep_fp,
        &MR_proc_layout_user_name(backjump, builtin_choice_id, 1, 0));
    MR_write_out_user_proc_static(deep_fp, procrep_fp,
        &MR_proc_layout_user_name(backjump, builtin_backjump, 1, 0));
}
#endif // MR_DEEP_PROFILING



#line 461 "backjump.m"
void 
ML_report_invalid_backjump(
  MR_Integer Id_4)
#line 461 "backjump.m"
{
#line 461 "backjump.m"
	mercury__backjump__report_invalid_backjump_3_p_0((MR_Integer) Id_4);
}


const MR_TypeCtorInfo_Struct mercury__backjump__backjump__type_ctor_info_choice_id_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__backjump____Unify____choice_id_0_0_10001)),
  ((MR_Box) (mercury__backjump____Compare____choice_id_0_0_10001)),
  (MR_String) "backjump",
  (MR_String) "choice_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_Integer MR_CALL 
mercury__backjump__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

void MR_CALL 
mercury__backjump____Compare____choice_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__backjump____Unify____choice_id_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
mercury__backjump__report_invalid_backjump_3_p_0(
  MR_Integer Id_4)
{
  {
    MR_Word StdErrStream_7;
    MR_String Var_22;
    MR_Box V_4_35;
    MR_Box V_6_36;
    MR_Box V_5_44;
    MR_Box V_8_45;
    MR_Box V_5_55;
    MR_Box V_8_56;
    MR_Box V_5_61;
    MR_Box V_8_62;
    MR_Box V_4_66;
    MR_Box V_6_67;

{
#define MR_PROC_LABEL mercury__backjump__report_invalid_backjump_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 V_4_35  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__backjump__report_invalid_backjump_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) V_4_35 ;
		{

    if (MR_FLUSH(*Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, V_6_36 );
}
    mercury__io__throw_on_output_error_3_p_0(V_6_36);
{
#define MR_PROC_LABEL mercury__backjump__report_invalid_backjump_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	 V_5_44  = (MR_Box) Stream;
}
    StdErrStream_7 = (MR_Word) (V_5_44);
{
#define MR_PROC_LABEL mercury__backjump__report_invalid_backjump_3_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr) V_5_44 ;
	Message =  (MR_String) "Uncaught Mercury backjump (" ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, V_8_45 );
}
    mercury__io__throw_on_output_error_3_p_0(V_8_45);
    mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__backjump_scalar_common_4[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Id_4, &Var_22);
    V_5_55 = (MR_Box) (StdErrStream_7);
{
#define MR_PROC_LABEL mercury__backjump__report_invalid_backjump_3_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr) V_5_55 ;
	Message =  Var_22 ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, V_8_56 );
}
    mercury__io__throw_on_output_error_3_p_0(V_8_56);
    V_5_61 = (MR_Box) (StdErrStream_7);
{
#define MR_PROC_LABEL mercury__backjump__report_invalid_backjump_3_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr) V_5_61 ;
	Message =  (MR_String) ")\n" ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, V_8_62 );
}
    mercury__io__throw_on_output_error_3_p_0(V_8_62);
    V_4_66 = (MR_Box) (StdErrStream_7);
{
#define MR_PROC_LABEL mercury__backjump__report_invalid_backjump_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) V_4_66 ;
		{

    if (MR_FLUSH(*Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, V_6_67 );
}
    mercury__io__throw_on_output_error_3_p_0(V_6_67);
  }
}

MR_Integer MR_CALL 
mercury__backjump__to_int_1_f_0(
  MR_Integer P_3)
{
  {
    MR_Integer P_2 = P_3;

    return P_2;
  }
}

void MR_CALL 
mercury__backjump__backjump_1_p_0(
  MR_Integer Id_2)
{
  {
    mercury__backjump__builtin_backjump_1_p_0(Id_2);
    return;
  }
}

void MR_CALL 
mercury__backjump__builtin_backjump_1_p_0(
  MR_Integer HeadVar__1_1);

void MR_CALL 
mercury__backjump__get_choice_id_1_p_0(
  MR_Integer * Id_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  mercury__backjump__builtin_choice_id_1_p_0(Id_2, cont, cont_env_ptr);
}

void MR_CALL 
mercury__backjump__builtin_choice_id_1_p_0(
  MR_Integer * HeadVar__1_1,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mercury__backjump____Unify____choice_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__backjump____Unify____choice_id_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__backjump____Compare____choice_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__backjump____Compare____choice_id_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__backjump__init(void)
{
}

void mercury__backjump__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__backjump__backjump__type_ctor_info_choice_id_0);
}

void mercury__backjump__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backjump__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module backjump.
