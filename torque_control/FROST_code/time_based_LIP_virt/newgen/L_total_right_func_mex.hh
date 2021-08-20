/*
 * Automatically Generated from Mathematica.
 * Thu 19 Aug 2021 18:03:23 GMT-04:00
 */

#ifndef L_TOTAL_RIGHT_FUNC_MEX_HH
#define L_TOTAL_RIGHT_FUNC_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void L_total_right_func_mex_raw(double *p_output1, const double *var1);

  inline void L_total_right_func_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 14, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    L_total_right_func_mex_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // L_TOTAL_RIGHT_FUNC_MEX_HH
