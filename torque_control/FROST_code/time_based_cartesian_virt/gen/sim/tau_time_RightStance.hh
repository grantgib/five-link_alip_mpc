/*
 * Automatically Generated from Mathematica.
 * Tue 9 Feb 2021 15:59:06 GMT-05:00
 */

#ifndef TAU_TIME_RIGHTSTANCE_HH
#define TAU_TIME_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void tau_time_RightStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void tau_time_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);
    assert_size_matrix(var2, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    tau_time_RightStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // TAU_TIME_RIGHTSTANCE_HH
