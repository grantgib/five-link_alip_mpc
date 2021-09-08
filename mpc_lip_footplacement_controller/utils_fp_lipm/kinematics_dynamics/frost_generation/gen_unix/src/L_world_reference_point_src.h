/*
 * Automatically Generated from Mathematica.
 * Wed 8 Sep 2021 02:56:32 GMT-04:00
 */

#ifndef L_WORLD_REFERENCE_POINT_SRC_HH
#define L_WORLD_REFERENCE_POINT_SRC_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void L_world_reference_point_src_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void L_world_reference_point_src(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);
    assert_size_matrix(var3, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    L_world_reference_point_src_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // L_WORLD_REFERENCE_POINT_SRC_HH
