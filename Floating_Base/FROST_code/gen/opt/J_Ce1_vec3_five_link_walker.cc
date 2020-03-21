/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:22 GMT-04:00
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
  double t2384;
  double t2456;
  double t305;
  double t2451;
  double t3838;
  double t3887;
  double t4084;
  double t4090;
  double t4106;
  double t3885;
  double t3888;
  double t3971;
  double t4125;
  double t4126;
  double t4198;
  double t4231;
  double t4252;
  double t4019;
  double t4118;
  double t4121;
  double t4272;
  double t4283;
  double t4332;
  double t4380;
  double t4507;
  double t4568;
  double t4955;
  double t4960;
  double t4964;
  double t4642;
  double t4690;
  double t4741;
  double t5142;
  double t5143;
  double t5144;
  double t4370;
  double t4584;
  double t4589;
  double t4602;
  double t4756;
  double t4765;
  double t5112;
  double t5115;
  double t5120;
  double t5140;
  double t5145;
  double t5170;
  double t5174;
  double t5180;
  double t5183;
  double t5188;
  double t5234;
  double t5236;
  double t5191;
  double t5242;
  double t5243;
  double t5193;
  double t2449;
  double t2461;
  double t2470;
  double t2866;
  double t2867;
  double t3121;
  double t3682;
  double t3779;
  double t3783;
  double t5545;
  double t5549;
  double t5613;
  double t5620;
  double t5695;
  double t5696;
  double t7493;
  double t7952;
  double t7953;
  double t7978;
  double t8039;
  double t8046;
  double t8200;
  double t8207;
  double t8213;
  double t8106;
  double t8125;
  double t8148;
  double t5614;
  double t5669;
  double t5693;
  double t8214;
  double t8221;
  double t8227;
  double t5547;
  double t5550;
  double t5554;
  double t5555;
  double t5608;
  double t5609;
  double t5610;
  double t5611;
  double t5612;
  double t7930;
  double t8182;
  double t8233;
  double t8241;
  double t8354;
  double t8355;
  double t8261;
  double t8274;
  double t8299;
  double t8247;
  double t8394;
  double t8395;
  double t8397;
  double t8909;
  double t8975;
  double t8993;
  double t8392;
  double t8445;
  double t8457;
  double t9032;
  double t9034;
  double t9053;
  double t9062;
  double t9074;
  double t9086;
  double t9449;
  double t9454;
  double t9134;
  double t9525;
  double t9527;
  double t9259;
  double t4749;
  double t4975;
  double t4995;
  double t5019;
  double t5190;
  double t5192;
  double t5194;
  double t5222;
  double t5230;
  double t11718;
  double t11719;
  double t12236;
  double t12240;
  double t12162;
  double t12166;
  double t12167;
  double t11711;
  double t11715;
  double t11717;
  double t11721;
  double t5241;
  double t5259;
  double t5277;
  double t11726;
  double t12024;
  double t12078;
  double t12086;
  double t12233;
  double t5420;
  double t5422;
  double t5451;
  double t12250;
  double t12287;
  double t12288;
  double t12255;
  double t5343;
  double t5456;
  double t5457;
  double t12262;
  double t12263;
  double t12264;
  double t12265;
  double t12289;
  double t12290;
  double t12291;
  double t12292;
  double t12293;
  double t12294;
  double t12295;
  double t12296;
  double t12297;
  double t12298;
  double t12299;
  double t12300;
  double t12301;
  double t12302;
  double t12303;
  double t8442;
  double t8459;
  double t8464;
  double t8871;
  double t9132;
  double t9255;
  double t9279;
  double t9286;
  double t9292;
  double t12357;
  double t12358;
  double t12396;
  double t12400;
  double t12367;
  double t12368;
  double t12369;
  double t12354;
  double t12355;
  double t12356;
  double t12359;
  double t9516;
  double t9531;
  double t9548;
  double t12361;
  double t12362;
  double t12363;
  double t12366;
  double t12378;
  double t9556;
  double t9576;
  double t9627;
  double t12403;
  double t12438;
  double t12439;
  double t12411;
  double t9552;
  double t9646;
  double t9698;
  double t12432;
  double t12433;
  double t12434;
  double t12435;
  double t12443;
  double t12444;
  double t12445;
  double t12446;
  double t12447;
  double t12448;
  double t12449;
  double t12450;
  double t12451;
  double t12452;
  double t12453;
  double t12454;
  double t12455;
  double t12456;
  double t12457;
  double t12517;
  double t12519;
  double t12501;
  double t12502;
  double t12503;
  double t12507;
  double t12535;
  double t12536;
  double t12537;
  double t12538;
  double t12543;
  double t12552;
  double t12518;
  double t12520;
  double t12523;
  double t12528;
  double t12529;
  double t12530;
  double t12548;
  double t12556;
  double t12557;
  double t12559;
  double t12560;
  double t12561;
  double t5512;
  double t5513;
  double t5463;
  double t5482;
  double t12578;
  double t12580;
  double t12581;
  double t12582;
  double t12583;
  double t12573;
  double t12574;
  double t12575;
  double t12577;
  double t8248;
  double t12596;
  double t12597;
  double t12598;
  double t12599;
  double t8260;
  double t12602;
  double t5694;
  double t7940;
  double t12607;
  double t12609;
  double t12610;
  double t12611;
  double t12579;
  double t12584;
  double t12585;
  double t12079;
  double t12080;
  double t12168;
  double t12218;
  double t12234;
  double t12245;
  double t12251;
  double t12253;
  double t12254;
  double t12256;
  double t12622;
  double t12624;
  double t12625;
  double t12587;
  double t12588;
  double t12589;
  double t12631;
  double t12632;
  double t12633;
  double t12634;
  double t12635;
  double t12636;
  double t12637;
  double t12316;
  double t12317;
  double t12319;
  double t12322;
  double t12324;
  double t12325;
  double t12608;
  double t12612;
  double t12613;
  double t12364;
  double t12365;
  double t12370;
  double t12371;
  double t12382;
  double t12402;
  double t12404;
  double t12405;
  double t12406;
  double t12416;
  double t12652;
  double t12654;
  double t12655;
  double t12615;
  double t12616;
  double t12617;
  double t12661;
  double t12662;
  double t12663;
  double t12664;
  double t12665;
  double t12666;
  double t12667;
  double t12474;
  double t12475;
  double t12476;
  double t12479;
  double t12480;
  double t12486;
  double t5231;
  double t5458;
  double t5461;
  double t5509;
  double t5544;
  double t8242;
  double t8311;
  double t8321;
  double t9304;
  double t9732;
  double t9818;
  double t12308;
  double t12353;
  double t12471;
  double t12691;
  double t12692;
  double t12693;
  double t12694;
  double t12695;
  double t12718;
  double t12719;
  double t12720;
  double t12721;
  double t12722;
  double t12737;
  double t12738;
  double t12739;
  double t12741;
  double t12742;
  double t12743;
  double t12745;
  double t12746;
  double t12747;
  double t12749;
  double t12750;
  double t12751;
  double t12758;
  double t12759;
  double t12760;
  double t12762;
  double t12763;
  double t12764;
  double t12765;
  double t12769;
  double t12770;
  double t12771;
  double t12772;
  double t12773;
  double t12774;
  double t12775;
  double t12776;
  double t12777;
  double t12778;
  double t12779;
  double t12797;
  double t12798;
  double t12799;
  double t12801;
  double t12802;
  double t12803;
  double t12804;
  double t12805;
  double t12823;
  double t12824;
  double t12825;
  double t12827;
  double t12828;
  double t12829;
  double t12830;
  double t12834;
  double t12835;
  double t12836;
  double t12837;
  double t12838;
  double t12839;
  double t12840;
  double t12841;
  double t12842;
  double t12843;
  double t12844;
  double t12862;
  double t12863;
  double t12864;
  double t12866;
  double t12867;
  double t12868;
  double t12869;
  double t12870;
  t2384 = Cos(var1[3]);
  t2456 = Sin(var1[3]);
  t305 = Cos(var1[2]);
  t2451 = Sin(var1[2]);
  t3838 = Cos(var1[4]);
  t3887 = Sin(var1[4]);
  t4084 = t2384*t3838;
  t4090 = -1.*t2456*t3887;
  t4106 = t4084 + t4090;
  t3885 = -1.*t3838*t2456;
  t3888 = -1.*t2384*t3887;
  t3971 = t3885 + t3888;
  t4125 = -1.*t3838;
  t4126 = 1. + t4125;
  t4198 = 0.4*t4126;
  t4231 = 0.64*t3838;
  t4252 = t4198 + t4231;
  t4019 = t305*t3971;
  t4118 = -1.*t2451*t4106;
  t4121 = t4019 + t4118;
  t4272 = t4252*t2456;
  t4283 = 0.24*t2384*t3887;
  t4332 = t4272 + t4283;
  t4380 = t2384*t4252;
  t4507 = -0.24*t2456*t3887;
  t4568 = t4380 + t4507;
  t4955 = t3838*t2456;
  t4960 = t2384*t3887;
  t4964 = t4955 + t4960;
  t4642 = -1.*t4252*t2456;
  t4690 = -0.24*t2384*t3887;
  t4741 = t4642 + t4690;
  t5142 = -1.*t2384*t3838;
  t5143 = t2456*t3887;
  t5144 = t5142 + t5143;
  t4370 = -1.*t4332*t4106;
  t4584 = -1.*t3971*t4568;
  t4589 = t4370 + t4584;
  t4602 = 3.2*t4121*t4589;
  t4756 = t4332*t4106;
  t4765 = t3971*t4568;
  t5112 = t4332*t4964;
  t5115 = t4106*t4568;
  t5120 = t5112 + t5115;
  t5140 = -1.*t2451*t3971;
  t5145 = t305*t5144;
  t5170 = t5140 + t5145;
  t5174 = 3.2*t5120*t5170;
  t5180 = -1.*t2451*t4964;
  t5183 = t305*t4106;
  t5188 = t5180 + t5183;
  t5234 = -0.24*t3838*t2456;
  t5236 = t5234 + t4690;
  t5191 = -1.*t3971*t4332;
  t5242 = 0.24*t2384*t3838;
  t5243 = t5242 + t4507;
  t5193 = -1.*t4568*t5144;
  t2449 = -1.*t305*t2384;
  t2461 = t2451*t2456;
  t2470 = t2449 + t2461;
  t2866 = Power(t2384,2);
  t2867 = 0.11*t2866;
  t3121 = Power(t2456,2);
  t3682 = 0.11*t3121;
  t3779 = t2867 + t3682;
  t3783 = 6.8*t2470*t3779;
  t5545 = Cos(var1[5]);
  t5549 = Sin(var1[5]);
  t5613 = Cos(var1[6]);
  t5620 = Sin(var1[6]);
  t5695 = t5545*t5613;
  t5696 = -1.*t5549*t5620;
  t7493 = t5695 + t5696;
  t7952 = -1.*t5613;
  t7953 = 1. + t7952;
  t7978 = 0.4*t7953;
  t8039 = 0.64*t5613;
  t8046 = t7978 + t8039;
  t8200 = -1.*t5613*t5549;
  t8207 = -1.*t5545*t5620;
  t8213 = t8200 + t8207;
  t8106 = t8046*t5549;
  t8125 = 0.24*t5545*t5620;
  t8148 = t8106 + t8125;
  t5614 = t5613*t5549;
  t5669 = t5545*t5620;
  t5693 = t5614 + t5669;
  t8214 = t5545*t8046;
  t8221 = -0.24*t5549*t5620;
  t8227 = t8214 + t8221;
  t5547 = -1.*t305*t5545;
  t5550 = t2451*t5549;
  t5554 = t5547 + t5550;
  t5555 = Power(t5545,2);
  t5608 = 0.11*t5555;
  t5609 = Power(t5549,2);
  t5610 = 0.11*t5609;
  t5611 = t5608 + t5610;
  t5612 = 6.8*t5554*t5611;
  t7930 = -1.*t2451*t7493;
  t8182 = -1.*t8148*t7493;
  t8233 = -1.*t8213*t8227;
  t8241 = t8182 + t8233;
  t8354 = t305*t8213;
  t8355 = t8354 + t7930;
  t8261 = t8148*t5693;
  t8274 = t7493*t8227;
  t8299 = t8261 + t8274;
  t8247 = -1.*t2451*t8213;
  t8394 = -1.*t8046*t5549;
  t8395 = -0.24*t5545*t5620;
  t8397 = t8394 + t8395;
  t8909 = -1.*t5545*t5613;
  t8975 = t5549*t5620;
  t8993 = t8909 + t8975;
  t8392 = 3.2*t8355*t8241;
  t8445 = t8148*t7493;
  t8457 = t8213*t8227;
  t9032 = t305*t8993;
  t9034 = t8247 + t9032;
  t9053 = 3.2*t8299*t9034;
  t9062 = -1.*t2451*t5693;
  t9074 = t305*t7493;
  t9086 = t9062 + t9074;
  t9449 = -0.24*t5613*t5549;
  t9454 = t9449 + t8395;
  t9134 = -1.*t8213*t8148;
  t9525 = 0.24*t5545*t5613;
  t9527 = t9525 + t8221;
  t9259 = -1.*t8227*t8993;
  t4749 = t4741*t4106;
  t4975 = t4964*t4568;
  t4995 = t4749 + t4756 + t4765 + t4975;
  t5019 = 3.2*t4121*t4995;
  t5190 = -1.*t3971*t4741;
  t5192 = -1.*t4106*t4568;
  t5194 = t5190 + t5191 + t5192 + t5193;
  t5222 = 3.2*t5188*t5194;
  t5230 = t3783 + t4602 + t5019 + t5174 + t5222;
  t11718 = t2451*t5144;
  t11719 = t4019 + t11718;
  t12236 = t2451*t3971;
  t12240 = t12236 + t5183;
  t12162 = -1.*t2384*t4252;
  t12166 = 0.24*t2456*t3887;
  t12167 = t12162 + t12166;
  t11711 = t2451*t4964;
  t11715 = t11711 + t5145;
  t11717 = 3.2*t5120*t11715;
  t11721 = 3.2*t4589*t11719;
  t5241 = t5236*t4106;
  t5259 = t4964*t5243;
  t5277 = t5241 + t4756 + t4765 + t5259;
  t11726 = t305*t4964;
  t12024 = t2451*t4106;
  t12078 = t11726 + t12024;
  t12086 = -1.*t4964*t4568;
  t12233 = -1.*t4332*t5144;
  t5420 = -1.*t3971*t5236;
  t5422 = -1.*t4106*t5243;
  t5451 = t5420 + t5191 + t5422 + t5193;
  t12250 = t3971*t4332;
  t12287 = -0.24*t2384*t3838;
  t12288 = t12287 + t12166;
  t12255 = t4568*t5144;
  t5343 = 3.2*t4121*t5277;
  t5456 = 3.2*t5188*t5451;
  t5457 = t4602 + t5343 + t5174 + t5456;
  t12262 = 3.2*t4995*t11719;
  t12263 = 3.2*t5277*t11719;
  t12264 = -1.*t5236*t4106;
  t12265 = -1.*t3971*t5243;
  t12289 = -1.*t3971*t12288;
  t12290 = -1.*t4741*t5144;
  t12291 = -1.*t5236*t5144;
  t12292 = t12264 + t4584 + t12086 + t12265 + t12289 + t12290 + t12291 + t12233;
  t12293 = 3.2*t12078*t12292;
  t12294 = 3.2*t12240*t5194;
  t12295 = 3.2*t12240*t5451;
  t12296 = t3971*t4741;
  t12297 = t3971*t5236;
  t12298 = t5236*t4964;
  t12299 = t4106*t5243;
  t12300 = t4106*t12288;
  t12301 = t12296 + t12297 + t12250 + t12298 + t5115 + t12299 + t12300 + t12255;
  t12302 = 3.2*t12240*t12301;
  t12303 = t11717 + t11721 + t12262 + t12263 + t12293 + t12294 + t12295 + t12302;
  t8442 = t8397*t7493;
  t8459 = t5693*t8227;
  t8464 = t8442 + t8445 + t8457 + t8459;
  t8871 = 3.2*t8355*t8464;
  t9132 = -1.*t8213*t8397;
  t9255 = -1.*t7493*t8227;
  t9279 = t9132 + t9134 + t9255 + t9259;
  t9286 = 3.2*t9086*t9279;
  t9292 = t5612 + t8392 + t8871 + t9053 + t9286;
  t12357 = t2451*t8993;
  t12358 = t8354 + t12357;
  t12396 = t2451*t8213;
  t12400 = t12396 + t9074;
  t12367 = -1.*t5545*t8046;
  t12368 = 0.24*t5549*t5620;
  t12369 = t12367 + t12368;
  t12354 = t2451*t5693;
  t12355 = t12354 + t9032;
  t12356 = 3.2*t8299*t12355;
  t12359 = 3.2*t8241*t12358;
  t9516 = t9454*t7493;
  t9531 = t5693*t9527;
  t9548 = t9516 + t8445 + t8457 + t9531;
  t12361 = t305*t5693;
  t12362 = t2451*t7493;
  t12363 = t12361 + t12362;
  t12366 = -1.*t5693*t8227;
  t12378 = -1.*t8148*t8993;
  t9556 = -1.*t8213*t9454;
  t9576 = -1.*t7493*t9527;
  t9627 = t9556 + t9134 + t9576 + t9259;
  t12403 = t8213*t8148;
  t12438 = -0.24*t5545*t5613;
  t12439 = t12438 + t12368;
  t12411 = t8227*t8993;
  t9552 = 3.2*t8355*t9548;
  t9646 = 3.2*t9086*t9627;
  t9698 = t8392 + t9552 + t9053 + t9646;
  t12432 = 3.2*t8464*t12358;
  t12433 = 3.2*t9548*t12358;
  t12434 = -1.*t9454*t7493;
  t12435 = -1.*t8213*t9527;
  t12443 = -1.*t8213*t12439;
  t12444 = -1.*t8397*t8993;
  t12445 = -1.*t9454*t8993;
  t12446 = t12434 + t8233 + t12366 + t12435 + t12443 + t12444 + t12445 + t12378;
  t12447 = 3.2*t12363*t12446;
  t12448 = 3.2*t12400*t9279;
  t12449 = 3.2*t12400*t9627;
  t12450 = t8213*t8397;
  t12451 = t8213*t9454;
  t12452 = t9454*t5693;
  t12453 = t7493*t9527;
  t12454 = t7493*t12439;
  t12455 = t12450 + t12451 + t12403 + t12452 + t8274 + t12453 + t12454 + t12411;
  t12456 = 3.2*t12400*t12455;
  t12457 = t12356 + t12359 + t12432 + t12433 + t12447 + t12448 + t12449 + t12456;
  t12517 = 3.2*t12240*t4589;
  t12519 = 3.2*t5120*t11719;
  t12501 = -1.*t2384*t2451;
  t12502 = -1.*t305*t2456;
  t12503 = t12501 + t12502;
  t12507 = 6.8*t12503*t3779;
  t12535 = -1.*t5545*t2451;
  t12536 = -1.*t305*t5549;
  t12537 = t12535 + t12536;
  t12538 = 6.8*t12537*t5611;
  t12543 = 3.2*t12400*t8241;
  t12552 = 3.2*t8299*t12358;
  t12518 = 3.2*t12240*t4995;
  t12520 = 3.2*t12078*t5194;
  t12523 = t12507 + t12517 + t12518 + t12519 + t12520;
  t12528 = 3.2*t12240*t5277;
  t12529 = 3.2*t12078*t5451;
  t12530 = t12517 + t12528 + t12519 + t12529;
  t12548 = 3.2*t12400*t8464;
  t12556 = 3.2*t12363*t9279;
  t12557 = t12538 + t12543 + t12548 + t12552 + t12556;
  t12559 = 3.2*t12400*t9548;
  t12560 = 3.2*t12363*t9627;
  t12561 = t12543 + t12559 + t12552 + t12560;
  t5512 = -1.*t305*t4106;
  t5513 = t5140 + t5512;
  t5463 = -1.*t305*t4964;
  t5482 = t5463 + t4118;
  t12578 = 3.2*t5513*t4589;
  t12580 = -1.*t305*t3971;
  t12581 = -1.*t2451*t5144;
  t12582 = t12580 + t12581;
  t12583 = 3.2*t5120*t12582;
  t12573 = t2384*t2451;
  t12574 = t305*t2456;
  t12575 = t12573 + t12574;
  t12577 = 6.8*t12575*t3779;
  t8248 = -1.*t305*t7493;
  t12596 = t5545*t2451;
  t12597 = t305*t5549;
  t12598 = t12596 + t12597;
  t12599 = 6.8*t12598*t5611;
  t8260 = t8247 + t8248;
  t12602 = -1.*t305*t8213;
  t5694 = -1.*t305*t5693;
  t7940 = t5694 + t7930;
  t12607 = 3.2*t8260*t8241;
  t12609 = -1.*t2451*t8993;
  t12610 = t12602 + t12609;
  t12611 = 3.2*t8299*t12610;
  t12579 = 3.2*t5513*t4995;
  t12584 = 3.2*t5482*t5194;
  t12585 = t12577 + t12578 + t12579 + t12583 + t12584;
  t12079 = -1.*t4741*t4106;
  t12080 = -2.*t3971*t4568;
  t12168 = -1.*t3971*t12167;
  t12218 = -2.*t4741*t5144;
  t12234 = t12079 + t12080 + t12086 + t12168 + t12218 + t12233;
  t12245 = 2.*t3971*t4741;
  t12251 = t4741*t4964;
  t12253 = 2.*t4106*t4568;
  t12254 = t4106*t12167;
  t12256 = t12245 + t12250 + t12251 + t12253 + t12254 + t12255;
  t12622 = 3.2*t4589*t5170;
  t12624 = t11726 + t12581;
  t12625 = 3.2*t5120*t12624;
  t12587 = 3.2*t5513*t5277;
  t12588 = 3.2*t5482*t5451;
  t12589 = t12578 + t12587 + t12583 + t12588;
  t12631 = 3.2*t4995*t5170;
  t12632 = 3.2*t5277*t5170;
  t12633 = 3.2*t5188*t12292;
  t12634 = 3.2*t4121*t5194;
  t12635 = 3.2*t4121*t5451;
  t12636 = 3.2*t4121*t12301;
  t12637 = t12622 + t12631 + t12632 + t12625 + t12633 + t12634 + t12635 + t12636;
  t12316 = -2.*t3971*t5243;
  t12317 = -2.*t5236*t5144;
  t12319 = t12264 + t12086 + t12316 + t12289 + t12317 + t12233;
  t12322 = 2.*t3971*t5236;
  t12324 = 2.*t4106*t5243;
  t12325 = t12322 + t12250 + t12298 + t12324 + t12300 + t12255;
  t12608 = 3.2*t8260*t8464;
  t12612 = 3.2*t7940*t9279;
  t12613 = t12599 + t12607 + t12608 + t12611 + t12612;
  t12364 = -1.*t8397*t7493;
  t12365 = -2.*t8213*t8227;
  t12370 = -1.*t8213*t12369;
  t12371 = -2.*t8397*t8993;
  t12382 = t12364 + t12365 + t12366 + t12370 + t12371 + t12378;
  t12402 = 2.*t8213*t8397;
  t12404 = t8397*t5693;
  t12405 = 2.*t7493*t8227;
  t12406 = t7493*t12369;
  t12416 = t12402 + t12403 + t12404 + t12405 + t12406 + t12411;
  t12652 = 3.2*t8241*t9034;
  t12654 = t12361 + t12609;
  t12655 = 3.2*t8299*t12654;
  t12615 = 3.2*t8260*t9548;
  t12616 = 3.2*t7940*t9627;
  t12617 = t12607 + t12615 + t12611 + t12616;
  t12661 = 3.2*t8464*t9034;
  t12662 = 3.2*t9548*t9034;
  t12663 = 3.2*t9086*t12446;
  t12664 = 3.2*t8355*t9279;
  t12665 = 3.2*t8355*t9627;
  t12666 = 3.2*t8355*t12455;
  t12667 = t12652 + t12661 + t12662 + t12655 + t12663 + t12664 + t12665 + t12666;
  t12474 = -2.*t8213*t9527;
  t12475 = -2.*t9454*t8993;
  t12476 = t12434 + t12366 + t12474 + t12443 + t12475 + t12378;
  t12479 = 2.*t8213*t9454;
  t12480 = 2.*t7493*t9527;
  t12486 = t12479 + t12403 + t12452 + t12480 + t12454 + t12411;
  t5231 = -0.5*var2[3]*t5230;
  t5458 = -0.5*var2[4]*t5457;
  t5461 = -2.88*t305;
  t5509 = 3.2*t5482*t4589;
  t5544 = 3.2*t5513*t5120;
  t8242 = 3.2*t7940*t8241;
  t8311 = 3.2*t8260*t8299;
  t8321 = t5461 + t3783 + t5509 + t5544 + t5612 + t8242 + t8311;
  t9304 = -0.5*var2[5]*t9292;
  t9732 = -0.5*var2[6]*t9698;
  t9818 = -0.5*var2[2]*t5230;
  t12308 = -0.5*var2[2]*t5457;
  t12353 = -0.5*var2[2]*t9292;
  t12471 = -0.5*var2[2]*t9698;
  t12691 = 6.4*t4995*t5277;
  t12692 = 6.4*t4589*t12292;
  t12693 = 6.4*t5194*t5451;
  t12694 = 6.4*t5120*t12301;
  t12695 = t12691 + t12692 + t12693 + t12694;
  t12718 = 6.4*t8464*t9548;
  t12719 = 6.4*t8241*t12446;
  t12720 = 6.4*t9279*t9627;
  t12721 = 6.4*t8299*t12455;
  t12722 = t12718 + t12719 + t12720 + t12721;
  t12737 = 6.4*t4995*t5120;
  t12738 = 6.4*t4589*t5194;
  t12739 = t12737 + t12738;
  t12741 = 6.4*t5120*t5277;
  t12742 = 6.4*t4589*t5451;
  t12743 = t12741 + t12742;
  t12745 = 6.4*t8464*t8299;
  t12746 = 6.4*t8241*t9279;
  t12747 = t12745 + t12746;
  t12749 = 6.4*t8299*t9548;
  t12750 = 6.4*t8241*t9627;
  t12751 = t12749 + t12750;
  t12758 = t4252*t3887;
  t12759 = -0.24*t3838*t3887;
  t12760 = t12758 + t12759;
  t12762 = t4252*t3838;
  t12763 = Power(t3887,2);
  t12764 = 0.24*t12763;
  t12765 = t12762 + t12764;
  t12769 = -1.*t4252*t3887;
  t12770 = 0.24*t3838*t3887;
  t12771 = t12769 + t12770;
  t12772 = 3.2*t12771*t4995;
  t12773 = 3.2*t12760*t12292;
  t12774 = Power(t3838,2);
  t12775 = -0.24*t12774;
  t12776 = t12762 + t12775;
  t12777 = 3.2*t12776*t5194;
  t12778 = 3.2*t12765*t12301;
  t12779 = t12772 + t12773 + t12777 + t12778;
  t12797 = 3.2*t12765*t4995;
  t12798 = 3.2*t12760*t5194;
  t12799 = t12797 + t12798;
  t12801 = 3.2*t12776*t4589;
  t12802 = 3.2*t12771*t5120;
  t12803 = 3.2*t12765*t5277;
  t12804 = 3.2*t12760*t5451;
  t12805 = t12801 + t12802 + t12803 + t12804;
  t12823 = t8046*t5620;
  t12824 = -0.24*t5613*t5620;
  t12825 = t12823 + t12824;
  t12827 = t8046*t5613;
  t12828 = Power(t5620,2);
  t12829 = 0.24*t12828;
  t12830 = t12827 + t12829;
  t12834 = -1.*t8046*t5620;
  t12835 = 0.24*t5613*t5620;
  t12836 = t12834 + t12835;
  t12837 = 3.2*t12836*t8464;
  t12838 = 3.2*t12825*t12446;
  t12839 = Power(t5613,2);
  t12840 = -0.24*t12839;
  t12841 = t12827 + t12840;
  t12842 = 3.2*t12841*t9279;
  t12843 = 3.2*t12830*t12455;
  t12844 = t12837 + t12838 + t12842 + t12843;
  t12862 = 3.2*t12830*t8464;
  t12863 = 3.2*t12825*t9279;
  t12864 = t12862 + t12863;
  t12866 = 3.2*t12841*t8241;
  t12867 = 3.2*t12836*t8299;
  t12868 = 3.2*t12830*t9548;
  t12869 = 3.2*t12825*t9627;
  t12870 = t12866 + t12867 + t12868 + t12869;
  p_output1[0]=var2[2]*(t5231 + t5458 + t9304 + t9732 - 0.5*t8321*var2[2]);
  p_output1[1]=var2[2]*(t9818 - 0.5*(t11717 + t11721 + 3.2*t12078*t12234 + 3.2*t12240*t12256 + t3783 + 6.4*t11719*t4995 + 6.4*t12240*t5194)*var2[3] - 0.5*t12303*var2[4]);
  p_output1[2]=var2[2]*(t12308 - 0.5*t12303*var2[3] - 0.5*(t11717 + t11721 + 3.2*t12078*t12319 + 3.2*t12240*t12325 + 6.4*t11719*t5277 + 6.4*t12240*t5451)*var2[4]);
  p_output1[3]=var2[2]*(t12353 - 0.5*(t12356 + t12359 + 3.2*t12363*t12382 + 3.2*t12400*t12416 + t5612 + 6.4*t12358*t8464 + 6.4*t12400*t9279)*var2[5] - 0.5*t12457*var2[6]);
  p_output1[4]=var2[2]*(t12471 - 0.5*t12457*var2[5] - 0.5*(t12356 + t12359 + 3.2*t12363*t12476 + 3.2*t12400*t12486 + 6.4*t12358*t9548 + 6.4*t12400*t9627)*var2[6]);
  p_output1[5]=-1.*(t12507 + t12538 - 2.88*t2451 + 3.2*t4121*t5120 + 3.2*t4589*t5188 + 3.2*t8299*t8355 + 3.2*t8241*t9086)*var2[2] - 0.5*t12523*var2[3] - 0.5*t12530*var2[4] - 0.5*t12557*var2[5] - 0.5*t12561*var2[6];
  p_output1[6]=-0.5*t12523*var2[2];
  p_output1[7]=-0.5*t12530*var2[2];
  p_output1[8]=-0.5*t12557*var2[2];
  p_output1[9]=-0.5*t12561*var2[2];
  p_output1[10]=var2[2]*(-0.5*(t12577 + t12599 + 2.88*t2451 + 3.2*(t12024 + t12580)*t5120 + 3.2*t4589*(t11711 + t5512) + 3.2*t8241*(t12354 + t8248) + 3.2*(t12362 + t12602)*t8299)*var2[2] - 0.5*t12585*var2[3] - 0.5*t12589*var2[4] - 0.5*t12613*var2[5] - 0.5*t12617*var2[6]);
  p_output1[11]=var2[2]*(-0.5*t12585*var2[2] - 0.5*(t12577 + t12622 + t12625 + 3.2*t12256*t4121 + 6.4*t4995*t5170 + 3.2*t12234*t5188 + 6.4*t4121*t5194)*var2[3] - 0.5*t12637*var2[4]);
  p_output1[12]=var2[2]*(-0.5*t12589*var2[2] - 0.5*t12637*var2[3] - 0.5*(t12622 + t12625 + 3.2*t12325*t4121 + 3.2*t12319*t5188 + 6.4*t5170*t5277 + 6.4*t4121*t5451)*var2[4]);
  p_output1[13]=var2[2]*(-0.5*t12613*var2[2] - 0.5*(t12599 + t12652 + t12655 + 3.2*t12416*t8355 + 6.4*t8464*t9034 + 3.2*t12382*t9086 + 6.4*t8355*t9279)*var2[5] - 0.5*t12667*var2[6]);
  p_output1[14]=var2[2]*(-0.5*t12617*var2[2] - 0.5*t12667*var2[5] - 0.5*(t12652 + t12655 + 3.2*t12486*t8355 + 3.2*t12476*t9086 + 6.4*t9034*t9548 + 6.4*t8355*t9627)*var2[6]);
  p_output1[15]=t5231 + t5458 + t9304 + t9732 - 1.*t8321*var2[2];
  p_output1[16]=t9818;
  p_output1[17]=t12308;
  p_output1[18]=t12353;
  p_output1[19]=t12471;
  p_output1[20]=var2[2]*(-0.5*(6.4*t12234*t4589 + 6.4*Power(t4995,2) + 6.4*t12256*t5120 + 6.4*Power(t5194,2))*var2[3] - 0.5*t12695*var2[4]);
  p_output1[21]=var2[2]*(-0.5*t12695*var2[3] - 0.5*(6.4*t12319*t4589 + 6.4*t12325*t5120 + 6.4*Power(t5277,2) + 6.4*Power(t5451,2))*var2[4]);
  p_output1[22]=var2[2]*(-0.5*(6.4*t12382*t8241 + 6.4*t12416*t8299 + 6.4*Power(t8464,2) + 6.4*Power(t9279,2))*var2[5] - 0.5*t12722*var2[6]);
  p_output1[23]=var2[2]*(-0.5*t12722*var2[5] - 0.5*(6.4*t12476*t8241 + 6.4*t12486*t8299 + 6.4*Power(t9548,2) + 6.4*Power(t9627,2))*var2[6]);
  p_output1[24]=-0.5*t12739*var2[3] - 0.5*t12743*var2[4] - 0.5*t12747*var2[5] - 0.5*t12751*var2[6];
  p_output1[25]=-0.5*t12739*var2[2];
  p_output1[26]=-0.5*t12743*var2[2];
  p_output1[27]=-0.5*t12747*var2[2];
  p_output1[28]=-0.5*t12751*var2[2];
  p_output1[29]=var2[2]*(-0.5*(3.2*t12234*t12760 + 3.2*t12256*t12765)*var2[3] - 0.5*t12779*var2[4]);
  p_output1[30]=var2[2]*(-0.5*t12779*var2[3] - 0.5*(3.2*t12319*t12760 + 3.2*t12325*t12765 + 3.2*t12771*t4589 + 3.2*(0.24*t12774 - 1.*t3838*t4252)*t5120 + 6.4*t12771*t5277 + 6.4*t12776*t5451)*var2[4]);
  p_output1[31]=-0.5*t12799*var2[3] - 0.5*t12805*var2[4];
  p_output1[32]=-0.5*t12799*var2[2];
  p_output1[33]=-0.5*t12805*var2[2];
  p_output1[34]=var2[2]*(-0.384*t12256*var2[3] - 0.384*t12301*var2[4]);
  p_output1[35]=var2[2]*(-0.384*t12301*var2[3] - 0.384*t12325*var2[4]);
  p_output1[36]=-0.384*t4995*var2[3] - 0.384*t5277*var2[4];
  p_output1[37]=-0.384*t4995*var2[2];
  p_output1[38]=-0.384*t5277*var2[2];
  p_output1[39]=var2[2]*(-0.5*(3.2*t12382*t12825 + 3.2*t12416*t12830)*var2[5] - 0.5*t12844*var2[6]);
  p_output1[40]=var2[2]*(-0.5*t12844*var2[5] - 0.5*(3.2*t12476*t12825 + 3.2*t12486*t12830 + 3.2*t12836*t8241 + 3.2*(0.24*t12839 - 1.*t5613*t8046)*t8299 + 6.4*t12836*t9548 + 6.4*t12841*t9627)*var2[6]);
  p_output1[41]=-0.5*t12864*var2[5] - 0.5*t12870*var2[6];
  p_output1[42]=-0.5*t12864*var2[2];
  p_output1[43]=-0.5*t12870*var2[2];
  p_output1[44]=var2[2]*(-0.384*t12416*var2[5] - 0.384*t12455*var2[6]);
  p_output1[45]=var2[2]*(-0.384*t12455*var2[5] - 0.384*t12486*var2[6]);
  p_output1[46]=-0.384*t8464*var2[5] - 0.384*t9548*var2[6];
  p_output1[47]=-0.384*t8464*var2[2];
  p_output1[48]=-0.384*t9548*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 49, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec3_five_link_walker.hh"

namespace RightStance
{

void J_Ce1_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
