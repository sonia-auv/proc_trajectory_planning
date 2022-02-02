//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: proc_planner_internal_types.h
//
// MATLAB Coder version            : 5.3
// C/C++ source code generated on  : 01-Feb-2022 18:48:34
//

#ifndef PROC_PLANNER_INTERNAL_TYPES_H
#define PROC_PLANNER_INTERNAL_TYPES_H

// Include Files
#include "proc_planner_types.h"
#include "rtwtypes.h"
#include "coder_array.h"

// Type Definitions
struct struct_T {
  double ts;
  double amax;
  double vlmax;
  double vamax;
};

struct d_struct_T {
  coder::array<double, 2U> waypoints;
  coder::array<double, 1U> course;
};

#endif
//
// File trailer for proc_planner_internal_types.h
//
// [EOF]
//