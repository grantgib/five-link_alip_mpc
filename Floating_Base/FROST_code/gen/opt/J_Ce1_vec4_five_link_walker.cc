/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:22:02 GMT-05:00
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
  double t2670;
  double t2608;
  double t2661;
  double t217;
  double t4238;
  double t177;
  double t2676;
  double t2677;
  double t2678;
  double t2681;
  double t2865;
  double t4359;
  double t4360;
  double t4364;
  double t2604;
  double t2663;
  double t2665;
  double t2669;
  double t4372;
  double t4376;
  double t4377;
  double t4289;
  double t4307;
  double t4308;
  double t4418;
  double t4140;
  double t4239;
  double t4258;
  double t4286;
  double t4309;
  double t4378;
  double t4379;
  double t4384;
  double t4453;
  double t4454;
  double t4455;
  double t4457;
  double t4458;
  double t4462;
  double t4463;
  double t4467;
  double t4468;
  double t4469;
  double t4471;
  double t4481;
  double t4485;
  double t4487;
  double t4511;
  double t4524;
  double t4528;
  double t4529;
  double t4530;
  double t4531;
  double t4494;
  double t4495;
  double t4496;
  double t4486;
  double t4488;
  double t4493;
  double t4502;
  double t4506;
  double t4538;
  double t4539;
  double t4541;
  double t4542;
  double t4543;
  double t4583;
  double t4584;
  double t4585;
  double t4586;
  double t4587;
  double t4588;
  double t4589;
  double t4595;
  double t4567;
  double t4568;
  double t4576;
  double t4596;
  double t4606;
  double t4607;
  double t4608;
  double t4366;
  double t4612;
  double t4613;
  double t4614;
  double t4615;
  double t4367;
  double t4618;
  double t4623;
  double t4398;
  double t4421;
  double t4624;
  double t4625;
  double t4626;
  double t4627;
  double t4641;
  double t4642;
  double t4643;
  double t4634;
  double t4635;
  double t4636;
  double t4646;
  double t4647;
  double t4648;
  double t4561;
  double t4564;
  double t4565;
  double t4371;
  double t4429;
  double t4430;
  double t4431;
  double t4507;
  double t4678;
  double t4682;
  double t4686;
  double t4671;
  double t4672;
  double t4673;
  double t4704;
  double t4705;
  double t4706;
  double t4692;
  double t4693;
  double t4694;
  double t4691;
  double t4745;
  double t4746;
  double t4718;
  double t4722;
  double t4749;
  double t4750;
  double t4752;
  double t4753;
  double t4726;
  double t4731;
  double t4732;
  double t4733;
  double t4734;
  double t4738;
  double t4744;
  double t4747;
  double t4748;
  double t4751;
  double t4754;
  double t4755;
  double t4756;
  double t4757;
  double t4758;
  double t4759;
  double t4760;
  double t4764;
  double t4769;
  double t4770;
  double t4771;
  double t4783;
  double t4784;
  double t4785;
  double t4786;
  double t4787;
  double t4788;
  double t4789;
  double t4790;
  double t4791;
  double t4796;
  double t4797;
  double t4799;
  double t4803;
  double t4810;
  double t4811;
  double t4812;
  double t4818;
  double t4819;
  double t4820;
  double t4834;
  double t4835;
  double t4836;
  double t4837;
  double t4838;
  double t4850;
  double t4851;
  double t4852;
  t2670 = Cos(var1[4]);
  t2608 = Sin(var1[2]);
  t2661 = Sin(var1[3]);
  t217 = Cos(var1[3]);
  t4238 = Sin(var1[4]);
  t177 = Cos(var1[2]);
  t2676 = -1.*t2670;
  t2677 = 1. + t2676;
  t2678 = 0.4*t2677;
  t2681 = 0.64*t2670;
  t2865 = t2678 + t2681;
  t4359 = t217*t2670;
  t4360 = -1.*t2661*t4238;
  t4364 = t4359 + t4360;
  t2604 = -1.*t177*t217;
  t2663 = t2608*t2661;
  t2665 = t2604 + t2663;
  t2669 = 0.748*t2665;
  t4372 = t2865*t4238;
  t4376 = -0.24*t2670*t4238;
  t4377 = t4372 + t4376;
  t4289 = -1.*t2670*t2661;
  t4307 = -1.*t217*t4238;
  t4308 = t4289 + t4307;
  t4418 = -1.*t2608*t4364;
  t4140 = t2865*t2670;
  t4239 = Power(t4238,2);
  t4258 = 0.24*t4239;
  t4286 = t4140 + t4258;
  t4309 = -1.*t2608*t4308;
  t4378 = t2670*t2661;
  t4379 = t217*t4238;
  t4384 = t4378 + t4379;
  t4453 = t177*t4308;
  t4454 = t4453 + t4418;
  t4455 = 3.2*t4377*t4454;
  t4457 = -1.*t217*t2670;
  t4458 = t2661*t4238;
  t4462 = t4457 + t4458;
  t4463 = t177*t4462;
  t4467 = t4309 + t4463;
  t4468 = 3.2*t4286*t4467;
  t4469 = t2669 + t4455 + t4468;
  t4471 = Power(t2670,2);
  t4481 = -0.24*t4471;
  t4485 = t4140 + t4481;
  t4487 = t177*t4364;
  t4511 = t2608*t4384;
  t4524 = t4511 + t4463;
  t4528 = 3.2*t4286*t4524;
  t4529 = t2608*t4462;
  t4530 = t4453 + t4529;
  t4531 = 3.2*t4377*t4530;
  t4494 = -1.*t2865*t4238;
  t4495 = 0.24*t2670*t4238;
  t4496 = t4494 + t4495;
  t4486 = -1.*t2608*t4384;
  t4488 = t4486 + t4487;
  t4493 = 3.2*t4485*t4488;
  t4502 = 3.2*t4496*t4454;
  t4506 = t4493 + t4455 + t4502 + t4468;
  t4538 = t2608*t4308;
  t4539 = t4538 + t4487;
  t4541 = 3.2*t4485*t4539;
  t4542 = 3.2*t4496*t4530;
  t4543 = t4541 + t4528 + t4531 + t4542;
  t4583 = -1.*t217*t2608;
  t4584 = -1.*t177*t2661;
  t4585 = t4583 + t4584;
  t4586 = 0.748*t4585;
  t4587 = 3.2*t4377*t4488;
  t4588 = 3.2*t4286*t4454;
  t4589 = t4586 + t4587 + t4588;
  t4595 = 3.2*t4377*t4539;
  t4567 = t177*t4384;
  t4568 = t2608*t4364;
  t4576 = t4567 + t4568;
  t4596 = 3.2*t4286*t4530;
  t4606 = 3.2*t4496*t4539;
  t4607 = 3.2*t4485*t4576;
  t4608 = t4595 + t4606 + t4607 + t4596;
  t4366 = -1.*t177*t4364;
  t4612 = t217*t2608;
  t4613 = t177*t2661;
  t4614 = t4612 + t4613;
  t4615 = 0.748*t4614;
  t4367 = t4309 + t4366;
  t4618 = -1.*t177*t4308;
  t4623 = 3.2*t4377*t4367;
  t4398 = -1.*t177*t4384;
  t4421 = t4398 + t4418;
  t4624 = -1.*t2608*t4462;
  t4625 = t4618 + t4624;
  t4626 = 3.2*t4286*t4625;
  t4627 = t4615 + t4623 + t4626;
  t4641 = 3.2*t4377*t4467;
  t4642 = t4567 + t4624;
  t4643 = 3.2*t4286*t4642;
  t4634 = 3.2*t4496*t4367;
  t4635 = 3.2*t4485*t4421;
  t4636 = t4623 + t4634 + t4635 + t4626;
  t4646 = 3.2*t4485*t4454;
  t4647 = 3.2*t4496*t4467;
  t4648 = t4646 + t4641 + t4647 + t4643;
  t4561 = -1.*t2865*t2670;
  t4564 = 0.24*t4471;
  t4565 = t4561 + t4564;
  t4371 = 3.2*t4286*t4367;
  t4429 = 3.2*t4377*t4421;
  t4430 = t2669 + t4371 + t4429;
  t4431 = -0.5*var2[2]*t4430;
  t4507 = -0.5*var2[4]*t4506;
  t4678 = t217*t2865;
  t4682 = -0.24*t2661*t4238;
  t4686 = t4678 + t4682;
  t4671 = -1.*t2865*t2661;
  t4672 = -0.24*t217*t4238;
  t4673 = t4671 + t4672;
  t4704 = t2865*t2661;
  t4705 = 0.24*t217*t4238;
  t4706 = t4704 + t4705;
  t4692 = -1.*t217*t2865;
  t4693 = 0.24*t2661*t4238;
  t4694 = t4692 + t4693;
  t4691 = -1.*t4384*t4686;
  t4745 = -0.24*t2670*t2661;
  t4746 = t4745 + t4672;
  t4718 = -1.*t4706*t4462;
  t4722 = t4308*t4706;
  t4749 = 0.24*t217*t2670;
  t4750 = t4749 + t4682;
  t4752 = -0.24*t217*t2670;
  t4753 = t4752 + t4693;
  t4726 = t4686*t4462;
  t4731 = t4673*t4364;
  t4732 = t4706*t4364;
  t4733 = t4308*t4686;
  t4734 = t4384*t4686;
  t4738 = t4731 + t4732 + t4733 + t4734;
  t4744 = 3.2*t4496*t4738;
  t4747 = -1.*t4746*t4364;
  t4748 = -1.*t4308*t4686;
  t4751 = -1.*t4308*t4750;
  t4754 = -1.*t4308*t4753;
  t4755 = -1.*t4673*t4462;
  t4756 = -1.*t4746*t4462;
  t4757 = t4747 + t4748 + t4691 + t4751 + t4754 + t4755 + t4756 + t4718;
  t4758 = 3.2*t4377*t4757;
  t4759 = -1.*t4308*t4673;
  t4760 = -1.*t4308*t4706;
  t4764 = -1.*t4364*t4686;
  t4769 = -1.*t4686*t4462;
  t4770 = t4759 + t4760 + t4764 + t4769;
  t4771 = 3.2*t4485*t4770;
  t4783 = t4308*t4673;
  t4784 = t4308*t4746;
  t4785 = t4746*t4384;
  t4786 = t4364*t4686;
  t4787 = t4364*t4750;
  t4788 = t4364*t4753;
  t4789 = t4783 + t4784 + t4722 + t4785 + t4786 + t4787 + t4788 + t4726;
  t4790 = 3.2*t4286*t4789;
  t4791 = t4744 + t4758 + t4771 + t4790;
  t4796 = -1.*t4706*t4364;
  t4797 = t4796 + t4748;
  t4799 = t4706*t4384;
  t4803 = t4799 + t4786;
  t4810 = t4746*t4364;
  t4811 = t4384*t4750;
  t4812 = t4810 + t4732 + t4733 + t4811;
  t4818 = -1.*t4308*t4746;
  t4819 = -1.*t4364*t4750;
  t4820 = t4818 + t4760 + t4819 + t4769;
  t4834 = 3.2*t4485*t4797;
  t4835 = 3.2*t4496*t4803;
  t4836 = 3.2*t4286*t4812;
  t4837 = 3.2*t4377*t4820;
  t4838 = t4834 + t4835 + t4836 + t4837;
  t4850 = 6.4*t4485*t4377;
  t4851 = 6.4*t4496*t4286;
  t4852 = t4850 + t4851;
  p_output1[0]=var2[3]*(t4431 + t4507 - 0.5*t4469*var2[3]);
  p_output1[1]=var2[3]*(-0.5*t4469*var2[2] - 0.5*(t2669 + t4528 + t4531)*var2[3] - 0.5*t4543*var2[4]);
  p_output1[2]=var2[3]*(-0.5*t4506*var2[2] - 0.5*t4543*var2[3] - 0.5*(t4528 + 6.4*t4496*t4530 + t4531 + 6.4*t4485*t4539 + 3.2*t4539*t4565 + 3.2*t4496*t4576)*var2[4]);
  p_output1[3]=-0.5*t4589*var2[3];
  p_output1[4]=-0.5*t4589*var2[2] - 1.*(t4586 + t4595 + t4596)*var2[3] - 0.5*t4608*var2[4];
  p_output1[5]=-0.5*t4608*var2[3];
  p_output1[6]=var2[3]*(-0.5*(3.2*t4377*(t4366 + t4511) + t4615 + 3.2*t4286*(t4568 + t4618))*var2[2] - 0.5*t4627*var2[3] - 0.5*t4636*var2[4]);
  p_output1[7]=var2[3]*(-0.5*t4627*var2[2] - 0.5*(t4615 + t4641 + t4643)*var2[3] - 0.5*t4648*var2[4]);
  p_output1[8]=var2[3]*(-0.5*t4636*var2[2] - 0.5*t4648*var2[3] - 0.5*(6.4*t4454*t4485 + 6.4*t4467*t4496 + 3.2*t4488*t4496 + 3.2*t4454*t4565 + t4641 + t4643)*var2[4]);
  p_output1[9]=-0.5*t4430*var2[3];
  p_output1[10]=t4431 + t4507 - 1.*t4469*var2[3];
  p_output1[11]=-0.5*t4506*var2[3];
  p_output1[12]=var2[3]*(-0.5*(3.2*t4377*(-1.*t4364*t4673 - 2.*t4462*t4673 - 2.*t4308*t4686 + t4691 - 1.*t4308*t4694 + t4718) + 3.2*t4286*(2.*t4308*t4673 + t4384*t4673 + 2.*t4364*t4686 + t4364*t4694 + t4722 + t4726))*var2[3] - 0.5*t4791*var2[4]);
  p_output1[13]=var2[3]*(-0.5*t4791*var2[3] - 0.5*(3.2*t4377*(t4691 + t4718 - 2.*t4462*t4746 + t4747 - 2.*t4308*t4750 + t4754) + 3.2*t4286*(t4722 + t4726 + 2.*t4308*t4746 + 2.*t4364*t4750 + t4785 + t4788) + 3.2*t4496*t4797 + 3.2*t4565*t4803 + 6.4*t4496*t4812 + 6.4*t4485*t4820)*var2[4]);
  p_output1[14]=-1.*(3.2*t4286*t4738 + 3.2*t4377*t4770)*var2[3] - 0.5*t4838*var2[4];
  p_output1[15]=-0.5*t4838*var2[3];
  p_output1[16]=-0.5*(6.4*Power(t4485,2) + 6.4*t4377*t4496 + 6.4*Power(t4496,2) + 6.4*t4286*t4565)*var2[3]*var2[4];
  p_output1[17]=-0.5*t4852*var2[4];
  p_output1[18]=-0.5*t4852*var2[3];
  p_output1[19]=-0.384*t4565*var2[3]*var2[4];
  p_output1[20]=-0.384*t4496*var2[4];
  p_output1[21]=-0.384*t4496*var2[3];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec4_five_link_walker.hh"

namespace RightStance
{

void J_Ce1_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
