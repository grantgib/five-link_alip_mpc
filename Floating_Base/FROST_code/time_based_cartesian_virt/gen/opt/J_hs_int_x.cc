/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:07:15 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  double t573;
  double t585;
  double t1305;
  double t1415;
  double t1581;
  double t1612;
  double t1613;
  double t1654;
  double t1791;
  double t1626;
  double t1805;
  double t1917;
  double t1955;
  double t1973;
  double t2178;
  double t2225;
  double t2338;
  double t2348;
  double t2394;
  double t2396;
  double t2510;
  double t2513;
  double t2563;
  double t2575;
  double t2553;
  double t2555;
  double t2596;
  double t2606;
  double t2620;
  double t2623;
  double t2664;
  double t2721;
  double t2740;
  double t2748;
  double t2879;
  double t2899;
  t573 = 4.*var5[0];
  t585 = t573 + var7[0] + var3[0];
  t1305 = -1. + var8[0];
  t1415 = 1/t1305;
  t1581 = -1.*var1[0];
  t1612 = t1581 + var1[1];
  t1613 = -0.333333333333333*t1415*t1612;
  t1654 = 4.*var5[1];
  t1791 = t1654 + var7[1] + var3[1];
  t1626 = -1.33333333333333*t1415*t1612;
  t1805 = 4.*var5[2];
  t1917 = t1805 + var7[2] + var3[2];
  t1955 = 4.*var5[3];
  t1973 = t1955 + var7[3] + var3[3];
  t2178 = 4.*var5[4];
  t2225 = t2178 + var7[4] + var3[4];
  t2338 = 4.*var5[5];
  t2348 = t2338 + var7[5] + var3[5];
  t2394 = 4.*var5[6];
  t2396 = t2394 + var7[6] + var3[6];
  t2510 = -1.*var7[0];
  t2513 = t2510 + var3[0];
  t2563 = -1.*var7[1];
  t2575 = t2563 + var3[1];
  t2553 = -0.25*t1415*t1612;
  t2555 = 0.25*t1415*t1612;
  t2596 = -1.*var7[2];
  t2606 = t2596 + var3[2];
  t2620 = -1.*var7[3];
  t2623 = t2620 + var3[3];
  t2664 = -1.*var7[4];
  t2721 = t2664 + var3[4];
  t2740 = -1.*var7[5];
  t2748 = t2740 + var3[5];
  t2879 = -1.*var7[6];
  t2899 = t2879 + var3[6];
  p_output1[0]=0.333333333333333*t1415*t585;
  p_output1[1]=-0.333333333333333*t1415*t585;
  p_output1[2]=-1.;
  p_output1[3]=t1613;
  p_output1[4]=t1626;
  p_output1[5]=1.;
  p_output1[6]=t1613;
  p_output1[7]=0.333333333333333*t1415*t1791;
  p_output1[8]=-0.333333333333333*t1415*t1791;
  p_output1[9]=-1.;
  p_output1[10]=t1613;
  p_output1[11]=t1626;
  p_output1[12]=1.;
  p_output1[13]=t1613;
  p_output1[14]=0.333333333333333*t1415*t1917;
  p_output1[15]=-0.333333333333333*t1415*t1917;
  p_output1[16]=-1.;
  p_output1[17]=t1613;
  p_output1[18]=t1626;
  p_output1[19]=1.;
  p_output1[20]=t1613;
  p_output1[21]=0.333333333333333*t1415*t1973;
  p_output1[22]=-0.333333333333333*t1415*t1973;
  p_output1[23]=-1.;
  p_output1[24]=t1613;
  p_output1[25]=t1626;
  p_output1[26]=1.;
  p_output1[27]=t1613;
  p_output1[28]=0.333333333333333*t1415*t2225;
  p_output1[29]=-0.333333333333333*t1415*t2225;
  p_output1[30]=-1.;
  p_output1[31]=t1613;
  p_output1[32]=t1626;
  p_output1[33]=1.;
  p_output1[34]=t1613;
  p_output1[35]=0.333333333333333*t1415*t2348;
  p_output1[36]=-0.333333333333333*t1415*t2348;
  p_output1[37]=-1.;
  p_output1[38]=t1613;
  p_output1[39]=t1626;
  p_output1[40]=1.;
  p_output1[41]=t1613;
  p_output1[42]=0.333333333333333*t1415*t2396;
  p_output1[43]=-0.333333333333333*t1415*t2396;
  p_output1[44]=-1.;
  p_output1[45]=t1613;
  p_output1[46]=t1626;
  p_output1[47]=1.;
  p_output1[48]=t1613;
  p_output1[49]=0.25*t1415*t2513;
  p_output1[50]=-0.25*t1415*t2513;
  p_output1[51]=-0.5;
  p_output1[52]=t2553;
  p_output1[53]=1.;
  p_output1[54]=-0.5;
  p_output1[55]=t2555;
  p_output1[56]=0.25*t1415*t2575;
  p_output1[57]=-0.25*t1415*t2575;
  p_output1[58]=-0.5;
  p_output1[59]=t2553;
  p_output1[60]=1.;
  p_output1[61]=-0.5;
  p_output1[62]=t2555;
  p_output1[63]=0.25*t1415*t2606;
  p_output1[64]=-0.25*t1415*t2606;
  p_output1[65]=-0.5;
  p_output1[66]=t2553;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t2555;
  p_output1[70]=0.25*t1415*t2623;
  p_output1[71]=-0.25*t1415*t2623;
  p_output1[72]=-0.5;
  p_output1[73]=t2553;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t2555;
  p_output1[77]=0.25*t1415*t2721;
  p_output1[78]=-0.25*t1415*t2721;
  p_output1[79]=-0.5;
  p_output1[80]=t2553;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t2555;
  p_output1[84]=0.25*t1415*t2748;
  p_output1[85]=-0.25*t1415*t2748;
  p_output1[86]=-0.5;
  p_output1[87]=t2553;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t2555;
  p_output1[91]=0.25*t1415*t2899;
  p_output1[92]=-0.25*t1415*t2899;
  p_output1[93]=-0.5;
  p_output1[94]=t2553;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t2555;
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 8)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Eight input(s) required (var1,var2,var3,var4,var5,var6,var7,var8).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 98, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8);


}

#else // MATLAB_MEX_FILE

#include "J_hs_int_x.hh"

namespace RightStance
{

void J_hs_int_x_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
