/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:53:30 GMT-04:00
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
  double t7299;
  double t12240;
  double t5304;
  double t12410;
  double t932;
  double t11867;
  double t12475;
  double t14692;
  double t14698;
  double t14706;
  double t14707;
  double t14708;
  double t14747;
  double t14755;
  double t14756;
  double t14757;
  double t14758;
  double t14759;
  double t14760;
  double t4161;
  double t5245;
  double t14764;
  double t14778;
  double t14779;
  double t14763;
  double t14780;
  double t14781;
  double t14782;
  double t14783;
  double t14784;
  double t14792;
  double t14799;
  double t14814;
  double t14815;
  double t14816;
  double t14817;
  double t14818;
  double t14825;
  double t14826;
  double t14827;
  double t14824;
  double t14828;
  double t14829;
  double t14830;
  double t14831;
  double t14832;
  double t14823;
  double t14833;
  double t14834;
  double t14835;
  double t14697;
  double t14736;
  double t14737;
  double t14738;
  double t14739;
  double t14746;
  double t14761;
  double t14762;
  double t14785;
  double t14786;
  double t14788;
  double t14790;
  double t14791;
  double t14793;
  double t14800;
  double t14801;
  double t14802;
  double t14813;
  double t14819;
  double t14820;
  double t14821;
  double t14822;
  double t14836;
  double t14837;
  double t14838;
  double t14848;
  double t14849;
  double t14850;
  double t14851;
  double t14852;
  double t14866;
  double t14867;
  double t14868;
  double t14869;
  double t14839;
  double t14840;
  double t14841;
  double t14842;
  double t14843;
  double t14874;
  double t14880;
  double t14882;
  double t14887;
  double t14888;
  double t14889;
  double t14890;
  double t14891;
  double t14896;
  double t14897;
  double t14898;
  double t14899;
  double t14900;
  double t14901;
  double t14902;
  double t14903;
  double t14904;
  double t14905;
  double t14876;
  double t14877;
  double t14878;
  double t14879;
  double t14881;
  double t14883;
  double t14884;
  double t14885;
  double t14886;
  double t14892;
  double t14893;
  double t14894;
  double t14895;
  double t14906;
  double t14907;
  double t14908;
  double t14923;
  double t14924;
  double t14925;
  double t14926;
  t7299 = Cos(var1[3]);
  t12240 = Sin(var1[2]);
  t5304 = Cos(var1[2]);
  t12410 = Sin(var1[3]);
  t932 = Cos(var1[4]);
  t11867 = t5304*t7299;
  t12475 = -1.*t12240*t12410;
  t14692 = t11867 + t12475;
  t14698 = -1.*t7299*t12240;
  t14706 = -1.*t5304*t12410;
  t14707 = t14698 + t14706;
  t14708 = Sin(var1[4]);
  t14747 = -0.4*t932*t14707;
  t14755 = 0.4*t14692*t14708;
  t14756 = t932*t14707;
  t14757 = -1.*t14692*t14708;
  t14758 = t14756 + t14757;
  t14759 = 0.8*t14758;
  t14760 = t14747 + t14755 + t14759;
  t4161 = -1.*t932;
  t5245 = 1. + t4161;
  t14764 = -1.*t5304*t7299;
  t14778 = t12240*t12410;
  t14779 = t14764 + t14778;
  t14763 = 0.4*t5245*t14707;
  t14780 = -0.4*t14779*t14708;
  t14781 = t14779*t14708;
  t14782 = t14756 + t14781;
  t14783 = 0.8*t14782;
  t14784 = t14763 + t14780 + t14783;
  t14792 = 0.4*t14707*t14708;
  t14799 = -1.*t14707*t14708;
  t14814 = -0.4*t932*t14779;
  t14815 = t932*t14779;
  t14816 = t14815 + t14799;
  t14817 = 0.8*t14816;
  t14818 = t14814 + t14792 + t14817;
  t14825 = t7299*t12240;
  t14826 = t5304*t12410;
  t14827 = t14825 + t14826;
  t14824 = 0.4*t5245*t14779;
  t14828 = -0.4*t14827*t14708;
  t14829 = t14827*t14708;
  t14830 = t14815 + t14829;
  t14831 = 0.8*t14830;
  t14832 = t14824 + t14828 + t14831;
  t14823 = var2[4]*t14818;
  t14833 = var2[2]*t14832;
  t14834 = var2[3]*t14832;
  t14835 = t14823 + t14833 + t14834;
  t14697 = 0.4*t5245*t14692;
  t14736 = -0.4*t14707*t14708;
  t14737 = t932*t14692;
  t14738 = t14707*t14708;
  t14739 = t14737 + t14738;
  t14746 = 0.8*t14739;
  t14761 = var3[4]*t14760;
  t14762 = var2[4]*t14760;
  t14785 = var3[2]*t14784;
  t14786 = var3[3]*t14784;
  t14788 = var2[2]*t14784;
  t14790 = var2[3]*t14784;
  t14791 = 0.4*t932*t14692;
  t14793 = -1.*t932*t14692;
  t14800 = t14793 + t14799;
  t14801 = 0.8*t14800;
  t14802 = t14791 + t14792 + t14801;
  t14813 = var2[4]*t14802;
  t14819 = var2[2]*t14818;
  t14820 = var2[3]*t14818;
  t14821 = t14813 + t14819 + t14820;
  t14822 = var2[4]*t14821;
  t14836 = var2[2]*t14835;
  t14837 = var2[3]*t14835;
  t14838 = t14697 + t14736 + t14746 + t14761 + t14762 + t14785 + t14786 + t14788 + t14790 + t14822 + t14836 + t14837;
  t14848 = 0.4*t932*t14827;
  t14849 = -1.*t932*t14827;
  t14850 = t14849 + t14757;
  t14851 = 0.8*t14850;
  t14852 = t14848 + t14755 + t14851;
  t14866 = 2.*var2[4]*t14760;
  t14867 = 2.*var2[2]*t14784;
  t14868 = 2.*var2[3]*t14784;
  t14869 = t14697 + t14736 + t14746 + t14866 + t14867 + t14868;
  t14839 = -0.4*t932*t14692;
  t14840 = 0.4*t14827*t14708;
  t14841 = -1.*t14827*t14708;
  t14842 = t14737 + t14841;
  t14843 = 0.8*t14842;
  t14874 = t14697 + t14736 + t14746;
  t14880 = 0.4*t14779*t14708;
  t14882 = -1.*t14779*t14708;
  t14887 = -0.4*t932*t14827;
  t14888 = t932*t14827;
  t14889 = t14888 + t14882;
  t14890 = 0.8*t14889;
  t14891 = t14887 + t14880 + t14890;
  t14896 = 0.4*t5245*t14827;
  t14897 = -0.4*t14692*t14708;
  t14898 = t14692*t14708;
  t14899 = t14888 + t14898;
  t14900 = 0.8*t14899;
  t14901 = t14896 + t14897 + t14900;
  t14902 = var2[2]*t14901;
  t14903 = var2[3]*t14901;
  t14904 = var2[4]*t14891;
  t14905 = t14902 + t14903 + t14904;
  t14876 = var3[4]*t14818;
  t14877 = var3[2]*t14832;
  t14878 = var3[3]*t14832;
  t14879 = 0.4*t932*t14707;
  t14881 = -1.*t932*t14707;
  t14883 = t14881 + t14882;
  t14884 = 0.8*t14883;
  t14885 = t14879 + t14880 + t14884;
  t14886 = var2[4]*t14885;
  t14892 = var2[2]*t14891;
  t14893 = var2[3]*t14891;
  t14894 = t14886 + t14892 + t14893;
  t14895 = var2[4]*t14894;
  t14906 = var2[2]*t14905;
  t14907 = var2[3]*t14905;
  t14908 = t14763 + t14780 + t14783 + t14876 + t14823 + t14877 + t14878 + t14833 + t14834 + t14895 + t14906 + t14907;
  t14923 = 2.*var2[4]*t14818;
  t14924 = 2.*var2[2]*t14832;
  t14925 = 2.*var2[3]*t14832;
  t14926 = t14763 + t14780 + t14783 + t14923 + t14924 + t14925;
  p_output1[0]=1.;
  p_output1[1]=t14838;
  p_output1[2]=t14838;
  p_output1[3]=t14839 + t14840 + t14843 + t14760*var2[2] + t14821*var2[2] + t14760*var2[3] + t14821*var2[3] + t14852*var2[4] + var2[4]*(t14802*var2[2] + t14802*var2[3] + (t14791 + t14828 + 0.8*(t14793 + t14829))*var2[4]) + t14760*var3[2] + t14760*var3[3] + t14852*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t14869;
  p_output1[6]=t14869;
  p_output1[7]=t14839 + t14840 + t14843 + 2.*t14760*var2[2] + 2.*t14760*var2[3] + 2.*t14852*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t14874;
  p_output1[10]=t14874;
  p_output1[11]=t14839 + t14840 + t14843;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t14908;
  p_output1[16]=t14908;
  p_output1[17]=t14747 + t14755 + t14759 + t14813 + t14819 + t14820 + t14894*var2[2] + t14894*var2[3] + var2[4]*(t14885*var2[2] + t14885*var2[3] + (t14879 + t14897 + 0.8*(t14881 + t14898))*var2[4]) + t14818*var3[2] + t14818*var3[3] + t14802*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t14926;
  p_output1[20]=t14926;
  p_output1[21]=t14747 + t14755 + t14759 + 2.*t14818*var2[2] + 2.*t14818*var2[3] + 2.*t14802*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t14784;
  p_output1[24]=t14784;
  p_output1[25]=t14760;
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
