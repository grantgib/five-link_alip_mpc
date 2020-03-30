/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:47:40 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t3115;
  double t1802;
  double t2322;
  double t3213;
  double t5820;
  double t1628;
  double t3013;
  double t4931;
  double t5103;
  double t6284;
  double t6285;
  double t6286;
  double t6363;
  double t6796;
  double t5766;
  double t5829;
  double t6126;
  double t6196;
  double t6217;
  double t6243;
  double t6258;
  double t6262;
  double t6270;
  double t8623;
  double t8624;
  double t8625;
  double t7248;
  double t8603;
  double t8608;
  double t8609;
  double t8610;
  double t8611;
  double t8627;
  double t8628;
  double t8629;
  double t8632;
  double t8633;
  double t8639;
  double t8640;
  double t8641;
  double t8642;
  double t11319;
  double t11545;
  double t14493;
  double t14510;
  double t14545;
  double t14590;
  double t14592;
  double t14604;
  double t14646;
  double t14678;
  double t14745;
  double t12799;
  double t12800;
  double t12801;
  double t9358;
  double t9575;
  double t9927;
  double t6797;
  double t6852;
  double t7199;
  double t8613;
  double t8614;
  double t8615;
  double t8616;
  double t8626;
  double t10761;
  double t10855;
  double t8647;
  double t8648;
  double t9273;
  double t9314;
  double t9350;
  double t10168;
  double t11080;
  double t12798;
  double t12944;
  double t12962;
  double t13000;
  double t13038;
  double t13814;
  double t14029;
  double t14030;
  double t14145;
  double t14546;
  double t14608;
  double t14612;
  double t14747;
  double t14749;
  double t14783;
  double t14791;
  double t14795;
  double t14798;
  double t14799;
  double t14814;
  double t14887;
  double t14895;
  double t14897;
  double t14898;
  double t14921;
  double t15281;
  double t15301;
  double t15302;
  double t15364;
  double t15707;
  double t15717;
  double t14460;
  double t14618;
  double t14797;
  double t14827;
  double t14924;
  double t14932;
  double t14958;
  double t14961;
  double t14968;
  double t14995;
  double t6274;
  double t8612;
  double t8620;
  double t8621;
  double t15933;
  double t15964;
  double t15965;
  t3115 = Cos(var1[3]);
  t1802 = Cos(var1[4]);
  t2322 = Sin(var1[3]);
  t3213 = Sin(var1[4]);
  t5820 = Sin(var1[2]);
  t1628 = Cos(var1[2]);
  t3013 = -1.*t1802*t2322;
  t4931 = -1.*t3115*t3213;
  t5103 = t3013 + t4931;
  t6284 = -1.*t1802;
  t6285 = 1. + t6284;
  t6286 = 0.4*t6285;
  t6363 = 0.64*t1802;
  t6796 = t6286 + t6363;
  t5766 = t1628*t5103;
  t5829 = -1.*t3115*t1802;
  t6126 = t2322*t3213;
  t6196 = t5829 + t6126;
  t6217 = t5820*t6196;
  t6243 = t5766 + t6217;
  t6258 = -1.*t3115*t5820;
  t6262 = -1.*t1628*t2322;
  t6270 = t6258 + t6262;
  t8623 = t1628*t3115;
  t8624 = -1.*t5820*t2322;
  t8625 = t8623 + t8624;
  t7248 = t5820*t5103;
  t8603 = t3115*t1802;
  t8608 = -1.*t2322*t3213;
  t8609 = t8603 + t8608;
  t8610 = t1628*t8609;
  t8611 = t7248 + t8610;
  t8627 = t3115*t5820;
  t8628 = t1628*t2322;
  t8629 = t8627 + t8628;
  t8632 = t1802*t2322;
  t8633 = t3115*t3213;
  t8639 = t8632 + t8633;
  t8640 = t1628*t8639;
  t8641 = t5820*t8609;
  t8642 = t8640 + t8641;
  t11319 = -1.*t5820*t8609;
  t11545 = t5766 + t11319;
  t14493 = t6796*t2322;
  t14510 = 0.24*t3115*t3213;
  t14545 = t14493 + t14510;
  t14590 = t3115*t6796;
  t14592 = -0.24*t2322*t3213;
  t14604 = t14590 + t14592;
  t14646 = -1.*t6796*t2322;
  t14678 = -0.24*t3115*t3213;
  t14745 = t14646 + t14678;
  t12799 = -1.*t5820*t5103;
  t12800 = t1628*t6196;
  t12801 = t12799 + t12800;
  t9358 = -1.*t1628*t3115;
  t9575 = t5820*t2322;
  t9927 = t9358 + t9575;
  t6797 = t6796*t3213;
  t6852 = -0.24*t1802*t3213;
  t7199 = t6797 + t6852;
  t8613 = t6796*t1802;
  t8614 = Power(t3213,2);
  t8615 = 0.24*t8614;
  t8616 = t8613 + t8615;
  t8626 = 13.6*t6270*t8625;
  t10761 = -1.*t5820*t8639;
  t10855 = t10761 + t8610;
  t8647 = Power(t6270,2);
  t8648 = 6.8*t8647;
  t9273 = 6.8*t6270*t8629;
  t9314 = Power(t8625,2);
  t9350 = 6.8*t9314;
  t10168 = 6.8*t8625*t9927;
  t11080 = 3.2*t8611*t10855;
  t12798 = 3.2*t11545*t8642;
  t12944 = 3.2*t8611*t12801;
  t12962 = 3.2*t11545*t6243;
  t13000 = t8648 + t9273 + t9350 + t10168 + t11080 + t12798 + t12944 + t12962;
  t13038 = Power(t3115,2);
  t13814 = 0.11*t13038;
  t14029 = Power(t2322,2);
  t14030 = 0.11*t14029;
  t14145 = t13814 + t14030;
  t14546 = -1.*t14545*t8609;
  t14608 = -1.*t5103*t14604;
  t14612 = t14546 + t14608;
  t14747 = t14745*t8609;
  t14749 = t14545*t8609;
  t14783 = t5103*t14604;
  t14791 = t8639*t14604;
  t14795 = t14747 + t14749 + t14783 + t14791;
  t14798 = t14545*t8639;
  t14799 = t8609*t14604;
  t14814 = t14798 + t14799;
  t14887 = -1.*t5103*t14745;
  t14895 = -1.*t5103*t14545;
  t14897 = -1.*t8609*t14604;
  t14898 = -1.*t14604*t6196;
  t14921 = t14887 + t14895 + t14897 + t14898;
  t15281 = 6.8*t9927*t14145;
  t15301 = 3.2*t11545*t14612;
  t15302 = 3.2*t11545*t14795;
  t15364 = 3.2*t14814*t12801;
  t15707 = 3.2*t10855*t14921;
  t15717 = t15281 + t15301 + t15302 + t15364 + t15707;
  t14460 = 6.8*t6270*t14145;
  t14618 = 3.2*t8611*t14612;
  t14797 = 3.2*t8611*t14795;
  t14827 = 3.2*t14814*t6243;
  t14924 = 3.2*t8642*t14921;
  t14932 = t14460 + t14618 + t14797 + t14827 + t14924;
  t14958 = 0.748*t9927;
  t14961 = 3.2*t7199*t11545;
  t14968 = 3.2*t8616*t12801;
  t14995 = t14958 + t14961 + t14968;
  t6274 = 0.748*t6270;
  t8612 = 3.2*t7199*t8611;
  t8620 = 3.2*t8616*t6243;
  t8621 = t6274 + t8612 + t8620;
  t15933 = 3.2*t8616*t14795;
  t15964 = 3.2*t7199*t14921;
  t15965 = t15933 + t15964;
  p_output1[0]=var2[3]*(-0.5*(6.4*t6243*t8611 + t8626 + 13.6*t8625*t8629 + 6.4*t8611*t8642)*var2[0] - 0.5*t13000*var2[1] - 0.5*t14932*var2[2] - 0.5*t8621*var2[3] - 0.384*t6243*var2[4]);
  p_output1[1]=var2[3]*(-0.5*t13000*var2[0] - 0.5*(6.4*t10855*t11545 + 6.4*t11545*t12801 + t8626 + 13.6*t6270*t9927)*var2[1] - 0.5*t15717*var2[2] - 0.5*t14995*var2[3] - 0.384*t12801*var2[4]);
  p_output1[2]=var2[3]*(-0.5*t14932*var2[0] - 0.5*t15717*var2[1] - 0.5*(6.4*t14795*t14814 + 6.4*t14612*t14921)*var2[2] - 0.5*t15965*var2[3] - 0.384*t14795*var2[4]);
  p_output1[3]=(-0.5*t8621*var2[0] - 0.5*t14995*var2[1] - 0.5*t15965*var2[2])*var2[3];
  p_output1[4]=(-0.384*t6243*var2[0] - 0.384*t12801*var2[1] - 0.384*t14795*var2[2])*var2[3];
  p_output1[5]=0;
  p_output1[6]=0;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce2_vec4_five_link_walker.hh"

namespace RightStance
{

void Ce2_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
