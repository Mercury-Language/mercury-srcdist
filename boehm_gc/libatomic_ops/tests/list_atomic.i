# 1 "list_atomic.c"
# 1 "/home/mercury/public/test_mercury/test_dirs/saturn/build.latest.gcc/mercury/boehm_gc/libatomic_ops/tests//"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "list_atomic.c"
# 1 "../src/atomic_ops.h" 1
# 27 "../src/atomic_ops.h"
# 1 "/usr/include/assert.h" 1 3 4
# 37 "/usr/include/assert.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 330 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 348 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 349 "/usr/include/sys/cdefs.h" 2 3 4
# 331 "/usr/include/features.h" 2 3 4
# 354 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4




# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 2 3 4
# 355 "/usr/include/features.h" 2 3 4
# 38 "/usr/include/assert.h" 2 3 4
# 28 "../src/atomic_ops.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/stddef.h" 1 3 4
# 151 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 213 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 325 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/stddef.h" 3 4
typedef int wchar_t;
# 29 "../src/atomic_ops.h" 2
# 206 "../src/atomic_ops.h"
# 1 "../src/atomic_ops/sysdeps/gcc/x86_64.h" 1
# 19 "../src/atomic_ops/sysdeps/gcc/x86_64.h"
# 1 "../src/atomic_ops/sysdeps/gcc/../all_aligned_atomic_load_store.h" 1
# 28 "../src/atomic_ops/sysdeps/gcc/../all_aligned_atomic_load_store.h"
# 1 "../src/atomic_ops/sysdeps/gcc/../aligned_atomic_load_store.h" 1
# 28 "../src/atomic_ops/sysdeps/gcc/../aligned_atomic_load_store.h"
static __inline size_t
AO_load(const volatile size_t *addr)
{
  ((void) (0));


  return *(size_t *)addr;
}



static __inline void
AO_store(volatile size_t *addr, size_t new_val)
{
  ((void) (0));
  (*(size_t *)addr) = new_val;
}
# 29 "../src/atomic_ops/sysdeps/gcc/../all_aligned_atomic_load_store.h" 2
# 1 "../src/atomic_ops/sysdeps/gcc/../char_atomic_load_store.h" 1
# 28 "../src/atomic_ops/sysdeps/gcc/../char_atomic_load_store.h"
static __inline unsigned char
AO_char_load(const volatile unsigned char *addr)
{


  return (*(const unsigned char *)addr);
}



static __inline void
AO_char_store(volatile unsigned char *addr, unsigned char new_val)
{
  (*(unsigned char *)addr) = new_val;
}
# 30 "../src/atomic_ops/sysdeps/gcc/../all_aligned_atomic_load_store.h" 2
# 1 "../src/atomic_ops/sysdeps/gcc/../short_aligned_atomic_load_store.h" 1
# 28 "../src/atomic_ops/sysdeps/gcc/../short_aligned_atomic_load_store.h"
static __inline unsigned short
AO_short_load(const volatile unsigned short *addr)
{
  ((void) (0));


  return (*(unsigned short *)addr);
}



static __inline void
AO_short_store(volatile unsigned short *addr, unsigned short new_val)
{
  ((void) (0));
  (*(unsigned short *)addr) = new_val;
}
# 31 "../src/atomic_ops/sysdeps/gcc/../all_aligned_atomic_load_store.h" 2
# 1 "../src/atomic_ops/sysdeps/gcc/../int_aligned_atomic_load_store.h" 1
# 28 "../src/atomic_ops/sysdeps/gcc/../int_aligned_atomic_load_store.h"
static __inline unsigned int
AO_int_load(const volatile unsigned int *addr)
{
  ((void) (0));


  return (*(unsigned int *)addr);
}



static __inline void
AO_int_store(volatile unsigned int *addr, unsigned int new_val)
{
  ((void) (0));
  (*(unsigned int *)addr) = new_val;
}
# 32 "../src/atomic_ops/sysdeps/gcc/../all_aligned_atomic_load_store.h" 2
# 20 "../src/atomic_ops/sysdeps/gcc/x86_64.h" 2
# 28 "../src/atomic_ops/sysdeps/gcc/x86_64.h"
# 1 "../src/atomic_ops/sysdeps/gcc/../ordered_except_wr.h" 1
# 30 "../src/atomic_ops/sysdeps/gcc/../ordered_except_wr.h"
# 1 "../src/atomic_ops/sysdeps/gcc/../read_ordered.h" 1
# 30 "../src/atomic_ops/sysdeps/gcc/../read_ordered.h"
static __inline void
AO_nop_read(void)
{
  __asm__ __volatile__("" : : : "memory");
}





static __inline size_t
AO_load_read(const volatile size_t *addr)
{
  size_t result = AO_load(addr);
  __asm__ __volatile__("" : : : "memory");
  return result;
}
# 56 "../src/atomic_ops/sysdeps/gcc/../read_ordered.h"
static __inline size_t
AO_char_load_read(const volatile unsigned char *addr)
{
  size_t result = AO_char_load(addr);
  __asm__ __volatile__("" : : : "memory");
  return result;
}
# 72 "../src/atomic_ops/sysdeps/gcc/../read_ordered.h"
static __inline size_t
AO_short_load_read(const volatile unsigned short *addr)
{
  size_t result = AO_short_load(addr);
  __asm__ __volatile__("" : : : "memory");
  return result;
}
# 88 "../src/atomic_ops/sysdeps/gcc/../read_ordered.h"
static __inline size_t
AO_int_load_read(const volatile unsigned int *addr)
{
  size_t result = AO_int_load(addr);
  __asm__ __volatile__("" : : : "memory");
  return result;
}
# 31 "../src/atomic_ops/sysdeps/gcc/../ordered_except_wr.h" 2

static __inline void
AO_nop_write(void)
{
  __asm__ __volatile__("" : : : "memory");


}





static __inline void
AO_store_write(volatile size_t *addr, size_t val)
{
  __asm__ __volatile__("" : : : "memory");
  AO_store(addr, val);
}
# 59 "../src/atomic_ops/sysdeps/gcc/../ordered_except_wr.h"
static __inline void
AO_char_store_write(volatile unsigned char *addr, unsigned char val)
{
  __asm__ __volatile__("" : : : "memory");
  AO_char_store(addr, val);
}
# 74 "../src/atomic_ops/sysdeps/gcc/../ordered_except_wr.h"
static __inline void
AO_short_store_write(volatile unsigned short *addr, unsigned short val)
{
  __asm__ __volatile__("" : : : "memory");
  AO_short_store(addr, val);
}
# 89 "../src/atomic_ops/sysdeps/gcc/../ordered_except_wr.h"
static __inline void
AO_int_store_write(volatile unsigned int *addr, unsigned int val)
{
  __asm__ __volatile__("" : : : "memory");
  AO_int_store(addr, val);
}
# 29 "../src/atomic_ops/sysdeps/gcc/x86_64.h" 2

# 1 "../src/atomic_ops/sysdeps/gcc/../test_and_set_t_is_char.h" 1
# 30 "../src/atomic_ops/sysdeps/gcc/../test_and_set_t_is_char.h"
typedef enum {AO_BYTE_TS_clear = 0, AO_BYTE_TS_set = 0xff} AO_BYTE_TS_val;
# 31 "../src/atomic_ops/sysdeps/gcc/x86_64.h" 2

# 1 "../src/atomic_ops/sysdeps/gcc/../standard_ao_double_t.h" 1







# 1 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/xmmintrin.h" 1 3 4
# 38 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/xmmintrin.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/mmintrin.h" 1 3 4
# 37 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/mmintrin.h" 3 4
typedef int __m64 __attribute__ ((__mode__ (__V2SI__)));


typedef int __v2si __attribute__ ((__mode__ (__V2SI__)));
typedef int __v4hi __attribute__ ((__mode__ (__V4HI__)));
typedef int __v8qi __attribute__ ((__mode__ (__V8QI__)));


static __inline void
_mm_empty (void)
{
  __builtin_ia32_emms ();
}

static __inline void
_m_empty (void)
{
  _mm_empty ();
}


static __inline __m64
_mm_cvtsi32_si64 (int __i)
{
  long long __tmp = (unsigned int)__i;
  return (__m64) __tmp;
}

static __inline __m64
_m_from_int (int __i)
{
  return _mm_cvtsi32_si64 (__i);
}



static __inline __m64
_mm_cvtsi64x_si64 (long long __i)
{
  return (__m64) __i;
}


static __inline __m64
_mm_set_pi64x (long long __i)
{
  return (__m64) __i;
}



static __inline int
_mm_cvtsi64_si32 (__m64 __i)
{
  long long __tmp = (long long)__i;
  return __tmp;
}

static __inline int
_m_to_int (__m64 __i)
{
  return _mm_cvtsi64_si32 (__i);
}



static __inline long long
_mm_cvtsi64_si64x (__m64 __i)
{
  return (long long)__i;
}





static __inline __m64
_mm_packs_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_packsswb ((__v4hi)__m1, (__v4hi)__m2);
}

static __inline __m64
_m_packsswb (__m64 __m1, __m64 __m2)
{
  return _mm_packs_pi16 (__m1, __m2);
}




static __inline __m64
_mm_packs_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_packssdw ((__v2si)__m1, (__v2si)__m2);
}

static __inline __m64
_m_packssdw (__m64 __m1, __m64 __m2)
{
  return _mm_packs_pi32 (__m1, __m2);
}




static __inline __m64
_mm_packs_pu16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_packuswb ((__v4hi)__m1, (__v4hi)__m2);
}

static __inline __m64
_m_packuswb (__m64 __m1, __m64 __m2)
{
  return _mm_packs_pu16 (__m1, __m2);
}



static __inline __m64
_mm_unpackhi_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpckhbw ((__v8qi)__m1, (__v8qi)__m2);
}

static __inline __m64
_m_punpckhbw (__m64 __m1, __m64 __m2)
{
  return _mm_unpackhi_pi8 (__m1, __m2);
}



static __inline __m64
_mm_unpackhi_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpckhwd ((__v4hi)__m1, (__v4hi)__m2);
}

static __inline __m64
_m_punpckhwd (__m64 __m1, __m64 __m2)
{
  return _mm_unpackhi_pi16 (__m1, __m2);
}



static __inline __m64
_mm_unpackhi_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpckhdq ((__v2si)__m1, (__v2si)__m2);
}

static __inline __m64
_m_punpckhdq (__m64 __m1, __m64 __m2)
{
  return _mm_unpackhi_pi32 (__m1, __m2);
}



static __inline __m64
_mm_unpacklo_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpcklbw ((__v8qi)__m1, (__v8qi)__m2);
}

static __inline __m64
_m_punpcklbw (__m64 __m1, __m64 __m2)
{
  return _mm_unpacklo_pi8 (__m1, __m2);
}



static __inline __m64
_mm_unpacklo_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpcklwd ((__v4hi)__m1, (__v4hi)__m2);
}

static __inline __m64
_m_punpcklwd (__m64 __m1, __m64 __m2)
{
  return _mm_unpacklo_pi16 (__m1, __m2);
}



static __inline __m64
_mm_unpacklo_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpckldq ((__v2si)__m1, (__v2si)__m2);
}

static __inline __m64
_m_punpckldq (__m64 __m1, __m64 __m2)
{
  return _mm_unpacklo_pi32 (__m1, __m2);
}


static __inline __m64
_mm_add_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddb ((__v8qi)__m1, (__v8qi)__m2);
}

static __inline __m64
_m_paddb (__m64 __m1, __m64 __m2)
{
  return _mm_add_pi8 (__m1, __m2);
}


static __inline __m64
_mm_add_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddw ((__v4hi)__m1, (__v4hi)__m2);
}

static __inline __m64
_m_paddw (__m64 __m1, __m64 __m2)
{
  return _mm_add_pi16 (__m1, __m2);
}


static __inline __m64
_mm_add_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddd ((__v2si)__m1, (__v2si)__m2);
}

static __inline __m64
_m_paddd (__m64 __m1, __m64 __m2)
{
  return _mm_add_pi32 (__m1, __m2);
}


static __inline __m64
_mm_add_si64 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddq ((long long)__m1, (long long)__m2);
}



static __inline __m64
_mm_adds_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddsb ((__v8qi)__m1, (__v8qi)__m2);
}

static __inline __m64
_m_paddsb (__m64 __m1, __m64 __m2)
{
  return _mm_adds_pi8 (__m1, __m2);
}



static __inline __m64
_mm_adds_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddsw ((__v4hi)__m1, (__v4hi)__m2);
}

static __inline __m64
_m_paddsw (__m64 __m1, __m64 __m2)
{
  return _mm_adds_pi16 (__m1, __m2);
}



static __inline __m64
_mm_adds_pu8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddusb ((__v8qi)__m1, (__v8qi)__m2);
}

static __inline __m64
_m_paddusb (__m64 __m1, __m64 __m2)
{
  return _mm_adds_pu8 (__m1, __m2);
}



static __inline __m64
_mm_adds_pu16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddusw ((__v4hi)__m1, (__v4hi)__m2);
}

static __inline __m64
_m_paddusw (__m64 __m1, __m64 __m2)
{
  return _mm_adds_pu16 (__m1, __m2);
}


static __inline __m64
_mm_sub_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubb ((__v8qi)__m1, (__v8qi)__m2);
}

static __inline __m64
_m_psubb (__m64 __m1, __m64 __m2)
{
  return _mm_sub_pi8 (__m1, __m2);
}


static __inline __m64
_mm_sub_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubw ((__v4hi)__m1, (__v4hi)__m2);
}

static __inline __m64
_m_psubw (__m64 __m1, __m64 __m2)
{
  return _mm_sub_pi16 (__m1, __m2);
}


static __inline __m64
_mm_sub_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubd ((__v2si)__m1, (__v2si)__m2);
}

static __inline __m64
_m_psubd (__m64 __m1, __m64 __m2)
{
  return _mm_sub_pi32 (__m1, __m2);
}


static __inline __m64
_mm_sub_si64 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubq ((long long)__m1, (long long)__m2);
}



static __inline __m64
_mm_subs_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubsb ((__v8qi)__m1, (__v8qi)__m2);
}

static __inline __m64
_m_psubsb (__m64 __m1, __m64 __m2)
{
  return _mm_subs_pi8 (__m1, __m2);
}



static __inline __m64
_mm_subs_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubsw ((__v4hi)__m1, (__v4hi)__m2);
}

static __inline __m64
_m_psubsw (__m64 __m1, __m64 __m2)
{
  return _mm_subs_pi16 (__m1, __m2);
}



static __inline __m64
_mm_subs_pu8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubusb ((__v8qi)__m1, (__v8qi)__m2);
}

static __inline __m64
_m_psubusb (__m64 __m1, __m64 __m2)
{
  return _mm_subs_pu8 (__m1, __m2);
}



static __inline __m64
_mm_subs_pu16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubusw ((__v4hi)__m1, (__v4hi)__m2);
}

static __inline __m64
_m_psubusw (__m64 __m1, __m64 __m2)
{
  return _mm_subs_pu16 (__m1, __m2);
}




static __inline __m64
_mm_madd_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pmaddwd ((__v4hi)__m1, (__v4hi)__m2);
}

static __inline __m64
_m_pmaddwd (__m64 __m1, __m64 __m2)
{
  return _mm_madd_pi16 (__m1, __m2);
}



static __inline __m64
_mm_mulhi_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pmulhw ((__v4hi)__m1, (__v4hi)__m2);
}

static __inline __m64
_m_pmulhw (__m64 __m1, __m64 __m2)
{
  return _mm_mulhi_pi16 (__m1, __m2);
}



static __inline __m64
_mm_mullo_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pmullw ((__v4hi)__m1, (__v4hi)__m2);
}

static __inline __m64
_m_pmullw (__m64 __m1, __m64 __m2)
{
  return _mm_mullo_pi16 (__m1, __m2);
}


static __inline __m64
_mm_sll_pi16 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psllw ((__v4hi)__m, (long long)__count);
}

static __inline __m64
_m_psllw (__m64 __m, __m64 __count)
{
  return _mm_sll_pi16 (__m, __count);
}

static __inline __m64
_mm_slli_pi16 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psllw ((__v4hi)__m, __count);
}

static __inline __m64
_m_psllwi (__m64 __m, int __count)
{
  return _mm_slli_pi16 (__m, __count);
}


static __inline __m64
_mm_sll_pi32 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_pslld ((__v2si)__m, (long long)__count);
}

static __inline __m64
_m_pslld (__m64 __m, __m64 __count)
{
  return _mm_sll_pi32 (__m, __count);
}

static __inline __m64
_mm_slli_pi32 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_pslld ((__v2si)__m, __count);
}

static __inline __m64
_m_pslldi (__m64 __m, int __count)
{
  return _mm_slli_pi32 (__m, __count);
}


static __inline __m64
_mm_sll_si64 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psllq ((long long)__m, (long long)__count);
}

static __inline __m64
_m_psllq (__m64 __m, __m64 __count)
{
  return _mm_sll_si64 (__m, __count);
}

static __inline __m64
_mm_slli_si64 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psllq ((long long)__m, (long long)__count);
}

static __inline __m64
_m_psllqi (__m64 __m, int __count)
{
  return _mm_slli_si64 (__m, __count);
}


static __inline __m64
_mm_sra_pi16 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psraw ((__v4hi)__m, (long long)__count);
}

static __inline __m64
_m_psraw (__m64 __m, __m64 __count)
{
  return _mm_sra_pi16 (__m, __count);
}

static __inline __m64
_mm_srai_pi16 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psraw ((__v4hi)__m, __count);
}

static __inline __m64
_m_psrawi (__m64 __m, int __count)
{
  return _mm_srai_pi16 (__m, __count);
}


static __inline __m64
_mm_sra_pi32 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psrad ((__v2si)__m, (long long)__count);
}

static __inline __m64
_m_psrad (__m64 __m, __m64 __count)
{
  return _mm_sra_pi32 (__m, __count);
}

static __inline __m64
_mm_srai_pi32 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psrad ((__v2si)__m, __count);
}

static __inline __m64
_m_psradi (__m64 __m, int __count)
{
  return _mm_srai_pi32 (__m, __count);
}


static __inline __m64
_mm_srl_pi16 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psrlw ((__v4hi)__m, (long long)__count);
}

static __inline __m64
_m_psrlw (__m64 __m, __m64 __count)
{
  return _mm_srl_pi16 (__m, __count);
}

static __inline __m64
_mm_srli_pi16 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psrlw ((__v4hi)__m, __count);
}

static __inline __m64
_m_psrlwi (__m64 __m, int __count)
{
  return _mm_srli_pi16 (__m, __count);
}


static __inline __m64
_mm_srl_pi32 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psrld ((__v2si)__m, (long long)__count);
}

static __inline __m64
_m_psrld (__m64 __m, __m64 __count)
{
  return _mm_srl_pi32 (__m, __count);
}

static __inline __m64
_mm_srli_pi32 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psrld ((__v2si)__m, __count);
}

static __inline __m64
_m_psrldi (__m64 __m, int __count)
{
  return _mm_srli_pi32 (__m, __count);
}


static __inline __m64
_mm_srl_si64 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psrlq ((long long)__m, (long long)__count);
}

static __inline __m64
_m_psrlq (__m64 __m, __m64 __count)
{
  return _mm_srl_si64 (__m, __count);
}

static __inline __m64
_mm_srli_si64 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psrlq ((long long)__m, (long long)__count);
}

static __inline __m64
_m_psrlqi (__m64 __m, int __count)
{
  return _mm_srli_si64 (__m, __count);
}


static __inline __m64
_mm_and_si64 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pand ((long long)__m1, (long long)__m2);
}

static __inline __m64
_m_pand (__m64 __m1, __m64 __m2)
{
  return _mm_and_si64 (__m1, __m2);
}



static __inline __m64
_mm_andnot_si64 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pandn ((long long)__m1, (long long)__m2);
}

static __inline __m64
_m_pandn (__m64 __m1, __m64 __m2)
{
  return _mm_andnot_si64 (__m1, __m2);
}


static __inline __m64
_mm_or_si64 (__m64 __m1, __m64 __m2)
{
  return (__m64)__builtin_ia32_por ((long long)__m1, (long long)__m2);
}

static __inline __m64
_m_por (__m64 __m1, __m64 __m2)
{
  return _mm_or_si64 (__m1, __m2);
}


static __inline __m64
_mm_xor_si64 (__m64 __m1, __m64 __m2)
{
  return (__m64)__builtin_ia32_pxor ((long long)__m1, (long long)__m2);
}

static __inline __m64
_m_pxor (__m64 __m1, __m64 __m2)
{
  return _mm_xor_si64 (__m1, __m2);
}



static __inline __m64
_mm_cmpeq_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpeqb ((__v8qi)__m1, (__v8qi)__m2);
}

static __inline __m64
_m_pcmpeqb (__m64 __m1, __m64 __m2)
{
  return _mm_cmpeq_pi8 (__m1, __m2);
}

static __inline __m64
_mm_cmpgt_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpgtb ((__v8qi)__m1, (__v8qi)__m2);
}

static __inline __m64
_m_pcmpgtb (__m64 __m1, __m64 __m2)
{
  return _mm_cmpgt_pi8 (__m1, __m2);
}



static __inline __m64
_mm_cmpeq_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpeqw ((__v4hi)__m1, (__v4hi)__m2);
}

static __inline __m64
_m_pcmpeqw (__m64 __m1, __m64 __m2)
{
  return _mm_cmpeq_pi16 (__m1, __m2);
}

static __inline __m64
_mm_cmpgt_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpgtw ((__v4hi)__m1, (__v4hi)__m2);
}

static __inline __m64
_m_pcmpgtw (__m64 __m1, __m64 __m2)
{
  return _mm_cmpgt_pi16 (__m1, __m2);
}



static __inline __m64
_mm_cmpeq_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpeqd ((__v2si)__m1, (__v2si)__m2);
}

static __inline __m64
_m_pcmpeqd (__m64 __m1, __m64 __m2)
{
  return _mm_cmpeq_pi32 (__m1, __m2);
}

static __inline __m64
_mm_cmpgt_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpgtd ((__v2si)__m1, (__v2si)__m2);
}

static __inline __m64
_m_pcmpgtd (__m64 __m1, __m64 __m2)
{
  return _mm_cmpgt_pi32 (__m1, __m2);
}


static __inline __m64
_mm_setzero_si64 (void)
{
  return (__m64)__builtin_ia32_mmx_zero ();
}


static __inline __m64
_mm_set_pi32 (int __i1, int __i0)
{
  union {
    __m64 __q;
    struct {
      unsigned int __i0;
      unsigned int __i1;
    } __s;
  } __u;

  __u.__s.__i0 = __i0;
  __u.__s.__i1 = __i1;

  return __u.__q;
}


static __inline __m64
_mm_set_pi16 (short __w3, short __w2, short __w1, short __w0)
{
  unsigned int __i1 = (unsigned short)__w3 << 16 | (unsigned short)__w2;
  unsigned int __i0 = (unsigned short)__w1 << 16 | (unsigned short)__w0;
  return _mm_set_pi32 (__i1, __i0);

}


static __inline __m64
_mm_set_pi8 (char __b7, char __b6, char __b5, char __b4,
      char __b3, char __b2, char __b1, char __b0)
{
  unsigned int __i1, __i0;

  __i1 = (unsigned char)__b7;
  __i1 = __i1 << 8 | (unsigned char)__b6;
  __i1 = __i1 << 8 | (unsigned char)__b5;
  __i1 = __i1 << 8 | (unsigned char)__b4;

  __i0 = (unsigned char)__b3;
  __i0 = __i0 << 8 | (unsigned char)__b2;
  __i0 = __i0 << 8 | (unsigned char)__b1;
  __i0 = __i0 << 8 | (unsigned char)__b0;

  return _mm_set_pi32 (__i1, __i0);
}


static __inline __m64
_mm_setr_pi32 (int __i0, int __i1)
{
  return _mm_set_pi32 (__i1, __i0);
}

static __inline __m64
_mm_setr_pi16 (short __w0, short __w1, short __w2, short __w3)
{
  return _mm_set_pi16 (__w3, __w2, __w1, __w0);
}

static __inline __m64
_mm_setr_pi8 (char __b0, char __b1, char __b2, char __b3,
       char __b4, char __b5, char __b6, char __b7)
{
  return _mm_set_pi8 (__b7, __b6, __b5, __b4, __b3, __b2, __b1, __b0);
}


static __inline __m64
_mm_set1_pi32 (int __i)
{
  return _mm_set_pi32 (__i, __i);
}


static __inline __m64
_mm_set1_pi16 (short __w)
{
  unsigned int __i = (unsigned short)__w << 16 | (unsigned short)__w;
  return _mm_set1_pi32 (__i);
}


static __inline __m64
_mm_set1_pi8 (char __b)
{
  unsigned int __w = (unsigned char)__b << 8 | (unsigned char)__b;
  unsigned int __i = __w << 16 | __w;
  return _mm_set1_pi32 (__i);
}
# 39 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/xmmintrin.h" 2 3 4


typedef float __m128 __attribute__ ((__mode__(__V4SF__)));


typedef float __v4sf __attribute__ ((__mode__(__V4SF__)));






enum _mm_hint
{
  _MM_HINT_T0 = 3,
  _MM_HINT_T1 = 2,
  _MM_HINT_T2 = 1,
  _MM_HINT_NTA = 0
};
# 90 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/xmmintrin.h" 3 4
static __inline __m128
_mm_add_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_addss ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_sub_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_subss ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_mul_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_mulss ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_div_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_divss ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_sqrt_ss (__m128 __A)
{
  return (__m128) __builtin_ia32_sqrtss ((__v4sf)__A);
}

static __inline __m128
_mm_rcp_ss (__m128 __A)
{
  return (__m128) __builtin_ia32_rcpss ((__v4sf)__A);
}

static __inline __m128
_mm_rsqrt_ss (__m128 __A)
{
  return (__m128) __builtin_ia32_rsqrtss ((__v4sf)__A);
}

static __inline __m128
_mm_min_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_minss ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_max_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_maxss ((__v4sf)__A, (__v4sf)__B);
}



static __inline __m128
_mm_add_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_addps ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_sub_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_subps ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_mul_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_mulps ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_div_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_divps ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_sqrt_ps (__m128 __A)
{
  return (__m128) __builtin_ia32_sqrtps ((__v4sf)__A);
}

static __inline __m128
_mm_rcp_ps (__m128 __A)
{
  return (__m128) __builtin_ia32_rcpps ((__v4sf)__A);
}

static __inline __m128
_mm_rsqrt_ps (__m128 __A)
{
  return (__m128) __builtin_ia32_rsqrtps ((__v4sf)__A);
}

static __inline __m128
_mm_min_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_minps ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_max_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_maxps ((__v4sf)__A, (__v4sf)__B);
}



static __inline __m128
_mm_and_ps (__m128 __A, __m128 __B)
{
  return __builtin_ia32_andps (__A, __B);
}

static __inline __m128
_mm_andnot_ps (__m128 __A, __m128 __B)
{
  return __builtin_ia32_andnps (__A, __B);
}

static __inline __m128
_mm_or_ps (__m128 __A, __m128 __B)
{
  return __builtin_ia32_orps (__A, __B);
}

static __inline __m128
_mm_xor_ps (__m128 __A, __m128 __B)
{
  return __builtin_ia32_xorps (__A, __B);
}





static __inline __m128
_mm_cmpeq_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpeqss ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_cmplt_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpltss ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_cmple_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpless ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_cmpgt_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movss ((__v4sf) __A,
     (__v4sf)
     __builtin_ia32_cmpltss ((__v4sf) __B,
        (__v4sf)
        __A));
}

static __inline __m128
_mm_cmpge_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movss ((__v4sf) __A,
     (__v4sf)
     __builtin_ia32_cmpless ((__v4sf) __B,
        (__v4sf)
        __A));
}

static __inline __m128
_mm_cmpneq_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpneqss ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_cmpnlt_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpnltss ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_cmpnle_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpnless ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_cmpngt_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movss ((__v4sf) __A,
     (__v4sf)
     __builtin_ia32_cmpnltss ((__v4sf) __B,
         (__v4sf)
         __A));
}

static __inline __m128
_mm_cmpnge_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movss ((__v4sf) __A,
     (__v4sf)
     __builtin_ia32_cmpnless ((__v4sf) __B,
         (__v4sf)
         __A));
}

static __inline __m128
_mm_cmpord_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpordss ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_cmpunord_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpunordss ((__v4sf)__A, (__v4sf)__B);
}





static __inline __m128
_mm_cmpeq_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpeqps ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_cmplt_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpltps ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_cmple_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpleps ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_cmpgt_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpgtps ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_cmpge_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpgeps ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_cmpneq_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpneqps ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_cmpnlt_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpnltps ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_cmpnle_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpnleps ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_cmpngt_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpngtps ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_cmpnge_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpngeps ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_cmpord_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpordps ((__v4sf)__A, (__v4sf)__B);
}

static __inline __m128
_mm_cmpunord_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpunordps ((__v4sf)__A, (__v4sf)__B);
}




static __inline int
_mm_comieq_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comieq ((__v4sf)__A, (__v4sf)__B);
}

static __inline int
_mm_comilt_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comilt ((__v4sf)__A, (__v4sf)__B);
}

static __inline int
_mm_comile_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comile ((__v4sf)__A, (__v4sf)__B);
}

static __inline int
_mm_comigt_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comigt ((__v4sf)__A, (__v4sf)__B);
}

static __inline int
_mm_comige_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comige ((__v4sf)__A, (__v4sf)__B);
}

static __inline int
_mm_comineq_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comineq ((__v4sf)__A, (__v4sf)__B);
}

static __inline int
_mm_ucomieq_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomieq ((__v4sf)__A, (__v4sf)__B);
}

static __inline int
_mm_ucomilt_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomilt ((__v4sf)__A, (__v4sf)__B);
}

static __inline int
_mm_ucomile_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomile ((__v4sf)__A, (__v4sf)__B);
}

static __inline int
_mm_ucomigt_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomigt ((__v4sf)__A, (__v4sf)__B);
}

static __inline int
_mm_ucomige_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomige ((__v4sf)__A, (__v4sf)__B);
}

static __inline int
_mm_ucomineq_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomineq ((__v4sf)__A, (__v4sf)__B);
}



static __inline int
_mm_cvtss_si32 (__m128 __A)
{
  return __builtin_ia32_cvtss2si ((__v4sf) __A);
}

static __inline int
_mm_cvt_ss2si (__m128 __A)
{
  return _mm_cvtss_si32 (__A);
}




static __inline long long
_mm_cvtss_si64x (__m128 __A)
{
  return __builtin_ia32_cvtss2si64 ((__v4sf) __A);
}




static __inline __m64
_mm_cvtps_pi32 (__m128 __A)
{
  return (__m64) __builtin_ia32_cvtps2pi ((__v4sf) __A);
}

static __inline __m64
_mm_cvt_ps2pi (__m128 __A)
{
  return _mm_cvtps_pi32 (__A);
}


static __inline int
_mm_cvttss_si32 (__m128 __A)
{
  return __builtin_ia32_cvttss2si ((__v4sf) __A);
}

static __inline int
_mm_cvtt_ss2si (__m128 __A)
{
  return _mm_cvttss_si32 (__A);
}



static __inline long long
_mm_cvttss_si64x (__m128 __A)
{
  return __builtin_ia32_cvttss2si64 ((__v4sf) __A);
}




static __inline __m64
_mm_cvttps_pi32 (__m128 __A)
{
  return (__m64) __builtin_ia32_cvttps2pi ((__v4sf) __A);
}

static __inline __m64
_mm_cvtt_ps2pi (__m128 __A)
{
  return _mm_cvttps_pi32 (__A);
}


static __inline __m128
_mm_cvtsi32_ss (__m128 __A, int __B)
{
  return (__m128) __builtin_ia32_cvtsi2ss ((__v4sf) __A, __B);
}

static __inline __m128
_mm_cvt_si2ss (__m128 __A, int __B)
{
  return _mm_cvtsi32_ss (__A, __B);
}



static __inline __m128
_mm_cvtsi64x_ss (__m128 __A, long long __B)
{
  return (__m128) __builtin_ia32_cvtsi642ss ((__v4sf) __A, __B);
}




static __inline __m128
_mm_cvtpi32_ps (__m128 __A, __m64 __B)
{
  return (__m128) __builtin_ia32_cvtpi2ps ((__v4sf) __A, (__v2si)__B);
}

static __inline __m128
_mm_cvt_pi2ps (__m128 __A, __m64 __B)
{
  return _mm_cvtpi32_ps (__A, __B);
}


static __inline __m128
_mm_cvtpi16_ps (__m64 __A)
{
  __v4hi __sign;
  __v2si __hisi, __losi;
  __v4sf __r;




  __sign = (__v4hi) __builtin_ia32_mmx_zero ();
  __sign = __builtin_ia32_pcmpgtw (__sign, (__v4hi)__A);


  __hisi = (__v2si) __builtin_ia32_punpckhwd ((__v4hi)__A, __sign);
  __losi = (__v2si) __builtin_ia32_punpcklwd ((__v4hi)__A, __sign);


  __r = (__v4sf) __builtin_ia32_setzerops ();
  __r = __builtin_ia32_cvtpi2ps (__r, __hisi);
  __r = __builtin_ia32_movlhps (__r, __r);
  __r = __builtin_ia32_cvtpi2ps (__r, __losi);

  return (__m128) __r;
}


static __inline __m128
_mm_cvtpu16_ps (__m64 __A)
{
  __v4hi __zero = (__v4hi) __builtin_ia32_mmx_zero ();
  __v2si __hisi, __losi;
  __v4sf __r;


  __hisi = (__v2si) __builtin_ia32_punpckhwd ((__v4hi)__A, __zero);
  __losi = (__v2si) __builtin_ia32_punpcklwd ((__v4hi)__A, __zero);


  __r = (__v4sf) __builtin_ia32_setzerops ();
  __r = __builtin_ia32_cvtpi2ps (__r, __hisi);
  __r = __builtin_ia32_movlhps (__r, __r);
  __r = __builtin_ia32_cvtpi2ps (__r, __losi);

  return (__m128) __r;
}


static __inline __m128
_mm_cvtpi8_ps (__m64 __A)
{
  __v8qi __sign;




  __sign = (__v8qi) __builtin_ia32_mmx_zero ();
  __sign = __builtin_ia32_pcmpgtb (__sign, (__v8qi)__A);


  __A = (__m64) __builtin_ia32_punpcklbw ((__v8qi)__A, __sign);

  return _mm_cvtpi16_ps(__A);
}


static __inline __m128
_mm_cvtpu8_ps(__m64 __A)
{
  __v8qi __zero = (__v8qi) __builtin_ia32_mmx_zero ();
  __A = (__m64) __builtin_ia32_punpcklbw ((__v8qi)__A, __zero);
  return _mm_cvtpu16_ps(__A);
}


static __inline __m128
_mm_cvtpi32x2_ps(__m64 __A, __m64 __B)
{
  __v4sf __zero = (__v4sf) __builtin_ia32_setzerops ();
  __v4sf __sfa = __builtin_ia32_cvtpi2ps (__zero, (__v2si)__A);
  __v4sf __sfb = __builtin_ia32_cvtpi2ps (__zero, (__v2si)__B);
  return (__m128) __builtin_ia32_movlhps (__sfa, __sfb);
}


static __inline __m64
_mm_cvtps_pi16(__m128 __A)
{
  __v4sf __hisf = (__v4sf)__A;
  __v4sf __losf = __builtin_ia32_movhlps (__hisf, __hisf);
  __v2si __hisi = __builtin_ia32_cvtps2pi (__hisf);
  __v2si __losi = __builtin_ia32_cvtps2pi (__losf);
  return (__m64) __builtin_ia32_packssdw (__hisi, __losi);
}


static __inline __m64
_mm_cvtps_pi8(__m128 __A)
{
  __v4hi __tmp = (__v4hi) _mm_cvtps_pi16 (__A);
  __v4hi __zero = (__v4hi) __builtin_ia32_mmx_zero ();
  return (__m64) __builtin_ia32_packsswb (__tmp, __zero);
}
# 698 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/xmmintrin.h" 3 4
static __inline __m128
_mm_unpackhi_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_unpckhps ((__v4sf)__A, (__v4sf)__B);
}


static __inline __m128
_mm_unpacklo_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_unpcklps ((__v4sf)__A, (__v4sf)__B);
}



static __inline __m128
_mm_loadh_pi (__m128 __A, __m64 const *__P)
{
  return (__m128) __builtin_ia32_loadhps ((__v4sf)__A, (__v2si *)__P);
}


static __inline void
_mm_storeh_pi (__m64 *__P, __m128 __A)
{
  __builtin_ia32_storehps ((__v2si *)__P, (__v4sf)__A);
}


static __inline __m128
_mm_movehl_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movhlps ((__v4sf)__A, (__v4sf)__B);
}


static __inline __m128
_mm_movelh_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movlhps ((__v4sf)__A, (__v4sf)__B);
}



static __inline __m128
_mm_loadl_pi (__m128 __A, __m64 const *__P)
{
  return (__m128) __builtin_ia32_loadlps ((__v4sf)__A, (__v2si *)__P);
}


static __inline void
_mm_storel_pi (__m64 *__P, __m128 __A)
{
  __builtin_ia32_storelps ((__v2si *)__P, (__v4sf)__A);
}


static __inline int
_mm_movemask_ps (__m128 __A)
{
  return __builtin_ia32_movmskps ((__v4sf)__A);
}


static __inline unsigned int
_mm_getcsr (void)
{
  return __builtin_ia32_stmxcsr ();
}


static __inline unsigned int
_MM_GET_EXCEPTION_STATE (void)
{
  return _mm_getcsr() & 0x003f;
}

static __inline unsigned int
_MM_GET_EXCEPTION_MASK (void)
{
  return _mm_getcsr() & 0x1f80;
}

static __inline unsigned int
_MM_GET_ROUNDING_MODE (void)
{
  return _mm_getcsr() & 0x6000;
}

static __inline unsigned int
_MM_GET_FLUSH_ZERO_MODE (void)
{
  return _mm_getcsr() & 0x8000;
}


static __inline void
_mm_setcsr (unsigned int __I)
{
  __builtin_ia32_ldmxcsr (__I);
}


static __inline void
_MM_SET_EXCEPTION_STATE(unsigned int __mask)
{
  _mm_setcsr((_mm_getcsr() & ~0x003f) | __mask);
}

static __inline void
_MM_SET_EXCEPTION_MASK (unsigned int __mask)
{
  _mm_setcsr((_mm_getcsr() & ~0x1f80) | __mask);
}

static __inline void
_MM_SET_ROUNDING_MODE (unsigned int __mode)
{
  _mm_setcsr((_mm_getcsr() & ~0x6000) | __mode);
}

static __inline void
_MM_SET_FLUSH_ZERO_MODE (unsigned int __mode)
{
  _mm_setcsr((_mm_getcsr() & ~0x8000) | __mode);
}


static __inline __m128
_mm_load_ss (float const *__P)
{
  return (__m128) __builtin_ia32_loadss (__P);
}


static __inline __m128
_mm_load1_ps (float const *__P)
{
  __v4sf __tmp = __builtin_ia32_loadss (__P);
  return (__m128) __builtin_ia32_shufps (__tmp, __tmp, (((0) << 6) | ((0) << 4) | ((0) << 2) | (0)));
}

static __inline __m128
_mm_load_ps1 (float const *__P)
{
  return _mm_load1_ps (__P);
}


static __inline __m128
_mm_load_ps (float const *__P)
{
  return (__m128) __builtin_ia32_loadaps (__P);
}


static __inline __m128
_mm_loadu_ps (float const *__P)
{
  return (__m128) __builtin_ia32_loadups (__P);
}


static __inline __m128
_mm_loadr_ps (float const *__P)
{
  __v4sf __tmp = __builtin_ia32_loadaps (__P);
  return (__m128) __builtin_ia32_shufps (__tmp, __tmp, (((0) << 6) | ((1) << 4) | ((2) << 2) | (3)));
}


static __inline __m128
_mm_set_ss (float __F)
{
  return (__m128) __builtin_ia32_loadss (&__F);
}


static __inline __m128
_mm_set1_ps (float __F)
{
  __v4sf __tmp = __builtin_ia32_loadss (&__F);
  return (__m128) __builtin_ia32_shufps (__tmp, __tmp, (((0) << 6) | ((0) << 4) | ((0) << 2) | (0)));
}

static __inline __m128
_mm_set_ps1 (float __F)
{
  return _mm_set1_ps (__F);
}


static __inline __m128
_mm_set_ps (const float __Z, const float __Y, const float __X, const float __W)
{
  return (__v4sf) {__W, __X, __Y, __Z};
}


static __inline __m128
_mm_setr_ps (float __Z, float __Y, float __X, float __W)
{
  return _mm_set_ps (__W, __X, __Y, __Z);
}


static __inline __m128
_mm_setzero_ps (void)
{
  return (__m128) __builtin_ia32_setzerops ();
}


static __inline void
_mm_store_ss (float *__P, __m128 __A)
{
  __builtin_ia32_storess (__P, (__v4sf)__A);
}


static __inline void
_mm_store1_ps (float *__P, __m128 __A)
{
  __v4sf __va = (__v4sf)__A;
  __v4sf __tmp = __builtin_ia32_shufps (__va, __va, (((0) << 6) | ((0) << 4) | ((0) << 2) | (0)));
  __builtin_ia32_storeaps (__P, __tmp);
}

static __inline void
_mm_store_ps1 (float *__P, __m128 __A)
{
  _mm_store1_ps (__P, __A);
}


static __inline void
_mm_store_ps (float *__P, __m128 __A)
{
  __builtin_ia32_storeaps (__P, (__v4sf)__A);
}


static __inline void
_mm_storeu_ps (float *__P, __m128 __A)
{
  __builtin_ia32_storeups (__P, (__v4sf)__A);
}


static __inline void
_mm_storer_ps (float *__P, __m128 __A)
{
  __v4sf __va = (__v4sf)__A;
  __v4sf __tmp = __builtin_ia32_shufps (__va, __va, (((0) << 6) | ((1) << 4) | ((2) << 2) | (3)));
  __builtin_ia32_storeaps (__P, __tmp);
}


static __inline __m128
_mm_move_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movss ((__v4sf)__A, (__v4sf)__B);
}
# 1003 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/xmmintrin.h" 3 4
static __inline __m64
_mm_max_pi16 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pmaxsw ((__v4hi)__A, (__v4hi)__B);
}

static __inline __m64
_m_pmaxsw (__m64 __A, __m64 __B)
{
  return _mm_max_pi16 (__A, __B);
}


static __inline __m64
_mm_max_pu8 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pmaxub ((__v8qi)__A, (__v8qi)__B);
}

static __inline __m64
_m_pmaxub (__m64 __A, __m64 __B)
{
  return _mm_max_pu8 (__A, __B);
}


static __inline __m64
_mm_min_pi16 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pminsw ((__v4hi)__A, (__v4hi)__B);
}

static __inline __m64
_m_pminsw (__m64 __A, __m64 __B)
{
  return _mm_min_pi16 (__A, __B);
}


static __inline __m64
_mm_min_pu8 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pminub ((__v8qi)__A, (__v8qi)__B);
}

static __inline __m64
_m_pminub (__m64 __A, __m64 __B)
{
  return _mm_min_pu8 (__A, __B);
}


static __inline int
_mm_movemask_pi8 (__m64 __A)
{
  return __builtin_ia32_pmovmskb ((__v8qi)__A);
}

static __inline int
_m_pmovmskb (__m64 __A)
{
  return _mm_movemask_pi8 (__A);
}



static __inline __m64
_mm_mulhi_pu16 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pmulhuw ((__v4hi)__A, (__v4hi)__B);
}

static __inline __m64
_m_pmulhuw (__m64 __A, __m64 __B)
{
  return _mm_mulhi_pu16 (__A, __B);
}
# 1104 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/xmmintrin.h" 3 4
static __inline void
_mm_maskmove_si64 (__m64 __A, __m64 __N, char *__P)
{
  __builtin_ia32_maskmovq ((__v8qi)__A, (__v8qi)__N, __P);
}

static __inline void
_m_maskmovq (__m64 __A, __m64 __N, char *__P)
{
  _mm_maskmove_si64 (__A, __N, __P);
}


static __inline __m64
_mm_avg_pu8 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pavgb ((__v8qi)__A, (__v8qi)__B);
}

static __inline __m64
_m_pavgb (__m64 __A, __m64 __B)
{
  return _mm_avg_pu8 (__A, __B);
}


static __inline __m64
_mm_avg_pu16 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pavgw ((__v4hi)__A, (__v4hi)__B);
}

static __inline __m64
_m_pavgw (__m64 __A, __m64 __B)
{
  return _mm_avg_pu16 (__A, __B);
}




static __inline __m64
_mm_sad_pu8 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_psadbw ((__v8qi)__A, (__v8qi)__B);
}

static __inline __m64
_m_psadbw (__m64 __A, __m64 __B)
{
  return _mm_sad_pu8 (__A, __B);
}
# 1171 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/xmmintrin.h" 3 4
static __inline void
_mm_stream_pi (__m64 *__P, __m64 __A)
{
  __builtin_ia32_movntq ((unsigned long long *)__P, (unsigned long long)__A);
}


static __inline void
_mm_stream_ps (float *__P, __m128 __A)
{
  __builtin_ia32_movntps (__P, (__v4sf)__A);
}



static __inline void
_mm_sfence (void)
{
  __builtin_ia32_sfence ();
}




static __inline void
_mm_pause (void)
{
  __asm__ __volatile__ ("rep; nop" : : );
}
# 1216 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/xmmintrin.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/emmintrin.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/emmintrin.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/xmmintrin.h" 1 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/emmintrin.h" 2 3 4


typedef double __v2df __attribute__ ((mode (V2DF)));
typedef int __v2di __attribute__ ((mode (V2DI)));
typedef int __v4si __attribute__ ((mode (V4SI)));
typedef int __v8hi __attribute__ ((mode (V8HI)));
typedef int __v16qi __attribute__ ((mode (V16QI)));
# 51 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/emmintrin.h" 3 4
static __inline __v2df
_mm_load_sd (double const *__P)
{
  return (__v2df) __builtin_ia32_loadsd (__P);
}


static __inline __v2df
_mm_load1_pd (double const *__P)
{
  __v2df __tmp = __builtin_ia32_loadsd (__P);
  return (__v2df) __builtin_ia32_shufpd (__tmp, __tmp, (((0) << 1) | (0)));
}

static __inline __v2df
_mm_load_pd1 (double const *__P)
{
  return _mm_load1_pd (__P);
}


static __inline __v2df
_mm_load_pd (double const *__P)
{
  return (__v2df) __builtin_ia32_loadapd (__P);
}


static __inline __v2df
_mm_loadu_pd (double const *__P)
{
  return (__v2df) __builtin_ia32_loadupd (__P);
}


static __inline __v2df
_mm_loadr_pd (double const *__P)
{
  __v2df __tmp = __builtin_ia32_loadapd (__P);
  return (__v2df) __builtin_ia32_shufpd (__tmp, __tmp, (((0) << 1) | (1)));
}


static __inline __v2df
_mm_set_sd (double __F)
{
  return (__v2df) __builtin_ia32_loadsd (&__F);
}


static __inline __v2df
_mm_set1_pd (double __F)
{
  __v2df __tmp = __builtin_ia32_loadsd (&__F);
  return (__v2df) __builtin_ia32_shufpd (__tmp, __tmp, (((0) << 1) | (0)));
}

static __inline __v2df
_mm_set_pd1 (double __F)
{
  return _mm_set1_pd (__F);
}


static __inline __v2df
_mm_set_pd (double __Z, double __Y)
{
  return (__v2df) {__Y, __Z};
}


static __inline __v2df
_mm_setr_pd (double __Z, double __Y)
{
  return _mm_set_pd (__Y, __Z);
}


static __inline __v2df
_mm_setzero_pd (void)
{
  return (__v2df) __builtin_ia32_setzeropd ();
}


static __inline void
_mm_store_sd (double *__P, __v2df __A)
{
  __builtin_ia32_storesd (__P, (__v2df)__A);
}


static __inline void
_mm_store1_pd (double *__P, __v2df __A)
{
  __v2df __va = (__v2df)__A;
  __v2df __tmp = __builtin_ia32_shufpd (__va, __va, (((0) << 1) | (0)));
  __builtin_ia32_storeapd (__P, __tmp);
}

static __inline void
_mm_store_pd1 (double *__P, __v2df __A)
{
  _mm_store1_pd (__P, __A);
}


static __inline void
_mm_store_pd (double *__P, __v2df __A)
{
  __builtin_ia32_storeapd (__P, (__v2df)__A);
}


static __inline void
_mm_storeu_pd (double *__P, __v2df __A)
{
  __builtin_ia32_storeupd (__P, (__v2df)__A);
}


static __inline void
_mm_storer_pd (double *__P, __v2df __A)
{
  __v2df __va = (__v2df)__A;
  __v2df __tmp = __builtin_ia32_shufpd (__va, __va, (((0) << 1) | (1)));
  __builtin_ia32_storeapd (__P, __tmp);
}


static __inline __v2df
_mm_move_sd (__v2df __A, __v2df __B)
{
  return (__v2df) __builtin_ia32_movsd ((__v2df)__A, (__v2df)__B);
}


static __inline __v2df
_mm_add_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_addpd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_add_sd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_addsd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_sub_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_subpd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_sub_sd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_subsd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_mul_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_mulpd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_mul_sd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_mulsd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_div_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_divpd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_div_sd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_divsd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_sqrt_pd (__v2df __A)
{
  return (__v2df)__builtin_ia32_sqrtpd ((__v2df)__A);
}


static __inline __v2df
_mm_sqrt_sd (__v2df __A, __v2df __B)
{
  __v2df __tmp = __builtin_ia32_movsd ((__v2df)__A, (__v2df)__B);
  return (__v2df)__builtin_ia32_sqrtsd ((__v2df)__tmp);
}

static __inline __v2df
_mm_min_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_minpd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_min_sd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_minsd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_max_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_maxpd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_max_sd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_maxsd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_and_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_andpd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_andnot_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_andnpd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_or_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_orpd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_xor_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_xorpd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_cmpeq_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_cmpeqpd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_cmplt_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_cmpltpd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_cmple_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_cmplepd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_cmpgt_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_cmpgtpd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_cmpge_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_cmpgepd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_cmpneq_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_cmpneqpd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_cmpnlt_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_cmpnltpd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_cmpnle_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_cmpnlepd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_cmpngt_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_cmpngtpd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_cmpnge_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_cmpngepd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_cmpord_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_cmpordpd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_cmpunord_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_cmpunordpd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_cmpeq_sd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_cmpeqsd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_cmplt_sd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_cmpltsd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_cmple_sd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_cmplesd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_cmpgt_sd (__v2df __A, __v2df __B)
{
  return (__v2df) __builtin_ia32_movsd ((__v2df) __A,
      (__v2df)
      __builtin_ia32_cmpltsd ((__v2df) __B,
         (__v2df)
         __A));
}

static __inline __v2df
_mm_cmpge_sd (__v2df __A, __v2df __B)
{
  return (__v2df) __builtin_ia32_movsd ((__v2df) __A,
      (__v2df)
      __builtin_ia32_cmplesd ((__v2df) __B,
         (__v2df)
         __A));
}

static __inline __v2df
_mm_cmpneq_sd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_cmpneqsd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_cmpnlt_sd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_cmpnltsd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_cmpnle_sd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_cmpnlesd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_cmpngt_sd (__v2df __A, __v2df __B)
{
  return (__v2df) __builtin_ia32_movsd ((__v2df) __A,
      (__v2df)
      __builtin_ia32_cmpnltsd ((__v2df) __B,
          (__v2df)
          __A));
}

static __inline __v2df
_mm_cmpnge_sd (__v2df __A, __v2df __B)
{
  return (__v2df) __builtin_ia32_movsd ((__v2df) __A,
      (__v2df)
      __builtin_ia32_cmpnlesd ((__v2df) __B,
          (__v2df)
          __A));
}

static __inline __v2df
_mm_cmpord_sd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_cmpordsd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_cmpunord_sd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_cmpunordsd ((__v2df)__A, (__v2df)__B);
}

static __inline int
_mm_comieq_sd (__v2df __A, __v2df __B)
{
  return __builtin_ia32_comisdeq ((__v2df)__A, (__v2df)__B);
}

static __inline int
_mm_comilt_sd (__v2df __A, __v2df __B)
{
  return __builtin_ia32_comisdlt ((__v2df)__A, (__v2df)__B);
}

static __inline int
_mm_comile_sd (__v2df __A, __v2df __B)
{
  return __builtin_ia32_comisdle ((__v2df)__A, (__v2df)__B);
}

static __inline int
_mm_comigt_sd (__v2df __A, __v2df __B)
{
  return __builtin_ia32_comisdgt ((__v2df)__A, (__v2df)__B);
}

static __inline int
_mm_comige_sd (__v2df __A, __v2df __B)
{
  return __builtin_ia32_comisdge ((__v2df)__A, (__v2df)__B);
}

static __inline int
_mm_comineq_sd (__v2df __A, __v2df __B)
{
  return __builtin_ia32_comisdneq ((__v2df)__A, (__v2df)__B);
}

static __inline int
_mm_ucomieq_sd (__v2df __A, __v2df __B)
{
  return __builtin_ia32_ucomisdeq ((__v2df)__A, (__v2df)__B);
}

static __inline int
_mm_ucomilt_sd (__v2df __A, __v2df __B)
{
  return __builtin_ia32_ucomisdlt ((__v2df)__A, (__v2df)__B);
}

static __inline int
_mm_ucomile_sd (__v2df __A, __v2df __B)
{
  return __builtin_ia32_ucomisdle ((__v2df)__A, (__v2df)__B);
}

static __inline int
_mm_ucomigt_sd (__v2df __A, __v2df __B)
{
  return __builtin_ia32_ucomisdgt ((__v2df)__A, (__v2df)__B);
}

static __inline int
_mm_ucomige_sd (__v2df __A, __v2df __B)
{
  return __builtin_ia32_ucomisdge ((__v2df)__A, (__v2df)__B);
}

static __inline int
_mm_ucomineq_sd (__v2df __A, __v2df __B)
{
  return __builtin_ia32_ucomisdneq ((__v2df)__A, (__v2df)__B);
}



static __inline __v2di
_mm_load_si128 (__v2di const *__P)
{
  return (__v2di) __builtin_ia32_loaddqa ((char const *)__P);
}

static __inline __v2di
_mm_loadu_si128 (__v2di const *__P)
{
  return (__v2di) __builtin_ia32_loaddqu ((char const *)__P);
}

static __inline __v2di
_mm_loadl_epi64 (__v2di const *__P)
{
  return (__v2di) __builtin_ia32_movq2dq (*(unsigned long long *)__P);
}

static __inline void
_mm_store_si128 (__v2di *__P, __v2di __B)
{
  __builtin_ia32_storedqa ((char *)__P, (__v16qi)__B);
}

static __inline void
_mm_storeu_si128 (__v2di *__P, __v2di __B)
{
  __builtin_ia32_storedqu ((char *)__P, (__v16qi)__B);
}

static __inline void
_mm_storel_epi64 (__v2di *__P, __v2di __B)
{
  *(long long *)__P = __builtin_ia32_movdq2q ((__v2di)__B);
}

static __inline __m64
_mm_movepi64_pi64 (__v2di __B)
{
  return (__m64) __builtin_ia32_movdq2q ((__v2di)__B);
}

static __inline __v2di
_mm_move_epi64 (__v2di __A)
{
  return (__v2di) __builtin_ia32_movq ((__v2di)__A);
}


static __inline __v2di
_mm_setzero_si128 (void)
{
  return (__v2di) __builtin_ia32_setzero128 ();
}

static __inline __v2di
_mm_set_epi64 (__m64 __A, __m64 __B)
{
  __v2di __tmp = (__v2di)__builtin_ia32_movq2dq ((unsigned long long)__A);
  __v2di __tmp2 = (__v2di)__builtin_ia32_movq2dq ((unsigned long long)__B);
  return (__v2di)__builtin_ia32_punpcklqdq128 (__tmp2, __tmp);
}


static __inline __v2di
_mm_set_epi32 (int __Z, int __Y, int __X, int __W)
{
  union {
    int __a[4];
    __v2di __v;
  } __u;

  __u.__a[0] = __W;
  __u.__a[1] = __X;
  __u.__a[2] = __Y;
  __u.__a[3] = __Z;

  return __u.__v;
}



static __inline __v2di
_mm_set_epi64x (long long __Z, long long __Y)
{
  union {
    long __a[2];
    __v2di __v;
  } __u;

  __u.__a[0] = __Y;
  __u.__a[1] = __Z;

  return __u.__v;
}



static __inline __v2di
_mm_set_epi16 (short __Z, short __Y, short __X, short __W,
        short __V, short __U, short __T, short __S)
{
  union {
    short __a[8];
    __v2di __v;
  } __u;

  __u.__a[0] = __S;
  __u.__a[1] = __T;
  __u.__a[2] = __U;
  __u.__a[3] = __V;
  __u.__a[4] = __W;
  __u.__a[5] = __X;
  __u.__a[6] = __Y;
  __u.__a[7] = __Z;

  return __u.__v;
}


static __inline __v2di
_mm_set_epi8 (char __Z, char __Y, char __X, char __W,
       char __V, char __U, char __T, char __S,
       char __Z1, char __Y1, char __X1, char __W1,
       char __V1, char __U1, char __T1, char __S1)
{
  union {
    char __a[16];
    __v2di __v;
  } __u;

  __u.__a[0] = __S1;
  __u.__a[1] = __T1;
  __u.__a[2] = __U1;
  __u.__a[3] = __V1;
  __u.__a[4] = __W1;
  __u.__a[5] = __X1;
  __u.__a[6] = __Y1;
  __u.__a[7] = __Z1;
  __u.__a[8] = __S;
  __u.__a[9] = __T;
  __u.__a[10] = __U;
  __u.__a[11] = __V;
  __u.__a[12] = __W;
  __u.__a[13] = __X;
  __u.__a[14] = __Y;
  __u.__a[15] = __Z;

  return __u.__v;
}

static __inline __v2di
_mm_set1_epi64 (__m64 __A)
{
  __v2di __tmp = (__v2di)__builtin_ia32_movq2dq ((unsigned long long)__A);
  return (__v2di)__builtin_ia32_punpcklqdq128 (__tmp, __tmp);
}

static __inline __v2di
_mm_set1_epi32 (int __A)
{
  __v4si __tmp = (__v4si)__builtin_ia32_loadd (&__A);
  return (__v2di) __builtin_ia32_pshufd ((__v4si)__tmp, (((0) << 6) | ((0) << 4) | ((0) << 2) | (0)));
}


static __inline __v2di
_mm_set1_epi64x (long long __A)
{
  __v2di __tmp = (__v2di)__builtin_ia32_movq2dq ((unsigned long long)__A);
  return (__v2di) __builtin_ia32_shufpd ((__v2df)__tmp, (__v2df)__tmp, (((0) << 1) | (0)));
}


static __inline __v2di
_mm_set1_epi16 (short __A)
{
  int __Acopy = (unsigned short)__A;
  __v4si __tmp = (__v4si)__builtin_ia32_loadd (&__Acopy);
  __tmp = (__v4si)__builtin_ia32_punpcklwd128 ((__v8hi)__tmp, (__v8hi)__tmp);
  return (__v2di) __builtin_ia32_pshufd ((__v4si)__tmp, (((0) << 6) | ((0) << 4) | ((0) << 2) | (0)));
}

static __inline __v2di
_mm_set1_epi8 (char __A)
{
  int __Acopy = (unsigned char)__A;
  __v4si __tmp = (__v4si)__builtin_ia32_loadd (&__Acopy);
  __tmp = (__v4si)__builtin_ia32_punpcklbw128 ((__v16qi)__tmp, (__v16qi)__tmp);
  __tmp = (__v4si)__builtin_ia32_punpcklbw128 ((__v16qi)__tmp, (__v16qi)__tmp);
  return (__v2di) __builtin_ia32_pshufd ((__v4si)__tmp, (((0) << 6) | ((0) << 4) | ((0) << 2) | (0)));
}

static __inline __v2di
_mm_setr_epi64 (__m64 __A, __m64 __B)
{
  __v2di __tmp = (__v2di)__builtin_ia32_movq2dq ((unsigned long long)__A);
  __v2di __tmp2 = (__v2di)__builtin_ia32_movq2dq ((unsigned long long)__B);
  return (__v2di)__builtin_ia32_punpcklqdq128 (__tmp, __tmp2);
}


static __inline __v2di
_mm_setr_epi32 (int __W, int __X, int __Y, int __Z)
{
  union {
    int __a[4];
    __v2di __v;
  } __u;

  __u.__a[0] = __W;
  __u.__a[1] = __X;
  __u.__a[2] = __Y;
  __u.__a[3] = __Z;

  return __u.__v;
}

static __inline __v2di
_mm_setr_epi16 (short __S, short __T, short __U, short __V,
         short __W, short __X, short __Y, short __Z)
{
  union {
    short __a[8];
    __v2di __v;
  } __u;

  __u.__a[0] = __S;
  __u.__a[1] = __T;
  __u.__a[2] = __U;
  __u.__a[3] = __V;
  __u.__a[4] = __W;
  __u.__a[5] = __X;
  __u.__a[6] = __Y;
  __u.__a[7] = __Z;

  return __u.__v;
}


static __inline __v2di
_mm_setr_epi8 (char __S1, char __T1, char __U1, char __V1,
        char __W1, char __X1, char __Y1, char __Z1,
        char __S, char __T, char __U, char __V,
        char __W, char __X, char __Y, char __Z)
{
  union {
    char __a[16];
    __v2di __v;
  } __u;

  __u.__a[0] = __S1;
  __u.__a[1] = __T1;
  __u.__a[2] = __U1;
  __u.__a[3] = __V1;
  __u.__a[4] = __W1;
  __u.__a[5] = __X1;
  __u.__a[6] = __Y1;
  __u.__a[7] = __Z1;
  __u.__a[8] = __S;
  __u.__a[9] = __T;
  __u.__a[10] = __U;
  __u.__a[11] = __V;
  __u.__a[12] = __W;
  __u.__a[13] = __X;
  __u.__a[14] = __Y;
  __u.__a[15] = __Z;

  return __u.__v;
}

static __inline __v2df
_mm_cvtepi32_pd (__v2di __A)
{
  return (__v2df)__builtin_ia32_cvtdq2pd ((__v4si) __A);
}

static __inline __m128
_mm_cvtepi32_ps (__v2di __A)
{
  return (__m128)__builtin_ia32_cvtdq2ps ((__v4si) __A);
}

static __inline __v2di
_mm_cvtpd_epi32 (__v2df __A)
{
  return (__v2di)__builtin_ia32_cvtpd2dq ((__v2df) __A);
}

static __inline __m64
_mm_cvtpd_pi32 (__v2df __A)
{
  return (__m64)__builtin_ia32_cvtpd2pi ((__v2df) __A);
}

static __inline __m128
_mm_cvtpd_ps (__v2df __A)
{
  return (__m128)__builtin_ia32_cvtpd2ps ((__v2df) __A);
}

static __inline __v2di
_mm_cvttpd_epi32 (__v2df __A)
{
  return (__v2di)__builtin_ia32_cvttpd2dq ((__v2df) __A);
}

static __inline __m64
_mm_cvttpd_pi32 (__v2df __A)
{
  return (__m64)__builtin_ia32_cvttpd2pi ((__v2df) __A);
}

static __inline __v2df
_mm_cvtpi32_pd (__m64 __A)
{
  return (__v2df)__builtin_ia32_cvtpi2pd ((__v2si) __A);
}

static __inline __v2di
_mm_cvtps_epi32 (__m128 __A)
{
  return (__v2di)__builtin_ia32_cvtps2dq ((__v4sf) __A);
}

static __inline __v2di
_mm_cvttps_epi32 (__m128 __A)
{
  return (__v2di)__builtin_ia32_cvttps2dq ((__v4sf) __A);
}

static __inline __v2df
_mm_cvtps_pd (__m128 __A)
{
  return (__v2df)__builtin_ia32_cvtps2pd ((__v4sf) __A);
}

static __inline int
_mm_cvtsd_si32 (__v2df __A)
{
  return __builtin_ia32_cvtsd2si ((__v2df) __A);
}


static __inline long long
_mm_cvtsd_si64x (__v2df __A)
{
  return __builtin_ia32_cvtsd2si64 ((__v2df) __A);
}


static __inline int
_mm_cvttsd_si32 (__v2df __A)
{
  return __builtin_ia32_cvttsd2si ((__v2df) __A);
}


static __inline long long
_mm_cvttsd_si64x (__v2df __A)
{
  return __builtin_ia32_cvttsd2si64 ((__v2df) __A);
}


static __inline __m128
_mm_cvtsd_ss (__m128 __A, __v2df __B)
{
  return (__m128)__builtin_ia32_cvtsd2ss ((__v4sf) __A, (__v2df) __B);
}

static __inline __v2df
_mm_cvtsi32_sd (__v2df __A, int __B)
{
  return (__v2df)__builtin_ia32_cvtsi2sd ((__v2df) __A, __B);
}


static __inline __v2df
_mm_cvtsi64x_sd (__v2df __A, long long __B)
{
  return (__v2df)__builtin_ia32_cvtsi642sd ((__v2df) __A, __B);
}


static __inline __v2df
_mm_cvtss_sd (__v2df __A, __m128 __B)
{
  return (__v2df)__builtin_ia32_cvtss2sd ((__v2df) __A, (__v4sf)__B);
}



static __inline __v2df
_mm_unpackhi_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_unpckhpd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_unpacklo_pd (__v2df __A, __v2df __B)
{
  return (__v2df)__builtin_ia32_unpcklpd ((__v2df)__A, (__v2df)__B);
}

static __inline __v2df
_mm_loadh_pd (__v2df __A, double const *__B)
{
  return (__v2df)__builtin_ia32_loadhpd ((__v2df)__A, (__v2si *)__B);
}

static __inline void
_mm_storeh_pd (double *__A, __v2df __B)
{
  __builtin_ia32_storehpd ((__v2si *)__A, (__v2df)__B);
}

static __inline __v2df
_mm_loadl_pd (__v2df __A, double const *__B)
{
  return (__v2df)__builtin_ia32_loadlpd ((__v2df)__A, (__v2si *)__B);
}

static __inline void
_mm_storel_pd (double *__A, __v2df __B)
{
  __builtin_ia32_storelpd ((__v2si *)__A, (__v2df)__B);
}

static __inline int
_mm_movemask_pd (__v2df __A)
{
  return __builtin_ia32_movmskpd ((__v2df)__A);
}

static __inline __v2di
_mm_packs_epi16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_packsswb128 ((__v8hi)__A, (__v8hi)__B);
}

static __inline __v2di
_mm_packs_epi32 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_packssdw128 ((__v4si)__A, (__v4si)__B);
}

static __inline __v2di
_mm_packus_epi16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_packuswb128 ((__v8hi)__A, (__v8hi)__B);
}

static __inline __v2di
_mm_unpackhi_epi8 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_punpckhbw128 ((__v16qi)__A, (__v16qi)__B);
}

static __inline __v2di
_mm_unpackhi_epi16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_punpckhwd128 ((__v8hi)__A, (__v8hi)__B);
}

static __inline __v2di
_mm_unpackhi_epi32 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_punpckhdq128 ((__v4si)__A, (__v4si)__B);
}

static __inline __v2di
_mm_unpackhi_epi64 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_punpckhqdq128 ((__v2di)__A, (__v2di)__B);
}

static __inline __v2di
_mm_unpacklo_epi8 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_punpcklbw128 ((__v16qi)__A, (__v16qi)__B);
}

static __inline __v2di
_mm_unpacklo_epi16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_punpcklwd128 ((__v8hi)__A, (__v8hi)__B);
}

static __inline __v2di
_mm_unpacklo_epi32 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_punpckldq128 ((__v4si)__A, (__v4si)__B);
}

static __inline __v2di
_mm_unpacklo_epi64 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_punpcklqdq128 ((__v2di)__A, (__v2di)__B);
}

static __inline __v2di
_mm_add_epi8 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_paddb128 ((__v16qi)__A, (__v16qi)__B);
}

static __inline __v2di
_mm_add_epi16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_paddw128 ((__v8hi)__A, (__v8hi)__B);
}

static __inline __v2di
_mm_add_epi32 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_paddd128 ((__v4si)__A, (__v4si)__B);
}

static __inline __v2di
_mm_add_epi64 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_paddq128 ((__v2di)__A, (__v2di)__B);
}

static __inline __v2di
_mm_adds_epi8 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_paddsb128 ((__v16qi)__A, (__v16qi)__B);
}

static __inline __v2di
_mm_adds_epi16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_paddsw128 ((__v8hi)__A, (__v8hi)__B);
}

static __inline __v2di
_mm_adds_epu8 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_paddusb128 ((__v16qi)__A, (__v16qi)__B);
}

static __inline __v2di
_mm_adds_epu16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_paddusw128 ((__v8hi)__A, (__v8hi)__B);
}

static __inline __v2di
_mm_sub_epi8 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_psubb128 ((__v16qi)__A, (__v16qi)__B);
}

static __inline __v2di
_mm_sub_epi16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_psubw128 ((__v8hi)__A, (__v8hi)__B);
}

static __inline __v2di
_mm_sub_epi32 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_psubd128 ((__v4si)__A, (__v4si)__B);
}

static __inline __v2di
_mm_sub_epi64 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_psubq128 ((__v2di)__A, (__v2di)__B);
}

static __inline __v2di
_mm_subs_epi8 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_psubsb128 ((__v16qi)__A, (__v16qi)__B);
}

static __inline __v2di
_mm_subs_epi16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_psubsw128 ((__v8hi)__A, (__v8hi)__B);
}

static __inline __v2di
_mm_subs_epu8 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_psubusb128 ((__v16qi)__A, (__v16qi)__B);
}

static __inline __v2di
_mm_subs_epu16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_psubusw128 ((__v8hi)__A, (__v8hi)__B);
}

static __inline __v2di
_mm_madd_epi16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pmaddwd128 ((__v8hi)__A, (__v8hi)__B);
}

static __inline __v2di
_mm_mulhi_epi16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pmulhw128 ((__v8hi)__A, (__v8hi)__B);
}

static __inline __v2di
_mm_mullo_epi16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pmullw128 ((__v8hi)__A, (__v8hi)__B);
}

static __inline __m64
_mm_mul_su32 (__m64 __A, __m64 __B)
{
  return (__m64)__builtin_ia32_pmuludq ((__v2si)__A, (__v2si)__B);
}

static __inline __v2di
_mm_mul_epu32 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pmuludq128 ((__v4si)__A, (__v4si)__B);
}

static __inline __v2di
_mm_sll_epi16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_psllw128 ((__v8hi)__A, (__v2di)__B);
}

static __inline __v2di
_mm_sll_epi32 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pslld128 ((__v4si)__A, (__v2di)__B);
}

static __inline __v2di
_mm_sll_epi64 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_psllq128 ((__v2di)__A, (__v2di)__B);
}

static __inline __v2di
_mm_sra_epi16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_psraw128 ((__v8hi)__A, (__v2di)__B);
}

static __inline __v2di
_mm_sra_epi32 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_psrad128 ((__v4si)__A, (__v2di)__B);
}

static __inline __v2di
_mm_srl_epi16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_psrlw128 ((__v8hi)__A, (__v2di)__B);
}

static __inline __v2di
_mm_srl_epi32 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_psrld128 ((__v4si)__A, (__v2di)__B);
}

static __inline __v2di
_mm_srl_epi64 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_psrlq128 ((__v2di)__A, (__v2di)__B);
}

static __inline __v2di
_mm_slli_epi16 (__v2di __A, int __B)
{
  return (__v2di)__builtin_ia32_psllwi128 ((__v8hi)__A, __B);
}

static __inline __v2di
_mm_slli_epi32 (__v2di __A, int __B)
{
  return (__v2di)__builtin_ia32_pslldi128 ((__v4si)__A, __B);
}

static __inline __v2di
_mm_slli_epi64 (__v2di __A, int __B)
{
  return (__v2di)__builtin_ia32_psllqi128 ((__v2di)__A, __B);
}

static __inline __v2di
_mm_srai_epi16 (__v2di __A, int __B)
{
  return (__v2di)__builtin_ia32_psrawi128 ((__v8hi)__A, __B);
}

static __inline __v2di
_mm_srai_epi32 (__v2di __A, int __B)
{
  return (__v2di)__builtin_ia32_psradi128 ((__v4si)__A, __B);
}
# 1253 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/emmintrin.h" 3 4
static __inline __v2di
_mm_srli_epi16 (__v2di __A, int __B)
{
  return (__v2di)__builtin_ia32_psrlwi128 ((__v8hi)__A, __B);
}

static __inline __v2di
_mm_srli_epi32 (__v2di __A, int __B)
{
  return (__v2di)__builtin_ia32_psrldi128 ((__v4si)__A, __B);
}

static __inline __v2di
_mm_srli_epi64 (__v2di __A, int __B)
{
  return (__v2di)__builtin_ia32_psrlqi128 ((__v2di)__A, __B);
}

static __inline __v2di
_mm_and_si128 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pand128 ((__v2di)__A, (__v2di)__B);
}

static __inline __v2di
_mm_andnot_si128 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pandn128 ((__v2di)__A, (__v2di)__B);
}

static __inline __v2di
_mm_or_si128 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_por128 ((__v2di)__A, (__v2di)__B);
}

static __inline __v2di
_mm_xor_si128 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pxor128 ((__v2di)__A, (__v2di)__B);
}

static __inline __v2di
_mm_cmpeq_epi8 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pcmpeqb128 ((__v16qi)__A, (__v16qi)__B);
}

static __inline __v2di
_mm_cmpeq_epi16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pcmpeqw128 ((__v8hi)__A, (__v8hi)__B);
}

static __inline __v2di
_mm_cmpeq_epi32 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pcmpeqd128 ((__v4si)__A, (__v4si)__B);
}

static __inline __v2di
_mm_cmplt_epi8 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pcmpgtb128 ((__v16qi)__B, (__v16qi)__A);
}

static __inline __v2di
_mm_cmplt_epi16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pcmpgtw128 ((__v8hi)__B, (__v8hi)__A);
}

static __inline __v2di
_mm_cmplt_epi32 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pcmpgtd128 ((__v4si)__B, (__v4si)__A);
}

static __inline __v2di
_mm_cmpgt_epi8 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pcmpgtb128 ((__v16qi)__A, (__v16qi)__B);
}

static __inline __v2di
_mm_cmpgt_epi16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pcmpgtw128 ((__v8hi)__A, (__v8hi)__B);
}

static __inline __v2di
_mm_cmpgt_epi32 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pcmpgtd128 ((__v4si)__A, (__v4si)__B);
}





static __inline __v2di
_mm_max_epi16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pmaxsw128 ((__v8hi)__A, (__v8hi)__B);
}

static __inline __v2di
_mm_max_epu8 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pmaxub128 ((__v16qi)__A, (__v16qi)__B);
}

static __inline __v2di
_mm_min_epi16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pminsw128 ((__v8hi)__A, (__v8hi)__B);
}

static __inline __v2di
_mm_min_epu8 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pminub128 ((__v16qi)__A, (__v16qi)__B);
}

static __inline int
_mm_movemask_epi8 (__v2di __A)
{
  return __builtin_ia32_pmovmskb128 ((__v16qi)__A);
}

static __inline __v2di
_mm_mulhi_epu16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pmulhuw128 ((__v8hi)__A, (__v8hi)__B);
}





static __inline void
_mm_maskmoveu_si128 (__v2di __A, __v2di __B, char *__C)
{
  __builtin_ia32_maskmovdqu ((__v16qi)__A, (__v16qi)__B, __C);
}

static __inline __v2di
_mm_avg_epu8 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pavgb128 ((__v16qi)__A, (__v16qi)__B);
}

static __inline __v2di
_mm_avg_epu16 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_pavgw128 ((__v8hi)__A, (__v8hi)__B);
}

static __inline __v2di
_mm_sad_epu8 (__v2di __A, __v2di __B)
{
  return (__v2di)__builtin_ia32_psadbw128 ((__v16qi)__A, (__v16qi)__B);
}

static __inline void
_mm_stream_si32 (int *__A, int __B)
{
  __builtin_ia32_movnti (__A, __B);
}

static __inline void
_mm_stream_si128 (__v2di *__A, __v2di __B)
{
  __builtin_ia32_movntdq ((__v2di *)__A, (__v2di)__B);
}

static __inline void
_mm_stream_pd (double *__A, __v2df __B)
{
  __builtin_ia32_movntpd (__A, (__v2df)__B);
}

static __inline __v2di
_mm_movpi64_epi64 (__m64 __A)
{
  return (__v2di)__builtin_ia32_movq2dq ((unsigned long long)__A);
}

static __inline void
_mm_clflush (void const *__A)
{
  return __builtin_ia32_clflush (__A);
}

static __inline void
_mm_lfence (void)
{
  __builtin_ia32_lfence ();
}

static __inline void
_mm_mfence (void)
{
  __builtin_ia32_mfence ();
}

static __inline __v2di
_mm_cvtsi32_si128 (int __A)
{
  return (__v2di) __builtin_ia32_loadd (&__A);
}


static __inline __v2di
_mm_cvtsi64x_si128 (long long __A)
{
  return (__v2di) __builtin_ia32_movq2dq (__A);
}


static __inline int
_mm_cvtsi128_si32 (__v2di __A)
{
  int __tmp;
  __builtin_ia32_stored (&__tmp, (__v4si)__A);
  return __tmp;
}


static __inline long long
_mm_cvtsi128_si64x (__v2di __A)
{
  return __builtin_ia32_movdq2q ((__v2di)__A);
}
# 1217 "/usr/lib/gcc/x86_64-linux-gnu/3.4.6/include/xmmintrin.h" 2 3 4
# 9 "../src/atomic_ops/sysdeps/gcc/../standard_ao_double_t.h" 2
  typedef __m128 double_ptr_storage;
# 18 "../src/atomic_ops/sysdeps/gcc/../standard_ao_double_t.h"
typedef union {
    double_ptr_storage AO_whole;
    struct {size_t AO_v1; size_t AO_v2;} AO_parts;
} AO_double_t;
# 33 "../src/atomic_ops/sysdeps/gcc/x86_64.h" 2
# 54 "../src/atomic_ops/sysdeps/gcc/x86_64.h"
static __inline size_t
AO_fetch_and_add_full (volatile size_t *p, size_t incr)
{
  size_t result;

  __asm__ __volatile__ ("lock; xaddq %0, %1" :
                        "=r" (result), "=m" (*p) : "0" (incr), "m" (*p)
                        : "memory");
  return result;
}



static __inline unsigned char
AO_char_fetch_and_add_full (volatile unsigned char *p, unsigned char incr)
{
  unsigned char result;

  __asm__ __volatile__ ("lock; xaddb %0, %1" :
                        "=q" (result), "=m" (*p) : "0" (incr), "m" (*p)
                        : "memory");
  return result;
}



static __inline unsigned short
AO_short_fetch_and_add_full (volatile unsigned short *p, unsigned short incr)
{
  unsigned short result;

  __asm__ __volatile__ ("lock; xaddw %0, %1" :
                        "=r" (result), "=m" (*p) : "0" (incr), "m" (*p)
                        : "memory");
  return result;
}



static __inline unsigned int
AO_int_fetch_and_add_full (volatile unsigned int *p, unsigned int incr)
{
  unsigned int result;

  __asm__ __volatile__ ("lock; xaddl %0, %1" :
                        "=r" (result), "=m" (*p) : "0" (incr), "m" (*p)
                        : "memory");
  return result;
}



static __inline void
AO_or_full (volatile size_t *p, size_t incr)
{
  __asm__ __volatile__ ("lock; orq %1, %0" :
                        "=m" (*p) : "r" (incr), "m" (*p) : "memory");
}



static __inline AO_BYTE_TS_val
AO_test_and_set_full(volatile unsigned char *addr)
{
  unsigned char oldval;

  __asm__ __volatile__("xchgb %0, %1"
                : "=q"(oldval), "=m"(*addr)
                : "0"(0xff), "m"(*addr) : "memory");
  return (AO_BYTE_TS_val)oldval;
}




static __inline int
AO_compare_and_swap_full(volatile size_t *addr,
                         size_t old, size_t new_val)
{
  char result;
  __asm__ __volatile__("lock; cmpxchgq %3, %0; setz %1"
                       : "=m"(*addr), "=q"(result)
                       : "m"(*addr), "r" (new_val), "a"(old) : "memory");
  return (int) result;
}
# 207 "../src/atomic_ops.h" 2
# 319 "../src/atomic_ops.h"
# 1 "../src/atomic_ops/generalize.h" 1
# 146 "../src/atomic_ops/generalize.h"
   static __inline void AO_nop(void) {}




   static __inline void
   AO_nop_full(void)
   {
     unsigned char dummy = (size_t)AO_BYTE_TS_clear;
     AO_test_and_set_full(&dummy);
   }
# 1082 "../src/atomic_ops/generalize.h"
# 1 "../src/atomic_ops/generalize-small.h" 1
# 1083 "../src/atomic_ops/generalize.h" 2
# 320 "../src/atomic_ops.h" 2
# 2 "list_atomic.c" 2
# 15 "list_atomic.c"
void list_atomic(void)
{
  size_t *addr, val, newval, oldval;
  unsigned char tsaddr;
  long incr;


    "AO_nop(): ";
    AO_nop();




    "AO_load(addr):";
    AO_load(addr);




    "AO_store(addr, val):";
    AO_store(addr, val);




    "AO_test_and_set(tsaddr):";
    AO_test_and_set_full(tsaddr);




    "AO_fetch_and_add1(addr):";
    AO_fetch_and_add_full(addr, 1);




    "AO_fetch_and_sub1(addr):";
    AO_fetch_and_add_full(addr, (size_t)(-1));




    "AO_fetch_and_add(addr, incr):";
    AO_fetch_and_add_full(addr, incr);




    "AO_compare_and_swap(addr, oldval, newval):";
    AO_compare_and_swap_full(addr, oldval, newval);



}
# 86 "list_atomic.c"
void list_atomic_release(void)
{
  size_t *addr, val, newval, oldval;
  unsigned char tsaddr;
  long incr;





    "No AO_nop_release";





    "No AO_load_release";


    "AO_store_release(addr, val):";
    AO_store_write(addr, val);




    "AO_test_and_set_release(tsaddr):";
    AO_test_and_set_full(tsaddr);




    "AO_fetch_and_add1_release(addr):";
    AO_fetch_and_add_full(addr, 1);




    "AO_fetch_and_sub1_release(addr):";
    AO_fetch_and_add_full(addr, (size_t)(-1));




    "AO_fetch_and_add_release(addr, incr):";
    AO_fetch_and_add_full(addr, incr);




    "AO_compare_and_swap_release(addr, oldval, newval):";
    AO_compare_and_swap_full(addr, oldval, newval);



}
# 157 "list_atomic.c"
void list_atomic_acquire(void)
{
  size_t *addr, val, newval, oldval;
  unsigned char tsaddr;
  long incr;





    "No AO_nop_acquire";


    "AO_load_acquire(addr):";
    AO_load_read(addr);







    "No AO_store_acquire";


    "AO_test_and_set_acquire(tsaddr):";
    AO_test_and_set_full(tsaddr);




    "AO_fetch_and_add1_acquire(addr):";
    AO_fetch_and_add_full(addr, 1);




    "AO_fetch_and_sub1_acquire(addr):";
    AO_fetch_and_add_full(addr, (size_t)(-1));




    "AO_fetch_and_add_acquire(addr, incr):";
    AO_fetch_and_add_full(addr, incr);




    "AO_compare_and_swap_acquire(addr, oldval, newval):";
    AO_compare_and_swap_full(addr, oldval, newval);



}
# 228 "list_atomic.c"
void list_atomic_read(void)
{
  size_t *addr, val, newval, oldval;
  unsigned char tsaddr;
  long incr;


    "AO_nop_read(): ";
    AO_nop_full();




    "AO_load_read(addr):";
    AO_load_read(addr);







    "No AO_store_read";


    "AO_test_and_set_read(tsaddr):";
    AO_test_and_set_full(tsaddr);




    "AO_fetch_and_add1_read(addr):";
    AO_fetch_and_add_full(addr, 1);




    "AO_fetch_and_sub1_read(addr):";
    AO_fetch_and_add_full(addr, (size_t)(-1));




    "AO_fetch_and_add_read(addr, incr):";
    AO_fetch_and_add_full(addr, incr);




    "AO_compare_and_swap_read(addr, oldval, newval):";
    AO_compare_and_swap_full(addr, oldval, newval);



}
# 299 "list_atomic.c"
void list_atomic_write(void)
{
  size_t *addr, val, newval, oldval;
  unsigned char tsaddr;
  long incr;


    "AO_nop_write(): ";
    AO_nop_full();







    "No AO_load_write";


    "AO_store_write(addr, val):";
    AO_store_write(addr, val);




    "AO_test_and_set_write(tsaddr):";
    AO_test_and_set_full(tsaddr);




    "AO_fetch_and_add1_write(addr):";
    AO_fetch_and_add_full(addr, 1);




    "AO_fetch_and_sub1_write(addr):";
    AO_fetch_and_add_full(addr, (size_t)(-1));




    "AO_fetch_and_add_write(addr, incr):";
    AO_fetch_and_add_full(addr, incr);




    "AO_compare_and_swap_write(addr, oldval, newval):";
    AO_compare_and_swap_full(addr, oldval, newval);



}
# 370 "list_atomic.c"
void list_atomic_full(void)
{
  size_t *addr, val, newval, oldval;
  unsigned char tsaddr;
  long incr;


    "AO_nop_full(): ";
    AO_nop_full();




    "AO_load_full(addr):";
    (AO_nop_full(), AO_load_read(addr));




    "AO_store_full(addr, val):";
    (AO_store_write(addr, val), AO_nop_full());




    "AO_test_and_set_full(tsaddr):";
    AO_test_and_set_full(tsaddr);




    "AO_fetch_and_add1_full(addr):";
    AO_fetch_and_add_full(addr,1);




    "AO_fetch_and_sub1_full(addr):";
    AO_fetch_and_add_full(addr,(size_t)(-1));




    "AO_fetch_and_add_full(addr, incr):";
    AO_fetch_and_add_full(addr, incr);




    "AO_compare_and_swap_full(addr, oldval, newval):";
    AO_compare_and_swap_full(addr, oldval, newval);



}
# 441 "list_atomic.c"
void list_atomic_release_write(void)
{
  size_t *addr, val, newval, oldval;
  unsigned char tsaddr;
  long incr;





    "No AO_nop_release_write";





    "No AO_load_release_write";


    "AO_store_release_write(addr, val):";
    AO_store_write(addr, val);




    "AO_test_and_set_release_write(tsaddr):";
    AO_test_and_set_full(tsaddr);




    "AO_fetch_and_add1_release_write(addr):";
    AO_fetch_and_add_full(addr, 1);




    "AO_fetch_and_sub1_release_write(addr):";
    AO_fetch_and_add_full(addr, (size_t)(-1));




    "AO_fetch_and_add_release_write(addr, incr):";
    AO_fetch_and_add_full(addr, incr);




    "AO_compare_and_swap_release_write(addr, oldval, newval):";
    AO_compare_and_swap_full(addr, oldval, newval);



}
# 512 "list_atomic.c"
void list_atomic_acquire_read(void)
{
  size_t *addr, val, newval, oldval;
  unsigned char tsaddr;
  long incr;





    "No AO_nop_acquire_read";


    "AO_load_acquire_read(addr):";
    AO_load_read(addr);







    "No AO_store_acquire_read";


    "AO_test_and_set_acquire_read(tsaddr):";
    AO_test_and_set_full(tsaddr);




    "AO_fetch_and_add1_acquire_read(addr):";
    AO_fetch_and_add_full(addr, 1);




    "AO_fetch_and_sub1_acquire_read(addr):";
    AO_fetch_and_add_full(addr, (size_t)(-1));




    "AO_fetch_and_add_acquire_read(addr, incr):";
    AO_fetch_and_add_full(addr, incr);




    "AO_compare_and_swap_acquire_read(addr, oldval, newval):";
    AO_compare_and_swap_full(addr, oldval, newval);



}
