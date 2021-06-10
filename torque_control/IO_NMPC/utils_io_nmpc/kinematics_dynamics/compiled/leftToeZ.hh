/*
 * Automatically Generated from Mathematica.
 * Sat 14 Dec 2019 15:28:17 GMT-05:00
 */

#ifndef LEFTTOEPOS_HH
#define LEFTTOEPOS_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void leftToePos_raw(double *p_output1, const double *var1);

  inline void leftToePos(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    leftToePos_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // LEFTTOEPOS_HH
