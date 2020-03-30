/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:53:21 GMT-04:00
 */

#ifndef JS_DXMINUSCONT_RIGHTIMPACT_HH
#define JS_DXMINUSCONT_RIGHTIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightImpact
{

  void Js_dxMinusCont_RightImpact_raw(double *p_output1, const double *var1);

  inline void Js_dxMinusCont_RightImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 14, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_dxMinusCont_RightImpact_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_DXMINUSCONT_RIGHTIMPACT_HH
