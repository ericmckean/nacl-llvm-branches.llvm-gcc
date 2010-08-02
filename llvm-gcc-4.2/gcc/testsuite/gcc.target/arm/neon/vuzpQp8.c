/* APPLE LOCAL file v7 merge */
/* Test the `vuzpQp8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vuzpQp8 (void)
{
  poly8x16x2_t out_poly8x16x2_t;
  poly8x16_t arg0_poly8x16_t;
  poly8x16_t arg1_poly8x16_t;

  out_poly8x16x2_t = vuzpq_p8 (arg0_poly8x16_t, arg1_poly8x16_t);
}

/* { dg-final { scan-assembler "vuzp\.8\[ 	\]+\[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
