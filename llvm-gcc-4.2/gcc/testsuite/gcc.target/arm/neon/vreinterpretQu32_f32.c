/* APPLE LOCAL file v7 merge */
/* Test the `vreinterpretQu32_f32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vreinterpretQu32_f32 (void)
{
  uint32x4_t out_uint32x4_t;
  float32x4_t arg0_float32x4_t;

  out_uint32x4_t = vreinterpretq_u32_f32 (arg0_float32x4_t);
}

/* { dg-final { cleanup-saved-temps } } */
