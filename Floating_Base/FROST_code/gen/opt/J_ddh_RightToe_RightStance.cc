/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:23:16 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t2135;
  double t2141;
  double t2063;
  double t2142;
  double t1938;
  double t2139;
  double t2148;
  double t2164;
  double t2186;
  double t2215;
  double t2219;
  double t2235;
  double t8753;
  double t8754;
  double t8765;
  double t8766;
  double t8767;
  double t8768;
  double t8775;
  double t1961;
  double t2059;
  double t8786;
  double t8787;
  double t8788;
  double t8785;
  double t8789;
  double t8790;
  double t8791;
  double t8792;
  double t8793;
  double t8812;
  double t8814;
  double t8821;
  double t8822;
  double t8828;
  double t8829;
  double t8830;
  double t8847;
  double t8848;
  double t8849;
  double t8846;
  double t8850;
  double t8851;
  double t8852;
  double t8853;
  double t8854;
  double t8845;
  double t8855;
  double t8856;
  double t8857;
  double t2176;
  double t2236;
  double t8728;
  double t8733;
  double t8751;
  double t8752;
  double t8776;
  double t8784;
  double t8807;
  double t8808;
  double t8809;
  double t8810;
  double t8811;
  double t8813;
  double t8815;
  double t8817;
  double t8819;
  double t8820;
  double t8831;
  double t8842;
  double t8843;
  double t8844;
  double t8858;
  double t8859;
  double t8860;
  double t8870;
  double t8871;
  double t8872;
  double t8873;
  double t8874;
  double t8888;
  double t8889;
  double t8890;
  double t8891;
  double t8861;
  double t8862;
  double t8863;
  double t8864;
  double t8865;
  double t8896;
  double t8902;
  double t8904;
  double t8909;
  double t8910;
  double t8911;
  double t8912;
  double t8913;
  double t8918;
  double t8919;
  double t8920;
  double t8921;
  double t8922;
  double t8923;
  double t8924;
  double t8925;
  double t8926;
  double t8927;
  double t8898;
  double t8899;
  double t8900;
  double t8901;
  double t8903;
  double t8905;
  double t8906;
  double t8907;
  double t8908;
  double t8914;
  double t8915;
  double t8916;
  double t8917;
  double t8928;
  double t8929;
  double t8930;
  double t8945;
  double t8946;
  double t8947;
  double t8948;
  t2135 = Cos(var1[3]);
  t2141 = Sin(var1[2]);
  t2063 = Cos(var1[2]);
  t2142 = Sin(var1[3]);
  t1938 = Cos(var1[4]);
  t2139 = t2063*t2135;
  t2148 = -1.*t2141*t2142;
  t2164 = t2139 + t2148;
  t2186 = -1.*t2135*t2141;
  t2215 = -1.*t2063*t2142;
  t2219 = t2186 + t2215;
  t2235 = Sin(var1[4]);
  t8753 = -0.4*t1938*t2219;
  t8754 = 0.4*t2164*t2235;
  t8765 = t1938*t2219;
  t8766 = -1.*t2164*t2235;
  t8767 = t8765 + t8766;
  t8768 = 0.8*t8767;
  t8775 = t8753 + t8754 + t8768;
  t1961 = -1.*t1938;
  t2059 = 1. + t1961;
  t8786 = -1.*t2063*t2135;
  t8787 = t2141*t2142;
  t8788 = t8786 + t8787;
  t8785 = 0.4*t2059*t2219;
  t8789 = -0.4*t8788*t2235;
  t8790 = t8788*t2235;
  t8791 = t8765 + t8790;
  t8792 = 0.8*t8791;
  t8793 = t8785 + t8789 + t8792;
  t8812 = 0.4*t2219*t2235;
  t8814 = -1.*t2219*t2235;
  t8821 = -0.4*t1938*t8788;
  t8822 = t1938*t8788;
  t8828 = t8822 + t8814;
  t8829 = 0.8*t8828;
  t8830 = t8821 + t8812 + t8829;
  t8847 = t2135*t2141;
  t8848 = t2063*t2142;
  t8849 = t8847 + t8848;
  t8846 = 0.4*t2059*t8788;
  t8850 = -0.4*t8849*t2235;
  t8851 = t8849*t2235;
  t8852 = t8822 + t8851;
  t8853 = 0.8*t8852;
  t8854 = t8846 + t8850 + t8853;
  t8845 = var2[4]*t8830;
  t8855 = var2[2]*t8854;
  t8856 = var2[3]*t8854;
  t8857 = t8845 + t8855 + t8856;
  t2176 = 0.4*t2059*t2164;
  t2236 = -0.4*t2219*t2235;
  t8728 = t1938*t2164;
  t8733 = t2219*t2235;
  t8751 = t8728 + t8733;
  t8752 = 0.8*t8751;
  t8776 = var3[4]*t8775;
  t8784 = var2[4]*t8775;
  t8807 = var3[2]*t8793;
  t8808 = var3[3]*t8793;
  t8809 = var2[2]*t8793;
  t8810 = var2[3]*t8793;
  t8811 = 0.4*t1938*t2164;
  t8813 = -1.*t1938*t2164;
  t8815 = t8813 + t8814;
  t8817 = 0.8*t8815;
  t8819 = t8811 + t8812 + t8817;
  t8820 = var2[4]*t8819;
  t8831 = var2[2]*t8830;
  t8842 = var2[3]*t8830;
  t8843 = t8820 + t8831 + t8842;
  t8844 = var2[4]*t8843;
  t8858 = var2[2]*t8857;
  t8859 = var2[3]*t8857;
  t8860 = t2176 + t2236 + t8752 + t8776 + t8784 + t8807 + t8808 + t8809 + t8810 + t8844 + t8858 + t8859;
  t8870 = 0.4*t1938*t8849;
  t8871 = -1.*t1938*t8849;
  t8872 = t8871 + t8766;
  t8873 = 0.8*t8872;
  t8874 = t8870 + t8754 + t8873;
  t8888 = 2.*var2[4]*t8775;
  t8889 = 2.*var2[2]*t8793;
  t8890 = 2.*var2[3]*t8793;
  t8891 = t2176 + t2236 + t8752 + t8888 + t8889 + t8890;
  t8861 = -0.4*t1938*t2164;
  t8862 = 0.4*t8849*t2235;
  t8863 = -1.*t8849*t2235;
  t8864 = t8728 + t8863;
  t8865 = 0.8*t8864;
  t8896 = t2176 + t2236 + t8752;
  t8902 = 0.4*t8788*t2235;
  t8904 = -1.*t8788*t2235;
  t8909 = -0.4*t1938*t8849;
  t8910 = t1938*t8849;
  t8911 = t8910 + t8904;
  t8912 = 0.8*t8911;
  t8913 = t8909 + t8902 + t8912;
  t8918 = 0.4*t2059*t8849;
  t8919 = -0.4*t2164*t2235;
  t8920 = t2164*t2235;
  t8921 = t8910 + t8920;
  t8922 = 0.8*t8921;
  t8923 = t8918 + t8919 + t8922;
  t8924 = var2[2]*t8923;
  t8925 = var2[3]*t8923;
  t8926 = var2[4]*t8913;
  t8927 = t8924 + t8925 + t8926;
  t8898 = var3[4]*t8830;
  t8899 = var3[2]*t8854;
  t8900 = var3[3]*t8854;
  t8901 = 0.4*t1938*t2219;
  t8903 = -1.*t1938*t2219;
  t8905 = t8903 + t8904;
  t8906 = 0.8*t8905;
  t8907 = t8901 + t8902 + t8906;
  t8908 = var2[4]*t8907;
  t8914 = var2[2]*t8913;
  t8915 = var2[3]*t8913;
  t8916 = t8908 + t8914 + t8915;
  t8917 = var2[4]*t8916;
  t8928 = var2[2]*t8927;
  t8929 = var2[3]*t8927;
  t8930 = t8785 + t8789 + t8792 + t8898 + t8845 + t8899 + t8900 + t8855 + t8856 + t8917 + t8928 + t8929;
  t8945 = 2.*var2[4]*t8830;
  t8946 = 2.*var2[2]*t8854;
  t8947 = 2.*var2[3]*t8854;
  t8948 = t8785 + t8789 + t8792 + t8945 + t8946 + t8947;
  p_output1[0]=1.;
  p_output1[1]=t8860;
  p_output1[2]=t8860;
  p_output1[3]=t8861 + t8862 + t8865 + t8775*var2[2] + t8843*var2[2] + t8775*var2[3] + t8843*var2[3] + t8874*var2[4] + var2[4]*(t8819*var2[2] + t8819*var2[3] + (t8811 + t8850 + 0.8*(t8813 + t8851))*var2[4]) + t8775*var3[2] + t8775*var3[3] + t8874*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t8891;
  p_output1[6]=t8891;
  p_output1[7]=t8861 + t8862 + t8865 + 2.*t8775*var2[2] + 2.*t8775*var2[3] + 2.*t8874*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t8896;
  p_output1[10]=t8896;
  p_output1[11]=t8861 + t8862 + t8865;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t8930;
  p_output1[16]=t8930;
  p_output1[17]=t8753 + t8754 + t8768 + t8820 + t8831 + t8842 + t8916*var2[2] + t8916*var2[3] + var2[4]*(t8907*var2[2] + t8907*var2[3] + (t8901 + t8919 + 0.8*(t8903 + t8920))*var2[4]) + t8830*var3[2] + t8830*var3[3] + t8819*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t8948;
  p_output1[20]=t8948;
  p_output1[21]=t8753 + t8754 + t8768 + 2.*t8830*var2[2] + 2.*t8830*var2[3] + 2.*t8819*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t8793;
  p_output1[24]=t8793;
  p_output1[25]=t8775;
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
