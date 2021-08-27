/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 16:00:44 GMT-05:00
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
static void output1(double *p_output1,const double *var1)
{
  double t455;
  double t395;
  double t614;
  double t703;
  double t1181;
  double t1209;
  double t1261;
  double t1263;
  double t1334;
  double t1720;
  double t1767;
  double t2649;
  double t2797;
  double t2811;
  double t2819;
  double t2836;
  double t854;
  double t1049;
  double t1112;
  double t646;
  double t728;
  double t731;
  double t1203;
  double t1216;
  double t1218;
  double t1258;
  double t1420;
  double t1428;
  double t1533;
  double t1548;
  double t1552;
  double t1649;
  double t1695;
  double t1699;
  double t1935;
  double t1961;
  double t2301;
  double t1741;
  double t1866;
  double t1904;
  double t2715;
  double t2798;
  double t2808;
  double t2809;
  double t2837;
  double t2858;
  double t2899;
  double t2913;
  double t2967;
  double t2986;
  double t2987;
  double t3034;
  double t4406;
  double t4509;
  double t4516;
  double t4582;
  double t4616;
  double t4722;
  double t4817;
  double t4828;
  double t4884;
  double t4890;
  double t4892;
  double t5149;
  double t5203;
  double t5224;
  double t5294;
  double t5425;
  double t5560;
  double t5561;
  double t5568;
  double t5584;
  double t5585;
  double t5593;
  double t3077;
  double t3092;
  double t3093;
  double t3098;
  double t3105;
  double t3109;
  double t3112;
  double t3116;
  double t3127;
  double t3207;
  double t3247;
  double t3311;
  double t3335;
  double t3383;
  double t3429;
  double t3430;
  double t3533;
  double t3660;
  double t3806;
  double t3831;
  double t3875;
  double t3882;
  double t3902;
  double t3903;
  double t4148;
  double t407;
  double t453;
  double t543;
  double t545;
  double t1122;
  double t1168;
  double t2356;
  double t2380;
  double t4229;
  double t4239;
  double t4279;
  double t4346;
  double t4353;
  double t4860;
  double t4908;
  double t4936;
  double t5005;
  double t5027;
  double t5067;
  double t5111;
  double t5131;
  double t5132;
  double t5135;
  double t5146;
  double t5572;
  double t5594;
  double t5597;
  double t5602;
  double t5617;
  double t5618;
  double t5730;
  double t5731;
  double t5732;
  double t5655;
  double t5715;
  double t5718;
  double t5725;
  double t5785;
  double t5788;
  double t5792;
  double t5749;
  double t5751;
  double t5768;
  double t5773;
  double t4215;
  double t4379;
  double t4937;
  double t5077;
  double t5148;
  double t5601;
  double t5619;
  double t5620;
  double t6013;
  double t6016;
  double t6020;
  double t6024;
  double t6029;
  double t6038;
  double t6041;
  double t6048;
  double t5654;
  double t5729;
  double t5735;
  double t5738;
  double t6055;
  double t6069;
  double t6092;
  double t6093;
  double t6423;
  double t6424;
  double t6428;
  double t6429;
  double t5746;
  double t6112;
  double t6436;
  double t6438;
  double t6560;
  double t6565;
  double t5747;
  double t5784;
  double t5793;
  double t5798;
  double t6127;
  double t6150;
  double t6157;
  double t6158;
  double t6440;
  double t6472;
  double t6473;
  double t6492;
  double t5799;
  double t6161;
  double t6494;
  double t6519;
  double t6593;
  double t6601;
  t455 = Sin(var1[2]);
  t395 = Cos(var1[2]);
  t614 = Cos(var1[3]);
  t703 = Sin(var1[3]);
  t1181 = Cos(var1[4]);
  t1209 = Sin(var1[4]);
  t1261 = t614*t1181;
  t1263 = -1.*t703*t1209;
  t1334 = t1261 + t1263;
  t1720 = Cos(var1[5]);
  t1767 = Sin(var1[5]);
  t2649 = Cos(var1[6]);
  t2797 = Sin(var1[6]);
  t2811 = t1720*t2649;
  t2819 = -1.*t1767*t2797;
  t2836 = t2811 + t2819;
  t854 = t395*t614;
  t1049 = -1.*t455*t703;
  t1112 = t854 + t1049;
  t646 = t614*t455;
  t728 = t395*t703;
  t731 = t646 + t728;
  t1203 = -1.*t1181*t703;
  t1216 = -1.*t614*t1209;
  t1218 = t1203 + t1216;
  t1258 = t455*t1218;
  t1420 = t395*t1334;
  t1428 = t1258 + t1420;
  t1533 = t1181*t703;
  t1548 = t614*t1209;
  t1552 = t1533 + t1548;
  t1649 = t395*t1552;
  t1695 = t455*t1334;
  t1699 = t1649 + t1695;
  t1935 = t395*t1720;
  t1961 = -1.*t455*t1767;
  t2301 = t1935 + t1961;
  t1741 = t1720*t455;
  t1866 = t395*t1767;
  t1904 = t1741 + t1866;
  t2715 = -1.*t2649*t1767;
  t2798 = -1.*t1720*t2797;
  t2808 = t2715 + t2798;
  t2809 = t455*t2808;
  t2837 = t395*t2836;
  t2858 = t2809 + t2837;
  t2899 = t2649*t1767;
  t2913 = t1720*t2797;
  t2967 = t2899 + t2913;
  t2986 = t395*t2967;
  t2987 = t455*t2836;
  t3034 = t2986 + t2987;
  t4406 = -1.*t1181;
  t4509 = 1. + t4406;
  t4516 = 0.4*t4509;
  t4582 = 0.64*t1181;
  t4616 = t4516 + t4582;
  t4722 = t4616*t703;
  t4817 = 0.24*t614*t1209;
  t4828 = t4722 + t4817;
  t4884 = t614*t4616;
  t4890 = -0.24*t703*t1209;
  t4892 = t4884 + t4890;
  t5149 = -1.*t2649;
  t5203 = 1. + t5149;
  t5224 = 0.4*t5203;
  t5294 = 0.64*t2649;
  t5425 = t5224 + t5294;
  t5560 = t5425*t1767;
  t5561 = 0.24*t1720*t2797;
  t5568 = t5560 + t5561;
  t5584 = t1720*t5425;
  t5585 = -0.24*t1767*t2797;
  t5593 = t5584 + t5585;
  t3077 = -1.*t614*t455;
  t3092 = -1.*t395*t703;
  t3093 = t3077 + t3092;
  t3098 = 6.8*t3093*t1112;
  t3105 = 6.8*t731*t1112;
  t3109 = t395*t1218;
  t3112 = -1.*t455*t1334;
  t3116 = t3109 + t3112;
  t3127 = 3.2*t1428*t3116;
  t3207 = -1.*t455*t1552;
  t3247 = t3207 + t1420;
  t3311 = 3.2*t3247*t1699;
  t3335 = -1.*t1720*t455;
  t3383 = -1.*t395*t1767;
  t3429 = t3335 + t3383;
  t3430 = 6.8*t3429*t2301;
  t3533 = 6.8*t1904*t2301;
  t3660 = t395*t2808;
  t3806 = -1.*t455*t2836;
  t3831 = t3660 + t3806;
  t3875 = 3.2*t2858*t3831;
  t3882 = -1.*t455*t2967;
  t3902 = t3882 + t2837;
  t3903 = 3.2*t3902*t3034;
  t4148 = t3098 + t3105 + t3127 + t3311 + t3430 + t3533 + t3875 + t3903;
  t407 = Power(t395,2);
  t453 = 12.*t407;
  t543 = Power(t455,2);
  t545 = 12.*t543;
  t1122 = Power(t1112,2);
  t1168 = 6.8*t1122;
  t2356 = Power(t2301,2);
  t2380 = 6.8*t2356;
  t4229 = Power(t614,2);
  t4239 = 0.11*t4229;
  t4279 = Power(t703,2);
  t4346 = 0.11*t4279;
  t4353 = t4239 + t4346;
  t4860 = -1.*t4828*t1334;
  t4908 = -1.*t1218*t4892;
  t4936 = t4860 + t4908;
  t5005 = t4828*t1552;
  t5027 = t1334*t4892;
  t5067 = t5005 + t5027;
  t5111 = Power(t1720,2);
  t5131 = 0.11*t5111;
  t5132 = Power(t1767,2);
  t5135 = 0.11*t5132;
  t5146 = t5131 + t5135;
  t5572 = -1.*t5568*t2836;
  t5594 = -1.*t2808*t5593;
  t5597 = t5572 + t5594;
  t5602 = t5568*t2967;
  t5617 = t2836*t5593;
  t5618 = t5602 + t5617;
  t5730 = t4616*t1209;
  t5731 = -0.24*t1181*t1209;
  t5732 = t5730 + t5731;
  t5655 = t4616*t1181;
  t5715 = Power(t1209,2);
  t5718 = 0.24*t5715;
  t5725 = t5655 + t5718;
  t5785 = t5425*t2797;
  t5788 = -0.24*t2649*t2797;
  t5792 = t5785 + t5788;
  t5749 = t5425*t2649;
  t5751 = Power(t2797,2);
  t5768 = 0.24*t5751;
  t5773 = t5749 + t5768;
  t4215 = 2.88*t395;
  t4379 = 6.8*t1112*t4353;
  t4937 = 3.2*t1699*t4936;
  t5077 = 3.2*t1428*t5067;
  t5148 = 6.8*t2301*t5146;
  t5601 = 3.2*t3034*t5597;
  t5619 = 3.2*t2858*t5618;
  t5620 = t4215 + t4379 + t4937 + t5077 + t5148 + t5601 + t5619;
  t6013 = -2.88*t455;
  t6016 = 6.8*t3093*t4353;
  t6020 = 3.2*t3247*t4936;
  t6024 = 3.2*t3116*t5067;
  t6029 = 6.8*t3429*t5146;
  t6038 = 3.2*t3902*t5597;
  t6041 = 3.2*t3831*t5618;
  t6048 = t6013 + t6016 + t6020 + t6024 + t6029 + t6038 + t6041;
  t5654 = 0.748*t1112;
  t5729 = 3.2*t5725*t1428;
  t5735 = 3.2*t5732*t1699;
  t5738 = t5654 + t5729 + t5735;
  t6055 = 0.748*t3093;
  t6069 = 3.2*t5732*t3247;
  t6092 = 3.2*t5725*t3116;
  t6093 = t6055 + t6069 + t6092;
  t6423 = 0.748*t4353;
  t6424 = 3.2*t5732*t4936;
  t6428 = 3.2*t5725*t5067;
  t6429 = 0.67 + t6423 + t6424 + t6428;
  t5746 = 0.768*t1428;
  t6112 = 0.768*t3116;
  t6436 = 0.768*t5067;
  t6438 = 0.2 + t6436;
  t6560 = 0.768*t5725;
  t6565 = 0.2 + t6560;
  t5747 = 0.748*t2301;
  t5784 = 3.2*t5773*t2858;
  t5793 = 3.2*t5792*t3034;
  t5798 = t5747 + t5784 + t5793;
  t6127 = 0.748*t3429;
  t6150 = 3.2*t5792*t3902;
  t6157 = 3.2*t5773*t3831;
  t6158 = t6127 + t6150 + t6157;
  t6440 = 0.748*t5146;
  t6472 = 3.2*t5792*t5597;
  t6473 = 3.2*t5773*t5618;
  t6492 = 0.67 + t6440 + t6472 + t6473;
  t5799 = 0.768*t2858;
  t6161 = 0.768*t3831;
  t6494 = 0.768*t5618;
  t6519 = 0.2 + t6494;
  t6593 = 0.768*t5773;
  t6601 = 0.2 + t6593;
  p_output1[0]=t1168 + 3.2*Power(t1428,2) + 3.2*Power(t1699,2) + 6.8*Power(t1904,2) + t2380 + 3.2*Power(t2858,2) + 3.2*Power(t3034,2) + t453 + t545 + 6.8*Power(t731,2);
  p_output1[1]=t4148;
  p_output1[2]=t5620;
  p_output1[3]=t5738;
  p_output1[4]=t5746;
  p_output1[5]=t5798;
  p_output1[6]=t5799;
  p_output1[7]=t4148;
  p_output1[8]=t1168 + t2380 + 6.8*Power(t3093,2) + 3.2*Power(t3116,2) + 3.2*Power(t3247,2) + 6.8*Power(t3429,2) + 3.2*Power(t3831,2) + 3.2*Power(t3902,2) + t453 + t545;
  p_output1[9]=t6048;
  p_output1[10]=t6093;
  p_output1[11]=t6112;
  p_output1[12]=t6158;
  p_output1[13]=t6161;
  p_output1[14]=t5620;
  p_output1[15]=t6048;
  p_output1[16]=3.3612 + 6.8*Power(t4353,2) + 3.2*Power(t4936,2) + 3.2*Power(t5067,2) + 6.8*Power(t5146,2) + 3.2*Power(t5597,2) + 3.2*Power(t5618,2);
  p_output1[17]=t6429;
  p_output1[18]=t6438;
  p_output1[19]=t6492;
  p_output1[20]=t6519;
  p_output1[21]=t5738;
  p_output1[22]=t6093;
  p_output1[23]=t6429;
  p_output1[24]=1.58228 + 3.2*Power(t5725,2) + 3.2*Power(t5732,2);
  p_output1[25]=t6565;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=t5746;
  p_output1[29]=t6112;
  p_output1[30]=t6438;
  p_output1[31]=t6565;
  p_output1[32]=1.2143199999999998;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=t5798;
  p_output1[36]=t6158;
  p_output1[37]=t6492;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=1.58228 + 3.2*Power(t5773,2) + 3.2*Power(t5792,2);
  p_output1[41]=t6601;
  p_output1[42]=t5799;
  p_output1[43]=t6161;
  p_output1[44]=t6519;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=t6601;
  p_output1[48]=1.2143199999999998;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Mmat_five_link_walker.hh"

namespace SymFunction
{

void Mmat_five_link_walker_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
