/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:36:36 GMT-05:00
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
  double t5010;
  double t348;
  double t487;
  double t5015;
  double t5023;
  double t127;
  double t5024;
  double t5025;
  double t5026;
  double t5041;
  double t5052;
  double t5053;
  double t5054;
  double t5055;
  double t2841;
  double t5016;
  double t5017;
  double t5022;
  double t5027;
  double t5028;
  double t5902;
  double t5890;
  double t5891;
  double t5903;
  double t5918;
  double t6102;
  double t6117;
  double t6764;
  double t6784;
  double t6804;
  double t6806;
  double t6892;
  double t5901;
  double t5904;
  double t5905;
  double t5906;
  double t6186;
  double t6189;
  double t5036;
  double t5037;
  double t5038;
  double t7674;
  double t7689;
  double t7691;
  double t5608;
  double t5106;
  double t5336;
  double t5348;
  double t5452;
  double t5609;
  double t6487;
  double t6557;
  double t6559;
  double t8056;
  double t8093;
  double t8098;
  double t7412;
  double t7159;
  double t7251;
  double t7292;
  double t7319;
  double t7474;
  double t7726;
  double t7733;
  double t7771;
  double t7795;
  double t7867;
  double t8028;
  double t8037;
  double t8050;
  double t8130;
  double t8138;
  double t8155;
  double t8186;
  double t8190;
  double t8215;
  double t8216;
  double t8219;
  double t8856;
  double t8864;
  double t8865;
  double t8875;
  double t8879;
  double t8880;
  double t8967;
  double t8969;
  double t8996;
  double t9018;
  double t9022;
  double t9024;
  double t5039;
  double t5056;
  double t5057;
  double t5058;
  double t5676;
  double t5682;
  double t5683;
  double t5761;
  double t9125;
  double t9155;
  double t9159;
  double t9168;
  double t9173;
  double t7722;
  double t7781;
  double t8234;
  double t8239;
  double t8240;
  double t8253;
  double t8261;
  double t8264;
  double t8288;
  double t8289;
  double t8290;
  double t8292;
  double t8765;
  double t8767;
  double t8795;
  double t8837;
  double t8850;
  double t8854;
  double t8868;
  double t8882;
  double t8902;
  double t8929;
  double t8934;
  double t8935;
  double t9316;
  double t9326;
  double t9330;
  double t9174;
  double t9184;
  double t9185;
  double t9188;
  double t9194;
  double t9200;
  double t9223;
  double t9248;
  double t9255;
  double t9279;
  double t9295;
  double t9313;
  double t9345;
  double t9358;
  double t9422;
  double t9739;
  double t9740;
  double t9477;
  double t9744;
  double t9781;
  double t9524;
  double t6580;
  double t6967;
  double t7022;
  double t7144;
  double t7487;
  double t7497;
  double t7510;
  double t7545;
  double t9981;
  double t9983;
  double t9985;
  double t9995;
  double t9996;
  double t8106;
  double t8176;
  double t8448;
  double t8450;
  double t8458;
  double t8484;
  double t8485;
  double t8495;
  double t8500;
  double t8513;
  double t8517;
  double t8528;
  double t8946;
  double t8952;
  double t8953;
  double t8960;
  double t8962;
  double t8965;
  double t9002;
  double t9036;
  double t9044;
  double t9063;
  double t9067;
  double t9082;
  double t10079;
  double t10082;
  double t10084;
  double t9997;
  double t10005;
  double t10008;
  double t10039;
  double t10047;
  double t10050;
  double t10051;
  double t10052;
  double t10054;
  double t10055;
  double t10056;
  double t10078;
  double t10090;
  double t10091;
  double t10105;
  double t10152;
  double t10155;
  double t10117;
  double t10157;
  double t10158;
  double t10119;
  double t8303;
  double t8308;
  double t8371;
  double t8386;
  double t8571;
  double t8584;
  double t8703;
  double t8723;
  double t8326;
  double t8330;
  double t8331;
  double t8368;
  double t8370;
  double t8416;
  double t8586;
  double t8616;
  double t8622;
  double t8636;
  double t8675;
  double t8747;
  double t8748;
  double t10547;
  double t10962;
  double t9297;
  double t11227;
  double t9343;
  double t9368;
  double t9369;
  double t9425;
  double t9516;
  double t9551;
  double t11355;
  double t9615;
  double t9617;
  double t9632;
  double t11371;
  double t9579;
  double t9602;
  double t9606;
  double t11383;
  double t11413;
  double t11424;
  double t9706;
  double t11464;
  double t9742;
  double t9858;
  double t9861;
  double t11490;
  double t9882;
  double t9912;
  double t9934;
  double t10683;
  double t11128;
  double t10068;
  double t11287;
  double t10089;
  double t10102;
  double t10103;
  double t10116;
  double t10118;
  double t10126;
  double t11746;
  double t10138;
  double t10139;
  double t10140;
  double t11747;
  double t10134;
  double t10135;
  double t10136;
  double t11749;
  double t11760;
  double t11761;
  double t10146;
  double t11796;
  double t10156;
  double t10172;
  double t10174;
  double t11808;
  double t10176;
  double t10177;
  double t10182;
  double t10209;
  double t10210;
  double t10211;
  double t10212;
  double t10213;
  double t10214;
  double t10215;
  double t10216;
  double t10217;
  double t10190;
  double t10191;
  double t10194;
  double t10195;
  double t8750;
  double t8909;
  double t8941;
  double t9050;
  double t9084;
  double t9091;
  double t5641;
  double t5835;
  double t5870;
  double t7482;
  double t7548;
  double t7650;
  double t11214;
  double t11251;
  double t11256;
  double t11300;
  double t11332;
  double t11333;
  double t11487;
  double t11590;
  double t11595;
  double t9418;
  double t9557;
  double t9563;
  double t11726;
  double t11731;
  double t11735;
  double t9880;
  double t9936;
  double t9955;
  double t11798;
  double t11809;
  double t11830;
  double t10104;
  double t10127;
  double t10129;
  double t12814;
  double t12815;
  double t12822;
  double t10175;
  double t10184;
  double t10185;
  double t10218;
  double t10219;
  double t10220;
  double t10235;
  double t10236;
  double t10237;
  double t10238;
  double t10284;
  double t10550;
  double t10583;
  double t10647;
  double t11408;
  double t9186;
  double t12851;
  double t12852;
  double t12854;
  double t11629;
  double t11680;
  double t11681;
  double t9608;
  double t9636;
  double t9657;
  double t12870;
  double t12871;
  double t12872;
  double t12873;
  double t12874;
  double t10285;
  double t10304;
  double t10319;
  double t10368;
  double t12987;
  double t12988;
  double t12989;
  double t12990;
  double t13034;
  double t13035;
  double t10372;
  double t12826;
  double t12991;
  double t12992;
  double t13026;
  double t13029;
  double t10694;
  double t10698;
  double t10726;
  double t11755;
  double t10009;
  double t12923;
  double t12924;
  double t12946;
  double t11881;
  double t11900;
  double t11906;
  double t10137;
  double t10141;
  double t10142;
  double t12956;
  double t12957;
  double t12958;
  double t12959;
  double t12960;
  double t10506;
  double t10508;
  double t10510;
  double t10530;
  double t12993;
  double t12994;
  double t12996;
  double t12998;
  double t13067;
  double t13068;
  double t10533;
  double t12827;
  double t12999;
  double t13002;
  double t13061;
  double t13062;
  t5010 = Cos(var1[3]);
  t348 = Cos(var1[4]);
  t487 = Sin(var1[3]);
  t5015 = Sin(var1[4]);
  t5023 = Sin(var1[2]);
  t127 = Cos(var1[2]);
  t5024 = t5010*t348;
  t5025 = -1.*t487*t5015;
  t5026 = t5024 + t5025;
  t5041 = -1.*t348;
  t5052 = 1. + t5041;
  t5053 = 0.4*t5052;
  t5054 = 0.64*t348;
  t5055 = t5053 + t5054;
  t2841 = -1.*t348*t487;
  t5016 = -1.*t5010*t5015;
  t5017 = t2841 + t5016;
  t5022 = t127*t5017;
  t5027 = -1.*t5023*t5026;
  t5028 = t5022 + t5027;
  t5902 = Cos(var1[5]);
  t5890 = Cos(var1[6]);
  t5891 = Sin(var1[5]);
  t5903 = Sin(var1[6]);
  t5918 = t5902*t5890;
  t6102 = -1.*t5891*t5903;
  t6117 = t5918 + t6102;
  t6764 = -1.*t5890;
  t6784 = 1. + t6764;
  t6804 = 0.4*t6784;
  t6806 = 0.64*t5890;
  t6892 = t6804 + t6806;
  t5901 = -1.*t5890*t5891;
  t5904 = -1.*t5902*t5903;
  t5905 = t5901 + t5904;
  t5906 = t127*t5905;
  t6186 = -1.*t5023*t6117;
  t6189 = t5906 + t6186;
  t5036 = -1.*t5010*t5023;
  t5037 = -1.*t127*t487;
  t5038 = t5036 + t5037;
  t7674 = t127*t5010;
  t7689 = -1.*t5023*t487;
  t7691 = t7674 + t7689;
  t5608 = t127*t5026;
  t5106 = t348*t487;
  t5336 = t5010*t5015;
  t5348 = t5106 + t5336;
  t5452 = -1.*t5023*t5348;
  t5609 = t5452 + t5608;
  t6487 = -1.*t5902*t5023;
  t6557 = -1.*t127*t5891;
  t6559 = t6487 + t6557;
  t8056 = t127*t5902;
  t8093 = -1.*t5023*t5891;
  t8098 = t8056 + t8093;
  t7412 = t127*t6117;
  t7159 = t5890*t5891;
  t7251 = t5902*t5903;
  t7292 = t7159 + t7251;
  t7319 = -1.*t5023*t7292;
  t7474 = t7319 + t7412;
  t7726 = t5010*t5023;
  t7733 = t127*t487;
  t7771 = t7726 + t7733;
  t7795 = t5023*t5017;
  t7867 = t7795 + t5608;
  t8028 = t127*t5348;
  t8037 = t5023*t5026;
  t8050 = t8028 + t8037;
  t8130 = t5902*t5023;
  t8138 = t127*t5891;
  t8155 = t8130 + t8138;
  t8186 = t5023*t5905;
  t8190 = t8186 + t7412;
  t8215 = t127*t7292;
  t8216 = t5023*t6117;
  t8219 = t8215 + t8216;
  t8856 = t5055*t487;
  t8864 = 0.24*t5010*t5015;
  t8865 = t8856 + t8864;
  t8875 = t5010*t5055;
  t8879 = -0.24*t487*t5015;
  t8880 = t8875 + t8879;
  t8967 = t6892*t5891;
  t8969 = 0.24*t5902*t5903;
  t8996 = t8967 + t8969;
  t9018 = t5902*t6892;
  t9022 = -0.24*t5891*t5903;
  t9024 = t9018 + t9022;
  t5039 = -0.748*t5038;
  t5056 = t5055*t5015;
  t5057 = -0.24*t348*t5015;
  t5058 = t5056 + t5057;
  t5676 = t5055*t348;
  t5682 = Power(t5015,2);
  t5683 = 0.24*t5682;
  t5761 = t5676 + t5683;
  t9125 = -1.*t5010*t348;
  t9155 = t487*t5015;
  t9159 = t9125 + t9155;
  t9168 = t5023*t9159;
  t9173 = t5022 + t9168;
  t7722 = -13.6*t5038*t7691;
  t7781 = -13.6*t7771*t7691;
  t8234 = Power(t5038,2);
  t8239 = -6.8*t8234;
  t8240 = -6.8*t5038*t7771;
  t8253 = Power(t7691,2);
  t8261 = -6.8*t8253;
  t8264 = -1.*t127*t5010;
  t8288 = t5023*t487;
  t8289 = t8264 + t8288;
  t8290 = -6.8*t7691*t8289;
  t8292 = -1.*t5023*t5017;
  t8765 = Power(t5010,2);
  t8767 = 0.11*t8765;
  t8795 = Power(t487,2);
  t8837 = 0.11*t8795;
  t8850 = t8767 + t8837;
  t8854 = -6.8*t5038*t8850;
  t8868 = -1.*t8865*t5026;
  t8882 = -1.*t5017*t8880;
  t8902 = t8868 + t8882;
  t8929 = t8865*t5348;
  t8934 = t5026*t8880;
  t8935 = t8929 + t8934;
  t9316 = -1.*t5055*t487;
  t9326 = -0.24*t5010*t5015;
  t9330 = t9316 + t9326;
  t9174 = -0.768*var2[4]*t9173;
  t9184 = -3.2*t5058*t7867;
  t9185 = -3.2*t5761*t9173;
  t9188 = -6.4*t7867*t8050;
  t9194 = -6.4*t7867*t9173;
  t9200 = -3.2*t7867*t5609;
  t9223 = -3.2*t5028*t8050;
  t9248 = t127*t9159;
  t9255 = t8292 + t9248;
  t9279 = -3.2*t7867*t9255;
  t9295 = -3.2*t5028*t9173;
  t9313 = -3.2*t7867*t8902;
  t9345 = t8865*t5026;
  t9358 = t5017*t8880;
  t9422 = -3.2*t8935*t9173;
  t9739 = -0.24*t348*t487;
  t9740 = t9739 + t9326;
  t9477 = -1.*t5017*t8865;
  t9744 = 0.24*t5010*t348;
  t9781 = t9744 + t8879;
  t9524 = -1.*t8880*t9159;
  t6580 = -0.748*t6559;
  t6967 = t6892*t5903;
  t7022 = -0.24*t5890*t5903;
  t7144 = t6967 + t7022;
  t7487 = t6892*t5890;
  t7497 = Power(t5903,2);
  t7510 = 0.24*t7497;
  t7545 = t7487 + t7510;
  t9981 = -1.*t5902*t5890;
  t9983 = t5891*t5903;
  t9985 = t9981 + t9983;
  t9995 = t5023*t9985;
  t9996 = t5906 + t9995;
  t8106 = -13.6*t6559*t8098;
  t8176 = -13.6*t8155*t8098;
  t8448 = Power(t6559,2);
  t8450 = -6.8*t8448;
  t8458 = -6.8*t6559*t8155;
  t8484 = Power(t8098,2);
  t8485 = -6.8*t8484;
  t8495 = -1.*t127*t5902;
  t8500 = t5023*t5891;
  t8513 = t8495 + t8500;
  t8517 = -6.8*t8098*t8513;
  t8528 = -1.*t5023*t5905;
  t8946 = Power(t5902,2);
  t8952 = 0.11*t8946;
  t8953 = Power(t5891,2);
  t8960 = 0.11*t8953;
  t8962 = t8952 + t8960;
  t8965 = -6.8*t6559*t8962;
  t9002 = -1.*t8996*t6117;
  t9036 = -1.*t5905*t9024;
  t9044 = t9002 + t9036;
  t9063 = t8996*t7292;
  t9067 = t6117*t9024;
  t9082 = t9063 + t9067;
  t10079 = -1.*t6892*t5891;
  t10082 = -0.24*t5902*t5903;
  t10084 = t10079 + t10082;
  t9997 = -0.768*var2[6]*t9996;
  t10005 = -3.2*t7144*t8190;
  t10008 = -3.2*t7545*t9996;
  t10039 = -6.4*t8190*t8219;
  t10047 = -6.4*t8190*t9996;
  t10050 = -3.2*t8190*t7474;
  t10051 = -3.2*t6189*t8219;
  t10052 = t127*t9985;
  t10054 = t8528 + t10052;
  t10055 = -3.2*t8190*t10054;
  t10056 = -3.2*t6189*t9996;
  t10078 = -3.2*t8190*t9044;
  t10090 = t8996*t6117;
  t10091 = t5905*t9024;
  t10105 = -3.2*t9082*t9996;
  t10152 = -0.24*t5890*t5891;
  t10155 = t10152 + t10082;
  t10117 = -1.*t5905*t8996;
  t10157 = 0.24*t5902*t5890;
  t10158 = t10157 + t9022;
  t10119 = -1.*t9024*t9985;
  t8303 = -1.*t127*t5026;
  t8308 = t8292 + t8303;
  t8371 = -1.*t127*t5348;
  t8386 = t8371 + t5027;
  t8571 = -1.*t127*t6117;
  t8584 = t8528 + t8571;
  t8703 = -1.*t127*t7292;
  t8723 = t8703 + t6186;
  t8326 = -3.2*t8308*t7867;
  t8330 = Power(t5609,2);
  t8331 = -3.2*t8330;
  t8368 = Power(t5028,2);
  t8370 = -3.2*t8368;
  t8416 = -3.2*t8386*t8050;
  t8586 = -3.2*t8584*t8190;
  t8616 = Power(t7474,2);
  t8622 = -3.2*t8616;
  t8636 = Power(t6189,2);
  t8675 = -3.2*t8636;
  t8747 = -3.2*t8723*t8219;
  t8748 = t8239 + t8240 + t8261 + t8290 + t8326 + t8331 + t8370 + t8416 + t8450 + t8458 + t8485 + t8517 + t8586 + t8622 + t8675 + t8747;
  t10547 = -0.748*t8289;
  t10962 = -13.6*t5038*t8289;
  t9297 = t8239 + t8240 + t8261 + t8290 + t9200 + t9223 + t9279 + t9295;
  t11227 = -6.8*t8289*t8850;
  t9343 = t9330*t5026;
  t9368 = t5348*t8880;
  t9369 = t9343 + t9345 + t9358 + t9368;
  t9425 = -1.*t5017*t9330;
  t9516 = -1.*t5026*t8880;
  t9551 = t9425 + t9477 + t9516 + t9524;
  t11355 = -0.768*var2[4]*t9255;
  t9615 = Power(t348,2);
  t9617 = -0.24*t9615;
  t9632 = t5676 + t9617;
  t11371 = -3.2*t5058*t5028;
  t9579 = -1.*t5055*t5015;
  t9602 = 0.24*t348*t5015;
  t9606 = t9579 + t9602;
  t11383 = -3.2*t5761*t9255;
  t11413 = -6.4*t5609*t5028;
  t11424 = -6.4*t5028*t9255;
  t9706 = t9200 + t9223 + t9279 + t9295;
  t11464 = -3.2*t5028*t8902;
  t9742 = t9740*t5026;
  t9858 = t5348*t9781;
  t9861 = t9742 + t9345 + t9358 + t9858;
  t11490 = -3.2*t8935*t9255;
  t9882 = -1.*t5017*t9740;
  t9912 = -1.*t5026*t9781;
  t9934 = t9882 + t9477 + t9912 + t9524;
  t10683 = -0.748*t8513;
  t11128 = -13.6*t6559*t8513;
  t10068 = t8450 + t8458 + t8485 + t8517 + t10050 + t10051 + t10055 + t10056;
  t11287 = -6.8*t8513*t8962;
  t10089 = t10084*t6117;
  t10102 = t7292*t9024;
  t10103 = t10089 + t10090 + t10091 + t10102;
  t10116 = -1.*t5905*t10084;
  t10118 = -1.*t6117*t9024;
  t10126 = t10116 + t10117 + t10118 + t10119;
  t11746 = -0.768*var2[6]*t10054;
  t10138 = Power(t5890,2);
  t10139 = -0.24*t10138;
  t10140 = t7487 + t10139;
  t11747 = -3.2*t7144*t6189;
  t10134 = -1.*t6892*t5903;
  t10135 = 0.24*t5890*t5903;
  t10136 = t10134 + t10135;
  t11749 = -3.2*t7545*t10054;
  t11760 = -6.4*t7474*t6189;
  t11761 = -6.4*t6189*t10054;
  t10146 = t10050 + t10051 + t10055 + t10056;
  t11796 = -3.2*t6189*t9044;
  t10156 = t10155*t6117;
  t10172 = t7292*t10158;
  t10174 = t10156 + t10090 + t10091 + t10172;
  t11808 = -3.2*t9082*t10054;
  t10176 = -1.*t5905*t10155;
  t10177 = -1.*t6117*t10158;
  t10182 = t10176 + t10117 + t10177 + t10119;
  t10209 = -6.8*t5038*t7691;
  t10210 = -6.8*t7771*t7691;
  t10211 = -3.2*t7867*t5028;
  t10212 = -3.2*t5609*t8050;
  t10213 = -6.8*t6559*t8098;
  t10214 = -6.8*t8155*t8098;
  t10215 = -3.2*t8190*t6189;
  t10216 = -3.2*t7474*t8219;
  t10217 = t10209 + t10210 + t10211 + t10212 + t10213 + t10214 + t10215 + t10216;
  t10190 = Power(t127,2);
  t10191 = -12.*t10190;
  t10194 = Power(t5023,2);
  t10195 = -12.*t10194;
  t8750 = 2.88*t5023;
  t8909 = -3.2*t5609*t8902;
  t8941 = -3.2*t5028*t8935;
  t9050 = -3.2*t7474*t9044;
  t9084 = -3.2*t6189*t9082;
  t9091 = t8750 + t8854 + t8909 + t8941 + t8965 + t9050 + t9084;
  t5641 = -3.2*t5058*t5609;
  t5835 = -3.2*t5761*t5028;
  t5870 = t5039 + t5641 + t5835;
  t7482 = -3.2*t7144*t7474;
  t7548 = -3.2*t7545*t6189;
  t7650 = t6580 + t7482 + t7548;
  t11214 = 2.88*t127;
  t11251 = -3.2*t8386*t8902;
  t11256 = -3.2*t8308*t8935;
  t11300 = -3.2*t8723*t9044;
  t11332 = -3.2*t8584*t9082;
  t11333 = t11214 + t11227 + t11251 + t11256 + t11287 + t11300 + t11332;
  t11487 = -3.2*t5028*t9369;
  t11590 = -3.2*t5609*t9551;
  t11595 = t11227 + t11464 + t11487 + t11490 + t11590;
  t9418 = -3.2*t7867*t9369;
  t9557 = -3.2*t8050*t9551;
  t9563 = t8854 + t9313 + t9418 + t9422 + t9557;
  t11726 = -3.2*t5028*t9861;
  t11731 = -3.2*t5609*t9934;
  t11735 = t11464 + t11726 + t11490 + t11731;
  t9880 = -3.2*t7867*t9861;
  t9936 = -3.2*t8050*t9934;
  t9955 = t9313 + t9880 + t9422 + t9936;
  t11798 = -3.2*t6189*t10103;
  t11809 = -3.2*t7474*t10126;
  t11830 = t11287 + t11796 + t11798 + t11808 + t11809;
  t10104 = -3.2*t8190*t10103;
  t10127 = -3.2*t8219*t10126;
  t10129 = t8965 + t10078 + t10104 + t10105 + t10127;
  t12814 = -3.2*t6189*t10174;
  t12815 = -3.2*t7474*t10182;
  t12822 = t11796 + t12814 + t11808 + t12815;
  t10175 = -3.2*t8190*t10174;
  t10184 = -3.2*t8219*t10182;
  t10185 = t10078 + t10175 + t10105 + t10184;
  t10218 = -2.88*t127;
  t10219 = -6.8*t7691*t8850;
  t10220 = -3.2*t8050*t8902;
  t10235 = -3.2*t7867*t8935;
  t10236 = -6.8*t8098*t8962;
  t10237 = -3.2*t8219*t9044;
  t10238 = -3.2*t8190*t9082;
  t10284 = t10218 + t10219 + t10220 + t10235 + t10236 + t10237 + t10238;
  t10550 = -3.2*t5761*t8308;
  t10583 = -3.2*t5058*t8386;
  t10647 = t10547 + t10550 + t10583;
  t11408 = t10547 + t11371 + t11383;
  t9186 = t5039 + t9184 + t9185;
  t12851 = -3.2*t5761*t9369;
  t12852 = -3.2*t5058*t9551;
  t12854 = t12851 + t12852;
  t11629 = -3.2*t9632*t5609;
  t11680 = -3.2*t9606*t5028;
  t11681 = t11629 + t11371 + t11680 + t11383;
  t9608 = -3.2*t9606*t7867;
  t9636 = -3.2*t9632*t8050;
  t9657 = t9184 + t9608 + t9636 + t9185;
  t12870 = -3.2*t9632*t8902;
  t12871 = -3.2*t9606*t8935;
  t12872 = -3.2*t5761*t9861;
  t12873 = -3.2*t5058*t9934;
  t12874 = t12870 + t12871 + t12872 + t12873;
  t10285 = -0.748*t7691;
  t10304 = -3.2*t5761*t7867;
  t10319 = -3.2*t5058*t8050;
  t10368 = t10285 + t10304 + t10319;
  t12987 = -0.748*t8850;
  t12988 = -3.2*t5058*t8902;
  t12989 = -3.2*t5761*t8935;
  t12990 = -0.67 + t12987 + t12988 + t12989;
  t13034 = -0.768*var2[1]*t9255;
  t13035 = -0.768*var2[0]*t9173;
  t10372 = -0.768*t7867;
  t12826 = -0.768*t5028;
  t12991 = -0.768*t8935;
  t12992 = -0.2 + t12991;
  t13026 = -0.768*t5761;
  t13029 = -0.2 + t13026;
  t10694 = -3.2*t7545*t8584;
  t10698 = -3.2*t7144*t8723;
  t10726 = t10683 + t10694 + t10698;
  t11755 = t10683 + t11747 + t11749;
  t10009 = t6580 + t10005 + t10008;
  t12923 = -3.2*t7545*t10103;
  t12924 = -3.2*t7144*t10126;
  t12946 = t12923 + t12924;
  t11881 = -3.2*t10140*t7474;
  t11900 = -3.2*t10136*t6189;
  t11906 = t11881 + t11747 + t11900 + t11749;
  t10137 = -3.2*t10136*t8190;
  t10141 = -3.2*t10140*t8219;
  t10142 = t10005 + t10137 + t10141 + t10008;
  t12956 = -3.2*t10140*t9044;
  t12957 = -3.2*t10136*t9082;
  t12958 = -3.2*t7545*t10174;
  t12959 = -3.2*t7144*t10182;
  t12960 = t12956 + t12957 + t12958 + t12959;
  t10506 = -0.748*t8098;
  t10508 = -3.2*t7545*t8190;
  t10510 = -3.2*t7144*t8219;
  t10530 = t10506 + t10508 + t10510;
  t12993 = -0.748*t8962;
  t12994 = -3.2*t7144*t9044;
  t12996 = -3.2*t7545*t9082;
  t12998 = -0.67 + t12993 + t12994 + t12996;
  t13067 = -0.768*var2[1]*t10054;
  t13068 = -0.768*var2[0]*t9996;
  t10533 = -0.768*t8190;
  t12827 = -0.768*t6189;
  t12999 = -0.768*t9082;
  t13002 = -0.2 + t12999;
  t13061 = -0.768*t7545;
  t13062 = -0.2 + t13061;
  p_output1[0]=(t7722 + t7781 - 6.4*t5028*t7867 - 6.4*t5609*t8050 + t8106 + t8176 - 6.4*t6189*t8190 - 6.4*t7474*t8219)*var2[0] + t8748*var2[1] + t9091*var2[2] + t5870*var2[3] - 0.768*t5028*var2[4] + t7650*var2[5] - 0.768*t6189*var2[6];
  p_output1[1]=t9174 + (t7722 + t7781 + t9188 + t9194)*var2[0] + t9297*var2[1] + t9563*var2[2] + t9186*var2[3];
  p_output1[2]=t9174 + (t9188 + t9194)*var2[0] + t9706*var2[1] + t9955*var2[2] + t9657*var2[3];
  p_output1[3]=t9997 + (t10039 + t10047 + t8106 + t8176)*var2[0] + t10068*var2[1] + t10129*var2[2] + t10009*var2[5];
  p_output1[4]=t9997 + (t10039 + t10047)*var2[0] + t10146*var2[1] + t10185*var2[2] + t10142*var2[5];
  p_output1[5]=t10191 + t10195 - 6.8*Power(t7771,2) - 3.2*Power(t7867,2) - 3.2*Power(t8050,2) - 6.8*Power(t8155,2) - 3.2*Power(t8190,2) - 3.2*Power(t8219,2) + t8261 + t8485;
  p_output1[6]=t10217;
  p_output1[7]=t10284;
  p_output1[8]=t10368;
  p_output1[9]=t10372;
  p_output1[10]=t10530;
  p_output1[11]=t10533;
  p_output1[12]=t8748*var2[0] + (t10962 + t11128 + t7722 + t8106 - 6.4*t5028*t8308 - 6.4*t5609*t8386 - 6.4*t6189*t8584 - 6.4*t7474*t8723)*var2[1] + t11333*var2[2] + t10647*var2[3] - 0.768*t8308*var2[4] + t10726*var2[5] - 0.768*t8584*var2[6];
  p_output1[13]=t11355 + t9297*var2[0] + (t10962 + t11413 + t11424 + t7722)*var2[1] + t11595*var2[2] + t11408*var2[3];
  p_output1[14]=t11355 + t9706*var2[0] + (t11413 + t11424)*var2[1] + t11735*var2[2] + t11681*var2[3];
  p_output1[15]=t11746 + t10068*var2[0] + (t11128 + t11760 + t11761 + t8106)*var2[1] + t11830*var2[2] + t11755*var2[5];
  p_output1[16]=t11746 + t10146*var2[0] + (t11760 + t11761)*var2[1] + t12822*var2[2] + t11906*var2[5];
  p_output1[17]=t10217;
  p_output1[18]=t10191 + t10195 + t8239 + t8261 + t8331 + t8370 + t8450 + t8485 + t8622 + t8675;
  p_output1[19]=t9091;
  p_output1[20]=t5870;
  p_output1[21]=t12826;
  p_output1[22]=t7650;
  p_output1[23]=t12827;
  p_output1[24]=t9091*var2[0] + t11333*var2[1];
  p_output1[25]=t9563*var2[0] + t11595*var2[1] + (-6.4*t8935*t9369 - 6.4*t8902*t9551)*var2[2] + t12854*var2[3] - 0.768*t9369*var2[4];
  p_output1[26]=t9955*var2[0] + t11735*var2[1] + (-6.4*t8935*t9861 - 6.4*t8902*t9934)*var2[2] + t12874*var2[3] - 0.768*t9861*var2[4];
  p_output1[27]=t10129*var2[0] + t11830*var2[1] + (-6.4*t10126*t9044 - 6.4*t10103*t9082)*var2[2] + t12946*var2[5] - 0.768*t10103*var2[6];
  p_output1[28]=t10185*var2[0] + t12822*var2[1] + (-6.4*t10182*t9044 - 6.4*t10174*t9082)*var2[2] + t12960*var2[5] - 0.768*t10174*var2[6];
  p_output1[29]=t10284;
  p_output1[30]=t9091;
  p_output1[31]=-3.3612 - 6.8*Power(t8850,2) - 3.2*Power(t8902,2) - 3.2*Power(t8935,2) - 6.8*Power(t8962,2) - 3.2*Power(t9044,2) - 3.2*Power(t9082,2);
  p_output1[32]=t12990;
  p_output1[33]=t12992;
  p_output1[34]=t12998;
  p_output1[35]=t13002;
  p_output1[36]=t5870*var2[0] + t10647*var2[1];
  p_output1[37]=t9186*var2[0] + t11408*var2[1] + t12854*var2[2];
  p_output1[38]=t9657*var2[0] + t11681*var2[1] + t12874*var2[2] + (-6.4*t5761*t9606 - 6.4*t5058*t9632)*var2[3] - 0.768*t9606*var2[4];
  p_output1[39]=t10368;
  p_output1[40]=t5870;
  p_output1[41]=t12990;
  p_output1[42]=-1.58228 - 3.2*Power(t5058,2) - 3.2*Power(t5761,2);
  p_output1[43]=t13029;
  p_output1[44]=-0.768*t5028*var2[0] - 0.768*t8308*var2[1];
  p_output1[45]=t13034 + t13035 - 0.768*t9369*var2[2];
  p_output1[46]=t13034 + t13035 - 0.768*t9861*var2[2] - 0.768*t9606*var2[3];
  p_output1[47]=t10372;
  p_output1[48]=t12826;
  p_output1[49]=t12992;
  p_output1[50]=t13029;
  p_output1[51]=-1.2143199999999998;
  p_output1[52]=t7650*var2[0] + t10726*var2[1];
  p_output1[53]=t10009*var2[0] + t11755*var2[1] + t12946*var2[2];
  p_output1[54]=t10142*var2[0] + t11906*var2[1] + t12960*var2[2] + (-6.4*t10140*t7144 - 6.4*t10136*t7545)*var2[5] - 0.768*t10136*var2[6];
  p_output1[55]=t10530;
  p_output1[56]=t7650;
  p_output1[57]=t12998;
  p_output1[58]=-1.58228 - 3.2*Power(t7144,2) - 3.2*Power(t7545,2);
  p_output1[59]=t13062;
  p_output1[60]=-0.768*t6189*var2[0] - 0.768*t8584*var2[1];
  p_output1[61]=t13067 + t13068 - 0.768*t10103*var2[2];
  p_output1[62]=t13067 + t13068 - 0.768*t10174*var2[2] - 0.768*t10136*var2[5];
  p_output1[63]=t10533;
  p_output1[64]=t12827;
  p_output1[65]=t13002;
  p_output1[66]=t13062;
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
