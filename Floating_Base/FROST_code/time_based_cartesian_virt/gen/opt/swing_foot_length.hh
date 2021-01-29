/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:08:25 GMT-05:00
 */

#ifndef SWING_FOOT_LENGTH_HH
#define SWING_FOOT_LENGTH_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightStance
{

  void swing_foot_length_raw(double *p_output1, const double *var1);

  inline void swing_foot_length(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    swing_foot_length_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // SWING_FOOT_LENGTH_HH
