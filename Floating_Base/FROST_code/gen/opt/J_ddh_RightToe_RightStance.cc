/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:36:27 GMT-04:00
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
  double t9599;
  double t11562;
  double t9439;
  double t11761;
  double t4162;
  double t9713;
  double t15496;
  double t15518;
  double t15520;
  double t15521;
  double t15522;
  double t15533;
  double t15552;
  double t15553;
  double t15554;
  double t15555;
  double t15556;
  double t15557;
  double t15558;
  double t4409;
  double t4740;
  double t15575;
  double t15576;
  double t15577;
  double t15561;
  double t15578;
  double t15579;
  double t15580;
  double t15581;
  double t15582;
  double t15590;
  double t15597;
  double t15612;
  double t15613;
  double t15614;
  double t15615;
  double t15616;
  double t15623;
  double t15624;
  double t15625;
  double t15622;
  double t15626;
  double t15627;
  double t15628;
  double t15629;
  double t15630;
  double t15621;
  double t15631;
  double t15632;
  double t15633;
  double t15519;
  double t15534;
  double t15535;
  double t15536;
  double t15543;
  double t15544;
  double t15559;
  double t15560;
  double t15583;
  double t15585;
  double t15587;
  double t15588;
  double t15589;
  double t15596;
  double t15598;
  double t15599;
  double t15610;
  double t15611;
  double t15617;
  double t15618;
  double t15619;
  double t15620;
  double t15634;
  double t15635;
  double t15636;
  double t15646;
  double t15647;
  double t15648;
  double t15649;
  double t15650;
  double t15664;
  double t15665;
  double t15666;
  double t15667;
  double t15637;
  double t15638;
  double t15639;
  double t15640;
  double t15641;
  double t15672;
  double t15678;
  double t15680;
  double t15685;
  double t15686;
  double t15687;
  double t15688;
  double t15689;
  double t15694;
  double t15695;
  double t15696;
  double t15697;
  double t15698;
  double t15699;
  double t15700;
  double t15701;
  double t15702;
  double t15703;
  double t15674;
  double t15675;
  double t15676;
  double t15677;
  double t15679;
  double t15681;
  double t15682;
  double t15683;
  double t15684;
  double t15690;
  double t15691;
  double t15692;
  double t15693;
  double t15704;
  double t15705;
  double t15706;
  double t15721;
  double t15722;
  double t15723;
  double t15724;
  t9599 = Cos(var1[3]);
  t11562 = Sin(var1[2]);
  t9439 = Cos(var1[2]);
  t11761 = Sin(var1[3]);
  t4162 = Cos(var1[4]);
  t9713 = t9439*t9599;
  t15496 = -1.*t11562*t11761;
  t15518 = t9713 + t15496;
  t15520 = -1.*t9599*t11562;
  t15521 = -1.*t9439*t11761;
  t15522 = t15520 + t15521;
  t15533 = Sin(var1[4]);
  t15552 = -0.4*t4162*t15522;
  t15553 = 0.4*t15518*t15533;
  t15554 = t4162*t15522;
  t15555 = -1.*t15518*t15533;
  t15556 = t15554 + t15555;
  t15557 = 0.8*t15556;
  t15558 = t15552 + t15553 + t15557;
  t4409 = -1.*t4162;
  t4740 = 1. + t4409;
  t15575 = -1.*t9439*t9599;
  t15576 = t11562*t11761;
  t15577 = t15575 + t15576;
  t15561 = 0.4*t4740*t15522;
  t15578 = -0.4*t15577*t15533;
  t15579 = t15577*t15533;
  t15580 = t15554 + t15579;
  t15581 = 0.8*t15580;
  t15582 = t15561 + t15578 + t15581;
  t15590 = 0.4*t15522*t15533;
  t15597 = -1.*t15522*t15533;
  t15612 = -0.4*t4162*t15577;
  t15613 = t4162*t15577;
  t15614 = t15613 + t15597;
  t15615 = 0.8*t15614;
  t15616 = t15612 + t15590 + t15615;
  t15623 = t9599*t11562;
  t15624 = t9439*t11761;
  t15625 = t15623 + t15624;
  t15622 = 0.4*t4740*t15577;
  t15626 = -0.4*t15625*t15533;
  t15627 = t15625*t15533;
  t15628 = t15613 + t15627;
  t15629 = 0.8*t15628;
  t15630 = t15622 + t15626 + t15629;
  t15621 = var2[4]*t15616;
  t15631 = var2[2]*t15630;
  t15632 = var2[3]*t15630;
  t15633 = t15621 + t15631 + t15632;
  t15519 = 0.4*t4740*t15518;
  t15534 = -0.4*t15522*t15533;
  t15535 = t4162*t15518;
  t15536 = t15522*t15533;
  t15543 = t15535 + t15536;
  t15544 = 0.8*t15543;
  t15559 = var3[4]*t15558;
  t15560 = var2[4]*t15558;
  t15583 = var3[2]*t15582;
  t15585 = var3[3]*t15582;
  t15587 = var2[2]*t15582;
  t15588 = var2[3]*t15582;
  t15589 = 0.4*t4162*t15518;
  t15596 = -1.*t4162*t15518;
  t15598 = t15596 + t15597;
  t15599 = 0.8*t15598;
  t15610 = t15589 + t15590 + t15599;
  t15611 = var2[4]*t15610;
  t15617 = var2[2]*t15616;
  t15618 = var2[3]*t15616;
  t15619 = t15611 + t15617 + t15618;
  t15620 = var2[4]*t15619;
  t15634 = var2[2]*t15633;
  t15635 = var2[3]*t15633;
  t15636 = t15519 + t15534 + t15544 + t15559 + t15560 + t15583 + t15585 + t15587 + t15588 + t15620 + t15634 + t15635;
  t15646 = 0.4*t4162*t15625;
  t15647 = -1.*t4162*t15625;
  t15648 = t15647 + t15555;
  t15649 = 0.8*t15648;
  t15650 = t15646 + t15553 + t15649;
  t15664 = 2.*var2[4]*t15558;
  t15665 = 2.*var2[2]*t15582;
  t15666 = 2.*var2[3]*t15582;
  t15667 = t15519 + t15534 + t15544 + t15664 + t15665 + t15666;
  t15637 = -0.4*t4162*t15518;
  t15638 = 0.4*t15625*t15533;
  t15639 = -1.*t15625*t15533;
  t15640 = t15535 + t15639;
  t15641 = 0.8*t15640;
  t15672 = t15519 + t15534 + t15544;
  t15678 = 0.4*t15577*t15533;
  t15680 = -1.*t15577*t15533;
  t15685 = -0.4*t4162*t15625;
  t15686 = t4162*t15625;
  t15687 = t15686 + t15680;
  t15688 = 0.8*t15687;
  t15689 = t15685 + t15678 + t15688;
  t15694 = 0.4*t4740*t15625;
  t15695 = -0.4*t15518*t15533;
  t15696 = t15518*t15533;
  t15697 = t15686 + t15696;
  t15698 = 0.8*t15697;
  t15699 = t15694 + t15695 + t15698;
  t15700 = var2[2]*t15699;
  t15701 = var2[3]*t15699;
  t15702 = var2[4]*t15689;
  t15703 = t15700 + t15701 + t15702;
  t15674 = var3[4]*t15616;
  t15675 = var3[2]*t15630;
  t15676 = var3[3]*t15630;
  t15677 = 0.4*t4162*t15522;
  t15679 = -1.*t4162*t15522;
  t15681 = t15679 + t15680;
  t15682 = 0.8*t15681;
  t15683 = t15677 + t15678 + t15682;
  t15684 = var2[4]*t15683;
  t15690 = var2[2]*t15689;
  t15691 = var2[3]*t15689;
  t15692 = t15684 + t15690 + t15691;
  t15693 = var2[4]*t15692;
  t15704 = var2[2]*t15703;
  t15705 = var2[3]*t15703;
  t15706 = t15561 + t15578 + t15581 + t15674 + t15621 + t15675 + t15676 + t15631 + t15632 + t15693 + t15704 + t15705;
  t15721 = 2.*var2[4]*t15616;
  t15722 = 2.*var2[2]*t15630;
  t15723 = 2.*var2[3]*t15630;
  t15724 = t15561 + t15578 + t15581 + t15721 + t15722 + t15723;
  p_output1[0]=1.;
  p_output1[1]=t15636;
  p_output1[2]=t15636;
  p_output1[3]=t15637 + t15638 + t15641 + t15558*var2[2] + t15619*var2[2] + t15558*var2[3] + t15619*var2[3] + t15650*var2[4] + var2[4]*(t15610*var2[2] + t15610*var2[3] + (t15589 + t15626 + 0.8*(t15596 + t15627))*var2[4]) + t15558*var3[2] + t15558*var3[3] + t15650*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t15667;
  p_output1[6]=t15667;
  p_output1[7]=t15637 + t15638 + t15641 + 2.*t15558*var2[2] + 2.*t15558*var2[3] + 2.*t15650*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t15672;
  p_output1[10]=t15672;
  p_output1[11]=t15637 + t15638 + t15641;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t15706;
  p_output1[16]=t15706;
  p_output1[17]=t15552 + t15553 + t15557 + t15611 + t15617 + t15618 + t15692*var2[2] + t15692*var2[3] + var2[4]*(t15683*var2[2] + t15683*var2[3] + (t15677 + t15695 + 0.8*(t15679 + t15696))*var2[4]) + t15616*var3[2] + t15616*var3[3] + t15610*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t15724;
  p_output1[20]=t15724;
  p_output1[21]=t15552 + t15553 + t15557 + 2.*t15616*var2[2] + 2.*t15616*var2[3] + 2.*t15610*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t15582;
  p_output1[24]=t15582;
  p_output1[25]=t15558;
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
