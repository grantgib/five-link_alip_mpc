/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:36:54 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t933;
  double t1207;
  double t607;
  double t1210;
  double t171;
  double t965;
  double t1955;
  double t2224;
  double t6728;
  double t6979;
  double t7018;
  double t7257;
  double t9102;
  double t9171;
  double t9213;
  double t9280;
  double t10217;
  double t10250;
  double t10284;
  double t495;
  double t606;
  double t11170;
  double t11335;
  double t11362;
  double t10714;
  double t11471;
  double t11472;
  double t11602;
  double t11623;
  double t11626;
  double t11851;
  double t12097;
  double t12823;
  double t12824;
  double t12837;
  double t12848;
  double t12849;
  double t12949;
  double t12950;
  double t12951;
  double t12880;
  double t12952;
  double t12953;
  double t12954;
  double t12955;
  double t12961;
  double t12869;
  double t12962;
  double t12965;
  double t12966;
  double t5020;
  double t8738;
  double t8761;
  double t8950;
  double t8956;
  double t9017;
  double t10293;
  double t10658;
  double t11627;
  double t11642;
  double t11692;
  double t11701;
  double t11709;
  double t11853;
  double t12145;
  double t12172;
  double t12813;
  double t12814;
  double t12850;
  double t12855;
  double t12866;
  double t12867;
  double t12967;
  double t12968;
  double t12971;
  double t12982;
  double t12983;
  double t12984;
  double t12985;
  double t12986;
  double t13016;
  double t13017;
  double t13018;
  double t13019;
  double t12972;
  double t12973;
  double t12975;
  double t12976;
  double t12977;
  double t13030;
  double t13038;
  double t13040;
  double t13045;
  double t13046;
  double t13047;
  double t13048;
  double t13049;
  double t13054;
  double t13055;
  double t13056;
  double t13057;
  double t13058;
  double t13059;
  double t13060;
  double t13063;
  double t13064;
  double t13065;
  double t13032;
  double t13033;
  double t13036;
  double t13037;
  double t13039;
  double t13041;
  double t13042;
  double t13043;
  double t13044;
  double t13050;
  double t13051;
  double t13052;
  double t13053;
  double t13066;
  double t13069;
  double t13070;
  double t13085;
  double t13086;
  double t13087;
  double t13088;
  t933 = Cos(var1[3]);
  t1207 = Sin(var1[2]);
  t607 = Cos(var1[2]);
  t1210 = Sin(var1[3]);
  t171 = Cos(var1[4]);
  t965 = t607*t933;
  t1955 = -1.*t1207*t1210;
  t2224 = t965 + t1955;
  t6728 = -1.*t933*t1207;
  t6979 = -1.*t607*t1210;
  t7018 = t6728 + t6979;
  t7257 = Sin(var1[4]);
  t9102 = -0.4*t171*t7018;
  t9171 = 0.4*t2224*t7257;
  t9213 = t171*t7018;
  t9280 = -1.*t2224*t7257;
  t10217 = t9213 + t9280;
  t10250 = 0.8*t10217;
  t10284 = t9102 + t9171 + t10250;
  t495 = -1.*t171;
  t606 = 1. + t495;
  t11170 = -1.*t607*t933;
  t11335 = t1207*t1210;
  t11362 = t11170 + t11335;
  t10714 = 0.4*t606*t7018;
  t11471 = -0.4*t11362*t7257;
  t11472 = t11362*t7257;
  t11602 = t9213 + t11472;
  t11623 = 0.8*t11602;
  t11626 = t10714 + t11471 + t11623;
  t11851 = 0.4*t7018*t7257;
  t12097 = -1.*t7018*t7257;
  t12823 = -0.4*t171*t11362;
  t12824 = t171*t11362;
  t12837 = t12824 + t12097;
  t12848 = 0.8*t12837;
  t12849 = t12823 + t11851 + t12848;
  t12949 = t933*t1207;
  t12950 = t607*t1210;
  t12951 = t12949 + t12950;
  t12880 = 0.4*t606*t11362;
  t12952 = -0.4*t12951*t7257;
  t12953 = t12951*t7257;
  t12954 = t12824 + t12953;
  t12955 = 0.8*t12954;
  t12961 = t12880 + t12952 + t12955;
  t12869 = var2[4]*t12849;
  t12962 = var2[2]*t12961;
  t12965 = var2[3]*t12961;
  t12966 = t12869 + t12962 + t12965;
  t5020 = 0.4*t606*t2224;
  t8738 = -0.4*t7018*t7257;
  t8761 = t171*t2224;
  t8950 = t7018*t7257;
  t8956 = t8761 + t8950;
  t9017 = 0.8*t8956;
  t10293 = var3[4]*t10284;
  t10658 = var2[4]*t10284;
  t11627 = var3[2]*t11626;
  t11642 = var3[3]*t11626;
  t11692 = var2[2]*t11626;
  t11701 = var2[3]*t11626;
  t11709 = 0.4*t171*t2224;
  t11853 = -1.*t171*t2224;
  t12145 = t11853 + t12097;
  t12172 = 0.8*t12145;
  t12813 = t11709 + t11851 + t12172;
  t12814 = var2[4]*t12813;
  t12850 = var2[2]*t12849;
  t12855 = var2[3]*t12849;
  t12866 = t12814 + t12850 + t12855;
  t12867 = var2[4]*t12866;
  t12967 = var2[2]*t12966;
  t12968 = var2[3]*t12966;
  t12971 = t5020 + t8738 + t9017 + t10293 + t10658 + t11627 + t11642 + t11692 + t11701 + t12867 + t12967 + t12968;
  t12982 = 0.4*t171*t12951;
  t12983 = -1.*t171*t12951;
  t12984 = t12983 + t9280;
  t12985 = 0.8*t12984;
  t12986 = t12982 + t9171 + t12985;
  t13016 = 2.*var2[4]*t10284;
  t13017 = 2.*var2[2]*t11626;
  t13018 = 2.*var2[3]*t11626;
  t13019 = t5020 + t8738 + t9017 + t13016 + t13017 + t13018;
  t12972 = -0.4*t171*t2224;
  t12973 = 0.4*t12951*t7257;
  t12975 = -1.*t12951*t7257;
  t12976 = t8761 + t12975;
  t12977 = 0.8*t12976;
  t13030 = t5020 + t8738 + t9017;
  t13038 = 0.4*t11362*t7257;
  t13040 = -1.*t11362*t7257;
  t13045 = -0.4*t171*t12951;
  t13046 = t171*t12951;
  t13047 = t13046 + t13040;
  t13048 = 0.8*t13047;
  t13049 = t13045 + t13038 + t13048;
  t13054 = 0.4*t606*t12951;
  t13055 = -0.4*t2224*t7257;
  t13056 = t2224*t7257;
  t13057 = t13046 + t13056;
  t13058 = 0.8*t13057;
  t13059 = t13054 + t13055 + t13058;
  t13060 = var2[2]*t13059;
  t13063 = var2[3]*t13059;
  t13064 = var2[4]*t13049;
  t13065 = t13060 + t13063 + t13064;
  t13032 = var3[4]*t12849;
  t13033 = var3[2]*t12961;
  t13036 = var3[3]*t12961;
  t13037 = 0.4*t171*t7018;
  t13039 = -1.*t171*t7018;
  t13041 = t13039 + t13040;
  t13042 = 0.8*t13041;
  t13043 = t13037 + t13038 + t13042;
  t13044 = var2[4]*t13043;
  t13050 = var2[2]*t13049;
  t13051 = var2[3]*t13049;
  t13052 = t13044 + t13050 + t13051;
  t13053 = var2[4]*t13052;
  t13066 = var2[2]*t13065;
  t13069 = var2[3]*t13065;
  t13070 = t10714 + t11471 + t11623 + t13032 + t12869 + t13033 + t13036 + t12962 + t12965 + t13053 + t13066 + t13069;
  t13085 = 2.*var2[4]*t12849;
  t13086 = 2.*var2[2]*t12961;
  t13087 = 2.*var2[3]*t12961;
  t13088 = t10714 + t11471 + t11623 + t13085 + t13086 + t13087;
  p_output1[0]=1.;
  p_output1[1]=t12971;
  p_output1[2]=t12971;
  p_output1[3]=t12972 + t12973 + t12977 + t10284*var2[2] + t12866*var2[2] + t10284*var2[3] + t12866*var2[3] + t12986*var2[4] + var2[4]*(t12813*var2[2] + t12813*var2[3] + (t11709 + t12952 + 0.8*(t11853 + t12953))*var2[4]) + t10284*var3[2] + t10284*var3[3] + t12986*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t13019;
  p_output1[6]=t13019;
  p_output1[7]=t12972 + t12973 + t12977 + 2.*t10284*var2[2] + 2.*t10284*var2[3] + 2.*t12986*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t13030;
  p_output1[10]=t13030;
  p_output1[11]=t12972 + t12973 + t12977;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t13070;
  p_output1[16]=t13070;
  p_output1[17]=t10250 + t12814 + t12850 + t12855 + t9102 + t9171 + t13052*var2[2] + t13052*var2[3] + var2[4]*(t13043*var2[2] + t13043*var2[3] + (t13037 + t13055 + 0.8*(t13039 + t13056))*var2[4]) + t12849*var3[2] + t12849*var3[3] + t12813*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t13088;
  p_output1[20]=t13088;
  p_output1[21]=t10250 + t9102 + t9171 + 2.*t12849*var2[2] + 2.*t12849*var2[3] + 2.*t12813*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t11626;
  p_output1[24]=t11626;
  p_output1[25]=t10284;
  p_output1[26]=-1.;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 27, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_RightToe_RightStance.hh"

namespace RightStance
{

void J_ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
