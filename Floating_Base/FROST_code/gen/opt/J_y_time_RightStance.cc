/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:36:35 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t15707;
  double t15651;
  double t15657;
  double t15661;
  double t15669;
  double t15671;
  double t15708;
  double t15709;
  double t15710;
  double t15711;
  double t15712;
  double t15713;
  double t15714;
  double t15717;
  double t15718;
  double t15719;
  double t15720;
  double t15725;
  double t15728;
  double t15729;
  double t15730;
  double t15733;
  double t15734;
  double t15737;
  double t15758;
  double t15760;
  double t15774;
  double t15775;
  double t15752;
  double t15753;
  double t15754;
  double t15755;
  double t15756;
  double t15757;
  double t15759;
  t15707 = -1.*var4[1];
  t15651 = -1. + var5[0];
  t15657 = -1. + var6[0];
  t15661 = 1/t15657;
  t15669 = -1.*t15651*t15661;
  t15671 = 1. + t15669;
  t15708 = var4[0] + t15707;
  t15709 = Power(t15708,-5);
  t15710 = -1.*var1[0];
  t15711 = t15710 + var1[1];
  t15712 = t15651*t15661*t15711;
  t15713 = t15707 + var1[0] + t15712;
  t15714 = Power(t15713,4);
  t15717 = Power(t15708,-4);
  t15718 = Power(t15713,3);
  t15719 = 1/t15708;
  t15720 = -1.*t15719*t15713;
  t15725 = 1. + t15720;
  t15728 = Power(t15708,-3);
  t15729 = Power(t15713,2);
  t15730 = Power(t15725,2);
  t15733 = Power(t15708,-2);
  t15734 = Power(t15725,3);
  t15737 = Power(t15725,4);
  t15758 = Power(t15713,5);
  t15760 = Power(t15708,-6);
  t15774 = -1.*t15733*t15713;
  t15775 = t15719 + t15774;
  t15752 = Power(t15725,5);
  t15753 = -1.*t15752;
  t15754 = -5.*t15719*t15713*t15737;
  t15755 = -10.*t15733*t15729*t15734;
  t15756 = -10.*t15728*t15718*t15730;
  t15757 = -5.*t15717*t15714*t15725;
  t15759 = -1.*t15709*t15758;
  p_output1[0]=5.*t15671*t15719*t15737*var3[0] + 20.*t15671*t15713*t15733*t15734*var3[4] - 5.*t15671*t15719*t15737*var3[4] + 30.*t15671*t15728*t15729*t15730*var3[8] - 20.*t15671*t15713*t15733*t15734*var3[8] + 20.*t15671*t15717*t15718*t15725*var3[12] - 30.*t15671*t15728*t15729*t15730*var3[12] + 5.*t15671*t15709*t15714*var3[16] - 20.*t15671*t15717*t15718*t15725*var3[16] - 5.*t15671*t15709*t15714*var3[20];
  p_output1[1]=5.*t15651*t15661*t15719*t15737*var3[0] + 20.*t15651*t15661*t15713*t15733*t15734*var3[4] - 5.*t15651*t15661*t15719*t15737*var3[4] + 30.*t15651*t15661*t15728*t15729*t15730*var3[8] - 20.*t15651*t15661*t15713*t15733*t15734*var3[8] + 20.*t15651*t15661*t15717*t15718*t15725*var3[12] - 30.*t15651*t15661*t15728*t15729*t15730*var3[12] + 5.*t15651*t15661*t15709*t15714*var3[16] - 20.*t15651*t15661*t15717*t15718*t15725*var3[16] - 5.*t15651*t15661*t15709*t15714*var3[20];
  p_output1[2]=1.;
  p_output1[3]=t15753;
  p_output1[4]=t15754;
  p_output1[5]=t15755;
  p_output1[6]=t15756;
  p_output1[7]=t15757;
  p_output1[8]=t15759;
  p_output1[9]=-5.*t15713*t15733*t15737*var3[0] - 20.*t15728*t15729*t15734*var3[4] + 5.*t15713*t15733*t15737*var3[4] - 30.*t15717*t15718*t15730*var3[8] + 20.*t15728*t15729*t15734*var3[8] - 20.*t15709*t15714*t15725*var3[12] + 30.*t15717*t15718*t15730*var3[12] + 20.*t15709*t15714*t15725*var3[16] - 5.*t15758*t15760*var3[16] + 5.*t15758*t15760*var3[20];
  p_output1[10]=-5.*t15737*t15775*var3[0] + 5.*t15719*t15737*var3[4] - 5.*t15713*t15733*t15737*var3[4] - 20.*t15713*t15719*t15734*t15775*var3[4] - 20.*t15728*t15729*t15734*var3[8] + 20.*t15713*t15733*t15734*var3[8] - 30.*t15729*t15730*t15733*t15775*var3[8] - 30.*t15717*t15718*t15730*var3[12] + 30.*t15728*t15729*t15730*var3[12] - 20.*t15718*t15725*t15728*t15775*var3[12] - 20.*t15709*t15714*t15725*var3[16] + 20.*t15717*t15718*t15725*var3[16] - 5.*t15714*t15717*t15775*var3[16] + 5.*t15709*t15714*var3[20] - 5.*t15758*t15760*var3[20];
  p_output1[11]=5.*t15671*t15719*t15737*var3[1] + 20.*t15671*t15713*t15733*t15734*var3[5] - 5.*t15671*t15719*t15737*var3[5] + 30.*t15671*t15728*t15729*t15730*var3[9] - 20.*t15671*t15713*t15733*t15734*var3[9] + 20.*t15671*t15717*t15718*t15725*var3[13] - 30.*t15671*t15728*t15729*t15730*var3[13] + 5.*t15671*t15709*t15714*var3[17] - 20.*t15671*t15717*t15718*t15725*var3[17] - 5.*t15671*t15709*t15714*var3[21];
  p_output1[12]=5.*t15651*t15661*t15719*t15737*var3[1] + 20.*t15651*t15661*t15713*t15733*t15734*var3[5] - 5.*t15651*t15661*t15719*t15737*var3[5] + 30.*t15651*t15661*t15728*t15729*t15730*var3[9] - 20.*t15651*t15661*t15713*t15733*t15734*var3[9] + 20.*t15651*t15661*t15717*t15718*t15725*var3[13] - 30.*t15651*t15661*t15728*t15729*t15730*var3[13] + 5.*t15651*t15661*t15709*t15714*var3[17] - 20.*t15651*t15661*t15717*t15718*t15725*var3[17] - 5.*t15651*t15661*t15709*t15714*var3[21];
  p_output1[13]=1.;
  p_output1[14]=t15753;
  p_output1[15]=t15754;
  p_output1[16]=t15755;
  p_output1[17]=t15756;
  p_output1[18]=t15757;
  p_output1[19]=t15759;
  p_output1[20]=-5.*t15713*t15733*t15737*var3[1] - 20.*t15728*t15729*t15734*var3[5] + 5.*t15713*t15733*t15737*var3[5] - 30.*t15717*t15718*t15730*var3[9] + 20.*t15728*t15729*t15734*var3[9] - 20.*t15709*t15714*t15725*var3[13] + 30.*t15717*t15718*t15730*var3[13] + 20.*t15709*t15714*t15725*var3[17] - 5.*t15758*t15760*var3[17] + 5.*t15758*t15760*var3[21];
  p_output1[21]=-5.*t15737*t15775*var3[1] + 5.*t15719*t15737*var3[5] - 5.*t15713*t15733*t15737*var3[5] - 20.*t15713*t15719*t15734*t15775*var3[5] - 20.*t15728*t15729*t15734*var3[9] + 20.*t15713*t15733*t15734*var3[9] - 30.*t15729*t15730*t15733*t15775*var3[9] - 30.*t15717*t15718*t15730*var3[13] + 30.*t15728*t15729*t15730*var3[13] - 20.*t15718*t15725*t15728*t15775*var3[13] - 20.*t15709*t15714*t15725*var3[17] + 20.*t15717*t15718*t15725*var3[17] - 5.*t15714*t15717*t15775*var3[17] + 5.*t15709*t15714*var3[21] - 5.*t15758*t15760*var3[21];
  p_output1[22]=5.*t15671*t15719*t15737*var3[2] + 20.*t15671*t15713*t15733*t15734*var3[6] - 5.*t15671*t15719*t15737*var3[6] + 30.*t15671*t15728*t15729*t15730*var3[10] - 20.*t15671*t15713*t15733*t15734*var3[10] + 20.*t15671*t15717*t15718*t15725*var3[14] - 30.*t15671*t15728*t15729*t15730*var3[14] + 5.*t15671*t15709*t15714*var3[18] - 20.*t15671*t15717*t15718*t15725*var3[18] - 5.*t15671*t15709*t15714*var3[22];
  p_output1[23]=5.*t15651*t15661*t15719*t15737*var3[2] + 20.*t15651*t15661*t15713*t15733*t15734*var3[6] - 5.*t15651*t15661*t15719*t15737*var3[6] + 30.*t15651*t15661*t15728*t15729*t15730*var3[10] - 20.*t15651*t15661*t15713*t15733*t15734*var3[10] + 20.*t15651*t15661*t15717*t15718*t15725*var3[14] - 30.*t15651*t15661*t15728*t15729*t15730*var3[14] + 5.*t15651*t15661*t15709*t15714*var3[18] - 20.*t15651*t15661*t15717*t15718*t15725*var3[18] - 5.*t15651*t15661*t15709*t15714*var3[22];
  p_output1[24]=1.;
  p_output1[25]=t15753;
  p_output1[26]=t15754;
  p_output1[27]=t15755;
  p_output1[28]=t15756;
  p_output1[29]=t15757;
  p_output1[30]=t15759;
  p_output1[31]=-5.*t15713*t15733*t15737*var3[2] - 20.*t15728*t15729*t15734*var3[6] + 5.*t15713*t15733*t15737*var3[6] - 30.*t15717*t15718*t15730*var3[10] + 20.*t15728*t15729*t15734*var3[10] - 20.*t15709*t15714*t15725*var3[14] + 30.*t15717*t15718*t15730*var3[14] + 20.*t15709*t15714*t15725*var3[18] - 5.*t15758*t15760*var3[18] + 5.*t15758*t15760*var3[22];
  p_output1[32]=-5.*t15737*t15775*var3[2] + 5.*t15719*t15737*var3[6] - 5.*t15713*t15733*t15737*var3[6] - 20.*t15713*t15719*t15734*t15775*var3[6] - 20.*t15728*t15729*t15734*var3[10] + 20.*t15713*t15733*t15734*var3[10] - 30.*t15729*t15730*t15733*t15775*var3[10] - 30.*t15717*t15718*t15730*var3[14] + 30.*t15728*t15729*t15730*var3[14] - 20.*t15718*t15725*t15728*t15775*var3[14] - 20.*t15709*t15714*t15725*var3[18] + 20.*t15717*t15718*t15725*var3[18] - 5.*t15714*t15717*t15775*var3[18] + 5.*t15709*t15714*var3[22] - 5.*t15758*t15760*var3[22];
  p_output1[33]=5.*t15671*t15719*t15737*var3[3] + 20.*t15671*t15713*t15733*t15734*var3[7] - 5.*t15671*t15719*t15737*var3[7] + 30.*t15671*t15728*t15729*t15730*var3[11] - 20.*t15671*t15713*t15733*t15734*var3[11] + 20.*t15671*t15717*t15718*t15725*var3[15] - 30.*t15671*t15728*t15729*t15730*var3[15] + 5.*t15671*t15709*t15714*var3[19] - 20.*t15671*t15717*t15718*t15725*var3[19] - 5.*t15671*t15709*t15714*var3[23];
  p_output1[34]=5.*t15651*t15661*t15719*t15737*var3[3] + 20.*t15651*t15661*t15713*t15733*t15734*var3[7] - 5.*t15651*t15661*t15719*t15737*var3[7] + 30.*t15651*t15661*t15728*t15729*t15730*var3[11] - 20.*t15651*t15661*t15713*t15733*t15734*var3[11] + 20.*t15651*t15661*t15717*t15718*t15725*var3[15] - 30.*t15651*t15661*t15728*t15729*t15730*var3[15] + 5.*t15651*t15661*t15709*t15714*var3[19] - 20.*t15651*t15661*t15717*t15718*t15725*var3[19] - 5.*t15651*t15661*t15709*t15714*var3[23];
  p_output1[35]=1.;
  p_output1[36]=t15753;
  p_output1[37]=t15754;
  p_output1[38]=t15755;
  p_output1[39]=t15756;
  p_output1[40]=t15757;
  p_output1[41]=t15759;
  p_output1[42]=-5.*t15713*t15733*t15737*var3[3] - 20.*t15728*t15729*t15734*var3[7] + 5.*t15713*t15733*t15737*var3[7] - 30.*t15717*t15718*t15730*var3[11] + 20.*t15728*t15729*t15734*var3[11] - 20.*t15709*t15714*t15725*var3[15] + 30.*t15717*t15718*t15730*var3[15] + 20.*t15709*t15714*t15725*var3[19] - 5.*t15758*t15760*var3[19] + 5.*t15758*t15760*var3[23];
  p_output1[43]=-5.*t15737*t15775*var3[3] + 5.*t15719*t15737*var3[7] - 5.*t15713*t15733*t15737*var3[7] - 20.*t15713*t15719*t15734*t15775*var3[7] - 20.*t15728*t15729*t15734*var3[11] + 20.*t15713*t15733*t15734*var3[11] - 30.*t15729*t15730*t15733*t15775*var3[11] - 30.*t15717*t15718*t15730*var3[15] + 30.*t15728*t15729*t15730*var3[15] - 20.*t15718*t15725*t15728*t15775*var3[15] - 20.*t15709*t15714*t15725*var3[19] + 20.*t15717*t15718*t15725*var3[19] - 5.*t15714*t15717*t15775*var3[19] + 5.*t15709*t15714*var3[23] - 5.*t15758*t15760*var3[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_time_RightStance.hh"

namespace RightStance
{

void J_y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
