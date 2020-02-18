/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:46 GMT-05:00
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
  double t2611;
  double t2620;
  double t2628;
  double t2632;
  double t2641;
  double t2642;
  double t2643;
  double t2653;
  double t2674;
  double t2686;
  double t2689;
  double t2690;
  double t2698;
  double t2699;
  double t2700;
  double t2701;
  double t2702;
  double t2704;
  double t2708;
  double t2709;
  double t2710;
  double t2711;
  double t2651;
  double t2657;
  double t2672;
  double t2673;
  double t2691;
  double t2692;
  double t2693;
  double t2694;
  double t2695;
  double t2696;
  double t2697;
  double t2722;
  double t2723;
  double t2724;
  double t2703;
  double t2705;
  double t2706;
  double t2707;
  double t2712;
  double t2713;
  double t2714;
  double t2715;
  double t2716;
  double t2717;
  double t2718;
  double t2733;
  double t2734;
  double t2735;
  t2611 = Sin(var1[2]);
  t2620 = Cos(var1[3]);
  t2628 = -1.*t2620*t2611;
  t2632 = Cos(var1[2]);
  t2641 = Sin(var1[3]);
  t2642 = -1.*t2632*t2641;
  t2643 = t2628 + t2642;
  t2653 = Cos(var1[4]);
  t2674 = -1.*t2632*t2620;
  t2686 = t2611*t2641;
  t2689 = t2674 + t2686;
  t2690 = Sin(var1[4]);
  t2698 = Cos(var1[5]);
  t2699 = -1.*t2698*t2611;
  t2700 = Sin(var1[5]);
  t2701 = -1.*t2632*t2700;
  t2702 = t2699 + t2701;
  t2704 = Cos(var1[6]);
  t2708 = -1.*t2632*t2698;
  t2709 = t2611*t2700;
  t2710 = t2708 + t2709;
  t2711 = Sin(var1[6]);
  t2651 = -7.33788*t2643;
  t2657 = -1.*t2653;
  t2672 = 1. + t2657;
  t2673 = 0.4*t2672*t2643;
  t2691 = -0.4*t2689*t2690;
  t2692 = t2653*t2643;
  t2693 = t2689*t2690;
  t2694 = t2692 + t2693;
  t2695 = 0.64*t2694;
  t2696 = t2673 + t2691 + t2695;
  t2697 = -31.392000000000003*t2696;
  t2722 = t2632*t2620;
  t2723 = -1.*t2611*t2641;
  t2724 = t2722 + t2723;
  t2703 = -7.33788*t2702;
  t2705 = -1.*t2704;
  t2706 = 1. + t2705;
  t2707 = 0.4*t2706*t2702;
  t2712 = -0.4*t2710*t2711;
  t2713 = t2704*t2702;
  t2714 = t2710*t2711;
  t2715 = t2713 + t2714;
  t2716 = 0.64*t2715;
  t2717 = t2707 + t2712 + t2716;
  t2718 = -31.392000000000003*t2717;
  t2733 = t2632*t2698;
  t2734 = -1.*t2611*t2700;
  t2735 = t2733 + t2734;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=28.252799999999997*t2611 + t2651 + t2697 + t2703 + t2718;
  p_output1[3]=t2651 + t2697;
  p_output1[4]=-31.392000000000003*(-0.4*t2643*t2653 + 0.4*t2690*t2724 + 0.64*(t2692 - 1.*t2690*t2724));
  p_output1[5]=t2703 + t2718;
  p_output1[6]=-31.392000000000003*(-0.4*t2702*t2704 + 0.4*t2711*t2735 + 0.64*(t2713 - 1.*t2711*t2735));
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

#include "Ge_vec_five_link_walker.hh"

namespace RightStance
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
