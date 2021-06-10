/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:37:02 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t937;
  double t191;
  double t214;
  double t219;
  double t373;
  double t661;
  double t1356;
  double t1357;
  double t1463;
  double t3348;
  double t3421;
  double t3423;
  double t3437;
  double t3517;
  double t3522;
  double t5320;
  double t5642;
  double t5662;
  double t7271;
  double t7444;
  double t7483;
  double t8273;
  double t8778;
  double t9079;
  double t10776;
  double t11140;
  double t11859;
  double t13007;
  double t13009;
  double t13013;
  double t13140;
  double t13150;
  double t13171;
  double t13172;
  double t13229;
  double t13226;
  double t13227;
  double t13230;
  double t13223;
  double t13228;
  double t13231;
  double t13232;
  double t13234;
  double t13235;
  double t13236;
  double t13237;
  double t13224;
  double t13225;
  double t13239;
  double t13308;
  double t13319;
  double t13350;
  double t13351;
  double t13352;
  double t13353;
  double t13358;
  double t13360;
  double t13368;
  double t13369;
  double t13370;
  double t13371;
  double t13233;
  double t13238;
  double t13337;
  double t13343;
  double t13344;
  double t13345;
  double t13347;
  double t13348;
  double t13349;
  double t13390;
  double t13391;
  double t13392;
  double t13402;
  double t13403;
  double t13359;
  double t13365;
  double t13366;
  double t13367;
  double t13372;
  double t13373;
  double t13374;
  double t13375;
  double t13376;
  double t13377;
  double t13378;
  double t13423;
  double t13424;
  double t13425;
  double t13132;
  double t13133;
  double t13134;
  double t13135;
  double t13136;
  double t13137;
  double t13138;
  double t13139;
  double t13149;
  double t13502;
  double t13503;
  double t13504;
  double t13505;
  double t13506;
  double t13509;
  double t13510;
  double t13511;
  double t13512;
  double t13513;
  double t13514;
  double t13515;
  double t13516;
  double t13517;
  double t13528;
  double t13529;
  double t13530;
  double t13507;
  double t13518;
  double t13519;
  double t13520;
  double t13521;
  double t13541;
  double t13542;
  double t13543;
  double t13545;
  double t13546;
  double t13623;
  double t13624;
  double t13389;
  double t13393;
  double t13621;
  double t13625;
  double t13626;
  double t13422;
  double t13426;
  double t13427;
  double t13428;
  t937 = -1.*var4[1];
  t191 = -1. + var5[0];
  t214 = -1. + var6[0];
  t219 = 1/t214;
  t373 = -1.*t191*t219;
  t661 = 1. + t373;
  t1356 = var4[0] + t937;
  t1357 = Power(t1356,-7);
  t1463 = -1.*var1[0];
  t3348 = t1463 + var1[1];
  t3421 = t191*t219*t3348;
  t3423 = t937 + var1[0] + t3421;
  t3437 = Power(t3423,6);
  t3517 = Power(t1356,-6);
  t3522 = Power(t3423,5);
  t5320 = 1/t1356;
  t5642 = -1.*t5320*t3423;
  t5662 = 1. + t5642;
  t7271 = Power(t1356,-5);
  t7444 = Power(t3423,4);
  t7483 = Power(t5662,2);
  t8273 = Power(t1356,-4);
  t8778 = Power(t3423,3);
  t9079 = Power(t5662,3);
  t10776 = Power(t1356,-3);
  t11140 = Power(t3423,2);
  t11859 = Power(t5662,4);
  t13007 = Power(t1356,-2);
  t13009 = Power(t5662,5);
  t13013 = Power(t5662,6);
  t13140 = Power(t3423,7);
  t13150 = Power(t1356,-8);
  t13171 = -1.*t13007*t3423;
  t13172 = t5320 + t13171;
  t13229 = Cos(var2[2]);
  t13226 = Cos(var2[3]);
  t13227 = Sin(var2[2]);
  t13230 = Sin(var2[3]);
  t13223 = Cos(var2[4]);
  t13228 = -1.*t13226*t13227;
  t13231 = -1.*t13229*t13230;
  t13232 = t13228 + t13231;
  t13234 = -1.*t13229*t13226;
  t13235 = t13227*t13230;
  t13236 = t13234 + t13235;
  t13237 = Sin(var2[4]);
  t13224 = -1.*t13223;
  t13225 = 1. + t13224;
  t13239 = t13223*t13232;
  t13308 = t13236*t13237;
  t13319 = t13239 + t13308;
  t13350 = Cos(var2[5]);
  t13351 = -1.*t13350*t13227;
  t13352 = Sin(var2[5]);
  t13353 = -1.*t13229*t13352;
  t13358 = t13351 + t13353;
  t13360 = Cos(var2[6]);
  t13368 = -1.*t13229*t13350;
  t13369 = t13227*t13352;
  t13370 = t13368 + t13369;
  t13371 = Sin(var2[6]);
  t13233 = -0.4*t13225*t13232;
  t13238 = 0.4*t13236*t13237;
  t13337 = -0.8*t13319;
  t13343 = 0.748*t13232;
  t13344 = 0.4*t13225*t13232;
  t13345 = -0.4*t13236*t13237;
  t13347 = 0.64*t13319;
  t13348 = t13344 + t13345 + t13347;
  t13349 = 3.2*t13348;
  t13390 = t13229*t13226;
  t13391 = -1.*t13227*t13230;
  t13392 = t13390 + t13391;
  t13402 = -1.*t13392*t13237;
  t13403 = t13239 + t13402;
  t13359 = 0.748*t13358;
  t13365 = -1.*t13360;
  t13366 = 1. + t13365;
  t13367 = 0.4*t13366*t13358;
  t13372 = -0.4*t13370*t13371;
  t13373 = t13360*t13358;
  t13374 = t13370*t13371;
  t13375 = t13373 + t13374;
  t13376 = 0.64*t13375;
  t13377 = t13367 + t13372 + t13376;
  t13378 = 3.2*t13377;
  t13423 = t13229*t13350;
  t13424 = -1.*t13227*t13352;
  t13425 = t13423 + t13424;
  t13132 = Power(t5662,7);
  t13133 = -1.*t13132;
  t13134 = -7.*t5320*t3423*t13013;
  t13135 = -21.*t13007*t11140*t13009;
  t13136 = -35.*t10776*t8778*t11859;
  t13137 = -35.*t8273*t7444*t9079;
  t13138 = -21.*t7271*t3522*t7483;
  t13139 = -7.*t3517*t3437*t5662;
  t13149 = -1.*t1357*t13140;
  t13502 = 0.4*t13366*t13425;
  t13503 = -0.4*t13358*t13371;
  t13504 = t13360*t13425;
  t13505 = t13358*t13371;
  t13506 = t13504 + t13505;
  t13509 = -0.748*t13392;
  t13510 = 0.4*t13225*t13392;
  t13511 = -0.4*t13232*t13237;
  t13512 = t13223*t13392;
  t13513 = t13232*t13237;
  t13514 = t13512 + t13513;
  t13515 = 0.64*t13514;
  t13516 = t13510 + t13511 + t13515;
  t13517 = -3.2*t13516;
  t13528 = t13226*t13227;
  t13529 = t13229*t13230;
  t13530 = t13528 + t13529;
  t13507 = 0.8*t13506;
  t13518 = -0.748*t13425;
  t13519 = 0.64*t13506;
  t13520 = t13502 + t13503 + t13519;
  t13521 = -3.2*t13520;
  t13541 = t13350*t13227;
  t13542 = t13229*t13352;
  t13543 = t13541 + t13542;
  t13545 = -1.*t13543*t13371;
  t13546 = t13504 + t13545;
  t13623 = -0.748*t13232;
  t13624 = -3.2*t13348;
  t13389 = 0.4*t13223*t13232;
  t13393 = -0.4*t13392*t13237;
  t13621 = 0.8*t13375;
  t13625 = -0.748*t13358;
  t13626 = -3.2*t13377;
  t13422 = -0.4*t13360*t13358;
  t13426 = 0.4*t13425*t13371;
  t13427 = -1.*t13425*t13371;
  t13428 = t13373 + t13427;
  p_output1[0]=7.*t13013*t5320*t661*var3[0] + 42.*t13007*t13009*t3423*t661*var3[4] - 7.*t13013*t5320*t661*var3[4] + 105.*t10776*t11140*t11859*t661*var3[8] - 42.*t13007*t13009*t3423*t661*var3[8] - 105.*t10776*t11140*t11859*t661*var3[12] + 140.*t661*t8273*t8778*t9079*var3[12] + 105.*t661*t7271*t7444*t7483*var3[16] - 140.*t661*t8273*t8778*t9079*var3[16] + 42.*t3517*t3522*t5662*t661*var3[20] - 105.*t661*t7271*t7444*t7483*var3[20] + 7.*t1357*t3437*t661*var3[24] - 42.*t3517*t3522*t5662*t661*var3[24] - 7.*t1357*t3437*t661*var3[28];
  p_output1[1]=7.*t13013*t191*t219*t5320*var3[0] + 42.*t13007*t13009*t191*t219*t3423*var3[4] - 7.*t13013*t191*t219*t5320*var3[4] + 105.*t10776*t11140*t11859*t191*t219*var3[8] - 42.*t13007*t13009*t191*t219*t3423*var3[8] - 105.*t10776*t11140*t11859*t191*t219*var3[12] + 140.*t191*t219*t8273*t8778*t9079*var3[12] + 105.*t191*t219*t7271*t7444*t7483*var3[16] - 140.*t191*t219*t8273*t8778*t9079*var3[16] + 42.*t191*t219*t3517*t3522*t5662*var3[20] - 105.*t191*t219*t7271*t7444*t7483*var3[20] + 7.*t1357*t191*t219*t3437*var3[24] - 42.*t191*t219*t3517*t3522*t5662*var3[24] - 7.*t1357*t191*t219*t3437*var3[28];
  p_output1[2]=1.;
  p_output1[3]=t13133;
  p_output1[4]=t13134;
  p_output1[5]=t13135;
  p_output1[6]=t13136;
  p_output1[7]=t13137;
  p_output1[8]=t13138;
  p_output1[9]=t13139;
  p_output1[10]=t13149;
  p_output1[11]=-7.*t13007*t13013*t3423*var3[0] - 42.*t10776*t11140*t13009*var3[4] + 7.*t13007*t13013*t3423*var3[4] + 42.*t10776*t11140*t13009*var3[8] - 105.*t11859*t8273*t8778*var3[8] + 105.*t11859*t8273*t8778*var3[12] - 140.*t7271*t7444*t9079*var3[12] - 105.*t3517*t3522*t7483*var3[16] + 140.*t7271*t7444*t9079*var3[16] - 42.*t1357*t3437*t5662*var3[20] + 105.*t3517*t3522*t7483*var3[20] - 7.*t13140*t13150*var3[24] + 42.*t1357*t3437*t5662*var3[24] + 7.*t13140*t13150*var3[28];
  p_output1[12]=-7.*t13013*t13172*var3[0] - 7.*t13007*t13013*t3423*var3[4] + 7.*t13013*t5320*var3[4] - 42.*t13009*t13172*t3423*t5320*var3[4] - 42.*t10776*t11140*t13009*var3[8] - 105.*t11140*t11859*t13007*t13172*var3[8] + 42.*t13007*t13009*t3423*var3[8] + 105.*t10776*t11140*t11859*var3[12] - 105.*t11859*t8273*t8778*var3[12] - 140.*t10776*t13172*t8778*t9079*var3[12] - 105.*t13172*t7444*t7483*t8273*var3[16] - 140.*t7271*t7444*t9079*var3[16] + 140.*t8273*t8778*t9079*var3[16] - 42.*t13172*t3522*t5662*t7271*var3[20] - 105.*t3517*t3522*t7483*var3[20] + 105.*t7271*t7444*t7483*var3[20] - 7.*t13172*t3437*t3517*var3[24] - 42.*t1357*t3437*t5662*var3[24] + 42.*t3517*t3522*t5662*var3[24] - 7.*t13140*t13150*var3[28] + 7.*t1357*t3437*var3[28];
  p_output1[13]=7.*t13013*t5320*t661*var3[1] + 42.*t13007*t13009*t3423*t661*var3[5] - 7.*t13013*t5320*t661*var3[5] + 105.*t10776*t11140*t11859*t661*var3[9] - 42.*t13007*t13009*t3423*t661*var3[9] - 105.*t10776*t11140*t11859*t661*var3[13] + 140.*t661*t8273*t8778*t9079*var3[13] + 105.*t661*t7271*t7444*t7483*var3[17] - 140.*t661*t8273*t8778*t9079*var3[17] + 42.*t3517*t3522*t5662*t661*var3[21] - 105.*t661*t7271*t7444*t7483*var3[21] + 7.*t1357*t3437*t661*var3[25] - 42.*t3517*t3522*t5662*t661*var3[25] - 7.*t1357*t3437*t661*var3[29];
  p_output1[14]=7.*t13013*t191*t219*t5320*var3[1] + 42.*t13007*t13009*t191*t219*t3423*var3[5] - 7.*t13013*t191*t219*t5320*var3[5] + 105.*t10776*t11140*t11859*t191*t219*var3[9] - 42.*t13007*t13009*t191*t219*t3423*var3[9] - 105.*t10776*t11140*t11859*t191*t219*var3[13] + 140.*t191*t219*t8273*t8778*t9079*var3[13] + 105.*t191*t219*t7271*t7444*t7483*var3[17] - 140.*t191*t219*t8273*t8778*t9079*var3[17] + 42.*t191*t219*t3517*t3522*t5662*var3[21] - 105.*t191*t219*t7271*t7444*t7483*var3[21] + 7.*t1357*t191*t219*t3437*var3[25] - 42.*t191*t219*t3517*t3522*t5662*var3[25] - 7.*t1357*t191*t219*t3437*var3[29];
  p_output1[15]=t13233 + t13238 + t13337 + 0.03125*(-2.88*t13227 + t13343 + t13349 + t13359 + t13378);
  p_output1[16]=t13233 + t13238 + t13337 + 0.03125*(t13343 + t13349);
  p_output1[17]=t13389 + t13393 + 0.1*(-0.4*t13223*t13232 + 0.4*t13237*t13392 + 0.64*t13403) - 0.8*t13403;
  p_output1[18]=0.03125*(t13359 + t13378);
  p_output1[19]=0.1*(t13422 + t13426 + 0.64*t13428);
  p_output1[20]=t13133;
  p_output1[21]=t13134;
  p_output1[22]=t13135;
  p_output1[23]=t13136;
  p_output1[24]=t13137;
  p_output1[25]=t13138;
  p_output1[26]=t13139;
  p_output1[27]=t13149;
  p_output1[28]=-7.*t13007*t13013*t3423*var3[1] - 42.*t10776*t11140*t13009*var3[5] + 7.*t13007*t13013*t3423*var3[5] + 42.*t10776*t11140*t13009*var3[9] - 105.*t11859*t8273*t8778*var3[9] + 105.*t11859*t8273*t8778*var3[13] - 140.*t7271*t7444*t9079*var3[13] - 105.*t3517*t3522*t7483*var3[17] + 140.*t7271*t7444*t9079*var3[17] - 42.*t1357*t3437*t5662*var3[21] + 105.*t3517*t3522*t7483*var3[21] - 7.*t13140*t13150*var3[25] + 42.*t1357*t3437*t5662*var3[25] + 7.*t13140*t13150*var3[29];
  p_output1[29]=-7.*t13013*t13172*var3[1] - 7.*t13007*t13013*t3423*var3[5] + 7.*t13013*t5320*var3[5] - 42.*t13009*t13172*t3423*t5320*var3[5] - 42.*t10776*t11140*t13009*var3[9] - 105.*t11140*t11859*t13007*t13172*var3[9] + 42.*t13007*t13009*t3423*var3[9] + 105.*t10776*t11140*t11859*var3[13] - 105.*t11859*t8273*t8778*var3[13] - 140.*t10776*t13172*t8778*t9079*var3[13] - 105.*t13172*t7444*t7483*t8273*var3[17] - 140.*t7271*t7444*t9079*var3[17] + 140.*t8273*t8778*t9079*var3[17] - 42.*t13172*t3522*t5662*t7271*var3[21] - 105.*t3517*t3522*t7483*var3[21] + 105.*t7271*t7444*t7483*var3[21] - 7.*t13172*t3437*t3517*var3[25] - 42.*t1357*t3437*t5662*var3[25] + 42.*t3517*t3522*t5662*var3[25] - 7.*t13140*t13150*var3[29] + 7.*t1357*t3437*var3[29];
  p_output1[30]=7.*t13013*t5320*t661*var3[2] + 42.*t13007*t13009*t3423*t661*var3[6] - 7.*t13013*t5320*t661*var3[6] + 105.*t10776*t11140*t11859*t661*var3[10] - 42.*t13007*t13009*t3423*t661*var3[10] - 105.*t10776*t11140*t11859*t661*var3[14] + 140.*t661*t8273*t8778*t9079*var3[14] + 105.*t661*t7271*t7444*t7483*var3[18] - 140.*t661*t8273*t8778*t9079*var3[18] + 42.*t3517*t3522*t5662*t661*var3[22] - 105.*t661*t7271*t7444*t7483*var3[22] + 7.*t1357*t3437*t661*var3[26] - 42.*t3517*t3522*t5662*t661*var3[26] - 7.*t1357*t3437*t661*var3[30];
  p_output1[31]=7.*t13013*t191*t219*t5320*var3[2] + 42.*t13007*t13009*t191*t219*t3423*var3[6] - 7.*t13013*t191*t219*t5320*var3[6] + 105.*t10776*t11140*t11859*t191*t219*var3[10] - 42.*t13007*t13009*t191*t219*t3423*var3[10] - 105.*t10776*t11140*t11859*t191*t219*var3[14] + 140.*t191*t219*t8273*t8778*t9079*var3[14] + 105.*t191*t219*t7271*t7444*t7483*var3[18] - 140.*t191*t219*t8273*t8778*t9079*var3[18] + 42.*t191*t219*t3517*t3522*t5662*var3[22] - 105.*t191*t219*t7271*t7444*t7483*var3[22] + 7.*t1357*t191*t219*t3437*var3[26] - 42.*t191*t219*t3517*t3522*t5662*var3[26] - 7.*t1357*t191*t219*t3437*var3[30];
  p_output1[32]=t13502 + t13503 + t13507 + 0.03125*(-2.88*t13229 + t13509 + t13517 + t13518 + t13521);
  p_output1[33]=0.03125*(t13509 + t13517);
  p_output1[34]=0.1*(0.4*t13223*t13392 - 0.4*t13237*t13530 - 0.64*(t13512 - 1.*t13237*t13530));
  p_output1[35]=t13502 + t13503 + t13507 + 0.03125*(t13518 + t13521);
  p_output1[36]=-0.4*t13360*t13425 + 0.4*t13371*t13543 + 0.1*(0.4*t13360*t13425 - 0.4*t13371*t13543 - 0.64*t13546) + 0.8*t13546;
  p_output1[37]=t13133;
  p_output1[38]=t13134;
  p_output1[39]=t13135;
  p_output1[40]=t13136;
  p_output1[41]=t13137;
  p_output1[42]=t13138;
  p_output1[43]=t13139;
  p_output1[44]=t13149;
  p_output1[45]=-7.*t13007*t13013*t3423*var3[2] - 42.*t10776*t11140*t13009*var3[6] + 7.*t13007*t13013*t3423*var3[6] + 42.*t10776*t11140*t13009*var3[10] - 105.*t11859*t8273*t8778*var3[10] + 105.*t11859*t8273*t8778*var3[14] - 140.*t7271*t7444*t9079*var3[14] - 105.*t3517*t3522*t7483*var3[18] + 140.*t7271*t7444*t9079*var3[18] - 42.*t1357*t3437*t5662*var3[22] + 105.*t3517*t3522*t7483*var3[22] - 7.*t13140*t13150*var3[26] + 42.*t1357*t3437*t5662*var3[26] + 7.*t13140*t13150*var3[30];
  p_output1[46]=-7.*t13013*t13172*var3[2] - 7.*t13007*t13013*t3423*var3[6] + 7.*t13013*t5320*var3[6] - 42.*t13009*t13172*t3423*t5320*var3[6] - 42.*t10776*t11140*t13009*var3[10] - 105.*t11140*t11859*t13007*t13172*var3[10] + 42.*t13007*t13009*t3423*var3[10] + 105.*t10776*t11140*t11859*var3[14] - 105.*t11859*t8273*t8778*var3[14] - 140.*t10776*t13172*t8778*t9079*var3[14] - 105.*t13172*t7444*t7483*t8273*var3[18] - 140.*t7271*t7444*t9079*var3[18] + 140.*t8273*t8778*t9079*var3[18] - 42.*t13172*t3522*t5662*t7271*var3[22] - 105.*t3517*t3522*t7483*var3[22] + 105.*t7271*t7444*t7483*var3[22] - 7.*t13172*t3437*t3517*var3[26] - 42.*t1357*t3437*t5662*var3[26] + 42.*t3517*t3522*t5662*var3[26] - 7.*t13140*t13150*var3[30] + 7.*t1357*t3437*var3[30];
  p_output1[47]=7.*t13013*t5320*t661*var3[3] + 42.*t13007*t13009*t3423*t661*var3[7] - 7.*t13013*t5320*t661*var3[7] + 105.*t10776*t11140*t11859*t661*var3[11] - 42.*t13007*t13009*t3423*t661*var3[11] - 105.*t10776*t11140*t11859*t661*var3[15] + 140.*t661*t8273*t8778*t9079*var3[15] + 105.*t661*t7271*t7444*t7483*var3[19] - 140.*t661*t8273*t8778*t9079*var3[19] + 42.*t3517*t3522*t5662*t661*var3[23] - 105.*t661*t7271*t7444*t7483*var3[23] + 7.*t1357*t3437*t661*var3[27] - 42.*t3517*t3522*t5662*t661*var3[27] - 7.*t1357*t3437*t661*var3[31];
  p_output1[48]=7.*t13013*t191*t219*t5320*var3[3] + 42.*t13007*t13009*t191*t219*t3423*var3[7] - 7.*t13013*t191*t219*t5320*var3[7] + 105.*t10776*t11140*t11859*t191*t219*var3[11] - 42.*t13007*t13009*t191*t219*t3423*var3[11] - 105.*t10776*t11140*t11859*t191*t219*var3[15] + 140.*t191*t219*t8273*t8778*t9079*var3[15] + 105.*t191*t219*t7271*t7444*t7483*var3[19] - 140.*t191*t219*t8273*t8778*t9079*var3[19] + 42.*t191*t219*t3517*t3522*t5662*var3[23] - 105.*t191*t219*t7271*t7444*t7483*var3[23] + 7.*t1357*t191*t219*t3437*var3[27] - 42.*t191*t219*t3517*t3522*t5662*var3[27] - 7.*t1357*t191*t219*t3437*var3[31];
  p_output1[49]=t13367 + t13372 + t13621 + 0.03125*(2.88*t13227 + t13623 + t13624 + t13625 + t13626);
  p_output1[50]=0.03125*(t13623 + t13624);
  p_output1[51]=0.1*(t13389 + t13393 - 0.64*t13403);
  p_output1[52]=t13367 + t13372 + t13621 + 0.03125*(t13625 + t13626);
  p_output1[53]=t13422 + t13426 + 0.1*(0.4*t13358*t13360 - 0.4*t13371*t13425 - 0.64*t13428) + 0.8*t13428;
  p_output1[54]=t13133;
  p_output1[55]=t13134;
  p_output1[56]=t13135;
  p_output1[57]=t13136;
  p_output1[58]=t13137;
  p_output1[59]=t13138;
  p_output1[60]=t13139;
  p_output1[61]=t13149;
  p_output1[62]=-7.*t13007*t13013*t3423*var3[3] - 42.*t10776*t11140*t13009*var3[7] + 7.*t13007*t13013*t3423*var3[7] + 42.*t10776*t11140*t13009*var3[11] - 105.*t11859*t8273*t8778*var3[11] + 105.*t11859*t8273*t8778*var3[15] - 140.*t7271*t7444*t9079*var3[15] - 105.*t3517*t3522*t7483*var3[19] + 140.*t7271*t7444*t9079*var3[19] - 42.*t1357*t3437*t5662*var3[23] + 105.*t3517*t3522*t7483*var3[23] - 7.*t13140*t13150*var3[27] + 42.*t1357*t3437*t5662*var3[27] + 7.*t13140*t13150*var3[31];
  p_output1[63]=-7.*t13013*t13172*var3[3] - 7.*t13007*t13013*t3423*var3[7] + 7.*t13013*t5320*var3[7] - 42.*t13009*t13172*t3423*t5320*var3[7] - 42.*t10776*t11140*t13009*var3[11] - 105.*t11140*t11859*t13007*t13172*var3[11] + 42.*t13007*t13009*t3423*var3[11] + 105.*t10776*t11140*t11859*var3[15] - 105.*t11859*t8273*t8778*var3[15] - 140.*t10776*t13172*t8778*t9079*var3[15] - 105.*t13172*t7444*t7483*t8273*var3[19] - 140.*t7271*t7444*t9079*var3[19] + 140.*t8273*t8778*t9079*var3[19] - 42.*t13172*t3522*t5662*t7271*var3[23] - 105.*t3517*t3522*t7483*var3[23] + 105.*t7271*t7444*t7483*var3[23] - 7.*t13172*t3437*t3517*var3[27] - 42.*t1357*t3437*t5662*var3[27] + 42.*t3517*t3522*t5662*var3[27] - 7.*t13140*t13150*var3[31] + 7.*t1357*t3437*var3[31];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
    ( !(mrows == 32 && ncols == 1) && 
      !(mrows == 1 && ncols == 32))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 64, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_time_RightStance.hh"

namespace RightStance
{

void J_y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
