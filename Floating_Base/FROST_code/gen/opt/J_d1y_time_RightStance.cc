/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:23:30 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t2181;
  double t1636;
  double t1637;
  double t1890;
  double t1918;
  double t1964;
  double t2247;
  double t2252;
  double t2253;
  double t2259;
  double t2261;
  double t2283;
  double t2286;
  double t8975;
  double t8976;
  double t8980;
  double t8981;
  double t8993;
  double t8998;
  double t8999;
  double t9003;
  double t9004;
  double t9024;
  double t9035;
  double t9040;
  double t9060;
  double t9061;
  double t9025;
  double t9026;
  double t9027;
  double t9028;
  double t9029;
  double t9030;
  double t9031;
  double t9032;
  double t9033;
  double t9034;
  double t9036;
  double t9037;
  double t9038;
  double t9039;
  t2181 = -1.*var5[1];
  t1636 = -1. + var6[0];
  t1637 = -1. + var7[0];
  t1890 = 1/t1637;
  t1918 = -1.*t1636*t1890;
  t1964 = 1. + t1918;
  t2247 = var5[0] + t2181;
  t2252 = Power(t2247,-5);
  t2253 = -1.*var1[0];
  t2259 = t2253 + var1[1];
  t2261 = t1636*t1890*t2259;
  t2283 = t2181 + var1[0] + t2261;
  t2286 = Power(t2283,3);
  t8975 = Power(t2247,-4);
  t8976 = Power(t2283,2);
  t8980 = 1/t2247;
  t8981 = -1.*t8980*t2283;
  t8993 = 1. + t8981;
  t8998 = Power(t2247,-3);
  t8999 = Power(t8993,2);
  t9003 = Power(t2247,-2);
  t9004 = Power(t8993,3);
  t9024 = Power(t8993,4);
  t9035 = Power(t2283,4);
  t9040 = Power(t2247,-6);
  t9060 = -1.*t9003*t2283;
  t9061 = t8980 + t9060;
  t9025 = 5.*t8980*t9024;
  t9026 = 20.*t9003*t2283*t9004;
  t9027 = -5.*t8980*t9024;
  t9028 = t9026 + t9027;
  t9029 = 30.*t8998*t8976*t8999;
  t9030 = -20.*t9003*t2283*t9004;
  t9031 = t9029 + t9030;
  t9032 = 20.*t8975*t2286*t8993;
  t9033 = -30.*t8998*t8976*t8999;
  t9034 = t9032 + t9033;
  t9036 = 5.*t2252*t9035;
  t9037 = -20.*t8975*t2286*t8993;
  t9038 = t9036 + t9037;
  t9039 = -5.*t2252*t9035;
  p_output1[0]=-20.*t1964*t9003*t9004*var4[0] - 60.*t1964*t2283*t8998*t8999*var4[4] + 40.*t1964*t9003*t9004*var4[4] - 60.*t1964*t8975*t8976*t8993*var4[8] + 120.*t1964*t2283*t8998*t8999*var4[8] - 20.*t1964*t9003*t9004*var4[8] - 20.*t1964*t2252*t2286*var4[12] + 120.*t1964*t8975*t8976*t8993*var4[12] - 60.*t1964*t2283*t8998*t8999*var4[12] + 40.*t1964*t2252*t2286*var4[16] - 60.*t1964*t8975*t8976*t8993*var4[16] - 20.*t1964*t2252*t2286*var4[20];
  p_output1[1]=-20.*t1636*t1890*t9003*t9004*var4[0] - 60.*t1636*t1890*t2283*t8998*t8999*var4[4] + 40.*t1636*t1890*t9003*t9004*var4[4] - 60.*t1636*t1890*t8975*t8976*t8993*var4[8] + 120.*t1636*t1890*t2283*t8998*t8999*var4[8] - 20.*t1636*t1890*t9003*t9004*var4[8] - 20.*t1636*t1890*t2252*t2286*var4[12] + 120.*t1636*t1890*t8975*t8976*t8993*var4[12] - 60.*t1636*t1890*t2283*t8998*t8999*var4[12] + 40.*t1636*t1890*t2252*t2286*var4[16] - 60.*t1636*t1890*t8975*t8976*t8993*var4[16] - 20.*t1636*t1890*t2252*t2286*var4[20];
  p_output1[2]=1.;
  p_output1[3]=t9025;
  p_output1[4]=t9028;
  p_output1[5]=t9031;
  p_output1[6]=t9034;
  p_output1[7]=t9038;
  p_output1[8]=t9039;
  p_output1[9]=20.*t2283*t8998*t9004*var4[0] - 5.*t9003*t9024*var4[0] + 60.*t8975*t8976*t8999*var4[4] - 60.*t2283*t8998*t9004*var4[4] + 5.*t9003*t9024*var4[4] + 60.*t2252*t2286*t8993*var4[8] - 150.*t8975*t8976*t8999*var4[8] + 40.*t2283*t8998*t9004*var4[8] - 140.*t2252*t2286*t8993*var4[12] + 90.*t8975*t8976*t8999*var4[12] + 20.*t9035*t9040*var4[12] + 80.*t2252*t2286*t8993*var4[16] - 45.*t9035*t9040*var4[16] + 25.*t9035*t9040*var4[20];
  p_output1[10]=5.*t9003*t9024*var4[0] + 20.*t8980*t9004*t9061*var4[0] + 40.*t2283*t8998*t9004*var4[4] - 20.*t9003*t9004*var4[4] - 5.*t9003*t9024*var4[4] + 60.*t2283*t8999*t9003*t9061*var4[4] - 20.*t8980*t9004*t9061*var4[4] + 90.*t8975*t8976*t8999*var4[8] - 60.*t2283*t8998*t8999*var4[8] - 40.*t2283*t8998*t9004*var4[8] + 20.*t9003*t9004*var4[8] + 60.*t8976*t8993*t8998*t9061*var4[8] - 60.*t2283*t8999*t9003*t9061*var4[8] + 80.*t2252*t2286*t8993*var4[12] - 60.*t8975*t8976*t8993*var4[12] - 90.*t8975*t8976*t8999*var4[12] + 60.*t2283*t8998*t8999*var4[12] + 20.*t2286*t8975*t9061*var4[12] - 60.*t8976*t8993*t8998*t9061*var4[12] - 20.*t2252*t2286*var4[16] - 80.*t2252*t2286*t8993*var4[16] + 60.*t8975*t8976*t8993*var4[16] + 25.*t9035*t9040*var4[16] - 20.*t2286*t8975*t9061*var4[16] + 20.*t2252*t2286*var4[20] - 25.*t9035*t9040*var4[20];
  p_output1[11]=-20.*t1964*t9003*t9004*var4[1] - 60.*t1964*t2283*t8998*t8999*var4[5] + 40.*t1964*t9003*t9004*var4[5] - 60.*t1964*t8975*t8976*t8993*var4[9] + 120.*t1964*t2283*t8998*t8999*var4[9] - 20.*t1964*t9003*t9004*var4[9] - 20.*t1964*t2252*t2286*var4[13] + 120.*t1964*t8975*t8976*t8993*var4[13] - 60.*t1964*t2283*t8998*t8999*var4[13] + 40.*t1964*t2252*t2286*var4[17] - 60.*t1964*t8975*t8976*t8993*var4[17] - 20.*t1964*t2252*t2286*var4[21];
  p_output1[12]=-20.*t1636*t1890*t9003*t9004*var4[1] - 60.*t1636*t1890*t2283*t8998*t8999*var4[5] + 40.*t1636*t1890*t9003*t9004*var4[5] - 60.*t1636*t1890*t8975*t8976*t8993*var4[9] + 120.*t1636*t1890*t2283*t8998*t8999*var4[9] - 20.*t1636*t1890*t9003*t9004*var4[9] - 20.*t1636*t1890*t2252*t2286*var4[13] + 120.*t1636*t1890*t8975*t8976*t8993*var4[13] - 60.*t1636*t1890*t2283*t8998*t8999*var4[13] + 40.*t1636*t1890*t2252*t2286*var4[17] - 60.*t1636*t1890*t8975*t8976*t8993*var4[17] - 20.*t1636*t1890*t2252*t2286*var4[21];
  p_output1[13]=1.;
  p_output1[14]=t9025;
  p_output1[15]=t9028;
  p_output1[16]=t9031;
  p_output1[17]=t9034;
  p_output1[18]=t9038;
  p_output1[19]=t9039;
  p_output1[20]=20.*t2283*t8998*t9004*var4[1] - 5.*t9003*t9024*var4[1] + 60.*t8975*t8976*t8999*var4[5] - 60.*t2283*t8998*t9004*var4[5] + 5.*t9003*t9024*var4[5] + 60.*t2252*t2286*t8993*var4[9] - 150.*t8975*t8976*t8999*var4[9] + 40.*t2283*t8998*t9004*var4[9] - 140.*t2252*t2286*t8993*var4[13] + 90.*t8975*t8976*t8999*var4[13] + 20.*t9035*t9040*var4[13] + 80.*t2252*t2286*t8993*var4[17] - 45.*t9035*t9040*var4[17] + 25.*t9035*t9040*var4[21];
  p_output1[21]=5.*t9003*t9024*var4[1] + 20.*t8980*t9004*t9061*var4[1] + 40.*t2283*t8998*t9004*var4[5] - 20.*t9003*t9004*var4[5] - 5.*t9003*t9024*var4[5] + 60.*t2283*t8999*t9003*t9061*var4[5] - 20.*t8980*t9004*t9061*var4[5] + 90.*t8975*t8976*t8999*var4[9] - 60.*t2283*t8998*t8999*var4[9] - 40.*t2283*t8998*t9004*var4[9] + 20.*t9003*t9004*var4[9] + 60.*t8976*t8993*t8998*t9061*var4[9] - 60.*t2283*t8999*t9003*t9061*var4[9] + 80.*t2252*t2286*t8993*var4[13] - 60.*t8975*t8976*t8993*var4[13] - 90.*t8975*t8976*t8999*var4[13] + 60.*t2283*t8998*t8999*var4[13] + 20.*t2286*t8975*t9061*var4[13] - 60.*t8976*t8993*t8998*t9061*var4[13] - 20.*t2252*t2286*var4[17] - 80.*t2252*t2286*t8993*var4[17] + 60.*t8975*t8976*t8993*var4[17] + 25.*t9035*t9040*var4[17] - 20.*t2286*t8975*t9061*var4[17] + 20.*t2252*t2286*var4[21] - 25.*t9035*t9040*var4[21];
  p_output1[22]=-20.*t1964*t9003*t9004*var4[2] - 60.*t1964*t2283*t8998*t8999*var4[6] + 40.*t1964*t9003*t9004*var4[6] - 60.*t1964*t8975*t8976*t8993*var4[10] + 120.*t1964*t2283*t8998*t8999*var4[10] - 20.*t1964*t9003*t9004*var4[10] - 20.*t1964*t2252*t2286*var4[14] + 120.*t1964*t8975*t8976*t8993*var4[14] - 60.*t1964*t2283*t8998*t8999*var4[14] + 40.*t1964*t2252*t2286*var4[18] - 60.*t1964*t8975*t8976*t8993*var4[18] - 20.*t1964*t2252*t2286*var4[22];
  p_output1[23]=-20.*t1636*t1890*t9003*t9004*var4[2] - 60.*t1636*t1890*t2283*t8998*t8999*var4[6] + 40.*t1636*t1890*t9003*t9004*var4[6] - 60.*t1636*t1890*t8975*t8976*t8993*var4[10] + 120.*t1636*t1890*t2283*t8998*t8999*var4[10] - 20.*t1636*t1890*t9003*t9004*var4[10] - 20.*t1636*t1890*t2252*t2286*var4[14] + 120.*t1636*t1890*t8975*t8976*t8993*var4[14] - 60.*t1636*t1890*t2283*t8998*t8999*var4[14] + 40.*t1636*t1890*t2252*t2286*var4[18] - 60.*t1636*t1890*t8975*t8976*t8993*var4[18] - 20.*t1636*t1890*t2252*t2286*var4[22];
  p_output1[24]=1.;
  p_output1[25]=t9025;
  p_output1[26]=t9028;
  p_output1[27]=t9031;
  p_output1[28]=t9034;
  p_output1[29]=t9038;
  p_output1[30]=t9039;
  p_output1[31]=20.*t2283*t8998*t9004*var4[2] - 5.*t9003*t9024*var4[2] + 60.*t8975*t8976*t8999*var4[6] - 60.*t2283*t8998*t9004*var4[6] + 5.*t9003*t9024*var4[6] + 60.*t2252*t2286*t8993*var4[10] - 150.*t8975*t8976*t8999*var4[10] + 40.*t2283*t8998*t9004*var4[10] - 140.*t2252*t2286*t8993*var4[14] + 90.*t8975*t8976*t8999*var4[14] + 20.*t9035*t9040*var4[14] + 80.*t2252*t2286*t8993*var4[18] - 45.*t9035*t9040*var4[18] + 25.*t9035*t9040*var4[22];
  p_output1[32]=5.*t9003*t9024*var4[2] + 20.*t8980*t9004*t9061*var4[2] + 40.*t2283*t8998*t9004*var4[6] - 20.*t9003*t9004*var4[6] - 5.*t9003*t9024*var4[6] + 60.*t2283*t8999*t9003*t9061*var4[6] - 20.*t8980*t9004*t9061*var4[6] + 90.*t8975*t8976*t8999*var4[10] - 60.*t2283*t8998*t8999*var4[10] - 40.*t2283*t8998*t9004*var4[10] + 20.*t9003*t9004*var4[10] + 60.*t8976*t8993*t8998*t9061*var4[10] - 60.*t2283*t8999*t9003*t9061*var4[10] + 80.*t2252*t2286*t8993*var4[14] - 60.*t8975*t8976*t8993*var4[14] - 90.*t8975*t8976*t8999*var4[14] + 60.*t2283*t8998*t8999*var4[14] + 20.*t2286*t8975*t9061*var4[14] - 60.*t8976*t8993*t8998*t9061*var4[14] - 20.*t2252*t2286*var4[18] - 80.*t2252*t2286*t8993*var4[18] + 60.*t8975*t8976*t8993*var4[18] + 25.*t9035*t9040*var4[18] - 20.*t2286*t8975*t9061*var4[18] + 20.*t2252*t2286*var4[22] - 25.*t9035*t9040*var4[22];
  p_output1[33]=-20.*t1964*t9003*t9004*var4[3] - 60.*t1964*t2283*t8998*t8999*var4[7] + 40.*t1964*t9003*t9004*var4[7] - 60.*t1964*t8975*t8976*t8993*var4[11] + 120.*t1964*t2283*t8998*t8999*var4[11] - 20.*t1964*t9003*t9004*var4[11] - 20.*t1964*t2252*t2286*var4[15] + 120.*t1964*t8975*t8976*t8993*var4[15] - 60.*t1964*t2283*t8998*t8999*var4[15] + 40.*t1964*t2252*t2286*var4[19] - 60.*t1964*t8975*t8976*t8993*var4[19] - 20.*t1964*t2252*t2286*var4[23];
  p_output1[34]=-20.*t1636*t1890*t9003*t9004*var4[3] - 60.*t1636*t1890*t2283*t8998*t8999*var4[7] + 40.*t1636*t1890*t9003*t9004*var4[7] - 60.*t1636*t1890*t8975*t8976*t8993*var4[11] + 120.*t1636*t1890*t2283*t8998*t8999*var4[11] - 20.*t1636*t1890*t9003*t9004*var4[11] - 20.*t1636*t1890*t2252*t2286*var4[15] + 120.*t1636*t1890*t8975*t8976*t8993*var4[15] - 60.*t1636*t1890*t2283*t8998*t8999*var4[15] + 40.*t1636*t1890*t2252*t2286*var4[19] - 60.*t1636*t1890*t8975*t8976*t8993*var4[19] - 20.*t1636*t1890*t2252*t2286*var4[23];
  p_output1[35]=1.;
  p_output1[36]=t9025;
  p_output1[37]=t9028;
  p_output1[38]=t9031;
  p_output1[39]=t9034;
  p_output1[40]=t9038;
  p_output1[41]=t9039;
  p_output1[42]=20.*t2283*t8998*t9004*var4[3] - 5.*t9003*t9024*var4[3] + 60.*t8975*t8976*t8999*var4[7] - 60.*t2283*t8998*t9004*var4[7] + 5.*t9003*t9024*var4[7] + 60.*t2252*t2286*t8993*var4[11] - 150.*t8975*t8976*t8999*var4[11] + 40.*t2283*t8998*t9004*var4[11] - 140.*t2252*t2286*t8993*var4[15] + 90.*t8975*t8976*t8999*var4[15] + 20.*t9035*t9040*var4[15] + 80.*t2252*t2286*t8993*var4[19] - 45.*t9035*t9040*var4[19] + 25.*t9035*t9040*var4[23];
  p_output1[43]=5.*t9003*t9024*var4[3] + 20.*t8980*t9004*t9061*var4[3] + 40.*t2283*t8998*t9004*var4[7] - 20.*t9003*t9004*var4[7] - 5.*t9003*t9024*var4[7] + 60.*t2283*t8999*t9003*t9061*var4[7] - 20.*t8980*t9004*t9061*var4[7] + 90.*t8975*t8976*t8999*var4[11] - 60.*t2283*t8998*t8999*var4[11] - 40.*t2283*t8998*t9004*var4[11] + 20.*t9003*t9004*var4[11] + 60.*t8976*t8993*t8998*t9061*var4[11] - 60.*t2283*t8999*t9003*t9061*var4[11] + 80.*t2252*t2286*t8993*var4[15] - 60.*t8975*t8976*t8993*var4[15] - 90.*t8975*t8976*t8999*var4[15] + 60.*t2283*t8998*t8999*var4[15] + 20.*t2286*t8975*t9061*var4[15] - 60.*t8976*t8993*t8998*t9061*var4[15] - 20.*t2252*t2286*var4[19] - 80.*t2252*t2286*t8993*var4[19] + 60.*t8975*t8976*t8993*var4[19] + 25.*t9035*t9040*var4[19] - 20.*t2286*t8975*t9061*var4[19] + 20.*t2252*t2286*var4[23] - 25.*t9035*t9040*var4[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "J_d1y_time_RightStance.hh"

namespace RightStance
{

void J_d1y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
