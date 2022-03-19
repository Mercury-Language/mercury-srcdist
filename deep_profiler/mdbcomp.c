/*
** Automatically generated from `mdbcomp.m'
** by the Mercury compiler,
** version rotd-2022-03-19
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


// :- module mdbcomp.
// :- implementation.

/*
INIT mercury__mdbcomp__init
ENDINIT
*/

#include "mdbcomp.mih"


#include "builtin.mih"
#include "private_builtin.mih"






struct mdbcomp__vector_common_type_1_0_s {
  const MR_String mdbcomp__vector_common_type_1_0__vct_1_f_0;
  const MR_Integer mdbcomp__vector_common_type_1_0__vct_1_f_1;
};

static /* final */ const struct mdbcomp__vector_common_type_1_0_s mdbcomp_vector_common_1[32];




static /* final */ const struct mdbcomp__vector_common_type_1_0_s mdbcomp_vector_common_1[32] = {
  /* row   0 */
  {
    (MR_String) "mdbcomp.program_representation",
    (MR_Integer) -1
  },
  /* row   1 */
  {
    (MR_String) "mdbcomp.slice_and_dice",
    (MR_Integer) -1
  },
  /* row   2 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row   3 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row   4 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row   5 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row   6 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row   7 */
  {
    (MR_String) "mdbcomp.rtti_access",
    (MR_Integer) -1
  },
  /* row   8 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row   9 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  10 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  11 */
  {
    (MR_String) "mdbcomp.feedback.automatic_parallelism",
    (MR_Integer) -1
  },
  /* row  12 */
  {
    (MR_String) "mdbcomp.prim_data",
    (MR_Integer) -1
  },
  /* row  13 */
  {
    (MR_String) "mdbcomp.feedback",
    (MR_Integer) -1
  },
  /* row  14 */
  {
    (MR_String) "mdbcomp.trace_counts",
    (MR_Integer) -1
  },
  /* row  15 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  16 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  17 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  18 */
  {
    (MR_String) "mdbcomp.goal_path",
    (MR_Integer) 1
  },
  /* row  19 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  20 */
  {
    (MR_String) "mdbcomp.builtin_modules",
    (MR_Integer) -1
  },
  /* row  21 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  22 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  23 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  24 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  25 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  26 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  27 */
  {
    (MR_String) "mdbcomp.sym_name",
    (MR_Integer) -1
  },
  /* row  28 */
  {
    (MR_String) "mdbcomp.shared_utilities",
    (MR_Integer) -1
  },
  /* row  29 */
  {
    (MR_String) "mdbcomp",
    (MR_Integer) -1
  },
  /* row  30 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  31 */
  {
    NULL,
    (MR_Integer) -2
  },
};


#include "mdbcomp.mh"



MR_bool MR_CALL 
mdbcomp__mercury_mdbcomp_module_1_p_0(
  MR_String HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Integer slot_0 = ((MR_hash_string4(HeadVar__1_1)) & (MR_Integer) 31);
  MR_String str_1;

  // hashed string simple lookup switch
  ;
  // compute the hash value of the input string
  ;
  // hash chain loop
  ;
  do
  {
    // lookup the string for this hash slot
    ;
    str_1 = ((&mdbcomp_vector_common_1[0 + slot_0]))->mdbcomp__vector_common_type_1_0__vct_1_f_0;
    // did we find a match?
    ;
    if ((((str_1 != NULL)) && ((strcmp(str_1, HeadVar__1_1) == 0))))
    {
      // we found a match; look up the results
      ;
      succeeded = MR_TRUE;
      // jump out of search loop
      ;
      goto label_0;
    }
    else
    {
      // no match yet, so get next slot in hash chain
      ;
      slot_0 = ((&mdbcomp_vector_common_1[0 + slot_0]))->mdbcomp__vector_common_type_1_0__vct_1_f_1;
    }
  }
  while ((slot_0 >= (MR_Integer) 0));
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

void MR_CALL 
mdbcomp__version_1_p_0(
  MR_String * Version_1)
{
{
#define MR_PROC_LABEL mdbcomp__version_1_p_0

	MR_String Version;

		{

    MR_ConstString version_string;

    version_string = MR_VERSION ", configured for " MR_FULLARCH;
    /*
    ** Cast away const needed here, because Mercury declares Version
    ** with type MR_String rather than MR_ConstString.
    */
    Version = (MR_String) (MR_Word) version_string;


		;}
#undef MR_PROC_LABEL
	*Version_1  = Version;
}
}

void mercury__mdbcomp__init(void)
{
}

void mercury__mdbcomp__init_type_tables(void)
{
}

void mercury__mdbcomp__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdbcomp__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdbcomp.
