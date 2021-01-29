/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:07:28 GMT-05:00
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
  double t743;
  double t308;
  double t353;
  double t823;
  double t1541;
  double t229;
  double t1664;
  double t1665;
  double t1726;
  double t2256;
  double t2593;
  double t2757;
  double t2773;
  double t2847;
  double t638;
  double t1473;
  double t1482;
  double t1538;
  double t1737;
  double t1769;
  double t4376;
  double t4294;
  double t4355;
  double t4380;
  double t4396;
  double t4414;
  double t4438;
  double t4778;
  double t4787;
  double t4807;
  double t4879;
  double t4904;
  double t4360;
  double t4387;
  double t4389;
  double t4391;
  double t4492;
  double t4497;
  double t1840;
  double t1978;
  double t2231;
  double t5180;
  double t5181;
  double t5196;
  double t3767;
  double t3188;
  double t3323;
  double t3355;
  double t3579;
  double t3825;
  double t4516;
  double t4583;
  double t4658;
  double t5499;
  double t5532;
  double t5606;
  double t5112;
  double t5014;
  double t5025;
  double t5076;
  double t5083;
  double t5114;
  double t5241;
  double t5248;
  double t5255;
  double t5333;
  double t5348;
  double t5371;
  double t5380;
  double t5418;
  double t5658;
  double t5662;
  double t5666;
  double t5680;
  double t5685;
  double t5701;
  double t5715;
  double t5728;
  double t6110;
  double t6132;
  double t6140;
  double t6157;
  double t6158;
  double t6166;
  double t6395;
  double t6396;
  double t6407;
  double t6434;
  double t6435;
  double t6441;
  double t2243;
  double t2939;
  double t2942;
  double t3040;
  double t3848;
  double t3946;
  double t3968;
  double t4082;
  double t6509;
  double t6514;
  double t6547;
  double t6552;
  double t6565;
  double t5199;
  double t5271;
  double t5774;
  double t5777;
  double t5798;
  double t5805;
  double t5821;
  double t5829;
  double t5848;
  double t5861;
  double t5942;
  double t5944;
  double t6104;
  double t6105;
  double t6106;
  double t6107;
  double t6108;
  double t6109;
  double t6153;
  double t6189;
  double t6267;
  double t6310;
  double t6330;
  double t6335;
  double t6662;
  double t6666;
  double t6715;
  double t6570;
  double t6577;
  double t6589;
  double t6601;
  double t6603;
  double t6609;
  double t6610;
  double t6616;
  double t6622;
  double t6625;
  double t6638;
  double t6659;
  double t6736;
  double t6744;
  double t6824;
  double t7034;
  double t7035;
  double t6832;
  double t7043;
  double t7044;
  double t6843;
  double t4679;
  double t4946;
  double t4979;
  double t5009;
  double t5127;
  double t5130;
  double t5132;
  double t5136;
  double t7187;
  double t7191;
  double t7217;
  double t7266;
  double t7271;
  double t5640;
  double t5679;
  double t6056;
  double t6057;
  double t6058;
  double t6059;
  double t6060;
  double t6061;
  double t6062;
  double t6063;
  double t6064;
  double t6065;
  double t6345;
  double t6360;
  double t6372;
  double t6377;
  double t6382;
  double t6388;
  double t6412;
  double t6444;
  double t6445;
  double t6458;
  double t6463;
  double t6476;
  double t7410;
  double t7416;
  double t7421;
  double t7278;
  double t7281;
  double t7282;
  double t7306;
  double t7307;
  double t7320;
  double t7330;
  double t7331;
  double t7348;
  double t7349;
  double t7357;
  double t7375;
  double t7426;
  double t7444;
  double t7493;
  double t7744;
  double t7746;
  double t7503;
  double t7749;
  double t7765;
  double t7541;
  double t5946;
  double t5990;
  double t6051;
  double t6052;
  double t6066;
  double t6067;
  double t6076;
  double t6084;
  double t5994;
  double t6007;
  double t6048;
  double t6049;
  double t6050;
  double t6053;
  double t6068;
  double t6069;
  double t6070;
  double t6074;
  double t6075;
  double t6096;
  double t6101;
  double t8303;
  double t8398;
  double t6641;
  double t8469;
  double t6733;
  double t6767;
  double t6808;
  double t6828;
  double t6841;
  double t6869;
  double t8491;
  double t7008;
  double t7010;
  double t7012;
  double t8495;
  double t6921;
  double t6949;
  double t6988;
  double t8499;
  double t8509;
  double t8512;
  double t7031;
  double t8546;
  double t7036;
  double t7047;
  double t7051;
  double t8553;
  double t7072;
  double t7085;
  double t7091;
  double t8327;
  double t8424;
  double t7360;
  double t8475;
  double t7423;
  double t7465;
  double t7474;
  double t7498;
  double t7531;
  double t7561;
  double t8733;
  double t7626;
  double t7648;
  double t7653;
  double t8741;
  double t7600;
  double t7604;
  double t7609;
  double t8746;
  double t8773;
  double t8774;
  double t7719;
  double t8837;
  double t7747;
  double t7778;
  double t7781;
  double t8842;
  double t7786;
  double t7787;
  double t7791;
  double t7956;
  double t7960;
  double t7964;
  double t7966;
  double t7969;
  double t7972;
  double t7994;
  double t8030;
  double t8037;
  double t7811;
  double t7814;
  double t7826;
  double t7833;
  double t6103;
  double t6309;
  double t6343;
  double t6447;
  double t6497;
  double t6498;
  double t3830;
  double t4094;
  double t4218;
  double t5124;
  double t5154;
  double t5168;
  double t8457;
  double t8471;
  double t8472;
  double t8481;
  double t8485;
  double t8487;
  double t8551;
  double t8575;
  double t8579;
  double t6810;
  double t6900;
  double t6901;
  double t8671;
  double t8689;
  double t8692;
  double t7064;
  double t7097;
  double t7117;
  double t8839;
  double t8847;
  double t8848;
  double t7476;
  double t7567;
  double t7578;
  double t8921;
  double t8922;
  double t8923;
  double t7783;
  double t7793;
  double t7795;
  double t8049;
  double t8050;
  double t8052;
  double t8068;
  double t8091;
  double t8116;
  double t8134;
  double t8155;
  double t8304;
  double t8305;
  double t8306;
  double t8505;
  double t6596;
  double t8976;
  double t8978;
  double t8979;
  double t8604;
  double t8606;
  double t8608;
  double t6994;
  double t7014;
  double t7026;
  double t9109;
  double t9112;
  double t9113;
  double t9118;
  double t9122;
  double t8167;
  double t8174;
  double t8198;
  double t8209;
  double t9540;
  double t9541;
  double t9542;
  double t9554;
  double t9782;
  double t9784;
  double t8211;
  double t8941;
  double t9563;
  double t9565;
  double t9774;
  double t9775;
  double t8349;
  double t8379;
  double t8382;
  double t8750;
  double t7301;
  double t9220;
  double t9250;
  double t9283;
  double t8868;
  double t8876;
  double t8880;
  double t7618;
  double t7667;
  double t7669;
  double t9366;
  double t9368;
  double t9370;
  double t9371;
  double t9381;
  double t8246;
  double t8266;
  double t8267;
  double t8269;
  double t9574;
  double t9599;
  double t9600;
  double t9631;
  double t9876;
  double t9877;
  double t8295;
  double t8956;
  double t9632;
  double t9634;
  double t9870;
  double t9871;
  t743 = Cos(var1[3]);
  t308 = Cos(var1[4]);
  t353 = Sin(var1[3]);
  t823 = Sin(var1[4]);
  t1541 = Sin(var1[2]);
  t229 = Cos(var1[2]);
  t1664 = t743*t308;
  t1665 = -1.*t353*t823;
  t1726 = t1664 + t1665;
  t2256 = -1.*t308;
  t2593 = 1. + t2256;
  t2757 = 0.4*t2593;
  t2773 = 0.64*t308;
  t2847 = t2757 + t2773;
  t638 = -1.*t308*t353;
  t1473 = -1.*t743*t823;
  t1482 = t638 + t1473;
  t1538 = t229*t1482;
  t1737 = -1.*t1541*t1726;
  t1769 = t1538 + t1737;
  t4376 = Cos(var1[5]);
  t4294 = Cos(var1[6]);
  t4355 = Sin(var1[5]);
  t4380 = Sin(var1[6]);
  t4396 = t4376*t4294;
  t4414 = -1.*t4355*t4380;
  t4438 = t4396 + t4414;
  t4778 = -1.*t4294;
  t4787 = 1. + t4778;
  t4807 = 0.4*t4787;
  t4879 = 0.64*t4294;
  t4904 = t4807 + t4879;
  t4360 = -1.*t4294*t4355;
  t4387 = -1.*t4376*t4380;
  t4389 = t4360 + t4387;
  t4391 = t229*t4389;
  t4492 = -1.*t1541*t4438;
  t4497 = t4391 + t4492;
  t1840 = -1.*t743*t1541;
  t1978 = -1.*t229*t353;
  t2231 = t1840 + t1978;
  t5180 = t229*t743;
  t5181 = -1.*t1541*t353;
  t5196 = t5180 + t5181;
  t3767 = t229*t1726;
  t3188 = t308*t353;
  t3323 = t743*t823;
  t3355 = t3188 + t3323;
  t3579 = -1.*t1541*t3355;
  t3825 = t3579 + t3767;
  t4516 = -1.*t4376*t1541;
  t4583 = -1.*t229*t4355;
  t4658 = t4516 + t4583;
  t5499 = t229*t4376;
  t5532 = -1.*t1541*t4355;
  t5606 = t5499 + t5532;
  t5112 = t229*t4438;
  t5014 = t4294*t4355;
  t5025 = t4376*t4380;
  t5076 = t5014 + t5025;
  t5083 = -1.*t1541*t5076;
  t5114 = t5083 + t5112;
  t5241 = t743*t1541;
  t5248 = t229*t353;
  t5255 = t5241 + t5248;
  t5333 = t1541*t1482;
  t5348 = t5333 + t3767;
  t5371 = t229*t3355;
  t5380 = t1541*t1726;
  t5418 = t5371 + t5380;
  t5658 = t4376*t1541;
  t5662 = t229*t4355;
  t5666 = t5658 + t5662;
  t5680 = t1541*t4389;
  t5685 = t5680 + t5112;
  t5701 = t229*t5076;
  t5715 = t1541*t4438;
  t5728 = t5701 + t5715;
  t6110 = t2847*t353;
  t6132 = 0.24*t743*t823;
  t6140 = t6110 + t6132;
  t6157 = t743*t2847;
  t6158 = -0.24*t353*t823;
  t6166 = t6157 + t6158;
  t6395 = t4904*t4355;
  t6396 = 0.24*t4376*t4380;
  t6407 = t6395 + t6396;
  t6434 = t4376*t4904;
  t6435 = -0.24*t4355*t4380;
  t6441 = t6434 + t6435;
  t2243 = -0.748*t2231;
  t2939 = t2847*t823;
  t2942 = -0.24*t308*t823;
  t3040 = t2939 + t2942;
  t3848 = t2847*t308;
  t3946 = Power(t823,2);
  t3968 = 0.24*t3946;
  t4082 = t3848 + t3968;
  t6509 = -1.*t743*t308;
  t6514 = t353*t823;
  t6547 = t6509 + t6514;
  t6552 = t1541*t6547;
  t6565 = t1538 + t6552;
  t5199 = -13.6*t2231*t5196;
  t5271 = -13.6*t5255*t5196;
  t5774 = Power(t2231,2);
  t5777 = -6.8*t5774;
  t5798 = -6.8*t2231*t5255;
  t5805 = Power(t5196,2);
  t5821 = -6.8*t5805;
  t5829 = -1.*t229*t743;
  t5848 = t1541*t353;
  t5861 = t5829 + t5848;
  t5942 = -6.8*t5196*t5861;
  t5944 = -1.*t1541*t1482;
  t6104 = Power(t743,2);
  t6105 = 0.11*t6104;
  t6106 = Power(t353,2);
  t6107 = 0.11*t6106;
  t6108 = t6105 + t6107;
  t6109 = -6.8*t2231*t6108;
  t6153 = -1.*t6140*t1726;
  t6189 = -1.*t1482*t6166;
  t6267 = t6153 + t6189;
  t6310 = t6140*t3355;
  t6330 = t1726*t6166;
  t6335 = t6310 + t6330;
  t6662 = -1.*t2847*t353;
  t6666 = -0.24*t743*t823;
  t6715 = t6662 + t6666;
  t6570 = -0.768*var2[4]*t6565;
  t6577 = -3.2*t3040*t5348;
  t6589 = -3.2*t4082*t6565;
  t6601 = -6.4*t5348*t5418;
  t6603 = -6.4*t5348*t6565;
  t6609 = -3.2*t5348*t3825;
  t6610 = -3.2*t1769*t5418;
  t6616 = t229*t6547;
  t6622 = t5944 + t6616;
  t6625 = -3.2*t5348*t6622;
  t6638 = -3.2*t1769*t6565;
  t6659 = -3.2*t5348*t6267;
  t6736 = t6140*t1726;
  t6744 = t1482*t6166;
  t6824 = -3.2*t6335*t6565;
  t7034 = -0.24*t308*t353;
  t7035 = t7034 + t6666;
  t6832 = -1.*t1482*t6140;
  t7043 = 0.24*t743*t308;
  t7044 = t7043 + t6158;
  t6843 = -1.*t6166*t6547;
  t4679 = -0.748*t4658;
  t4946 = t4904*t4380;
  t4979 = -0.24*t4294*t4380;
  t5009 = t4946 + t4979;
  t5127 = t4904*t4294;
  t5130 = Power(t4380,2);
  t5132 = 0.24*t5130;
  t5136 = t5127 + t5132;
  t7187 = -1.*t4376*t4294;
  t7191 = t4355*t4380;
  t7217 = t7187 + t7191;
  t7266 = t1541*t7217;
  t7271 = t4391 + t7266;
  t5640 = -13.6*t4658*t5606;
  t5679 = -13.6*t5666*t5606;
  t6056 = Power(t4658,2);
  t6057 = -6.8*t6056;
  t6058 = -6.8*t4658*t5666;
  t6059 = Power(t5606,2);
  t6060 = -6.8*t6059;
  t6061 = -1.*t229*t4376;
  t6062 = t1541*t4355;
  t6063 = t6061 + t6062;
  t6064 = -6.8*t5606*t6063;
  t6065 = -1.*t1541*t4389;
  t6345 = Power(t4376,2);
  t6360 = 0.11*t6345;
  t6372 = Power(t4355,2);
  t6377 = 0.11*t6372;
  t6382 = t6360 + t6377;
  t6388 = -6.8*t4658*t6382;
  t6412 = -1.*t6407*t4438;
  t6444 = -1.*t4389*t6441;
  t6445 = t6412 + t6444;
  t6458 = t6407*t5076;
  t6463 = t4438*t6441;
  t6476 = t6458 + t6463;
  t7410 = -1.*t4904*t4355;
  t7416 = -0.24*t4376*t4380;
  t7421 = t7410 + t7416;
  t7278 = -0.768*var2[6]*t7271;
  t7281 = -3.2*t5009*t5685;
  t7282 = -3.2*t5136*t7271;
  t7306 = -6.4*t5685*t5728;
  t7307 = -6.4*t5685*t7271;
  t7320 = -3.2*t5685*t5114;
  t7330 = -3.2*t4497*t5728;
  t7331 = t229*t7217;
  t7348 = t6065 + t7331;
  t7349 = -3.2*t5685*t7348;
  t7357 = -3.2*t4497*t7271;
  t7375 = -3.2*t5685*t6445;
  t7426 = t6407*t4438;
  t7444 = t4389*t6441;
  t7493 = -3.2*t6476*t7271;
  t7744 = -0.24*t4294*t4355;
  t7746 = t7744 + t7416;
  t7503 = -1.*t4389*t6407;
  t7749 = 0.24*t4376*t4294;
  t7765 = t7749 + t6435;
  t7541 = -1.*t6441*t7217;
  t5946 = -1.*t229*t1726;
  t5990 = t5944 + t5946;
  t6051 = -1.*t229*t3355;
  t6052 = t6051 + t1737;
  t6066 = -1.*t229*t4438;
  t6067 = t6065 + t6066;
  t6076 = -1.*t229*t5076;
  t6084 = t6076 + t4492;
  t5994 = -3.2*t5990*t5348;
  t6007 = Power(t3825,2);
  t6048 = -3.2*t6007;
  t6049 = Power(t1769,2);
  t6050 = -3.2*t6049;
  t6053 = -3.2*t6052*t5418;
  t6068 = -3.2*t6067*t5685;
  t6069 = Power(t5114,2);
  t6070 = -3.2*t6069;
  t6074 = Power(t4497,2);
  t6075 = -3.2*t6074;
  t6096 = -3.2*t6084*t5728;
  t6101 = t5777 + t5798 + t5821 + t5942 + t5994 + t6048 + t6050 + t6053 + t6057 + t6058 + t6060 + t6064 + t6068 + t6070 + t6075 + t6096;
  t8303 = -0.748*t5861;
  t8398 = -13.6*t2231*t5861;
  t6641 = t5777 + t5798 + t5821 + t5942 + t6609 + t6610 + t6625 + t6638;
  t8469 = -6.8*t5861*t6108;
  t6733 = t6715*t1726;
  t6767 = t3355*t6166;
  t6808 = t6733 + t6736 + t6744 + t6767;
  t6828 = -1.*t1482*t6715;
  t6841 = -1.*t1726*t6166;
  t6869 = t6828 + t6832 + t6841 + t6843;
  t8491 = -0.768*var2[4]*t6622;
  t7008 = Power(t308,2);
  t7010 = -0.24*t7008;
  t7012 = t3848 + t7010;
  t8495 = -3.2*t3040*t1769;
  t6921 = -1.*t2847*t823;
  t6949 = 0.24*t308*t823;
  t6988 = t6921 + t6949;
  t8499 = -3.2*t4082*t6622;
  t8509 = -6.4*t3825*t1769;
  t8512 = -6.4*t1769*t6622;
  t7031 = t6609 + t6610 + t6625 + t6638;
  t8546 = -3.2*t1769*t6267;
  t7036 = t7035*t1726;
  t7047 = t3355*t7044;
  t7051 = t7036 + t6736 + t6744 + t7047;
  t8553 = -3.2*t6335*t6622;
  t7072 = -1.*t1482*t7035;
  t7085 = -1.*t1726*t7044;
  t7091 = t7072 + t6832 + t7085 + t6843;
  t8327 = -0.748*t6063;
  t8424 = -13.6*t4658*t6063;
  t7360 = t6057 + t6058 + t6060 + t6064 + t7320 + t7330 + t7349 + t7357;
  t8475 = -6.8*t6063*t6382;
  t7423 = t7421*t4438;
  t7465 = t5076*t6441;
  t7474 = t7423 + t7426 + t7444 + t7465;
  t7498 = -1.*t4389*t7421;
  t7531 = -1.*t4438*t6441;
  t7561 = t7498 + t7503 + t7531 + t7541;
  t8733 = -0.768*var2[6]*t7348;
  t7626 = Power(t4294,2);
  t7648 = -0.24*t7626;
  t7653 = t5127 + t7648;
  t8741 = -3.2*t5009*t4497;
  t7600 = -1.*t4904*t4380;
  t7604 = 0.24*t4294*t4380;
  t7609 = t7600 + t7604;
  t8746 = -3.2*t5136*t7348;
  t8773 = -6.4*t5114*t4497;
  t8774 = -6.4*t4497*t7348;
  t7719 = t7320 + t7330 + t7349 + t7357;
  t8837 = -3.2*t4497*t6445;
  t7747 = t7746*t4438;
  t7778 = t5076*t7765;
  t7781 = t7747 + t7426 + t7444 + t7778;
  t8842 = -3.2*t6476*t7348;
  t7786 = -1.*t4389*t7746;
  t7787 = -1.*t4438*t7765;
  t7791 = t7786 + t7503 + t7787 + t7541;
  t7956 = -6.8*t2231*t5196;
  t7960 = -6.8*t5255*t5196;
  t7964 = -3.2*t5348*t1769;
  t7966 = -3.2*t3825*t5418;
  t7969 = -6.8*t4658*t5606;
  t7972 = -6.8*t5666*t5606;
  t7994 = -3.2*t5685*t4497;
  t8030 = -3.2*t5114*t5728;
  t8037 = t7956 + t7960 + t7964 + t7966 + t7969 + t7972 + t7994 + t8030;
  t7811 = Power(t229,2);
  t7814 = -12.*t7811;
  t7826 = Power(t1541,2);
  t7833 = -12.*t7826;
  t6103 = 2.88*t1541;
  t6309 = -3.2*t3825*t6267;
  t6343 = -3.2*t1769*t6335;
  t6447 = -3.2*t5114*t6445;
  t6497 = -3.2*t4497*t6476;
  t6498 = t6103 + t6109 + t6309 + t6343 + t6388 + t6447 + t6497;
  t3830 = -3.2*t3040*t3825;
  t4094 = -3.2*t4082*t1769;
  t4218 = t2243 + t3830 + t4094;
  t5124 = -3.2*t5009*t5114;
  t5154 = -3.2*t5136*t4497;
  t5168 = t4679 + t5124 + t5154;
  t8457 = 2.88*t229;
  t8471 = -3.2*t6052*t6267;
  t8472 = -3.2*t5990*t6335;
  t8481 = -3.2*t6084*t6445;
  t8485 = -3.2*t6067*t6476;
  t8487 = t8457 + t8469 + t8471 + t8472 + t8475 + t8481 + t8485;
  t8551 = -3.2*t1769*t6808;
  t8575 = -3.2*t3825*t6869;
  t8579 = t8469 + t8546 + t8551 + t8553 + t8575;
  t6810 = -3.2*t5348*t6808;
  t6900 = -3.2*t5418*t6869;
  t6901 = t6109 + t6659 + t6810 + t6824 + t6900;
  t8671 = -3.2*t1769*t7051;
  t8689 = -3.2*t3825*t7091;
  t8692 = t8546 + t8671 + t8553 + t8689;
  t7064 = -3.2*t5348*t7051;
  t7097 = -3.2*t5418*t7091;
  t7117 = t6659 + t7064 + t6824 + t7097;
  t8839 = -3.2*t4497*t7474;
  t8847 = -3.2*t5114*t7561;
  t8848 = t8475 + t8837 + t8839 + t8842 + t8847;
  t7476 = -3.2*t5685*t7474;
  t7567 = -3.2*t5728*t7561;
  t7578 = t6388 + t7375 + t7476 + t7493 + t7567;
  t8921 = -3.2*t4497*t7781;
  t8922 = -3.2*t5114*t7791;
  t8923 = t8837 + t8921 + t8842 + t8922;
  t7783 = -3.2*t5685*t7781;
  t7793 = -3.2*t5728*t7791;
  t7795 = t7375 + t7783 + t7493 + t7793;
  t8049 = -2.88*t229;
  t8050 = -6.8*t5196*t6108;
  t8052 = -3.2*t5418*t6267;
  t8068 = -3.2*t5348*t6335;
  t8091 = -6.8*t5606*t6382;
  t8116 = -3.2*t5728*t6445;
  t8134 = -3.2*t5685*t6476;
  t8155 = t8049 + t8050 + t8052 + t8068 + t8091 + t8116 + t8134;
  t8304 = -3.2*t4082*t5990;
  t8305 = -3.2*t3040*t6052;
  t8306 = t8303 + t8304 + t8305;
  t8505 = t8303 + t8495 + t8499;
  t6596 = t2243 + t6577 + t6589;
  t8976 = -3.2*t4082*t6808;
  t8978 = -3.2*t3040*t6869;
  t8979 = t8976 + t8978;
  t8604 = -3.2*t7012*t3825;
  t8606 = -3.2*t6988*t1769;
  t8608 = t8604 + t8495 + t8606 + t8499;
  t6994 = -3.2*t6988*t5348;
  t7014 = -3.2*t7012*t5418;
  t7026 = t6577 + t6994 + t7014 + t6589;
  t9109 = -3.2*t7012*t6267;
  t9112 = -3.2*t6988*t6335;
  t9113 = -3.2*t4082*t7051;
  t9118 = -3.2*t3040*t7091;
  t9122 = t9109 + t9112 + t9113 + t9118;
  t8167 = -0.748*t5196;
  t8174 = -3.2*t4082*t5348;
  t8198 = -3.2*t3040*t5418;
  t8209 = t8167 + t8174 + t8198;
  t9540 = -0.748*t6108;
  t9541 = -3.2*t3040*t6267;
  t9542 = -3.2*t4082*t6335;
  t9554 = -0.67 + t9540 + t9541 + t9542;
  t9782 = -0.768*var2[1]*t6622;
  t9784 = -0.768*var2[0]*t6565;
  t8211 = -0.768*t5348;
  t8941 = -0.768*t1769;
  t9563 = -0.768*t6335;
  t9565 = -0.2 + t9563;
  t9774 = -0.768*t4082;
  t9775 = -0.2 + t9774;
  t8349 = -3.2*t5136*t6067;
  t8379 = -3.2*t5009*t6084;
  t8382 = t8327 + t8349 + t8379;
  t8750 = t8327 + t8741 + t8746;
  t7301 = t4679 + t7281 + t7282;
  t9220 = -3.2*t5136*t7474;
  t9250 = -3.2*t5009*t7561;
  t9283 = t9220 + t9250;
  t8868 = -3.2*t7653*t5114;
  t8876 = -3.2*t7609*t4497;
  t8880 = t8868 + t8741 + t8876 + t8746;
  t7618 = -3.2*t7609*t5685;
  t7667 = -3.2*t7653*t5728;
  t7669 = t7281 + t7618 + t7667 + t7282;
  t9366 = -3.2*t7653*t6445;
  t9368 = -3.2*t7609*t6476;
  t9370 = -3.2*t5136*t7781;
  t9371 = -3.2*t5009*t7791;
  t9381 = t9366 + t9368 + t9370 + t9371;
  t8246 = -0.748*t5606;
  t8266 = -3.2*t5136*t5685;
  t8267 = -3.2*t5009*t5728;
  t8269 = t8246 + t8266 + t8267;
  t9574 = -0.748*t6382;
  t9599 = -3.2*t5009*t6445;
  t9600 = -3.2*t5136*t6476;
  t9631 = -0.67 + t9574 + t9599 + t9600;
  t9876 = -0.768*var2[1]*t7348;
  t9877 = -0.768*var2[0]*t7271;
  t8295 = -0.768*t5685;
  t8956 = -0.768*t4497;
  t9632 = -0.768*t6476;
  t9634 = -0.2 + t9632;
  t9870 = -0.768*t5136;
  t9871 = -0.2 + t9870;
  p_output1[0]=(t5199 + t5271 - 6.4*t1769*t5348 - 6.4*t3825*t5418 + t5640 + t5679 - 6.4*t4497*t5685 - 6.4*t5114*t5728)*var2[0] + t6101*var2[1] + t6498*var2[2] + t4218*var2[3] - 0.768*t1769*var2[4] + t5168*var2[5] - 0.768*t4497*var2[6];
  p_output1[1]=t6570 + (t5199 + t5271 + t6601 + t6603)*var2[0] + t6641*var2[1] + t6901*var2[2] + t6596*var2[3];
  p_output1[2]=t6570 + (t6601 + t6603)*var2[0] + t7031*var2[1] + t7117*var2[2] + t7026*var2[3];
  p_output1[3]=t7278 + (t5640 + t5679 + t7306 + t7307)*var2[0] + t7360*var2[1] + t7578*var2[2] + t7301*var2[5];
  p_output1[4]=t7278 + (t7306 + t7307)*var2[0] + t7719*var2[1] + t7795*var2[2] + t7669*var2[5];
  p_output1[5]=-6.8*Power(t5255,2) - 3.2*Power(t5348,2) - 3.2*Power(t5418,2) - 6.8*Power(t5666,2) - 3.2*Power(t5685,2) - 3.2*Power(t5728,2) + t5821 + t6060 + t7814 + t7833;
  p_output1[6]=t8037;
  p_output1[7]=t8155;
  p_output1[8]=t8209;
  p_output1[9]=t8211;
  p_output1[10]=t8269;
  p_output1[11]=t8295;
  p_output1[12]=t6101*var2[0] + (t5199 + t5640 - 6.4*t1769*t5990 - 6.4*t3825*t6052 - 6.4*t4497*t6067 - 6.4*t5114*t6084 + t8398 + t8424)*var2[1] + t8487*var2[2] + t8306*var2[3] - 0.768*t5990*var2[4] + t8382*var2[5] - 0.768*t6067*var2[6];
  p_output1[13]=t8491 + t6641*var2[0] + (t5199 + t8398 + t8509 + t8512)*var2[1] + t8579*var2[2] + t8505*var2[3];
  p_output1[14]=t8491 + t7031*var2[0] + (t8509 + t8512)*var2[1] + t8692*var2[2] + t8608*var2[3];
  p_output1[15]=t8733 + t7360*var2[0] + (t5640 + t8424 + t8773 + t8774)*var2[1] + t8848*var2[2] + t8750*var2[5];
  p_output1[16]=t8733 + t7719*var2[0] + (t8773 + t8774)*var2[1] + t8923*var2[2] + t8880*var2[5];
  p_output1[17]=t8037;
  p_output1[18]=t5777 + t5821 + t6048 + t6050 + t6057 + t6060 + t6070 + t6075 + t7814 + t7833;
  p_output1[19]=t6498;
  p_output1[20]=t4218;
  p_output1[21]=t8941;
  p_output1[22]=t5168;
  p_output1[23]=t8956;
  p_output1[24]=t6498*var2[0] + t8487*var2[1];
  p_output1[25]=t6901*var2[0] + t8579*var2[1] + (-6.4*t6335*t6808 - 6.4*t6267*t6869)*var2[2] + t8979*var2[3] - 0.768*t6808*var2[4];
  p_output1[26]=t7117*var2[0] + t8692*var2[1] + (-6.4*t6335*t7051 - 6.4*t6267*t7091)*var2[2] + t9122*var2[3] - 0.768*t7051*var2[4];
  p_output1[27]=t7578*var2[0] + t8848*var2[1] + (-6.4*t6476*t7474 - 6.4*t6445*t7561)*var2[2] + t9283*var2[5] - 0.768*t7474*var2[6];
  p_output1[28]=t7795*var2[0] + t8923*var2[1] + (-6.4*t6476*t7781 - 6.4*t6445*t7791)*var2[2] + t9381*var2[5] - 0.768*t7781*var2[6];
  p_output1[29]=t8155;
  p_output1[30]=t6498;
  p_output1[31]=-3.3612 - 6.8*Power(t6108,2) - 3.2*Power(t6267,2) - 3.2*Power(t6335,2) - 6.8*Power(t6382,2) - 3.2*Power(t6445,2) - 3.2*Power(t6476,2);
  p_output1[32]=t9554;
  p_output1[33]=t9565;
  p_output1[34]=t9631;
  p_output1[35]=t9634;
  p_output1[36]=t4218*var2[0] + t8306*var2[1];
  p_output1[37]=t6596*var2[0] + t8505*var2[1] + t8979*var2[2];
  p_output1[38]=t7026*var2[0] + t8608*var2[1] + t9122*var2[2] + (-6.4*t4082*t6988 - 6.4*t3040*t7012)*var2[3] - 0.768*t6988*var2[4];
  p_output1[39]=t8209;
  p_output1[40]=t4218;
  p_output1[41]=t9554;
  p_output1[42]=-1.58228 - 3.2*Power(t3040,2) - 3.2*Power(t4082,2);
  p_output1[43]=t9775;
  p_output1[44]=-0.768*t1769*var2[0] - 0.768*t5990*var2[1];
  p_output1[45]=t9782 + t9784 - 0.768*t6808*var2[2];
  p_output1[46]=t9782 + t9784 - 0.768*t7051*var2[2] - 0.768*t6988*var2[3];
  p_output1[47]=t8211;
  p_output1[48]=t8941;
  p_output1[49]=t9565;
  p_output1[50]=t9775;
  p_output1[51]=-1.2143199999999998;
  p_output1[52]=t5168*var2[0] + t8382*var2[1];
  p_output1[53]=t7301*var2[0] + t8750*var2[1] + t9283*var2[2];
  p_output1[54]=t7669*var2[0] + t8880*var2[1] + t9381*var2[2] + (-6.4*t5136*t7609 - 6.4*t5009*t7653)*var2[5] - 0.768*t7609*var2[6];
  p_output1[55]=t8269;
  p_output1[56]=t5168;
  p_output1[57]=t9631;
  p_output1[58]=-1.58228 - 3.2*Power(t5009,2) - 3.2*Power(t5136,2);
  p_output1[59]=t9871;
  p_output1[60]=-0.768*t4497*var2[0] - 0.768*t6067*var2[1];
  p_output1[61]=t9876 + t9877 - 0.768*t7474*var2[2];
  p_output1[62]=t9876 + t9877 - 0.768*t7781*var2[2] - 0.768*t7609*var2[5];
  p_output1[63]=t8295;
  p_output1[64]=t8956;
  p_output1[65]=t9634;
  p_output1[66]=t9871;
  p_output1[67]=-1.2143199999999998;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 68, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_MmatDx_five_link_walker.hh"

namespace RightStance
{

void J_MmatDx_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
