//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: tic.cpp
//
// MATLAB Coder version            : 5.3
// C/C++ source code generated on  : 19-Feb-2022 14:46:56
//

// Include Files
#include "tic.h"
#include "proc_planner_data.h"
#include "rt_nonfinite.h"
#include "coder_posix_time.h"
#include <string.h>

// Function Definitions
//
// Arguments    : double *tstart_tv_sec
//                double *tstart_tv_nsec
// Return Type  : void
//
namespace coder {
void tic(double *tstart_tv_sec, double *tstart_tv_nsec)
{
  coderTimespec b_timespec;
  if (!freq_not_empty) {
    freq_not_empty = true;
    coderInitTimeFunctions(&freq);
  }
  coderTimeClockGettimeMonotonic(&b_timespec, freq);
  *tstart_tv_sec = b_timespec.tv_sec;
  *tstart_tv_nsec = b_timespec.tv_nsec;
}

} // namespace coder

//
// File trailer for tic.cpp
//
// [EOF]
//