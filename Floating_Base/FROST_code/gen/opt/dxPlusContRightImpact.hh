/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 22:04:46 GMT-04:00
 */

#ifndef DXPLUSCONTRIGHTIMPACT_HH
#define DXPLUSCONTRIGHTIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightImpact
{

  void dxPlusContRightImpact_raw(double *p_output1, const double *var1,const double *var2);

  inline void dxPlusContRightImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
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
    dxPlusContRightImpact_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DXPLUSCONTRIGHTIMPACT_HH
