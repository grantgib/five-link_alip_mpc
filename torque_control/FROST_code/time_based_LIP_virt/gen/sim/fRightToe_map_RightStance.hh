/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 16:01:14 GMT-05:00
 */

#ifndef FRIGHTTOE_MAP_RIGHTSTANCE_HH
#define FRIGHTTOE_MAP_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void fRightToe_map_RightStance_raw(double *p_output1, const double *var1);

  inline void fRightToe_map_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 7, 3);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    fRightToe_map_RightStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // FRIGHTTOE_MAP_RIGHTSTANCE_HH
