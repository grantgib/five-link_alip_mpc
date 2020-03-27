/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:51:21 GMT-04:00
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
  double t5164;
  double t174;
  double t439;
  double t5165;
  double t5212;
  double t152;
  double t4594;
  double t5201;
  double t5207;
  double t5208;
  double t5213;
  double t5218;
  double t5220;
  double t5222;
  double t5224;
  double t5257;
  double t5258;
  double t5273;
  double t5320;
  double t5331;
  double t5398;
  double t5395;
  double t5396;
  double t5399;
  double t5397;
  double t5400;
  double t5401;
  double t5402;
  double t5403;
  double t5404;
  double t5405;
  double t5406;
  double t5407;
  double t5416;
  double t5417;
  double t5418;
  double t5419;
  double t5420;
  double t5448;
  double t5449;
  double t5450;
  double t5445;
  double t5446;
  double t5447;
  double t5230;
  double t5231;
  double t5232;
  double t5452;
  double t5454;
  double t5455;
  double t5382;
  double t5375;
  double t5376;
  double t5377;
  double t5378;
  double t5383;
  double t5463;
  double t5469;
  double t5486;
  double t5487;
  double t5488;
  double t5480;
  double t5481;
  double t5482;
  double t5409;
  double t5410;
  double t5414;
  double t5490;
  double t5491;
  double t5492;
  double t5437;
  double t5433;
  double t5434;
  double t5435;
  double t5436;
  double t5438;
  double t5504;
  double t5513;
  double t5466;
  double t5467;
  double t5462;
  double t5464;
  double t5459;
  double t5460;
  double t5475;
  double t5476;
  double t5509;
  double t5510;
  double t5503;
  double t5507;
  double t5499;
  double t5501;
  double t5533;
  double t5534;
  double t5595;
  double t5596;
  double t5597;
  double t5603;
  double t5604;
  double t5608;
  double t5670;
  double t5693;
  double t5694;
  double t5696;
  double t6507;
  double t6699;
  double t5252;
  double t5370;
  double t5371;
  double t5372;
  double t5335;
  double t5337;
  double t5341;
  double t5343;
  double t7412;
  double t7474;
  double t7476;
  double t7479;
  double t7482;
  double t5451;
  double t5456;
  double t5457;
  double t5458;
  double t5468;
  double t5538;
  double t5542;
  double t5543;
  double t5544;
  double t5545;
  double t5547;
  double t8156;
  double t8184;
  double t5583;
  double t5587;
  double t5588;
  double t5589;
  double t5590;
  double t5591;
  double t5602;
  double t5609;
  double t5610;
  double t5612;
  double t5613;
  double t5614;
  double t8286;
  double t8289;
  double t8293;
  double t7485;
  double t7490;
  double t7494;
  double t8029;
  double t8108;
  double t8114;
  double t8146;
  double t8149;
  double t8153;
  double t8155;
  double t8188;
  double t8213;
  double t8220;
  double t8224;
  double t8237;
  double t8280;
  double t9018;
  double t9025;
  double t9140;
  double t9839;
  double t9870;
  double t9259;
  double t9882;
  double t9884;
  double t9530;
  double t5415;
  double t5430;
  double t5431;
  double t5432;
  double t5421;
  double t5422;
  double t5424;
  double t5428;
  double t9978;
  double t10026;
  double t10030;
  double t11440;
  double t11499;
  double t5489;
  double t5496;
  double t5497;
  double t5498;
  double t5512;
  double t5557;
  double t5558;
  double t5562;
  double t5563;
  double t5564;
  double t5569;
  double t11964;
  double t11996;
  double t5621;
  double t5622;
  double t5623;
  double t5667;
  double t5668;
  double t5669;
  double t5695;
  double t6735;
  double t6777;
  double t7038;
  double t7082;
  double t7106;
  double t12037;
  double t12038;
  double t12059;
  double t11583;
  double t11682;
  double t11782;
  double t11793;
  double t11899;
  double t11922;
  double t11941;
  double t11950;
  double t11952;
  double t11956;
  double t12006;
  double t12015;
  double t12016;
  double t12022;
  double t12023;
  double t12036;
  double t12061;
  double t12065;
  double t12189;
  double t12415;
  double t12416;
  double t12236;
  double t12418;
  double t12419;
  double t12271;
  double t5549;
  double t5554;
  double t5571;
  double t5576;
  double t12461;
  double t12462;
  double t12463;
  double t12464;
  double t12465;
  double t12466;
  double t12467;
  double t12471;
  double t12476;
  double t12484;
  double t12485;
  double t12486;
  double t12487;
  double t12488;
  double t12489;
  double t12490;
  double t12491;
  double t12492;
  double t12493;
  double t12499;
  double t12500;
  double t12501;
  double t12502;
  double t12503;
  double t12510;
  double t12514;
  double t12520;
  double t12530;
  double t12531;
  double t12532;
  double t12537;
  double t12541;
  double t12542;
  double t12543;
  double t5470;
  double t5473;
  double t5474;
  double t5520;
  double t5531;
  double t5532;
  double t5461;
  double t5465;
  double t5471;
  double t5479;
  double t5502;
  double t5508;
  double t5521;
  double t5535;
  double t5536;
  double t12572;
  double t12588;
  double t12590;
  double t8192;
  double t12609;
  double t8301;
  double t9095;
  double t9101;
  double t9157;
  double t9490;
  double t9589;
  double t12619;
  double t12620;
  double t9732;
  double t9744;
  double t9764;
  double t9700;
  double t9705;
  double t9710;
  double t12621;
  double t12624;
  double t12625;
  double t12626;
  double t12627;
  double t9813;
  double t12631;
  double t9879;
  double t9885;
  double t9886;
  double t12633;
  double t9891;
  double t9931;
  double t9937;
  double t12578;
  double t12597;
  double t12598;
  double t12013;
  double t12612;
  double t12060;
  double t12080;
  double t12081;
  double t12217;
  double t12263;
  double t12272;
  double t12652;
  double t12653;
  double t12371;
  double t12372;
  double t12375;
  double t12302;
  double t12303;
  double t12369;
  double t12654;
  double t12657;
  double t12658;
  double t12659;
  double t12660;
  double t12384;
  double t12664;
  double t12417;
  double t12425;
  double t12429;
  double t12666;
  double t12431;
  double t12435;
  double t12445;
  double t12515;
  double t5229;
  double t5345;
  double t5384;
  double t5393;
  double t5394;
  double t5408;
  double t5429;
  double t5439;
  double t5440;
  double t5444;
  double t12685;
  double t12686;
  double t12687;
  double t12688;
  double t12689;
  double t12690;
  double t12691;
  double t5582;
  double t5611;
  double t5620;
  double t6826;
  double t7135;
  double t7174;
  double t12608;
  double t12610;
  double t12611;
  double t12613;
  double t12614;
  double t12615;
  double t9104;
  double t9595;
  double t9598;
  double t12632;
  double t12634;
  double t12635;
  double t9888;
  double t9938;
  double t9944;
  double t12646;
  double t12647;
  double t12648;
  double t12131;
  double t12275;
  double t12276;
  double t12665;
  double t12667;
  double t12668;
  double t12430;
  double t12446;
  double t12457;
  double t12679;
  double t12680;
  double t12681;
  double t12547;
  double t12548;
  double t12549;
  double t12550;
  double t12551;
  double t12552;
  double t12553;
  double t12554;
  double t7180;
  double t12573;
  double t12574;
  double t12575;
  double t7833;
  double t12622;
  double t9728;
  double t9767;
  double t9786;
  double t12639;
  double t12640;
  double t12641;
  double t12561;
  double t12697;
  double t12744;
  double t12745;
  double t12746;
  double t12747;
  double t12565;
  double t12698;
  double t12584;
  double t12585;
  double t12586;
  double t11784;
  double t12655;
  double t12370;
  double t12378;
  double t12382;
  double t12672;
  double t12673;
  double t12674;
  double t12569;
  double t12699;
  double t12770;
  double t12771;
  double t12772;
  double t12773;
  double t12570;
  double t12700;
  t5164 = Cos(var1[3]);
  t174 = Cos(var1[4]);
  t439 = Sin(var1[3]);
  t5165 = Sin(var1[4]);
  t5212 = Cos(var1[2]);
  t152 = Sin(var1[2]);
  t4594 = -1.*t174*t439;
  t5201 = -1.*t5164*t5165;
  t5207 = t4594 + t5201;
  t5208 = -1.*t152*t5207;
  t5213 = t5164*t174;
  t5218 = -1.*t439*t5165;
  t5220 = t5213 + t5218;
  t5222 = -1.*t5212*t5220;
  t5224 = t5208 + t5222;
  t5257 = -1.*t174;
  t5258 = 1. + t5257;
  t5273 = 0.4*t5258;
  t5320 = 0.64*t174;
  t5331 = t5273 + t5320;
  t5398 = Cos(var1[5]);
  t5395 = Cos(var1[6]);
  t5396 = Sin(var1[5]);
  t5399 = Sin(var1[6]);
  t5397 = -1.*t5395*t5396;
  t5400 = -1.*t5398*t5399;
  t5401 = t5397 + t5400;
  t5402 = -1.*t152*t5401;
  t5403 = t5398*t5395;
  t5404 = -1.*t5396*t5399;
  t5405 = t5403 + t5404;
  t5406 = -1.*t5212*t5405;
  t5407 = t5402 + t5406;
  t5416 = -1.*t5395;
  t5417 = 1. + t5416;
  t5418 = 0.4*t5417;
  t5419 = 0.64*t5395;
  t5420 = t5418 + t5419;
  t5448 = t5212*t5164;
  t5449 = -1.*t152*t439;
  t5450 = t5448 + t5449;
  t5445 = -1.*t5164*t152;
  t5446 = -1.*t5212*t439;
  t5447 = t5445 + t5446;
  t5230 = -1.*t5212*t5164;
  t5231 = t152*t439;
  t5232 = t5230 + t5231;
  t5452 = t5164*t152;
  t5454 = t5212*t439;
  t5455 = t5452 + t5454;
  t5382 = -1.*t152*t5220;
  t5375 = t174*t439;
  t5376 = t5164*t5165;
  t5377 = t5375 + t5376;
  t5378 = -1.*t5212*t5377;
  t5383 = t5378 + t5382;
  t5463 = t5212*t5220;
  t5469 = t152*t5220;
  t5486 = t5212*t5398;
  t5487 = -1.*t152*t5396;
  t5488 = t5486 + t5487;
  t5480 = -1.*t5398*t152;
  t5481 = -1.*t5212*t5396;
  t5482 = t5480 + t5481;
  t5409 = -1.*t5212*t5398;
  t5410 = t152*t5396;
  t5414 = t5409 + t5410;
  t5490 = t5398*t152;
  t5491 = t5212*t5396;
  t5492 = t5490 + t5491;
  t5437 = -1.*t152*t5405;
  t5433 = t5395*t5396;
  t5434 = t5398*t5399;
  t5435 = t5433 + t5434;
  t5436 = -1.*t5212*t5435;
  t5438 = t5436 + t5437;
  t5504 = t5212*t5405;
  t5513 = t152*t5405;
  t5466 = t152*t5207;
  t5467 = t5466 + t5463;
  t5462 = -1.*t152*t5377;
  t5464 = t5462 + t5463;
  t5459 = t5212*t5207;
  t5460 = t5459 + t5382;
  t5475 = t5212*t5377;
  t5476 = t5475 + t5469;
  t5509 = t152*t5401;
  t5510 = t5509 + t5504;
  t5503 = -1.*t152*t5435;
  t5507 = t5503 + t5504;
  t5499 = t5212*t5401;
  t5501 = t5499 + t5437;
  t5533 = t5212*t5435;
  t5534 = t5533 + t5513;
  t5595 = t5331*t439;
  t5596 = 0.24*t5164*t5165;
  t5597 = t5595 + t5596;
  t5603 = t5164*t5331;
  t5604 = -0.24*t439*t5165;
  t5608 = t5603 + t5604;
  t5670 = t5420*t5396;
  t5693 = 0.24*t5398*t5399;
  t5694 = t5670 + t5693;
  t5696 = t5398*t5420;
  t6507 = -0.24*t5396*t5399;
  t6699 = t5696 + t6507;
  t5252 = 0.748*t5232;
  t5370 = t5331*t5165;
  t5371 = -0.24*t174*t5165;
  t5372 = t5370 + t5371;
  t5335 = t5331*t174;
  t5337 = Power(t5165,2);
  t5341 = 0.24*t5337;
  t5343 = t5335 + t5341;
  t7412 = -1.*t5164*t174;
  t7474 = t439*t5165;
  t7476 = t7412 + t7474;
  t7479 = t5212*t7476;
  t7482 = t5208 + t7479;
  t5451 = 20.4*t5447*t5450;
  t5456 = 6.8*t5455*t5450;
  t5457 = 20.4*t5447*t5232;
  t5458 = 6.8*t5455*t5232;
  t5468 = -1.*t5212*t5207;
  t5538 = Power(t5447,2);
  t5542 = 13.6*t5538;
  t5543 = 13.6*t5447*t5455;
  t5544 = Power(t5450,2);
  t5545 = 13.6*t5544;
  t5547 = 13.6*t5450*t5232;
  t8156 = t152*t7476;
  t8184 = t5459 + t8156;
  t5583 = Power(t5164,2);
  t5587 = 0.11*t5583;
  t5588 = Power(t439,2);
  t5589 = 0.11*t5588;
  t5590 = t5587 + t5589;
  t5591 = 6.8*t5232*t5590;
  t5602 = -1.*t5597*t5220;
  t5609 = -1.*t5207*t5608;
  t5610 = t5602 + t5609;
  t5612 = t5597*t5377;
  t5613 = t5220*t5608;
  t5614 = t5612 + t5613;
  t8286 = -1.*t5331*t439;
  t8289 = -0.24*t5164*t5165;
  t8293 = t8286 + t8289;
  t7485 = -0.384*var2[4]*t7482;
  t7490 = 3.2*t5372*t5460;
  t7494 = 3.2*t5343*t7482;
  t8029 = 6.4*t5464*t5460;
  t8108 = 3.2*t5467*t5383;
  t8114 = 3.2*t5224*t5476;
  t8146 = 6.4*t5460*t7482;
  t8149 = -1.*t152*t7476;
  t8153 = t5468 + t8149;
  t8155 = 3.2*t5467*t8153;
  t8188 = 3.2*t5224*t8184;
  t8213 = 6.4*t5467*t5464;
  t8220 = 6.4*t5460*t5476;
  t8224 = 6.4*t5467*t7482;
  t8237 = 6.4*t5460*t8184;
  t8280 = 3.2*t5460*t5610;
  t9018 = t5597*t5220;
  t9025 = t5207*t5608;
  t9140 = 3.2*t5614*t7482;
  t9839 = -0.24*t174*t439;
  t9870 = t9839 + t8289;
  t9259 = -1.*t5207*t5597;
  t9882 = 0.24*t5164*t174;
  t9884 = t9882 + t5604;
  t9530 = -1.*t5608*t7476;
  t5415 = 0.748*t5414;
  t5430 = t5420*t5399;
  t5431 = -0.24*t5395*t5399;
  t5432 = t5430 + t5431;
  t5421 = t5420*t5395;
  t5422 = Power(t5399,2);
  t5424 = 0.24*t5422;
  t5428 = t5421 + t5424;
  t9978 = -1.*t5398*t5395;
  t10026 = t5396*t5399;
  t10030 = t9978 + t10026;
  t11440 = t5212*t10030;
  t11499 = t5402 + t11440;
  t5489 = 20.4*t5482*t5488;
  t5496 = 6.8*t5492*t5488;
  t5497 = 20.4*t5482*t5414;
  t5498 = 6.8*t5492*t5414;
  t5512 = -1.*t5212*t5401;
  t5557 = Power(t5482,2);
  t5558 = 13.6*t5557;
  t5562 = 13.6*t5482*t5492;
  t5563 = Power(t5488,2);
  t5564 = 13.6*t5563;
  t5569 = 13.6*t5488*t5414;
  t11964 = t152*t10030;
  t11996 = t5499 + t11964;
  t5621 = Power(t5398,2);
  t5622 = 0.11*t5621;
  t5623 = Power(t5396,2);
  t5667 = 0.11*t5623;
  t5668 = t5622 + t5667;
  t5669 = 6.8*t5414*t5668;
  t5695 = -1.*t5694*t5405;
  t6735 = -1.*t5401*t6699;
  t6777 = t5695 + t6735;
  t7038 = t5694*t5435;
  t7082 = t5405*t6699;
  t7106 = t7038 + t7082;
  t12037 = -1.*t5420*t5396;
  t12038 = -0.24*t5398*t5399;
  t12059 = t12037 + t12038;
  t11583 = -0.384*var2[6]*t11499;
  t11682 = 3.2*t5432*t5501;
  t11782 = 3.2*t5428*t11499;
  t11793 = 6.4*t5507*t5501;
  t11899 = 3.2*t5510*t5438;
  t11922 = 3.2*t5407*t5534;
  t11941 = 6.4*t5501*t11499;
  t11950 = -1.*t152*t10030;
  t11952 = t5512 + t11950;
  t11956 = 3.2*t5510*t11952;
  t12006 = 3.2*t5407*t11996;
  t12015 = 6.4*t5510*t5507;
  t12016 = 6.4*t5501*t5534;
  t12022 = 6.4*t5510*t11499;
  t12023 = 6.4*t5501*t11996;
  t12036 = 3.2*t5501*t6777;
  t12061 = t5694*t5405;
  t12065 = t5401*t6699;
  t12189 = 3.2*t7106*t11499;
  t12415 = -0.24*t5395*t5396;
  t12416 = t12415 + t12038;
  t12236 = -1.*t5401*t5694;
  t12418 = 0.24*t5398*t5395;
  t12419 = t12418 + t6507;
  t12271 = -1.*t6699*t10030;
  t5549 = Power(t5464,2);
  t5554 = Power(t5460,2);
  t5571 = Power(t5507,2);
  t5576 = Power(t5501,2);
  t12461 = 13.6*t5447*t5450;
  t12462 = 13.6*t5455*t5450;
  t12463 = 6.4*t5467*t5460;
  t12464 = 6.4*t5464*t5476;
  t12465 = 13.6*t5482*t5488;
  t12466 = 13.6*t5492*t5488;
  t12467 = 6.4*t5510*t5501;
  t12471 = 6.4*t5507*t5534;
  t12476 = t12461 + t12462 + t12463 + t12464 + t12465 + t12466 + t12467 + t12471;
  t12484 = 6.8*t5538;
  t12485 = 6.8*t5447*t5455;
  t12486 = 6.8*t5544;
  t12487 = 6.8*t5450*t5232;
  t12488 = 3.2*t5224*t5467;
  t12489 = 3.2*t5549;
  t12490 = 3.2*t5554;
  t12491 = 3.2*t5383*t5476;
  t12492 = 6.8*t5557;
  t12493 = 6.8*t5482*t5492;
  t12499 = 6.8*t5563;
  t12500 = 6.8*t5488*t5414;
  t12501 = 3.2*t5407*t5510;
  t12502 = 3.2*t5571;
  t12503 = 3.2*t5576;
  t12510 = 3.2*t5438*t5534;
  t12514 = t12484 + t12485 + t12486 + t12487 + t12488 + t12489 + t12490 + t12491 + t12492 + t12493 + t12499 + t12500 + t12501 + t12502 + t12503 + t12510;
  t12520 = 0.748*t5447;
  t12530 = 3.2*t5372*t5464;
  t12531 = 3.2*t5343*t5460;
  t12532 = t12520 + t12530 + t12531;
  t12537 = 0.748*t5482;
  t12541 = 3.2*t5432*t5507;
  t12542 = 3.2*t5428*t5501;
  t12543 = t12537 + t12541 + t12542;
  t5470 = t5468 + t5469;
  t5473 = t152*t5377;
  t5474 = t5473 + t5222;
  t5520 = t5512 + t5513;
  t5531 = t152*t5435;
  t5532 = t5531 + t5406;
  t5461 = 9.6*t5224*t5460;
  t5465 = 9.6*t5464*t5383;
  t5471 = 3.2*t5467*t5470;
  t5479 = 3.2*t5474*t5476;
  t5502 = 9.6*t5407*t5501;
  t5508 = 9.6*t5507*t5438;
  t5521 = 3.2*t5510*t5520;
  t5535 = 3.2*t5532*t5534;
  t5536 = t5451 + t5456 + t5457 + t5458 + t5461 + t5465 + t5471 + t5479 + t5489 + t5496 + t5497 + t5498 + t5502 + t5508 + t5521 + t5535;
  t12572 = 0.748*t5455;
  t12588 = Power(t5232,2);
  t12590 = 13.6*t12588;
  t8192 = t5451 + t5456 + t5457 + t5458 + t8029 + t8108 + t8114 + t8146 + t8155 + t8188;
  t12609 = 6.8*t5455*t5590;
  t8301 = t8293*t5220;
  t9095 = t5377*t5608;
  t9101 = t8301 + t9018 + t9025 + t9095;
  t9157 = -1.*t5207*t8293;
  t9490 = -1.*t5220*t5608;
  t9589 = t9157 + t9259 + t9490 + t9530;
  t12619 = -0.384*var2[4]*t8153;
  t12620 = 3.2*t5372*t5224;
  t9732 = -1.*t5331*t5165;
  t9744 = 0.24*t174*t5165;
  t9764 = t9732 + t9744;
  t9700 = Power(t174,2);
  t9705 = -0.24*t9700;
  t9710 = t5335 + t9705;
  t12621 = 3.2*t5343*t8153;
  t12624 = 6.4*t5224*t5464;
  t12625 = 6.4*t5460*t5383;
  t12626 = 6.4*t5224*t7482;
  t12627 = 6.4*t5460*t8153;
  t9813 = t8029 + t8108 + t8114 + t8146 + t8155 + t8188;
  t12631 = 3.2*t5224*t5610;
  t9879 = t9870*t5220;
  t9885 = t5377*t9884;
  t9886 = t9879 + t9018 + t9025 + t9885;
  t12633 = 3.2*t5614*t8153;
  t9891 = -1.*t5207*t9870;
  t9931 = -1.*t5220*t9884;
  t9937 = t9891 + t9259 + t9931 + t9530;
  t12578 = 0.748*t5492;
  t12597 = Power(t5414,2);
  t12598 = 13.6*t12597;
  t12013 = t5489 + t5496 + t5497 + t5498 + t11793 + t11899 + t11922 + t11941 + t11956 + t12006;
  t12612 = 6.8*t5492*t5668;
  t12060 = t12059*t5405;
  t12080 = t5435*t6699;
  t12081 = t12060 + t12061 + t12065 + t12080;
  t12217 = -1.*t5401*t12059;
  t12263 = -1.*t5405*t6699;
  t12272 = t12217 + t12236 + t12263 + t12271;
  t12652 = -0.384*var2[6]*t11952;
  t12653 = 3.2*t5432*t5407;
  t12371 = -1.*t5420*t5399;
  t12372 = 0.24*t5395*t5399;
  t12375 = t12371 + t12372;
  t12302 = Power(t5395,2);
  t12303 = -0.24*t12302;
  t12369 = t5421 + t12303;
  t12654 = 3.2*t5428*t11952;
  t12657 = 6.4*t5407*t5507;
  t12658 = 6.4*t5501*t5438;
  t12659 = 6.4*t5407*t11499;
  t12660 = 6.4*t5501*t11952;
  t12384 = t11793 + t11899 + t11922 + t11941 + t11956 + t12006;
  t12664 = 3.2*t5407*t6777;
  t12417 = t12416*t5405;
  t12425 = t5435*t12419;
  t12429 = t12417 + t12061 + t12065 + t12425;
  t12666 = 3.2*t7106*t11952;
  t12431 = -1.*t5401*t12416;
  t12435 = -1.*t5405*t12419;
  t12445 = t12431 + t12236 + t12435 + t12271;
  t12515 = -0.5*var2[2]*t12514;
  t5229 = -0.384*var2[4]*t5224;
  t5345 = 3.2*t5343*t5224;
  t5384 = 3.2*t5372*t5383;
  t5393 = t5252 + t5345 + t5384;
  t5394 = -0.5*var2[3]*t5393;
  t5408 = -0.384*var2[6]*t5407;
  t5429 = 3.2*t5428*t5407;
  t5439 = 3.2*t5432*t5438;
  t5440 = t5415 + t5429 + t5439;
  t5444 = -0.5*var2[5]*t5440;
  t12685 = 13.6*t5447*t5232;
  t12686 = 6.4*t5224*t5460;
  t12687 = 6.4*t5464*t5383;
  t12688 = 13.6*t5482*t5414;
  t12689 = 6.4*t5407*t5501;
  t12690 = 6.4*t5507*t5438;
  t12691 = t12461 + t12685 + t12686 + t12687 + t12465 + t12688 + t12689 + t12690;
  t5582 = -2.88*t5212;
  t5611 = 3.2*t5383*t5610;
  t5620 = 3.2*t5224*t5614;
  t6826 = 3.2*t5438*t6777;
  t7135 = 3.2*t5407*t7106;
  t7174 = t5582 + t5591 + t5611 + t5620 + t5669 + t6826 + t7135;
  t12608 = 2.88*t152;
  t12610 = 3.2*t5474*t5610;
  t12611 = 3.2*t5470*t5614;
  t12613 = 3.2*t5532*t6777;
  t12614 = 3.2*t5520*t7106;
  t12615 = t12608 + t12609 + t12610 + t12611 + t12612 + t12613 + t12614;
  t9104 = 3.2*t5460*t9101;
  t9595 = 3.2*t5464*t9589;
  t9598 = t5591 + t8280 + t9104 + t9140 + t9595;
  t12632 = 3.2*t5224*t9101;
  t12634 = 3.2*t5383*t9589;
  t12635 = t12609 + t12631 + t12632 + t12633 + t12634;
  t9888 = 3.2*t5460*t9886;
  t9938 = 3.2*t5464*t9937;
  t9944 = t8280 + t9888 + t9140 + t9938;
  t12646 = 3.2*t5224*t9886;
  t12647 = 3.2*t5383*t9937;
  t12648 = t12631 + t12646 + t12633 + t12647;
  t12131 = 3.2*t5501*t12081;
  t12275 = 3.2*t5507*t12272;
  t12276 = t5669 + t12036 + t12131 + t12189 + t12275;
  t12665 = 3.2*t5407*t12081;
  t12667 = 3.2*t5438*t12272;
  t12668 = t12612 + t12664 + t12665 + t12666 + t12667;
  t12430 = 3.2*t5501*t12429;
  t12446 = 3.2*t5507*t12445;
  t12457 = t12036 + t12430 + t12189 + t12446;
  t12679 = 3.2*t5407*t12429;
  t12680 = 3.2*t5438*t12445;
  t12681 = t12664 + t12679 + t12666 + t12680;
  t12547 = -2.88*t152;
  t12548 = 6.8*t5447*t5590;
  t12549 = 3.2*t5464*t5610;
  t12550 = 3.2*t5460*t5614;
  t12551 = 6.8*t5482*t5668;
  t12552 = 3.2*t5507*t6777;
  t12553 = 3.2*t5501*t7106;
  t12554 = t12547 + t12548 + t12549 + t12550 + t12551 + t12552 + t12553;
  t7180 = -0.5*var2[2]*t7174;
  t12573 = 3.2*t5372*t5474;
  t12574 = 3.2*t5343*t5470;
  t12575 = t12572 + t12573 + t12574;
  t7833 = t5252 + t7490 + t7494;
  t12622 = t12572 + t12620 + t12621;
  t9728 = 3.2*t9710*t5464;
  t9767 = 3.2*t9764*t5460;
  t9786 = t9728 + t7490 + t9767 + t7494;
  t12639 = 3.2*t9764*t5224;
  t12640 = 3.2*t9710*t5383;
  t12641 = t12620 + t12639 + t12640 + t12621;
  t12561 = -0.5*var2[2]*t12532;
  t12697 = -0.5*var2[2]*t5393;
  t12744 = -0.384*var2[0]*t7482;
  t12745 = -0.384*var2[1]*t8153;
  t12746 = t12744 + t12745;
  t12747 = var2[2]*t12746;
  t12565 = -0.384*var2[2]*t5460;
  t12698 = -0.384*var2[2]*t5224;
  t12584 = 3.2*t5432*t5532;
  t12585 = 3.2*t5428*t5520;
  t12586 = t12578 + t12584 + t12585;
  t11784 = t5415 + t11682 + t11782;
  t12655 = t12578 + t12653 + t12654;
  t12370 = 3.2*t12369*t5507;
  t12378 = 3.2*t12375*t5501;
  t12382 = t12370 + t11682 + t12378 + t11782;
  t12672 = 3.2*t12375*t5407;
  t12673 = 3.2*t12369*t5438;
  t12674 = t12653 + t12672 + t12673 + t12654;
  t12569 = -0.5*var2[2]*t12543;
  t12699 = -0.5*var2[2]*t5440;
  t12770 = -0.384*var2[0]*t11499;
  t12771 = -0.384*var2[1]*t11952;
  t12772 = t12770 + t12771;
  t12773 = var2[2]*t12772;
  t12570 = -0.384*var2[2]*t5501;
  t12700 = -0.384*var2[2]*t5407;
  p_output1[0]=(t5229 + t5394 + t5408 + t5444 + t7180 - 0.5*(6.4*t5224*t5467 + 6.4*t5383*t5476 + 6.4*t5407*t5510 + 6.4*t5438*t5534 + t5542 + t5543 + t5545 + t5547 + 6.4*t5549 + 6.4*t5554 + t5558 + t5562 + t5564 + t5569 + 6.4*t5571 + 6.4*t5576)*var2[0] - 0.5*t5536*var2[1])*var2[2];
  p_output1[1]=var2[2]*(t7485 - 0.5*(t5542 + t5543 + t5545 + t5547 + t8213 + t8220 + t8224 + t8237)*var2[0] - 0.5*t8192*var2[1] - 0.5*t9598*var2[2] - 0.5*t7833*var2[3]);
  p_output1[2]=var2[2]*(t7485 - 0.5*(t8213 + t8220 + t8224 + t8237)*var2[0] - 0.5*t9813*var2[1] - 0.5*t9944*var2[2] - 0.5*t9786*var2[3]);
  p_output1[3]=var2[2]*(t11583 - 0.5*(t12015 + t12016 + t12022 + t12023 + t5558 + t5562 + t5564 + t5569)*var2[0] - 0.5*t12013*var2[1] - 0.5*t12276*var2[2] - 0.5*t11784*var2[5]);
  p_output1[4]=var2[2]*(t11583 - 0.5*(t12015 + t12016 + t12022 + t12023)*var2[0] - 0.5*t12384*var2[1] - 0.5*t12457*var2[2] - 0.5*t12382*var2[5]);
  p_output1[5]=-0.5*t12476*var2[2];
  p_output1[6]=t12515;
  p_output1[7]=-0.5*t12476*var2[0] - 0.5*t12514*var2[1] - 1.*t12554*var2[2] - 0.5*t12532*var2[3] - 0.384*t5460*var2[4] - 0.5*t12543*var2[5] - 0.384*t5501*var2[6];
  p_output1[8]=t12561;
  p_output1[9]=t12565;
  p_output1[10]=t12569;
  p_output1[11]=t12570;
  p_output1[12]=var2[2]*(-0.5*t5536*var2[0] - 0.5*(t12590 + t12598 + 6.4*Power(t5224,2) + 6.4*Power(t5383,2) + 6.4*Power(t5407,2) + 6.4*Power(t5438,2) + 6.4*t5460*t5470 + 6.4*t5464*t5474 + 6.4*t5501*t5520 + 6.4*t5507*t5532 + t5542 + t5543 + t5547 + t5558 + t5562 + t5569)*var2[1] - 0.5*t12615*var2[2] - 0.5*t12575*var2[3] - 0.384*t5470*var2[4] - 0.5*t12586*var2[5] - 0.384*t5520*var2[6]);
  p_output1[13]=var2[2]*(t12619 - 0.5*t8192*var2[0] - 0.5*(t12590 + t12624 + t12625 + t12626 + t12627 + t5542 + t5543 + t5547)*var2[1] - 0.5*t12635*var2[2] - 0.5*t12622*var2[3]);
  p_output1[14]=var2[2]*(t12619 - 0.5*t9813*var2[0] - 0.5*(t12624 + t12625 + t12626 + t12627)*var2[1] - 0.5*t12648*var2[2] - 0.5*t12641*var2[3]);
  p_output1[15]=var2[2]*(t12652 - 0.5*t12013*var2[0] - 0.5*(t12598 + t12657 + t12658 + t12659 + t12660 + t5558 + t5562 + t5569)*var2[1] - 0.5*t12668*var2[2] - 0.5*t12655*var2[5]);
  p_output1[16]=var2[2]*(t12652 - 0.5*t12384*var2[0] - 0.5*(t12657 + t12658 + t12659 + t12660)*var2[1] - 0.5*t12681*var2[2] - 0.5*t12674*var2[5]);
  p_output1[17]=t12515;
  p_output1[18]=-0.5*t12691*var2[2];
  p_output1[19]=t5229 + t5394 + t5408 + t5444 - 0.5*t12514*var2[0] - 0.5*t12691*var2[1] - 1.*t7174*var2[2];
  p_output1[20]=t12697;
  p_output1[21]=t12698;
  p_output1[22]=t12699;
  p_output1[23]=t12700;
  p_output1[24]=(-0.5*t7174*var2[0] - 0.5*t12615*var2[1])*var2[2];
  p_output1[25]=(-0.5*t9598*var2[0] - 0.5*t12635*var2[1])*var2[2];
  p_output1[26]=(-0.5*t9944*var2[0] - 0.5*t12648*var2[1])*var2[2];
  p_output1[27]=(-0.5*t12276*var2[0] - 0.5*t12668*var2[1])*var2[2];
  p_output1[28]=(-0.5*t12457*var2[0] - 0.5*t12681*var2[1])*var2[2];
  p_output1[29]=-0.5*t12554*var2[2];
  p_output1[30]=t7180;
  p_output1[31]=-0.5*t12554*var2[0] - 0.5*t7174*var2[1];
  p_output1[32]=(-0.5*t5393*var2[0] - 0.5*t12575*var2[1])*var2[2];
  p_output1[33]=(-0.5*t7833*var2[0] - 0.5*t12622*var2[1])*var2[2];
  p_output1[34]=(-0.5*t9786*var2[0] - 0.5*t12641*var2[1])*var2[2];
  p_output1[35]=t12561;
  p_output1[36]=t12697;
  p_output1[37]=-0.5*t12532*var2[0] - 0.5*t5393*var2[1];
  p_output1[38]=(-0.384*t5224*var2[0] - 0.384*t5470*var2[1])*var2[2];
  p_output1[39]=t12747;
  p_output1[40]=t12747;
  p_output1[41]=t12565;
  p_output1[42]=t12698;
  p_output1[43]=-0.384*t5460*var2[0] - 0.384*t5224*var2[1];
  p_output1[44]=(-0.5*t5440*var2[0] - 0.5*t12586*var2[1])*var2[2];
  p_output1[45]=(-0.5*t11784*var2[0] - 0.5*t12655*var2[1])*var2[2];
  p_output1[46]=(-0.5*t12382*var2[0] - 0.5*t12674*var2[1])*var2[2];
  p_output1[47]=t12569;
  p_output1[48]=t12699;
  p_output1[49]=-0.5*t12543*var2[0] - 0.5*t5440*var2[1];
  p_output1[50]=(-0.384*t5407*var2[0] - 0.384*t5520*var2[1])*var2[2];
  p_output1[51]=t12773;
  p_output1[52]=t12773;
  p_output1[53]=t12570;
  p_output1[54]=t12700;
  p_output1[55]=-0.384*t5501*var2[0] - 0.384*t5407*var2[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 56, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec3_five_link_walker.hh"

namespace RightStance
{

void J_Ce2_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
