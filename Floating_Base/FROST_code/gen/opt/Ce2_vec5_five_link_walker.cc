/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:34:58 GMT-04:00
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
  double t4213;
  double t167;
  double t170;
  double t4390;
  double t4469;
  double t3761;
  double t4418;
  double t4427;
  double t147;
  double t4692;
  double t4704;
  double t4708;
  double t4731;
  double t4803;
  double t4874;
  double t4875;
  double t4876;
  double t4915;
  double t5008;
  double t5009;
  double t5022;
  double t4455;
  double t4545;
  double t4633;
  double t4666;
  double t4681;
  double t4683;
  double t5034;
  double t5035;
  double t5036;
  double t5037;
  double t5046;
  double t5048;
  double t10555;
  double t10604;
  double t10675;
  double t10676;
  double t10718;
  double t10762;
  double t10763;
  double t10764;
  double t10776;
  double t10777;
  double t10778;
  double t10782;
  double t10783;
  double t10644;
  double t10652;
  double t10655;
  double t5024;
  double t5025;
  double t5027;
  double t5089;
  double t5090;
  double t4849;
  double t4861;
  double t4873;
  double t5011;
  double t5018;
  double t5020;
  double t5050;
  double t5056;
  double t5057;
  double t9513;
  double t10618;
  double t10659;
  double t10667;
  double t10670;
  double t10761;
  double t10769;
  double t10770;
  double t10779;
  double t10780;
  double t10781;
  double t10784;
  double t10793;
  double t10795;
  double t10796;
  double t10797;
  double t10799;
  double t10800;
  double t10801;
  double t10802;
  double t10803;
  double t10821;
  double t10822;
  double t10823;
  double t10824;
  double t10825;
  double t10775;
  double t10794;
  double t10798;
  double t10804;
  double t10805;
  double t10810;
  double t10811;
  double t10812;
  double t10813;
  double t10814;
  double t5010;
  double t5021;
  double t5049;
  double t5058;
  double t5072;
  double t10830;
  double t10831;
  double t10832;
  double t10833;
  double t10834;
  t4213 = Cos(var1[3]);
  t167 = Cos(var1[4]);
  t170 = Sin(var1[3]);
  t4390 = Sin(var1[4]);
  t4469 = Sin(var1[2]);
  t3761 = -1.*t167*t170;
  t4418 = -1.*t4213*t4390;
  t4427 = t3761 + t4418;
  t147 = Cos(var1[2]);
  t4692 = -1.*t167;
  t4704 = 1. + t4692;
  t4708 = 0.4*t4704;
  t4731 = 0.64*t167;
  t4803 = t4708 + t4731;
  t4874 = t4469*t4427;
  t4875 = t4213*t167;
  t4876 = -1.*t170*t4390;
  t4915 = t4875 + t4876;
  t5008 = t147*t4915;
  t5009 = t4874 + t5008;
  t5022 = t4803*t167;
  t4455 = t147*t4427;
  t4545 = -1.*t4213*t167;
  t4633 = t170*t4390;
  t4666 = t4545 + t4633;
  t4681 = t4469*t4666;
  t4683 = t4455 + t4681;
  t5034 = t167*t170;
  t5035 = t4213*t4390;
  t5036 = t5034 + t5035;
  t5037 = t147*t5036;
  t5046 = t4469*t4915;
  t5048 = t5037 + t5046;
  t10555 = -1.*t4469*t4915;
  t10604 = t4455 + t10555;
  t10675 = t4803*t170;
  t10676 = 0.24*t4213*t4390;
  t10718 = t10675 + t10676;
  t10762 = t4213*t4803;
  t10763 = -0.24*t170*t4390;
  t10764 = t10762 + t10763;
  t10776 = -0.24*t167*t170;
  t10777 = -0.24*t4213*t4390;
  t10778 = t10776 + t10777;
  t10782 = 0.24*t4213*t167;
  t10783 = t10782 + t10763;
  t10644 = -1.*t4469*t4427;
  t10652 = t147*t4666;
  t10655 = t10644 + t10652;
  t5024 = Power(t167,2);
  t5025 = -0.24*t5024;
  t5027 = t5022 + t5025;
  t5089 = -1.*t4469*t5036;
  t5090 = t5089 + t5008;
  t4849 = t4803*t4390;
  t4861 = -0.24*t167*t4390;
  t4873 = t4849 + t4861;
  t5011 = -1.*t4803*t4390;
  t5018 = 0.24*t167*t4390;
  t5020 = t5011 + t5018;
  t5050 = Power(t4390,2);
  t5056 = 0.24*t5050;
  t5057 = t5022 + t5056;
  t9513 = 3.2*t5009*t5090;
  t10618 = 3.2*t10604*t5048;
  t10659 = 3.2*t5009*t10655;
  t10667 = 3.2*t10604*t4683;
  t10670 = t9513 + t10618 + t10659 + t10667;
  t10761 = -1.*t10718*t4915;
  t10769 = -1.*t4427*t10764;
  t10770 = t10761 + t10769;
  t10779 = t10778*t4915;
  t10780 = t10718*t4915;
  t10781 = t4427*t10764;
  t10784 = t5036*t10783;
  t10793 = t10779 + t10780 + t10781 + t10784;
  t10795 = t10718*t5036;
  t10796 = t4915*t10764;
  t10797 = t10795 + t10796;
  t10799 = -1.*t4427*t10778;
  t10800 = -1.*t4427*t10718;
  t10801 = -1.*t4915*t10783;
  t10802 = -1.*t10764*t4666;
  t10803 = t10799 + t10800 + t10801 + t10802;
  t10821 = 3.2*t10604*t10770;
  t10822 = 3.2*t10604*t10793;
  t10823 = 3.2*t10797*t10655;
  t10824 = 3.2*t5090*t10803;
  t10825 = t10821 + t10822 + t10823 + t10824;
  t10775 = 3.2*t5009*t10770;
  t10794 = 3.2*t5009*t10793;
  t10798 = 3.2*t10797*t4683;
  t10804 = 3.2*t5048*t10803;
  t10805 = t10775 + t10794 + t10798 + t10804;
  t10810 = 3.2*t5027*t5090;
  t10811 = 3.2*t4873*t10604;
  t10812 = 3.2*t5020*t10604;
  t10813 = 3.2*t5057*t10655;
  t10814 = t10810 + t10811 + t10812 + t10813;
  t5010 = 3.2*t4873*t5009;
  t5021 = 3.2*t5020*t5009;
  t5049 = 3.2*t5027*t5048;
  t5058 = 3.2*t5057*t4683;
  t5072 = t5010 + t5021 + t5049 + t5058;
  t10830 = 3.2*t5027*t10770;
  t10831 = 3.2*t5020*t10797;
  t10832 = 3.2*t5057*t10793;
  t10833 = 3.2*t4873*t10803;
  t10834 = t10830 + t10831 + t10832 + t10833;
  p_output1[0]=var2[4]*(-0.5*(6.4*t4683*t5009 + 6.4*t5009*t5048)*var2[0] - 0.5*t10670*var2[1] - 0.5*t10805*var2[2] - 0.5*t5072*var2[3] - 0.384*t4683*var2[4]);
  p_output1[1]=var2[4]*(-0.5*t10670*var2[0] - 0.5*(6.4*t10604*t10655 + 6.4*t10604*t5090)*var2[1] - 0.5*t10825*var2[2] - 0.5*t10814*var2[3] - 0.384*t10655*var2[4]);
  p_output1[2]=var2[4]*(-0.5*t10805*var2[0] - 0.5*t10825*var2[1] - 0.5*(6.4*t10793*t10797 + 6.4*t10770*t10803)*var2[2] - 0.5*t10834*var2[3] - 0.384*t10793*var2[4]);
  p_output1[3]=var2[4]*(-0.5*t5072*var2[0] - 0.5*t10814*var2[1] - 0.5*t10834*var2[2] - 0.5*(6.4*t4873*t5027 + 6.4*t5020*t5057)*var2[3] - 0.384*t5020*var2[4]);
  p_output1[4]=(-0.384*t4683*var2[0] - 0.384*t10655*var2[1] - 0.384*t10793*var2[2] - 0.384*t5020*var2[3])*var2[4];
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

#include "Ce2_vec5_five_link_walker.hh"

namespace RightStance
{

void Ce2_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
