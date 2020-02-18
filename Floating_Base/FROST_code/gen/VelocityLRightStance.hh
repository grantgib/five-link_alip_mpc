/*
 * Automatically Generated from Mathematica.
 * Wed 11 Dec 2019 22:46:10 GMT-05:00
 */

#ifndef VELOCITYLRIGHTSTANCE_HH
#define VELOCITYLRIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightStance
{

  void VelocityLRightStance_raw(double *p_output1, const double *var1);

  inline void VelocityLRightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 7, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    VelocityLRightStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // VELOCITYLRIGHTSTANCE_HH
