/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:36:19 GMT-04:00
 */

#ifndef J_H_RIGHTTOE_RIGHTSTANCE_HH
#define J_H_RIGHTTOE_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightStance
{

  void J_h_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_h_RightToe_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 11, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_h_RightToe_RightStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_H_RIGHTTOE_RIGHTSTANCE_HH
