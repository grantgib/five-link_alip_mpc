/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:08:50 GMT-05:00
 */

#ifndef XPLUSCONTRIGHTIMPACT_HH
#define XPLUSCONTRIGHTIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightImpact
{

  void xPlusContRightImpact_raw(double *p_output1, const double *var1,const double *var2);

  inline void xPlusContRightImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 5, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    xPlusContRightImpact_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // XPLUSCONTRIGHTIMPACT_HH
