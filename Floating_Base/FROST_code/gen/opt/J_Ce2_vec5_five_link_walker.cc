/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:49:43 GMT-04:00
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
  double t2134;
  double t1628;
  double t2011;
  double t2145;
  double t325;
  double t2892;
  double t4893;
  double t4894;
  double t4898;
  double t4900;
  double t4903;
  double t2081;
  double t2194;
  double t2217;
  double t5039;
  double t5043;
  double t5045;
  double t5062;
  double t5067;
  double t5068;
  double t4925;
  double t2358;
  double t3045;
  double t3053;
  double t3195;
  double t3269;
  double t4829;
  double t5006;
  double t5013;
  double t5014;
  double t5015;
  double t5046;
  double t5047;
  double t5684;
  double t5713;
  double t5805;
  double t5813;
  double t5881;
  double t5893;
  double t5922;
  double t6626;
  double t6636;
  double t6739;
  double t6759;
  double t6770;
  double t6774;
  double t6777;
  double t6783;
  double t6842;
  double t6846;
  double t6847;
  double t6911;
  double t6917;
  double t4926;
  double t4967;
  double t4998;
  double t5397;
  double t5447;
  double t5540;
  double t7182;
  double t7187;
  double t5059;
  double t5060;
  double t5061;
  double t5073;
  double t5074;
  double t5115;
  double t6605;
  double t7033;
  double t7041;
  double t7045;
  double t6773;
  double t6799;
  double t6800;
  double t6886;
  double t6904;
  double t6859;
  double t6941;
  double t6942;
  double t8718;
  double t8762;
  double t7081;
  double t7099;
  double t7080;
  double t7097;
  double t7155;
  double t8803;
  double t8811;
  double t8813;
  double t7214;
  double t7236;
  double t7239;
  double t7868;
  double t7941;
  double t8157;
  double t8203;
  double t8241;
  double t8251;
  double t8268;
  double t8301;
  double t8309;
  double t8314;
  double t8322;
  double t8397;
  double t8402;
  double t8404;
  double t8418;
  double t8424;
  double t8429;
  double t8475;
  double t8491;
  double t8793;
  double t8794;
  double t8819;
  double t8826;
  double t8865;
  double t8874;
  double t8899;
  double t8900;
  double t10273;
  double t10292;
  double t10293;
  double t10294;
  double t10295;
  double t9855;
  double t9863;
  double t9864;
  double t9891;
  double t9913;
  double t9921;
  double t9922;
  double t9928;
  double t9938;
  double t9948;
  double t9983;
  double t10144;
  double t10153;
  double t6597;
  double t6619;
  double t5731;
  double t5758;
  double t5592;
  double t5788;
  double t5961;
  double t6480;
  double t6623;
  double t6643;
  double t6663;
  double t8768;
  double t8774;
  double t8783;
  double t8801;
  double t8820;
  double t8825;
  double t8828;
  double t8831;
  double t8834;
  double t8836;
  double t8863;
  double t8864;
  double t8898;
  double t8902;
  double t11363;
  double t9197;
  double t9260;
  double t9339;
  double t11541;
  double t11640;
  double t11802;
  double t11803;
  double t11852;
  double t11857;
  double t11858;
  double t11885;
  double t11921;
  double t11922;
  double t11923;
  double t11924;
  double t11929;
  double t9516;
  double t9595;
  double t9605;
  double t9622;
  double t9672;
  double t9691;
  double t9934;
  double t6841;
  double t6993;
  double t7062;
  double t7163;
  double t7171;
  double t5048;
  double t5070;
  double t5396;
  double t5553;
  double t5570;
  double t5577;
  double t12049;
  double t7172;
  double t10850;
  double t11177;
  double t11263;
  double t11267;
  double t11270;
  double t8788;
  double t8789;
  double t8830;
  double t8851;
  double t8862;
  double t8916;
  double t8921;
  double t11926;
  double t11928;
  double t11955;
  double t11959;
  double t11961;
  double t11963;
  double t11964;
  double t9443;
  double t9612;
  double t9616;
  double t9699;
  double t9783;
  double t12036;
  double t12037;
  double t12038;
  double t12039;
  double t12045;
  double t10158;
  double t12060;
  double t12242;
  double t12243;
  double t12244;
  double t12245;
  double t12246;
  double t12238;
  double t12239;
  double t12240;
  double t10336;
  double t10346;
  double t10357;
  double t10359;
  double t10360;
  double t11371;
  double t11632;
  double t11798;
  double t7235;
  double t7559;
  double t7865;
  double t12102;
  double t12107;
  double t12143;
  double t12144;
  double t12145;
  double t11991;
  double t11992;
  double t11993;
  double t12030;
  double t12034;
  double t9161;
  double t9348;
  double t9353;
  double t9359;
  double t9411;
  double t12180;
  double t12186;
  double t12190;
  double t12191;
  double t12192;
  double t12193;
  double t12194;
  double t10296;
  double t12061;
  double t12247;
  double t12342;
  double t12346;
  double t12351;
  double t12376;
  double t12377;
  double t4873;
  t2134 = Cos(var1[3]);
  t1628 = Cos(var1[4]);
  t2011 = Sin(var1[3]);
  t2145 = Sin(var1[4]);
  t325 = Sin(var1[2]);
  t2892 = Cos(var1[2]);
  t4893 = -1.*t1628;
  t4894 = 1. + t4893;
  t4898 = 0.4*t4894;
  t4900 = 0.64*t1628;
  t4903 = t4898 + t4900;
  t2081 = -1.*t1628*t2011;
  t2194 = -1.*t2134*t2145;
  t2217 = t2081 + t2194;
  t5039 = t2134*t1628;
  t5043 = -1.*t2011*t2145;
  t5045 = t5039 + t5043;
  t5062 = t2892*t2217;
  t5067 = -1.*t325*t5045;
  t5068 = t5062 + t5067;
  t4925 = t4903*t1628;
  t2358 = -1.*t325*t2217;
  t3045 = -1.*t2134*t1628;
  t3053 = t2011*t2145;
  t3195 = t3045 + t3053;
  t3269 = t2892*t3195;
  t4829 = t2358 + t3269;
  t5006 = t1628*t2011;
  t5013 = t2134*t2145;
  t5014 = t5006 + t5013;
  t5015 = -1.*t325*t5014;
  t5046 = t2892*t5045;
  t5047 = t5015 + t5046;
  t5684 = t325*t2217;
  t5713 = t5684 + t5046;
  t5805 = -1.*t2892*t5045;
  t5813 = t2358 + t5805;
  t5881 = t2892*t5014;
  t5893 = t325*t5045;
  t5922 = t5881 + t5893;
  t6626 = t325*t3195;
  t6636 = t5062 + t6626;
  t6739 = t4903*t2011;
  t6759 = 0.24*t2134*t2145;
  t6770 = t6739 + t6759;
  t6774 = t2134*t4903;
  t6777 = -0.24*t2011*t2145;
  t6783 = t6774 + t6777;
  t6842 = -0.24*t1628*t2011;
  t6846 = -0.24*t2134*t2145;
  t6847 = t6842 + t6846;
  t6911 = 0.24*t2134*t1628;
  t6917 = t6911 + t6777;
  t4926 = Power(t1628,2);
  t4967 = -0.24*t4926;
  t4998 = t4925 + t4967;
  t5397 = Power(t2145,2);
  t5447 = 0.24*t5397;
  t5540 = t4925 + t5447;
  t7182 = t325*t5014;
  t7187 = t7182 + t3269;
  t5059 = t4903*t2145;
  t5060 = -0.24*t1628*t2145;
  t5061 = t5059 + t5060;
  t5073 = -1.*t4903*t2145;
  t5074 = 0.24*t1628*t2145;
  t5115 = t5073 + t5074;
  t6605 = -1.*t325*t3195;
  t7033 = t6770*t5014;
  t7041 = t5045*t6783;
  t7045 = t7033 + t7041;
  t6773 = -1.*t6770*t5045;
  t6799 = -1.*t2217*t6783;
  t6800 = t6773 + t6799;
  t6886 = t6770*t5045;
  t6904 = t2217*t6783;
  t6859 = t6847*t5045;
  t6941 = t5014*t6917;
  t6942 = t6859 + t6886 + t6904 + t6941;
  t8718 = -1.*t4903*t2011;
  t8762 = t8718 + t6846;
  t7081 = -1.*t2217*t6770;
  t7099 = -1.*t6783*t3195;
  t7080 = -1.*t2217*t6847;
  t7097 = -1.*t5045*t6917;
  t7155 = t7080 + t7081 + t7097 + t7099;
  t8803 = -0.24*t2134*t1628;
  t8811 = 0.24*t2011*t2145;
  t8813 = t8803 + t8811;
  t7214 = -0.384*var2[4]*t7187;
  t7236 = 3.2*t5540*t7187;
  t7239 = 3.2*t5061*t6636;
  t7868 = 6.4*t5713*t5068;
  t7941 = 3.2*t5922*t4829;
  t8157 = 3.2*t5068*t7187;
  t8203 = t5881 + t6605;
  t8241 = 3.2*t5713*t8203;
  t8251 = 3.2*t5047*t6636;
  t8268 = 6.4*t4829*t6636;
  t8301 = t7868 + t7941 + t8157 + t8241 + t8251 + t8268;
  t8309 = -0.5*var2[1]*t8301;
  t8314 = Power(t5713,2);
  t8322 = 6.4*t8314;
  t8397 = 6.4*t5713*t7187;
  t8402 = 6.4*t5922*t6636;
  t8404 = Power(t6636,2);
  t8418 = 6.4*t8404;
  t8424 = t8322 + t8397 + t8402 + t8418;
  t8429 = -0.5*var2[0]*t8424;
  t8475 = 3.2*t7045*t7187;
  t8491 = 3.2*t6800*t6636;
  t8793 = -1.*t6847*t5045;
  t8794 = -1.*t5014*t6783;
  t8819 = -1.*t2217*t8813;
  t8826 = -1.*t6770*t3195;
  t8865 = t2217*t6770;
  t8874 = t6847*t5014;
  t8899 = t5045*t8813;
  t8900 = t6783*t3195;
  t10273 = 3.2*t5061*t5713;
  t10292 = 3.2*t5115*t5713;
  t10293 = 3.2*t4998*t5922;
  t10294 = 3.2*t5540*t6636;
  t10295 = t10273 + t10292 + t10293 + t10294;
  t9855 = 6.4*t5713*t5922;
  t9863 = 6.4*t5713*t6636;
  t9864 = t9855 + t9863;
  t9891 = 3.2*t5713*t5047;
  t9913 = 3.2*t5068*t5922;
  t9921 = 3.2*t5713*t4829;
  t9922 = 3.2*t5068*t6636;
  t9928 = t9891 + t9913 + t9921 + t9922;
  t9938 = 3.2*t5713*t6800;
  t9948 = 3.2*t5713*t6942;
  t9983 = 3.2*t7045*t6636;
  t10144 = 3.2*t5922*t7155;
  t10153 = t9938 + t9948 + t9983 + t10144;
  t6597 = -1.*t2892*t2217;
  t6619 = t6597 + t6605;
  t5731 = -1.*t2892*t5014;
  t5758 = t5731 + t5067;
  t5592 = 6.4*t5047*t5068;
  t5788 = 3.2*t5713*t5758;
  t5961 = 3.2*t5813*t5922;
  t6480 = 6.4*t5068*t4829;
  t6623 = 3.2*t5713*t6619;
  t6643 = 3.2*t5813*t6636;
  t6663 = t5592 + t5788 + t5961 + t6480 + t6623 + t6643;
  t8768 = t8762*t5045;
  t8774 = t5014*t6783;
  t8783 = t8768 + t6886 + t6904 + t8774;
  t8801 = -1.*t2217*t6917;
  t8820 = -1.*t8762*t3195;
  t8825 = -1.*t6847*t3195;
  t8828 = t8793 + t6799 + t8794 + t8801 + t8819 + t8820 + t8825 + t8826;
  t8831 = -1.*t2217*t8762;
  t8834 = -1.*t5045*t6783;
  t8836 = t8831 + t7081 + t8834 + t7099;
  t8863 = t2217*t8762;
  t8864 = t2217*t6847;
  t8898 = t5045*t6917;
  t8902 = t8863 + t8864 + t8865 + t8874 + t7041 + t8898 + t8899 + t8900;
  t11363 = -0.384*var2[4]*t8203;
  t9197 = -1.*t4903*t1628;
  t9260 = 0.24*t4926;
  t9339 = t9197 + t9260;
  t11541 = 3.2*t5061*t4829;
  t11640 = 3.2*t5540*t8203;
  t11802 = Power(t5068,2);
  t11803 = 6.4*t11802;
  t11852 = 6.4*t5047*t4829;
  t11857 = Power(t4829,2);
  t11858 = 6.4*t11857;
  t11885 = 6.4*t5068*t8203;
  t11921 = t11803 + t11852 + t11858 + t11885;
  t11922 = -0.5*var2[1]*t11921;
  t11923 = -0.5*var2[0]*t8301;
  t11924 = 3.2*t6800*t4829;
  t11929 = 3.2*t7045*t8203;
  t9516 = -2.*t2217*t6917;
  t9595 = -2.*t6847*t3195;
  t9605 = t8793 + t8794 + t9516 + t8819 + t9595 + t8826;
  t9622 = 2.*t2217*t6847;
  t9672 = 2.*t5045*t6917;
  t9691 = t9622 + t8865 + t8874 + t9672 + t8899 + t8900;
  t9934 = -0.5*var2[4]*t9928;
  t6841 = 3.2*t5068*t6800;
  t6993 = 3.2*t5068*t6942;
  t7062 = 3.2*t7045*t4829;
  t7163 = 3.2*t5047*t7155;
  t7171 = t6841 + t6993 + t7062 + t7163;
  t5048 = 3.2*t4998*t5047;
  t5070 = 3.2*t5061*t5068;
  t5396 = 3.2*t5115*t5068;
  t5553 = 3.2*t5540*t4829;
  t5570 = t5048 + t5070 + t5396 + t5553;
  t5577 = -0.5*var2[3]*t5570;
  t12049 = t5592 + t6480;
  t7172 = -0.5*var2[2]*t7171;
  t10850 = 3.2*t5813*t6800;
  t11177 = 3.2*t5813*t6942;
  t11263 = 3.2*t7045*t6619;
  t11267 = 3.2*t5758*t7155;
  t11270 = t10850 + t11177 + t11263 + t11267;
  t8788 = 3.2*t8783*t6636;
  t8789 = 3.2*t6942*t6636;
  t8830 = 3.2*t5922*t8828;
  t8851 = 3.2*t5713*t8836;
  t8862 = 3.2*t5713*t7155;
  t8916 = 3.2*t5713*t8902;
  t8921 = t8475 + t8491 + t8788 + t8789 + t8830 + t8851 + t8862 + t8916;
  t11926 = 3.2*t8783*t4829;
  t11928 = 3.2*t6942*t4829;
  t11955 = 3.2*t5047*t8828;
  t11959 = 3.2*t5068*t8836;
  t11961 = 3.2*t5068*t7155;
  t11963 = 3.2*t5068*t8902;
  t11964 = t11924 + t11926 + t11928 + t11929 + t11955 + t11959 + t11961 + t11963;
  t9443 = 6.4*t6942*t6636;
  t9612 = 3.2*t5922*t9605;
  t9616 = 6.4*t5713*t7155;
  t9699 = 3.2*t5713*t9691;
  t9783 = t8475 + t8491 + t9443 + t9612 + t9616 + t9699;
  t12036 = 6.4*t6942*t4829;
  t12037 = 3.2*t5047*t9605;
  t12038 = 6.4*t5068*t7155;
  t12039 = 3.2*t5068*t9691;
  t12045 = t11924 + t12036 + t11929 + t12037 + t12038 + t12039;
  t10158 = -0.5*var2[4]*t10153;
  t12060 = -0.5*var2[4]*t7171;
  t12242 = 3.2*t4998*t6800;
  t12243 = 3.2*t5115*t7045;
  t12244 = 3.2*t5540*t6942;
  t12245 = 3.2*t5061*t7155;
  t12246 = t12242 + t12243 + t12244 + t12245;
  t12238 = 6.4*t7045*t6942;
  t12239 = 6.4*t6800*t7155;
  t12240 = t12238 + t12239;
  t10336 = 3.2*t5061*t5813;
  t10346 = 3.2*t5115*t5813;
  t10357 = 3.2*t4998*t5758;
  t10359 = 3.2*t5540*t6619;
  t10360 = t10336 + t10346 + t10357 + t10359;
  t11371 = 3.2*t4998*t5068;
  t11632 = 3.2*t5115*t4829;
  t11798 = t11371 + t11541 + t11632 + t11640;
  t7235 = 3.2*t4998*t5713;
  t7559 = 3.2*t5115*t6636;
  t7865 = t7235 + t7236 + t7239 + t7559;
  t12102 = 3.2*t5115*t8783;
  t12107 = 3.2*t5061*t8828;
  t12143 = 3.2*t4998*t8836;
  t12144 = 3.2*t5540*t8902;
  t12145 = t12102 + t12107 + t12143 + t12144;
  t11991 = 3.2*t5115*t5047;
  t11992 = 6.4*t4998*t5068;
  t11993 = 3.2*t9339*t5068;
  t12030 = 6.4*t5115*t4829;
  t12034 = t11991 + t11992 + t11993 + t11541 + t12030 + t11640;
  t9161 = 6.4*t4998*t5713;
  t9348 = 3.2*t9339*t5713;
  t9353 = 3.2*t5115*t5922;
  t9359 = 6.4*t5115*t6636;
  t9411 = t9161 + t9348 + t9353 + t7236 + t7239 + t9359;
  t12180 = 3.2*t5115*t6800;
  t12186 = 3.2*t9339*t7045;
  t12190 = 6.4*t5115*t6942;
  t12191 = 3.2*t5061*t9605;
  t12192 = 6.4*t4998*t7155;
  t12193 = 3.2*t5540*t9691;
  t12194 = t12180 + t12186 + t12190 + t12191 + t12192 + t12193;
  t10296 = -0.5*var2[4]*t10295;
  t12061 = -0.5*var2[4]*t5570;
  t12247 = -0.5*var2[4]*t12246;
  t12342 = 6.4*t4998*t5061;
  t12346 = 6.4*t5115*t5540;
  t12351 = t12342 + t12346;
  t12376 = -0.384*var2[0]*t7187;
  t12377 = -0.384*var2[1]*t8203;
  t4873 = -0.384*var2[4]*t4829;
  p_output1[0]=(t4873 + t5577 + t7172 - 0.5*(6.4*t4829*t5713 + 6.4*t5047*t5713 + 6.4*t5068*t5922 + 6.4*t5068*t6636)*var2[0] - 0.5*t6663*var2[1])*var2[4];
  p_output1[1]=(t7214 + t8309 + t8429 - 0.5*t8921*var2[2] - 0.5*t7865*var2[3])*var2[4];
  p_output1[2]=(t7214 + t8309 + t8429 - 0.5*t9783*var2[2] - 0.5*t9411*var2[3])*var2[4];
  p_output1[3]=-0.5*t9864*var2[4];
  p_output1[4]=t9934;
  p_output1[5]=t10158;
  p_output1[6]=t10296;
  p_output1[7]=-0.5*t9864*var2[0] - 0.5*t9928*var2[1] - 0.5*t10153*var2[2] - 0.5*t10295*var2[3] - 0.768*t6636*var2[4];
  p_output1[8]=var2[4]*(-0.5*t6663*var2[0] - 0.5*(6.4*t5068*t5758 + 6.4*t4829*t5813 + 6.4*t5047*t5813 + 6.4*t5068*t6619)*var2[1] - 0.5*t11270*var2[2] - 0.5*t10360*var2[3] - 0.384*t6619*var2[4]);
  p_output1[9]=(t11363 + t11922 + t11923 - 0.5*t11964*var2[2] - 0.5*t11798*var2[3])*var2[4];
  p_output1[10]=(t11363 + t11922 + t11923 - 0.5*t12045*var2[2] - 0.5*t12034*var2[3])*var2[4];
  p_output1[11]=t9934;
  p_output1[12]=-0.5*t12049*var2[4];
  p_output1[13]=t12060;
  p_output1[14]=t12061;
  p_output1[15]=t5577 + t7172 - 0.5*t9928*var2[0] - 0.5*t12049*var2[1] - 0.768*t4829*var2[4];
  p_output1[16]=(-0.5*t7171*var2[0] - 0.5*t11270*var2[1])*var2[4];
  p_output1[17]=var2[4]*(-0.5*t8921*var2[0] - 0.5*t11964*var2[1] - 0.5*(6.4*t6942*t8783 + 6.4*t6800*t8828 + 6.4*t7155*t8836 + 6.4*t7045*t8902)*var2[2] - 0.5*t12145*var2[3] - 0.384*t8902*var2[4]);
  p_output1[18]=var2[4]*(-0.5*t9783*var2[0] - 0.5*t12045*var2[1] - 0.5*(6.4*Power(t6942,2) + 6.4*Power(t7155,2) + 6.4*t6800*t9605 + 6.4*t7045*t9691)*var2[2] - 0.5*t12194*var2[3] - 0.384*t9691*var2[4]);
  p_output1[19]=t10158;
  p_output1[20]=t12060;
  p_output1[21]=-0.5*t12240*var2[4];
  p_output1[22]=t12247;
  p_output1[23]=-0.5*t10153*var2[0] - 0.5*t7171*var2[1] - 0.5*t12240*var2[2] - 0.5*t12246*var2[3] - 0.768*t6942*var2[4];
  p_output1[24]=(-0.5*t5570*var2[0] - 0.5*t10360*var2[1])*var2[4];
  p_output1[25]=(-0.5*t7865*var2[0] - 0.5*t11798*var2[1] - 0.5*t12145*var2[2])*var2[4];
  p_output1[26]=var2[4]*(-0.5*t9411*var2[0] - 0.5*t12034*var2[1] - 0.5*t12194*var2[2] - 0.5*(6.4*Power(t4998,2) + 6.4*t5061*t5115 + 6.4*Power(t5115,2) + 6.4*t5540*t9339)*var2[3] - 0.384*t9339*var2[4]);
  p_output1[27]=t10296;
  p_output1[28]=t12061;
  p_output1[29]=t12247;
  p_output1[30]=-0.5*t12351*var2[4];
  p_output1[31]=-0.5*t10295*var2[0] - 0.5*t5570*var2[1] - 0.5*t12246*var2[2] - 0.5*t12351*var2[3] - 0.768*t5115*var2[4];
  p_output1[32]=(-0.384*t4829*var2[0] - 0.384*t6619*var2[1])*var2[4];
  p_output1[33]=(t12376 + t12377 - 0.384*t8902*var2[2])*var2[4];
  p_output1[34]=(t12376 + t12377 - 0.384*t9691*var2[2] - 0.384*t9339*var2[3])*var2[4];
  p_output1[35]=-0.384*t6636*var2[4];
  p_output1[36]=t4873;
  p_output1[37]=-0.384*t6942*var2[4];
  p_output1[38]=-0.384*t5115*var2[4];
  p_output1[39]=-0.384*t6636*var2[0] - 0.384*t4829*var2[1] - 0.384*t6942*var2[2] - 0.384*t5115*var2[3];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec5_five_link_walker.hh"

namespace RightStance
{

void J_Ce2_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
