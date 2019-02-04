/*
** Automatically generated from `md4.m'
** by the Mercury compiler,
** version rotd-2009-11-10, configured for i686-pc-linux-gnu.
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
INIT mercury__libs__md4__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "libs.md4.c"
#include "libs.md4.mh"

#line 27 "libs.md4.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 31 "libs.md4.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 35 "libs.md4.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "libs.md4.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "libs.md4.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "libs.md4.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 51 "libs.md4.c"
#line 50 "md4.m"


struct mdfour {
    MR_uint_least32_t A, B, C, D;
    MR_uint_least32_t totalN;
    unsigned char tail[64];
    unsigned tail_len;
};

static void mdfour_begin(struct mdfour *md);
static void mdfour_update(struct mdfour *md, const unsigned char *in, int n);
static void mdfour_tail(struct mdfour *m, const unsigned char *in, int n);
static void mdfour_result(const struct mdfour *md, unsigned char out[12]);


#line 68 "libs.md4.c"
#line 69 "libs.md4.c"
#ifndef LIBS__MD4_DECL_GUARD
#define LIBS__MD4_DECL_GUARD

#line 73 "libs.md4.c"
#line 74 "libs.md4.c"

#endif
#line 77 "libs.md4.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_def_extern_entry(fn__libs__md4__md4sum_1_0)




MR_BEGIN_MODULE(libs__md4_module0)
	MR_init_entry1(fn__libs__md4__md4sum_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__md4__md4sum_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'md4sum'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__md4__md4sum_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	In;
	MR_String	Digest;
#define	MR_PROC_LABEL	mercury__fn__libs__md4__md4sum_1_0
	In = (MR_String) MR_r1;
{
#line 238 "md4.m"

    const char hex[16] = "0123456789abcdef";
    struct mdfour md;
    unsigned char sum[16];
    char hexbuf[sizeof(sum) * 2 + 1];
    char *p;
    int i;

    mdfour_begin(&md);
    mdfour_update(&md, (const unsigned char *)In, strlen(In));
    mdfour_update(&md, NULL, 0);
    mdfour_result(&md, sum);

    /* Convert to hexadecimal string representation. */
    p = hexbuf;
    for (i = 0; i < sizeof(sum); i++) {
        *p++ = hex[(sum[i] & 0xf0) >> 4];
        *p++ = hex[(sum[i] & 0x0f)];
    }
    *p = '\0';

    MR_make_aligned_string_copy(Digest, hexbuf);
;}
#line 132 "libs.md4.c"
	MR_r1 = (MR_Word) Digest;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 66 "md4.m"


#define MASK32          (0xffffffff)

#define F(X,Y,Z)        ((((X)&(Y)) | ((~(X))&(Z))))
#define G(X,Y,Z)        ((((X)&(Y)) | ((X)&(Z)) | ((Y)&(Z))))
#define H(X,Y,Z)        (((X)^(Y)^(Z)))
#define lshift(x,s)     (((((x)<<(s))&MASK32) | (((x)>>(32-(s)))&MASK32)))

#define ROUND1(a,b,c,d,k,s)     a = lshift((a + F(b,c,d) + M[k]) & MASK32, s)
#define ROUND2(a,b,c,d,k,s)     a = lshift((a + G(b,c,d) + M[k] + 0x5A827999) & MASK32, s)
#define ROUND3(a,b,c,d,k,s)     a = lshift((a + H(b,c,d) + M[k] + 0x6ED9EBA1) & MASK32, s)

/* this applies md4 to 64 byte chunks */
static void mdfour64(struct mdfour *m, MR_uint_least32_t *M)
{
    MR_uint_least32_t AA, BB, CC, DD;
    MR_uint_least32_t A,B,C,D;

    A = m->A; B = m->B; C = m->C; D = m->D;
    AA = A; BB = B; CC = C; DD = D;

    ROUND1(A,B,C,D,  0,  3);  ROUND1(D,A,B,C,  1,  7);
    ROUND1(C,D,A,B,  2, 11);  ROUND1(B,C,D,A,  3, 19);
    ROUND1(A,B,C,D,  4,  3);  ROUND1(D,A,B,C,  5,  7);
    ROUND1(C,D,A,B,  6, 11);  ROUND1(B,C,D,A,  7, 19);
    ROUND1(A,B,C,D,  8,  3);  ROUND1(D,A,B,C,  9,  7);
    ROUND1(C,D,A,B, 10, 11);  ROUND1(B,C,D,A, 11, 19);
    ROUND1(A,B,C,D, 12,  3);  ROUND1(D,A,B,C, 13,  7);
    ROUND1(C,D,A,B, 14, 11);  ROUND1(B,C,D,A, 15, 19);	


    ROUND2(A,B,C,D,  0,  3);  ROUND2(D,A,B,C,  4,  5);
    ROUND2(C,D,A,B,  8,  9);  ROUND2(B,C,D,A, 12, 13);
    ROUND2(A,B,C,D,  1,  3);  ROUND2(D,A,B,C,  5,  5);
    ROUND2(C,D,A,B,  9,  9);  ROUND2(B,C,D,A, 13, 13);
    ROUND2(A,B,C,D,  2,  3);  ROUND2(D,A,B,C,  6,  5);
    ROUND2(C,D,A,B, 10,  9);  ROUND2(B,C,D,A, 14, 13);
    ROUND2(A,B,C,D,  3,  3);  ROUND2(D,A,B,C,  7,  5);
    ROUND2(C,D,A,B, 11,  9);  ROUND2(B,C,D,A, 15, 13);

    ROUND3(A,B,C,D,  0,  3);  ROUND3(D,A,B,C,  8,  9);
    ROUND3(C,D,A,B,  4, 11);  ROUND3(B,C,D,A, 12, 15);
    ROUND3(A,B,C,D,  2,  3);  ROUND3(D,A,B,C, 10,  9);
    ROUND3(C,D,A,B,  6, 11);  ROUND3(B,C,D,A, 14, 15);
    ROUND3(A,B,C,D,  1,  3);  ROUND3(D,A,B,C,  9,  9);
    ROUND3(C,D,A,B,  5, 11);  ROUND3(B,C,D,A, 13, 15);
    ROUND3(A,B,C,D,  3,  3);  ROUND3(D,A,B,C, 11,  9);
    ROUND3(C,D,A,B,  7, 11);  ROUND3(B,C,D,A, 15, 15);

    A += AA; B += BB;
    C += CC; D += DD;

    A &= MASK32; B &= MASK32;
    C &= MASK32; D &= MASK32;

    m->A = A; m->B = B; m->C = C; m->D = D;
}

static void copy64(MR_uint_least32_t *M, const unsigned char *in)
{
    int i;

    for (i=0; i<16; i++) {
        M[i] = (in[i*4+3]<<24) | (in[i*4+2]<<16) |
               (in[i*4+1]<<8) | (in[i*4+0]<<0);
    }
}

static void copy4(unsigned char *out, MR_uint_least32_t x)
{
    out[0] = x & 0xFF;
    out[1] = (x>>8) & 0xFF;
    out[2] = (x>>16) & 0xFF;
    out[3] = (x>>24) & 0xFF;
}

static void mdfour_begin(struct mdfour *md)
{
    md->A = 0x67452301;
    md->B = 0xefcdab89;
    md->C = 0x98badcfe;
    md->D = 0x10325476;
    md->totalN = 0;
    md->tail_len = 0;
}

static void mdfour_update(struct mdfour *md, const unsigned char *in, int n)
{
    MR_uint_least32_t M[16];

    if (in == NULL) {
        mdfour_tail(md, md->tail, md->tail_len);
        return;
    }

    if (md->tail_len) {
        int len = 64 - md->tail_len;
        if (len > n) {
            len = n;
        }
        MR_memcpy(md->tail+md->tail_len, in, len);
        md->tail_len += len;
        n -= len;
        in += len;
        if (md->tail_len == 64) {
            copy64(M, md->tail);
            mdfour64(md, M);
            md->totalN += 64;
            md->tail_len = 0;
        }
    }

    while (n >= 64) {
        copy64(M, in);
        mdfour64(md, M);
        in += 64;
        n -= 64;
        md->totalN += 64;
    }

    if (n) {
        MR_memcpy(md->tail, in, n);
        md->tail_len = n;
    }
}

static void mdfour_tail(struct mdfour *m, const unsigned char *in, int n)
{
    unsigned char buf[128];
    MR_uint_least32_t M[16];
    MR_uint_least32_t b;

    m->totalN += n;

    b = m->totalN * 8;

    MR_memset(buf, 0, 128);
    if (n) {
        MR_memcpy(buf, in, n);
    }
    buf[n] = 0x80;

    if (n <= 55) {
        copy4(buf+56, b);
        copy64(M, buf);
        mdfour64(m, M);
    } else {
        copy4(buf+120, b);
        copy64(M, buf);
        mdfour64(m, M);
        copy64(M, buf+64);
        mdfour64(m, M);
    }
}

static void mdfour_result(const struct mdfour *m, unsigned char *out)
{
    copy4(out, m->A);
    copy4(out+4, m->B);
    copy4(out+8, m->C);
    copy4(out+12, m->D);
}


#line 308 "libs.md4.c"

static void mercury__libs__md4_maybe_bunch_0(void)
{
	libs__md4_module0();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__libs__md4__init(void);
void mercury__libs__md4__init_type_tables(void);
void mercury__libs__md4__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__libs__md4__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__libs__md4__init_complexity_procs(void);
#endif

void mercury__libs__md4__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__libs__md4_maybe_bunch_0();
	mercury__libs__md4__init_debugger();
}

void mercury__libs__md4__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__libs__md4__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__libs__md4__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__libs__md4);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__libs__md4__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
