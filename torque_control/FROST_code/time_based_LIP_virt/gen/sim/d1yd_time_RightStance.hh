/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 16:01:01 GMT-05:00
 */

#ifndef D1YD_TIME_RIGHTSTANCE_HH
#define D1YD_TIME_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void d1yd_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void d1yd_time_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);
    assert_size_matrix(var2, 32, 1);
    assert_size_matrix(var3, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    d1yd_time_RightStance_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // D1YD_TIME_RIGHTSTANCE_HH
