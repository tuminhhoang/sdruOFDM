/*
 * sdruOFDMTransmitterRun_mexutil.c
 *
 * Code generation for function 'sdruOFDMTransmitterRun_mexutil'
 *
 * C source code generated on: Mon Oct 28 14:02:27 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sdruOFDMTransmitterRun.h"
#include "sdruOFDMTransmitterRun_mexutil.h"

/* Function Definitions */
void b_error(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "error", TRUE,
                        location);
}

const mxArray *b_message(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m12;
  pArray = b;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m12, 1, &pArray,
    "message", TRUE, location);
}

const mxArray *message(const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m11;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m11, 2, pArrays,
    "message", TRUE, location);
}

const mxArray *sdruroot(emlrtMCInfo *location)
{
  const mxArray *m13;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m13, 0, NULL, "sdruroot",
    TRUE, location);
}

void setupsdru(const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 2, pArrays, "setupsdru",
                        TRUE, location);
}

/* End of code generation (sdruOFDMTransmitterRun_mexutil.c) */
