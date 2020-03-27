/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:47:01 GMT-04:00
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
  double t4948;
  double t4703;
  double t4853;
  double t8214;
  double t9181;
  double t4862;
  double t8299;
  double t8401;
  double t4697;
  double t10522;
  double t10559;
  double t10560;
  double t10561;
  double t10562;
  double t10570;
  double t10571;
  double t10572;
  double t10573;
  double t10580;
  double t10581;
  double t10590;
  double t8896;
  double t10474;
  double t10490;
  double t10497;
  double t10498;
  double t10499;
  double t10594;
  double t10595;
  double t10596;
  double t10597;
  double t10598;
  double t10599;
  double t10614;
  double t10615;
  double t10624;
  double t10625;
  double t10626;
  double t10628;
  double t10629;
  double t10630;
  double t10634;
  double t10635;
  double t10636;
  double t10640;
  double t10641;
  double t10617;
  double t10618;
  double t10619;
  double t10591;
  double t10592;
  double t10593;
  double t10611;
  double t10612;
  double t10567;
  double t10568;
  double t10569;
  double t10583;
  double t10587;
  double t10588;
  double t10601;
  double t10602;
  double t10603;
  double t10613;
  double t10616;
  double t10620;
  double t10621;
  double t10622;
  double t10627;
  double t10631;
  double t10632;
  double t10637;
  double t10638;
  double t10639;
  double t10642;
  double t10643;
  double t10645;
  double t10646;
  double t10647;
  double t10649;
  double t10650;
  double t10651;
  double t10652;
  double t10653;
  double t10671;
  double t10672;
  double t10673;
  double t10674;
  double t10675;
  double t10633;
  double t10644;
  double t10648;
  double t10654;
  double t10655;
  double t10660;
  double t10661;
  double t10662;
  double t10663;
  double t10664;
  double t10582;
  double t10589;
  double t10600;
  double t10604;
  double t10605;
  double t10680;
  double t10681;
  double t10682;
  double t10683;
  double t10684;
  t4948 = Cos(var1[3]);
  t4703 = Cos(var1[4]);
  t4853 = Sin(var1[3]);
  t8214 = Sin(var1[4]);
  t9181 = Sin(var1[2]);
  t4862 = -1.*t4703*t4853;
  t8299 = -1.*t4948*t8214;
  t8401 = t4862 + t8299;
  t4697 = Cos(var1[2]);
  t10522 = -1.*t4703;
  t10559 = 1. + t10522;
  t10560 = 0.4*t10559;
  t10561 = 0.64*t4703;
  t10562 = t10560 + t10561;
  t10570 = t9181*t8401;
  t10571 = t4948*t4703;
  t10572 = -1.*t4853*t8214;
  t10573 = t10571 + t10572;
  t10580 = t4697*t10573;
  t10581 = t10570 + t10580;
  t10590 = t10562*t4703;
  t8896 = t4697*t8401;
  t10474 = -1.*t4948*t4703;
  t10490 = t4853*t8214;
  t10497 = t10474 + t10490;
  t10498 = t9181*t10497;
  t10499 = t8896 + t10498;
  t10594 = t4703*t4853;
  t10595 = t4948*t8214;
  t10596 = t10594 + t10595;
  t10597 = t4697*t10596;
  t10598 = t9181*t10573;
  t10599 = t10597 + t10598;
  t10614 = -1.*t9181*t10573;
  t10615 = t8896 + t10614;
  t10624 = t10562*t4853;
  t10625 = 0.24*t4948*t8214;
  t10626 = t10624 + t10625;
  t10628 = t4948*t10562;
  t10629 = -0.24*t4853*t8214;
  t10630 = t10628 + t10629;
  t10634 = -0.24*t4703*t4853;
  t10635 = -0.24*t4948*t8214;
  t10636 = t10634 + t10635;
  t10640 = 0.24*t4948*t4703;
  t10641 = t10640 + t10629;
  t10617 = -1.*t9181*t8401;
  t10618 = t4697*t10497;
  t10619 = t10617 + t10618;
  t10591 = Power(t4703,2);
  t10592 = -0.24*t10591;
  t10593 = t10590 + t10592;
  t10611 = -1.*t9181*t10596;
  t10612 = t10611 + t10580;
  t10567 = t10562*t8214;
  t10568 = -0.24*t4703*t8214;
  t10569 = t10567 + t10568;
  t10583 = -1.*t10562*t8214;
  t10587 = 0.24*t4703*t8214;
  t10588 = t10583 + t10587;
  t10601 = Power(t8214,2);
  t10602 = 0.24*t10601;
  t10603 = t10590 + t10602;
  t10613 = 3.2*t10581*t10612;
  t10616 = 3.2*t10615*t10599;
  t10620 = 3.2*t10581*t10619;
  t10621 = 3.2*t10615*t10499;
  t10622 = t10613 + t10616 + t10620 + t10621;
  t10627 = -1.*t10626*t10573;
  t10631 = -1.*t8401*t10630;
  t10632 = t10627 + t10631;
  t10637 = t10636*t10573;
  t10638 = t10626*t10573;
  t10639 = t8401*t10630;
  t10642 = t10596*t10641;
  t10643 = t10637 + t10638 + t10639 + t10642;
  t10645 = t10626*t10596;
  t10646 = t10573*t10630;
  t10647 = t10645 + t10646;
  t10649 = -1.*t8401*t10636;
  t10650 = -1.*t8401*t10626;
  t10651 = -1.*t10573*t10641;
  t10652 = -1.*t10630*t10497;
  t10653 = t10649 + t10650 + t10651 + t10652;
  t10671 = 3.2*t10615*t10632;
  t10672 = 3.2*t10615*t10643;
  t10673 = 3.2*t10647*t10619;
  t10674 = 3.2*t10612*t10653;
  t10675 = t10671 + t10672 + t10673 + t10674;
  t10633 = 3.2*t10581*t10632;
  t10644 = 3.2*t10581*t10643;
  t10648 = 3.2*t10647*t10499;
  t10654 = 3.2*t10599*t10653;
  t10655 = t10633 + t10644 + t10648 + t10654;
  t10660 = 3.2*t10593*t10612;
  t10661 = 3.2*t10569*t10615;
  t10662 = 3.2*t10588*t10615;
  t10663 = 3.2*t10603*t10619;
  t10664 = t10660 + t10661 + t10662 + t10663;
  t10582 = 3.2*t10569*t10581;
  t10589 = 3.2*t10588*t10581;
  t10600 = 3.2*t10593*t10599;
  t10604 = 3.2*t10603*t10499;
  t10605 = t10582 + t10589 + t10600 + t10604;
  t10680 = 3.2*t10593*t10632;
  t10681 = 3.2*t10588*t10647;
  t10682 = 3.2*t10603*t10643;
  t10683 = 3.2*t10569*t10653;
  t10684 = t10680 + t10681 + t10682 + t10683;
  p_output1[0]=var2[4]*(-0.5*(6.4*t10499*t10581 + 6.4*t10581*t10599)*var2[0] - 0.5*t10622*var2[1] - 0.5*t10655*var2[2] - 0.5*t10605*var2[3] - 0.384*t10499*var2[4]);
  p_output1[1]=var2[4]*(-0.5*t10622*var2[0] - 0.5*(6.4*t10612*t10615 + 6.4*t10615*t10619)*var2[1] - 0.5*t10675*var2[2] - 0.5*t10664*var2[3] - 0.384*t10619*var2[4]);
  p_output1[2]=var2[4]*(-0.5*t10655*var2[0] - 0.5*t10675*var2[1] - 0.5*(6.4*t10643*t10647 + 6.4*t10632*t10653)*var2[2] - 0.5*t10684*var2[3] - 0.384*t10643*var2[4]);
  p_output1[3]=var2[4]*(-0.5*t10605*var2[0] - 0.5*t10664*var2[1] - 0.5*t10684*var2[2] - 0.5*(6.4*t10569*t10593 + 6.4*t10588*t10603)*var2[3] - 0.384*t10588*var2[4]);
  p_output1[4]=(-0.384*t10499*var2[0] - 0.384*t10619*var2[1] - 0.384*t10643*var2[2] - 0.384*t10588*var2[3])*var2[4];
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
