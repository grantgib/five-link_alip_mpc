/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 12:05:17 GMT-05:00
 */

#ifndef P_BASEROTY_HH
#define P_BASEROTY_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void p_BaseRotY_raw(double *p_output1, const double *var1);

  inline void p_BaseRotY(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    p_BaseRotY_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // P_BASEROTY_HH
