//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: xnrm2.h
//
// MATLAB Coder version            : 5.3
// C/C++ source code generated on  : 05-Feb-2022 14:39:35
//

#ifndef XNRM2_H
#define XNRM2_H

// Include Files
#include "rtwtypes.h"
#include "coder_array.h"
#include <cstddef>
#include <cstdlib>

// Function Declarations
namespace coder {
namespace internal {
namespace blas {
double xnrm2(int n, const double x[3]);

double xnrm2(int n, const ::coder::array<double, 2U> &x, int ix0);

double xnrm2(const double x[3]);

} // namespace blas
} // namespace internal
} // namespace coder

#endif
//
// File trailer for xnrm2.h
//
// [EOF]
//
