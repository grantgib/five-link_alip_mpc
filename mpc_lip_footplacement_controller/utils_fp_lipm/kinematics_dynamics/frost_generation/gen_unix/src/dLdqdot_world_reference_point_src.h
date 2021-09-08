/*
 * Automatically Generated from Mathematica.
 * Wed 8 Sep 2021 02:57:24 GMT-04:00
 */

#ifndef DLDQDOT_WORLD_REFERENCE_POINT_SRC_HH
#define DLDQDOT_WORLD_REFERENCE_POINT_SRC_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void dLdqdot_world_reference_point_src_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4);

  inline void dLdqdot_world_reference_point_src(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);
    assert_size_matrix(var3, 3, 1);
    assert_size_matrix(var4, 3, 7);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 7);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dLdqdot_world_reference_point_src_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DLDQDOT_WORLD_REFERENCE_POINT_SRC_HH
