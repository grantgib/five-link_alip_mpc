/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:22:29 GMT-05:00
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
  double t1030;
  double t996;
  double t1019;
  double t1048;
  double t1055;
  double t972;
  double t1020;
  double t1049;
  double t1052;
  double t1097;
  double t1098;
  double t1111;
  double t1112;
  double t1122;
  double t1053;
  double t1058;
  double t1065;
  double t1071;
  double t1074;
  double t1075;
  double t5946;
  double t5947;
  double t5948;
  double t5836;
  double t5837;
  double t5866;
  double t1077;
  double t1082;
  double t1086;
  double t5971;
  double t5972;
  double t5973;
  double t1156;
  double t2068;
  double t2300;
  double t1131;
  double t2316;
  double t3008;
  double t6002;
  double t5998;
  double t5999;
  double t6000;
  double t6010;
  double t6011;
  double t6015;
  double t6021;
  double t6001;
  double t6008;
  double t6022;
  double t6023;
  double t6030;
  double t6065;
  double t6067;
  double t6103;
  double t6104;
  double t6105;
  double t6107;
  double t6108;
  double t6109;
  double t6113;
  double t6114;
  double t6115;
  double t1087;
  double t5585;
  double t5598;
  double t5603;
  double t5608;
  double t6145;
  double t6146;
  double t1123;
  double t1126;
  double t1130;
  double t5957;
  double t5977;
  double t5996;
  double t5997;
  double t6057;
  double t6073;
  double t6074;
  double t6075;
  double t6076;
  double t6077;
  double t6078;
  double t6090;
  double t6091;
  double t6092;
  double t6093;
  double t6094;
  double t6095;
  double t6131;
  double t6132;
  double t6133;
  double t6106;
  double t6110;
  double t6111;
  double t6119;
  double t6126;
  double t6127;
  double t6128;
  double t6129;
  double t6135;
  double t6136;
  double t6137;
  double t6138;
  double t6139;
  double t6180;
  double t6181;
  double t6182;
  double t6147;
  double t6148;
  double t6149;
  double t6152;
  double t6153;
  double t6154;
  double t6158;
  double t6159;
  double t6160;
  double t6161;
  double t6164;
  double t6165;
  double t6166;
  double t6167;
  double t6168;
  double t6171;
  double t6174;
  double t6175;
  double t6216;
  double t6217;
  double t6179;
  double t6219;
  double t6220;
  double t6185;
  double t6190;
  double t6226;
  double t6227;
  double t6194;
  double t6249;
  double t6250;
  double t6251;
  double t6252;
  double t6253;
  double t6255;
  double t6256;
  double t6257;
  double t6258;
  double t6259;
  double t6260;
  double t6261;
  double t6262;
  double t6263;
  double t6265;
  double t6266;
  double t6267;
  double t6268;
  double t6269;
  double t6270;
  double t6051;
  double t6063;
  double t6012;
  double t6013;
  double t6009;
  double t6014;
  double t6049;
  double t6050;
  double t6064;
  double t6070;
  double t6071;
  double t6284;
  double t6289;
  double t6290;
  double t6162;
  double t6298;
  double t6177;
  double t6178;
  double t6183;
  double t6184;
  double t6186;
  double t6189;
  double t6191;
  double t6192;
  double t6193;
  double t6195;
  double t6307;
  double t6201;
  double t6202;
  double t6203;
  double t6308;
  double t6205;
  double t6206;
  double t6207;
  double t6309;
  double t6312;
  double t6313;
  double t6314;
  double t6315;
  double t6316;
  double t6317;
  double t6211;
  double t6321;
  double t6218;
  double t6221;
  double t6222;
  double t6323;
  double t6224;
  double t6225;
  double t6228;
  double t6229;
  double t6230;
  double t6231;
  double t6234;
  double t6235;
  double t6236;
  double t6238;
  double t6239;
  double t6240;
  double t6241;
  double t6242;
  double t6243;
  double t6264;
  double t6112;
  double t6130;
  double t6134;
  double t6140;
  double t6141;
  double t1076;
  double t3171;
  double t5609;
  double t5610;
  double t6348;
  double t6349;
  double t6142;
  double t6299;
  double t6300;
  double t6301;
  double t6302;
  double t6303;
  double t6176;
  double t6187;
  double t6188;
  double t6196;
  double t6197;
  double t6322;
  double t6324;
  double t6325;
  double t6326;
  double t6327;
  double t6215;
  double t6223;
  double t6232;
  double t6233;
  double t6237;
  double t6244;
  double t6245;
  double t6338;
  double t6339;
  double t6340;
  double t6341;
  double t6342;
  double t6343;
  double t6344;
  double t6271;
  double t6351;
  double t6395;
  double t6396;
  double t6397;
  double t6285;
  double t6286;
  double t6287;
  double t6310;
  double t6150;
  double t6362;
  double t6363;
  double t6364;
  double t6331;
  double t6332;
  double t6333;
  double t6204;
  double t6208;
  double t6209;
  double t6379;
  double t6380;
  double t6381;
  double t6382;
  double t6383;
  double t6273;
  double t6274;
  double t6275;
  double t6276;
  double t5616;
  double t6400;
  double t6401;
  double t6402;
  double t6433;
  double t6434;
  double t6282;
  double t6356;
  double t6408;
  t1030 = Cos(var1[5]);
  t996 = Cos(var1[6]);
  t1019 = Sin(var1[5]);
  t1048 = Sin(var1[6]);
  t1055 = Cos(var1[2]);
  t972 = Sin(var1[2]);
  t1020 = -1.*t996*t1019;
  t1049 = -1.*t1030*t1048;
  t1052 = t1020 + t1049;
  t1097 = -1.*t996;
  t1098 = 1. + t1097;
  t1111 = 0.4*t1098;
  t1112 = 0.64*t996;
  t1122 = t1111 + t1112;
  t1053 = -1.*t972*t1052;
  t1058 = -1.*t1030*t996;
  t1065 = t1019*t1048;
  t1071 = t1058 + t1065;
  t1074 = t1055*t1071;
  t1075 = t1053 + t1074;
  t5946 = t1055*t1030;
  t5947 = -1.*t972*t1019;
  t5948 = t5946 + t5947;
  t5836 = -1.*t1030*t972;
  t5837 = -1.*t1055*t1019;
  t5866 = t5836 + t5837;
  t1077 = -1.*t1055*t1030;
  t1082 = t972*t1019;
  t1086 = t1077 + t1082;
  t5971 = t1030*t972;
  t5972 = t1055*t1019;
  t5973 = t5971 + t5972;
  t1156 = t1030*t996;
  t2068 = -1.*t1019*t1048;
  t2300 = t1156 + t2068;
  t1131 = t1055*t1052;
  t2316 = -1.*t972*t2300;
  t3008 = t1131 + t2316;
  t6002 = t1055*t2300;
  t5998 = t996*t1019;
  t5999 = t1030*t1048;
  t6000 = t5998 + t5999;
  t6010 = t972*t1052;
  t6011 = t6010 + t6002;
  t6015 = -1.*t1055*t2300;
  t6021 = t1053 + t6015;
  t6001 = -1.*t972*t6000;
  t6008 = t6001 + t6002;
  t6022 = t1055*t6000;
  t6023 = t972*t2300;
  t6030 = t6022 + t6023;
  t6065 = t972*t1071;
  t6067 = t1131 + t6065;
  t6103 = t1122*t1019;
  t6104 = 0.24*t1030*t1048;
  t6105 = t6103 + t6104;
  t6107 = t1030*t1122;
  t6108 = -0.24*t1019*t1048;
  t6109 = t6107 + t6108;
  t6113 = -1.*t1122*t1019;
  t6114 = -0.24*t1030*t1048;
  t6115 = t6113 + t6114;
  t1087 = 0.748*t1086;
  t5585 = t1122*t996;
  t5598 = Power(t1048,2);
  t5603 = 0.24*t5598;
  t5608 = t5585 + t5603;
  t6145 = t972*t6000;
  t6146 = t6145 + t1074;
  t1123 = t1122*t1048;
  t1126 = -0.24*t996*t1048;
  t1130 = t1123 + t1126;
  t5957 = 20.4*t5866*t5948;
  t5977 = 6.8*t5973*t5948;
  t5996 = 20.4*t5866*t1086;
  t5997 = 6.8*t5973*t1086;
  t6057 = -1.*t972*t1071;
  t6073 = Power(t5866,2);
  t6074 = 13.6*t6073;
  t6075 = 13.6*t5866*t5973;
  t6076 = Power(t5948,2);
  t6077 = 13.6*t6076;
  t6078 = 13.6*t5948*t1086;
  t6090 = Power(t1030,2);
  t6091 = 0.11*t6090;
  t6092 = Power(t1019,2);
  t6093 = 0.11*t6092;
  t6094 = t6091 + t6093;
  t6095 = 6.8*t1086*t6094;
  t6131 = t6105*t6000;
  t6132 = t2300*t6109;
  t6133 = t6131 + t6132;
  t6106 = -1.*t6105*t2300;
  t6110 = -1.*t1052*t6109;
  t6111 = t6106 + t6110;
  t6119 = t6115*t2300;
  t6126 = t6105*t2300;
  t6127 = t1052*t6109;
  t6128 = t6000*t6109;
  t6129 = t6119 + t6126 + t6127 + t6128;
  t6135 = -1.*t1052*t6115;
  t6136 = -1.*t1052*t6105;
  t6137 = -1.*t2300*t6109;
  t6138 = -1.*t6109*t1071;
  t6139 = t6135 + t6136 + t6137 + t6138;
  t6180 = -1.*t1030*t1122;
  t6181 = 0.24*t1019*t1048;
  t6182 = t6180 + t6181;
  t6147 = -0.384*var2[6]*t6146;
  t6148 = 3.2*t5608*t6146;
  t6149 = 3.2*t1130*t6067;
  t6152 = 6.4*t6011*t3008;
  t6153 = 3.2*t6030*t1075;
  t6154 = 3.2*t3008*t6146;
  t6158 = t6022 + t6057;
  t6159 = 3.2*t6011*t6158;
  t6160 = 3.2*t6008*t6067;
  t6161 = 6.4*t1075*t6067;
  t6164 = Power(t6011,2);
  t6165 = 6.4*t6164;
  t6166 = 6.4*t6011*t6146;
  t6167 = 6.4*t6030*t6067;
  t6168 = Power(t6067,2);
  t6171 = 6.4*t6168;
  t6174 = 3.2*t6133*t6146;
  t6175 = 3.2*t6111*t6067;
  t6216 = -0.24*t996*t1019;
  t6217 = t6216 + t6114;
  t6179 = -1.*t6000*t6109;
  t6219 = 0.24*t1030*t996;
  t6220 = t6219 + t6108;
  t6185 = -1.*t6105*t1071;
  t6190 = t1052*t6105;
  t6226 = -0.24*t1030*t996;
  t6227 = t6226 + t6181;
  t6194 = t6109*t1071;
  t6249 = 13.6*t5866*t5948;
  t6250 = 13.6*t5973*t5948;
  t6251 = 6.4*t6011*t6030;
  t6252 = 6.4*t6011*t6067;
  t6253 = t6249 + t6250 + t6251 + t6252;
  t6255 = 6.8*t6073;
  t6256 = 6.8*t5866*t5973;
  t6257 = 6.8*t6076;
  t6258 = 6.8*t5948*t1086;
  t6259 = 3.2*t6011*t6008;
  t6260 = 3.2*t3008*t6030;
  t6261 = 3.2*t6011*t1075;
  t6262 = 3.2*t3008*t6067;
  t6263 = t6255 + t6256 + t6257 + t6258 + t6259 + t6260 + t6261 + t6262;
  t6265 = 6.8*t5866*t6094;
  t6266 = 3.2*t6011*t6111;
  t6267 = 3.2*t6011*t6129;
  t6268 = 3.2*t6133*t6067;
  t6269 = 3.2*t6030*t6139;
  t6270 = t6265 + t6266 + t6267 + t6268 + t6269;
  t6051 = -1.*t1055*t1052;
  t6063 = t6051 + t6057;
  t6012 = -1.*t1055*t6000;
  t6013 = t6012 + t2316;
  t6009 = 6.4*t6008*t3008;
  t6014 = 3.2*t6011*t6013;
  t6049 = 3.2*t6021*t6030;
  t6050 = 6.4*t3008*t1075;
  t6064 = 3.2*t6011*t6063;
  t6070 = 3.2*t6021*t6067;
  t6071 = t5957 + t5977 + t5996 + t5997 + t6009 + t6014 + t6049 + t6050 + t6064 + t6070;
  t6284 = 0.748*t5973;
  t6289 = Power(t1086,2);
  t6290 = 13.6*t6289;
  t6162 = t5957 + t5977 + t5996 + t5997 + t6152 + t6153 + t6154 + t6159 + t6160 + t6161;
  t6298 = 6.8*t5973*t6094;
  t6177 = -1.*t6115*t2300;
  t6178 = -2.*t1052*t6109;
  t6183 = -1.*t1052*t6182;
  t6184 = -2.*t6115*t1071;
  t6186 = t6177 + t6178 + t6179 + t6183 + t6184 + t6185;
  t6189 = 2.*t1052*t6115;
  t6191 = t6115*t6000;
  t6192 = 2.*t2300*t6109;
  t6193 = t2300*t6182;
  t6195 = t6189 + t6190 + t6191 + t6192 + t6193 + t6194;
  t6307 = -0.384*var2[6]*t6158;
  t6201 = Power(t996,2);
  t6202 = -0.24*t6201;
  t6203 = t5585 + t6202;
  t6308 = 3.2*t1130*t1075;
  t6205 = -1.*t1122*t1048;
  t6206 = 0.24*t996*t1048;
  t6207 = t6205 + t6206;
  t6309 = 3.2*t5608*t6158;
  t6312 = Power(t3008,2);
  t6313 = 6.4*t6312;
  t6314 = 6.4*t6008*t1075;
  t6315 = Power(t1075,2);
  t6316 = 6.4*t6315;
  t6317 = 6.4*t3008*t6158;
  t6211 = t6152 + t6153 + t6154 + t6159 + t6160 + t6161;
  t6321 = 3.2*t6111*t1075;
  t6218 = t6217*t2300;
  t6221 = t6000*t6220;
  t6222 = t6218 + t6126 + t6127 + t6221;
  t6323 = 3.2*t6133*t6158;
  t6224 = -1.*t6217*t2300;
  t6225 = -1.*t1052*t6220;
  t6228 = -1.*t1052*t6227;
  t6229 = -1.*t6115*t1071;
  t6230 = -1.*t6217*t1071;
  t6231 = t6224 + t6110 + t6179 + t6225 + t6228 + t6229 + t6230 + t6185;
  t6234 = -1.*t1052*t6217;
  t6235 = -1.*t2300*t6220;
  t6236 = t6234 + t6136 + t6235 + t6138;
  t6238 = t1052*t6115;
  t6239 = t1052*t6217;
  t6240 = t6217*t6000;
  t6241 = t2300*t6220;
  t6242 = t2300*t6227;
  t6243 = t6238 + t6239 + t6190 + t6240 + t6132 + t6241 + t6242 + t6194;
  t6264 = -0.5*var2[5]*t6263;
  t6112 = 3.2*t3008*t6111;
  t6130 = 3.2*t3008*t6129;
  t6134 = 3.2*t6133*t1075;
  t6140 = 3.2*t6008*t6139;
  t6141 = t6095 + t6112 + t6130 + t6134 + t6140;
  t1076 = -0.384*var2[6]*t1075;
  t3171 = 3.2*t1130*t3008;
  t5609 = 3.2*t5608*t1075;
  t5610 = t1087 + t3171 + t5609;
  t6348 = 13.6*t5866*t1086;
  t6349 = t6249 + t6348 + t6009 + t6050;
  t6142 = -0.5*var2[2]*t6141;
  t6299 = 3.2*t6021*t6111;
  t6300 = 3.2*t6021*t6129;
  t6301 = 3.2*t6133*t6063;
  t6302 = 3.2*t6013*t6139;
  t6303 = t6298 + t6299 + t6300 + t6301 + t6302;
  t6176 = 6.4*t6129*t6067;
  t6187 = 3.2*t6030*t6186;
  t6188 = 6.4*t6011*t6139;
  t6196 = 3.2*t6011*t6195;
  t6197 = t6095 + t6174 + t6175 + t6176 + t6187 + t6188 + t6196;
  t6322 = 6.4*t6129*t1075;
  t6324 = 3.2*t6008*t6186;
  t6325 = 6.4*t3008*t6139;
  t6326 = 3.2*t3008*t6195;
  t6327 = t6298 + t6321 + t6322 + t6323 + t6324 + t6325 + t6326;
  t6215 = 3.2*t6129*t6067;
  t6223 = 3.2*t6222*t6067;
  t6232 = 3.2*t6030*t6231;
  t6233 = 3.2*t6011*t6139;
  t6237 = 3.2*t6011*t6236;
  t6244 = 3.2*t6011*t6243;
  t6245 = t6174 + t6175 + t6215 + t6223 + t6232 + t6233 + t6237 + t6244;
  t6338 = 3.2*t6129*t1075;
  t6339 = 3.2*t6222*t1075;
  t6340 = 3.2*t6008*t6231;
  t6341 = 3.2*t3008*t6139;
  t6342 = 3.2*t3008*t6236;
  t6343 = 3.2*t3008*t6243;
  t6344 = t6321 + t6338 + t6339 + t6323 + t6340 + t6341 + t6342 + t6343;
  t6271 = -0.5*var2[5]*t6270;
  t6351 = -0.5*var2[5]*t6141;
  t6395 = 6.4*t6129*t6133;
  t6396 = 6.4*t6111*t6139;
  t6397 = t6395 + t6396;
  t6285 = 3.2*t1130*t6021;
  t6286 = 3.2*t5608*t6063;
  t6287 = t6284 + t6285 + t6286;
  t6310 = t6284 + t6308 + t6309;
  t6150 = t1087 + t6148 + t6149;
  t6362 = 3.2*t1130*t6186;
  t6363 = 3.2*t5608*t6195;
  t6364 = t6362 + t6363;
  t6331 = 3.2*t6203*t3008;
  t6332 = 3.2*t6207*t1075;
  t6333 = t6331 + t6308 + t6332 + t6309;
  t6204 = 3.2*t6203*t6011;
  t6208 = 3.2*t6207*t6067;
  t6209 = t6204 + t6148 + t6149 + t6208;
  t6379 = 3.2*t6207*t6129;
  t6380 = 3.2*t1130*t6231;
  t6381 = 3.2*t6203*t6139;
  t6382 = 3.2*t5608*t6243;
  t6383 = t6379 + t6380 + t6381 + t6382;
  t6273 = 0.748*t5866;
  t6274 = 3.2*t1130*t6011;
  t6275 = 3.2*t5608*t6067;
  t6276 = t6273 + t6274 + t6275;
  t5616 = -0.5*var2[5]*t5610;
  t6400 = 3.2*t5608*t6129;
  t6401 = 3.2*t1130*t6139;
  t6402 = t6400 + t6401;
  t6433 = -0.384*var2[0]*t6146;
  t6434 = -0.384*var2[1]*t6158;
  t6282 = -0.384*var2[5]*t6067;
  t6356 = -0.384*var2[5]*t1075;
  t6408 = -0.384*var2[5]*t6129;
  p_output1[0]=(t1076 + t5616 + t6142 - 0.5*(6.4*t1075*t6011 + 6.4*t6008*t6011 + 6.4*t3008*t6030 + 6.4*t3008*t6067 + t6074 + t6075 + t6077 + t6078)*var2[0] - 0.5*t6071*var2[1])*var2[5];
  p_output1[1]=var2[5]*(t6147 - 0.5*(t6074 + t6075 + t6077 + t6078 + t6165 + t6166 + t6167 + t6171)*var2[0] - 0.5*t6162*var2[1] - 0.5*t6197*var2[2] - 0.5*t6150*var2[5]);
  p_output1[2]=var2[5]*(t6147 - 0.5*(t6165 + t6166 + t6167 + t6171)*var2[0] - 0.5*t6211*var2[1] - 0.5*t6245*var2[2] - 0.5*t6209*var2[5]);
  p_output1[3]=-0.5*t6253*var2[5];
  p_output1[4]=t6264;
  p_output1[5]=t6271;
  p_output1[6]=-0.5*t6253*var2[0] - 0.5*t6263*var2[1] - 0.5*t6270*var2[2] - 1.*t6276*var2[5] - 0.384*t6067*var2[6];
  p_output1[7]=t6282;
  p_output1[8]=var2[5]*(-0.5*t6071*var2[0] - 0.5*(6.4*t3008*t6013 + 6.4*t1075*t6021 + 6.4*t6008*t6021 + 6.4*t3008*t6063 + t6074 + t6075 + t6078 + t6290)*var2[1] - 0.5*t6303*var2[2] - 0.5*t6287*var2[5] - 0.384*t6063*var2[6]);
  p_output1[9]=var2[5]*(t6307 - 0.5*t6162*var2[0] - 0.5*(t6074 + t6075 + t6078 + t6290 + t6313 + t6314 + t6316 + t6317)*var2[1] - 0.5*t6327*var2[2] - 0.5*t6310*var2[5]);
  p_output1[10]=var2[5]*(t6307 - 0.5*t6211*var2[0] - 0.5*(t6313 + t6314 + t6316 + t6317)*var2[1] - 0.5*t6344*var2[2] - 0.5*t6333*var2[5]);
  p_output1[11]=t6264;
  p_output1[12]=-0.5*t6349*var2[5];
  p_output1[13]=t6351;
  p_output1[14]=t1076 + t6142 - 0.5*t6263*var2[0] - 0.5*t6349*var2[1] - 1.*t5610*var2[5];
  p_output1[15]=t6356;
  p_output1[16]=(-0.5*t6141*var2[0] - 0.5*t6303*var2[1])*var2[5];
  p_output1[17]=var2[5]*(-0.5*t6197*var2[0] - 0.5*t6327*var2[1] - 0.5*(6.4*Power(t6129,2) + 6.4*Power(t6139,2) + 6.4*t6111*t6186 + 6.4*t6133*t6195)*var2[2] - 0.5*t6364*var2[5] - 0.384*t6195*var2[6]);
  p_output1[18]=var2[5]*(-0.5*t6245*var2[0] - 0.5*t6344*var2[1] - 0.5*(6.4*t6129*t6222 + 6.4*t6111*t6231 + 6.4*t6139*t6236 + 6.4*t6133*t6243)*var2[2] - 0.5*t6383*var2[5] - 0.384*t6243*var2[6]);
  p_output1[19]=t6271;
  p_output1[20]=t6351;
  p_output1[21]=-0.5*t6397*var2[5];
  p_output1[22]=-0.5*t6270*var2[0] - 0.5*t6141*var2[1] - 0.5*t6397*var2[2] - 1.*t6402*var2[5] - 0.384*t6129*var2[6];
  p_output1[23]=t6408;
  p_output1[24]=(-0.5*t5610*var2[0] - 0.5*t6287*var2[1])*var2[5];
  p_output1[25]=(-0.5*t6150*var2[0] - 0.5*t6310*var2[1] - 0.5*t6364*var2[2])*var2[5];
  p_output1[26]=(-0.5*t6209*var2[0] - 0.5*t6333*var2[1] - 0.5*t6383*var2[2])*var2[5];
  p_output1[27]=-0.5*t6276*var2[5];
  p_output1[28]=t5616;
  p_output1[29]=-0.5*t6402*var2[5];
  p_output1[30]=-0.5*t6276*var2[0] - 0.5*t5610*var2[1] - 0.5*t6402*var2[2];
  p_output1[31]=(-0.384*t1075*var2[0] - 0.384*t6063*var2[1])*var2[5];
  p_output1[32]=(t6433 + t6434 - 0.384*t6195*var2[2])*var2[5];
  p_output1[33]=(t6433 + t6434 - 0.384*t6243*var2[2])*var2[5];
  p_output1[34]=t6282;
  p_output1[35]=t6356;
  p_output1[36]=t6408;
  p_output1[37]=-0.384*t6067*var2[0] - 0.384*t1075*var2[1] - 0.384*t6129*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 38, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec6_five_link_walker.hh"

namespace RightStance
{

void J_Ce2_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
