/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:22:47 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t2051;
  double t1939;
  double t2009;
  double t2193;
  double t7559;
  double t2010;
  double t2225;
  double t2250;
  double t1797;
  double t7783;
  double t7784;
  double t7797;
  double t2819;
  double t7815;
  double t7943;
  double t7948;
  double t7949;
  double t7955;
  double t7956;
  double t7960;
  double t7967;
  double t7977;
  double t7978;
  double t7993;
  double t8004;
  double t7808;
  double t7813;
  double t8009;
  double t8011;
  double t8017;
  double t8031;
  double t8032;
  double t8149;
  double t8170;
  double t8171;
  double t8172;
  double t8173;
  double t8174;
  double t8175;
  double t8176;
  double t8177;
  double t8184;
  double t8185;
  double t8186;
  double t8150;
  double t8154;
  double t8155;
  double t8156;
  double t8157;
  double t8161;
  double t8179;
  double t8180;
  double t8181;
  double t8182;
  double t8209;
  double t8210;
  double t8190;
  double t8197;
  double t8236;
  double t8237;
  double t8238;
  double t8239;
  double t8240;
  double t8232;
  double t8233;
  double t8205;
  double t8211;
  double t8212;
  double t8213;
  double t8214;
  double t8215;
  double t8216;
  double t8217;
  double t8221;
  double t8222;
  double t8228;
  double t8229;
  double t8230;
  double t8231;
  double t8234;
  double t8235;
  double t8261;
  double t8262;
  double t8263;
  double t8257;
  double t8258;
  double t8259;
  double t8243;
  double t8244;
  t2051 = Cos(var1[3]);
  t1939 = Cos(var1[4]);
  t2009 = Sin(var1[3]);
  t2193 = Sin(var1[4]);
  t7559 = Cos(var1[2]);
  t2010 = -1.*t1939*t2009;
  t2225 = -1.*t2051*t2193;
  t2250 = t2010 + t2225;
  t1797 = Sin(var1[2]);
  t7783 = t2051*t1939;
  t7784 = -1.*t2009*t2193;
  t7797 = t7783 + t7784;
  t2819 = -1.*t1797*t2250;
  t7815 = -1.*t7559*t2250;
  t7943 = -1.*t2051*t1939;
  t7948 = t2009*t2193;
  t7949 = t7943 + t7948;
  t7955 = t7559*t7949;
  t7956 = t2819 + t7955;
  t7960 = 0.384*var2[0]*t7956;
  t7967 = -1.*t1797*t7949;
  t7977 = t7815 + t7967;
  t7978 = 0.384*var2[1]*t7977;
  t7993 = t7960 + t7978;
  t8004 = var2[4]*t7993;
  t7808 = -1.*t7559*t7797;
  t7813 = t2819 + t7808;
  t8009 = t7559*t2250;
  t8011 = -1.*t1797*t7797;
  t8017 = t8009 + t8011;
  t8031 = t1939*t2009;
  t8032 = t2051*t2193;
  t8149 = t8031 + t8032;
  t8170 = -1.*t1939;
  t8171 = 1. + t8170;
  t8172 = 0.4*t8171;
  t8173 = 0.64*t1939;
  t8174 = t8172 + t8173;
  t8175 = -1.*t8174*t2009;
  t8176 = -0.24*t2051*t2193;
  t8177 = t8175 + t8176;
  t8184 = t2051*t8174;
  t8185 = -0.24*t2009*t2193;
  t8186 = t8184 + t8185;
  t8150 = t1797*t8149;
  t8154 = t8150 + t7955;
  t8155 = 0.384*var2[0]*t8154;
  t8156 = t7559*t8149;
  t8157 = t8156 + t7967;
  t8161 = 0.384*var2[1]*t8157;
  t8179 = t8174*t2009;
  t8180 = 0.24*t2051*t2193;
  t8181 = t8179 + t8180;
  t8182 = t2250*t8181;
  t8209 = -0.24*t1939*t2009;
  t8210 = t8209 + t8176;
  t8190 = 0.24*t2009*t2193;
  t8197 = t8186*t7949;
  t8236 = t8177*t7797;
  t8237 = t8181*t7797;
  t8238 = t2250*t8186;
  t8239 = t8149*t8186;
  t8240 = t8236 + t8237 + t8238 + t8239;
  t8232 = t1797*t7949;
  t8233 = t8009 + t8232;
  t8205 = t2250*t8177;
  t8211 = t2250*t8210;
  t8212 = t8210*t8149;
  t8213 = t7797*t8186;
  t8214 = 0.24*t2051*t1939;
  t8215 = t8214 + t8185;
  t8216 = t7797*t8215;
  t8217 = -0.24*t2051*t1939;
  t8221 = t8217 + t8190;
  t8222 = t7797*t8221;
  t8228 = t8205 + t8211 + t8182 + t8212 + t8213 + t8216 + t8222 + t8197;
  t8229 = 0.384*var2[2]*t8228;
  t8230 = t8155 + t8161 + t8229;
  t8231 = var2[4]*t8230;
  t8234 = 0.384*var2[4]*t8233;
  t8235 = 0.384*var2[4]*t7956;
  t8261 = -1.*t8174*t2193;
  t8262 = 0.24*t1939*t2193;
  t8263 = t8261 + t8262;
  t8257 = t8210*t7797;
  t8258 = t8149*t8215;
  t8259 = t8257 + t8237 + t8238 + t8258;
  t8243 = 0.384*var2[1]*t7956;
  t8244 = 0.384*var2[0]*t8233;
  p_output1[0]=(0.384*t7813*var2[0] + 0.384*(t1797*t7797 + t7815)*var2[1])*var2[4];
  p_output1[1]=t8004;
  p_output1[2]=t8004;
  p_output1[3]=0.384*t8017*var2[4];
  p_output1[4]=0.384*t7813*var2[4];
  p_output1[5]=0.384*t8017*var2[0] + 0.384*t7813*var2[1];
  p_output1[6]=t8004;
  p_output1[7]=(t8155 + t8161 + 0.384*(2.*t2250*t8177 + t8149*t8177 + t8182 + 2.*t7797*t8186 + t7797*(-1.*t2051*t8174 + t8190) + t8197)*var2[2])*var2[4];
  p_output1[8]=t8231;
  p_output1[9]=t8234;
  p_output1[10]=t8235;
  p_output1[11]=0.384*t8240*var2[4];
  p_output1[12]=t8243 + t8244 + 0.384*t8240*var2[2];
  p_output1[13]=t8004;
  p_output1[14]=t8231;
  p_output1[15]=(t8155 + t8161 + 0.384*(t8182 + t8197 + 2.*t2250*t8210 + t8212 + 2.*t7797*t8215 + t8222)*var2[2] + 0.384*(0.24*Power(t1939,2) - 1.*t1939*t8174)*var2[3])*var2[4];
  p_output1[16]=t8234;
  p_output1[17]=t8235;
  p_output1[18]=0.384*t8259*var2[4];
  p_output1[19]=0.384*t8263*var2[4];
  p_output1[20]=t8243 + t8244 + 0.384*t8259*var2[2] + 0.384*t8263*var2[3];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec5_five_link_walker.hh"

namespace RightStance
{

void J_Ce3_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
