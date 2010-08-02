/* APPLE LOCAL file v7 merge */
/* Test the `vreinterpretp8_u16' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vreinterpretp8_u16 (void)
{
  poly8x8_t out_poly8x8_t;
  uint16x4_t arg0_uint16x4_t;

  out_poly8x8_t = vreinterpret_p8_u16 (arg0_uint16x4_t);
}

/* { dg-final { cleanup-saved-temps } } */
