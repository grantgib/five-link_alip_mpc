/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:37:44 GMT-05:00
 */

#ifndef VEL_COM_X_HH
#define VEL_COM_X_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightStance
{

  void vel_com_x_raw(double *p_output1, const double *var1,const double *var2);

  inline void vel_com_x(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    vel_com_x_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // VEL_COM_X_HH
