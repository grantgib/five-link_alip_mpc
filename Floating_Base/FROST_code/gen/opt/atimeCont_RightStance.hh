/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:45:43 GMT-04:00
 */

#ifndef ATIMECONT_RIGHTSTANCE_HH
#define ATIMECONT_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightStance
{

  void atimeCont_RightStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void atimeCont_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 24);
    assert_size_matrix(var2, 1, 24);

	
    // - Outputs
    assert_size_matrix(p_output1, 24, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    atimeCont_RightStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // ATIMECONT_RIGHTSTANCE_HH
