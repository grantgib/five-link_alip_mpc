/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:08:53 GMT-05:00
 */

#ifndef JS_XPLUSCONTRIGHTIMPACT_HH
#define JS_XPLUSCONTRIGHTIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightImpact
{

  void Js_xPlusContRightImpact_raw(double *p_output1, const double *var1);

  inline void Js_xPlusContRightImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 10, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_xPlusContRightImpact_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_XPLUSCONTRIGHTIMPACT_HH
