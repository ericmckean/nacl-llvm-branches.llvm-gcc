/* APPLE LOCAL file v7 merge */
/* Test the `vrev32u16' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vrev32u16 (void)
{
  uint16x4_t out_uint16x4_t;
  uint16x4_t arg0_uint16x4_t;

  out_uint16x4_t = vrev32_u16 (arg0_uint16x4_t);
}

/* { dg-final { scan-assembler "vrev32\.16\[ 	\]+\[dD\]\[0-9\]+, \[dD\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
