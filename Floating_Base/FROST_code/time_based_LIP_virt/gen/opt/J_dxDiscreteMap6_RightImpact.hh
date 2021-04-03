/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 17:04:59 GMT-05:00
 */

#ifndef J_DXDISCRETEMAP6_RIGHTIMPACT_HH
#define J_DXDISCRETEMAP6_RIGHTIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightImpact
{

  void J_dxDiscreteMap6_RightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4);

  inline void J_dxDiscreteMap6_RightImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);
    assert_size_matrix(var3, 7, 1);
    assert_size_matrix(var4, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 8, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_dxDiscreteMap6_RightImpact_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_DXDISCRETEMAP6_RIGHTIMPACT_HH
