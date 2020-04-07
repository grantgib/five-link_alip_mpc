/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 22:02:09 GMT-04:00
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
  double t1060;
  double t649;
  double t997;
  double t2098;
  double t5857;
  double t3;
  double t5871;
  double t5872;
  double t5888;
  double t5954;
  double t5962;
  double t5963;
  double t5964;
  double t5965;
  double t998;
  double t2808;
  double t5820;
  double t5848;
  double t5900;
  double t5912;
  double t6054;
  double t6049;
  double t6051;
  double t6057;
  double t6061;
  double t6062;
  double t6063;
  double t6073;
  double t6074;
  double t6075;
  double t6078;
  double t6079;
  double t6053;
  double t6058;
  double t6059;
  double t6060;
  double t6064;
  double t6065;
  double t5922;
  double t5923;
  double t5938;
  double t6102;
  double t6103;
  double t6104;
  double t5992;
  double t5988;
  double t5989;
  double t5990;
  double t5991;
  double t5993;
  double t6067;
  double t6068;
  double t6069;
  double t6121;
  double t6122;
  double t6123;
  double t6090;
  double t6085;
  double t6086;
  double t6088;
  double t6089;
  double t6091;
  double t6106;
  double t6107;
  double t6109;
  double t6112;
  double t6115;
  double t6117;
  double t6118;
  double t6119;
  double t6125;
  double t6126;
  double t6127;
  double t6129;
  double t6130;
  double t6132;
  double t6133;
  double t6136;
  double t6191;
  double t6192;
  double t6193;
  double t6195;
  double t6196;
  double t6197;
  double t6211;
  double t6212;
  double t6213;
  double t6215;
  double t6216;
  double t6217;
  double t5953;
  double t5966;
  double t5967;
  double t5987;
  double t5995;
  double t5999;
  double t6013;
  double t6014;
  double t6228;
  double t6229;
  double t6230;
  double t6231;
  double t6232;
  double t6105;
  double t6111;
  double t6142;
  double t6143;
  double t6144;
  double t6145;
  double t6146;
  double t6147;
  double t6148;
  double t6149;
  double t6150;
  double t6151;
  double t6185;
  double t6186;
  double t6187;
  double t6188;
  double t6189;
  double t6190;
  double t6194;
  double t6198;
  double t6199;
  double t6201;
  double t6202;
  double t6203;
  double t6251;
  double t6252;
  double t6253;
  double t6233;
  double t6234;
  double t6235;
  double t6238;
  double t6239;
  double t6242;
  double t6243;
  double t6244;
  double t6245;
  double t6246;
  double t6247;
  double t6250;
  double t6255;
  double t6256;
  double t6260;
  double t6284;
  double t6285;
  double t6262;
  double t6287;
  double t6288;
  double t6264;
  double t6070;
  double t6080;
  double t6081;
  double t6084;
  double t6093;
  double t6094;
  double t6097;
  double t6098;
  double t6299;
  double t6300;
  double t6301;
  double t6302;
  double t6303;
  double t6124;
  double t6128;
  double t6162;
  double t6163;
  double t6164;
  double t6165;
  double t6166;
  double t6167;
  double t6168;
  double t6169;
  double t6170;
  double t6171;
  double t6205;
  double t6206;
  double t6207;
  double t6208;
  double t6209;
  double t6210;
  double t6214;
  double t6218;
  double t6219;
  double t6221;
  double t6222;
  double t6223;
  double t6322;
  double t6323;
  double t6324;
  double t6304;
  double t6305;
  double t6306;
  double t6309;
  double t6310;
  double t6313;
  double t6314;
  double t6315;
  double t6316;
  double t6317;
  double t6318;
  double t6321;
  double t6326;
  double t6327;
  double t6331;
  double t6355;
  double t6356;
  double t6333;
  double t6358;
  double t6359;
  double t6335;
  double t6152;
  double t6153;
  double t6159;
  double t6160;
  double t6172;
  double t6173;
  double t6179;
  double t6180;
  double t6154;
  double t6155;
  double t6156;
  double t6157;
  double t6158;
  double t6161;
  double t6174;
  double t6175;
  double t6176;
  double t6177;
  double t6178;
  double t6181;
  double t6182;
  double t6415;
  double t6426;
  double t6248;
  double t6436;
  double t6254;
  double t6257;
  double t6258;
  double t6261;
  double t6263;
  double t6265;
  double t6445;
  double t6274;
  double t6275;
  double t6276;
  double t6446;
  double t6270;
  double t6271;
  double t6272;
  double t6447;
  double t6450;
  double t6451;
  double t6282;
  double t6455;
  double t6286;
  double t6289;
  double t6290;
  double t6457;
  double t6292;
  double t6293;
  double t6294;
  double t6421;
  double t6429;
  double t6319;
  double t6439;
  double t6325;
  double t6328;
  double t6329;
  double t6332;
  double t6334;
  double t6336;
  double t6474;
  double t6345;
  double t6346;
  double t6347;
  double t6475;
  double t6341;
  double t6342;
  double t6343;
  double t6476;
  double t6479;
  double t6480;
  double t6353;
  double t6484;
  double t6357;
  double t6360;
  double t6361;
  double t6486;
  double t6363;
  double t6364;
  double t6365;
  double t6387;
  double t6388;
  double t6389;
  double t6390;
  double t6391;
  double t6392;
  double t6393;
  double t6394;
  double t6395;
  double t6370;
  double t6371;
  double t6372;
  double t6373;
  double t6184;
  double t6200;
  double t6204;
  double t6220;
  double t6224;
  double t6225;
  double t5994;
  double t6017;
  double t6022;
  double t6092;
  double t6099;
  double t6100;
  double t6435;
  double t6437;
  double t6438;
  double t6440;
  double t6441;
  double t6442;
  double t6456;
  double t6458;
  double t6459;
  double t6259;
  double t6266;
  double t6267;
  double t6469;
  double t6470;
  double t6471;
  double t6291;
  double t6295;
  double t6296;
  double t6485;
  double t6487;
  double t6488;
  double t6330;
  double t6337;
  double t6338;
  double t6498;
  double t6499;
  double t6500;
  double t6362;
  double t6366;
  double t6367;
  double t6396;
  double t6397;
  double t6398;
  double t6399;
  double t6400;
  double t6401;
  double t6402;
  double t6403;
  double t6416;
  double t6417;
  double t6418;
  double t6448;
  double t6236;
  double t6510;
  double t6511;
  double t6512;
  double t6462;
  double t6463;
  double t6464;
  double t6273;
  double t6277;
  double t6278;
  double t6522;
  double t6523;
  double t6524;
  double t6525;
  double t6526;
  double t6404;
  double t6405;
  double t6406;
  double t6407;
  double t6574;
  double t6575;
  double t6576;
  double t6577;
  double t6613;
  double t6614;
  double t6408;
  double t6504;
  double t6578;
  double t6579;
  double t6607;
  double t6608;
  double t6422;
  double t6423;
  double t6424;
  double t6477;
  double t6307;
  double t6536;
  double t6537;
  double t6538;
  double t6491;
  double t6492;
  double t6493;
  double t6344;
  double t6348;
  double t6349;
  double t6548;
  double t6549;
  double t6550;
  double t6551;
  double t6552;
  double t6409;
  double t6410;
  double t6411;
  double t6412;
  double t6580;
  double t6581;
  double t6582;
  double t6583;
  double t6646;
  double t6647;
  double t6413;
  double t6505;
  double t6584;
  double t6585;
  double t6640;
  double t6641;
  t1060 = Cos(var1[3]);
  t649 = Cos(var1[4]);
  t997 = Sin(var1[3]);
  t2098 = Sin(var1[4]);
  t5857 = Sin(var1[2]);
  t3 = Cos(var1[2]);
  t5871 = t1060*t649;
  t5872 = -1.*t997*t2098;
  t5888 = t5871 + t5872;
  t5954 = -1.*t649;
  t5962 = 1. + t5954;
  t5963 = 0.4*t5962;
  t5964 = 0.64*t649;
  t5965 = t5963 + t5964;
  t998 = -1.*t649*t997;
  t2808 = -1.*t1060*t2098;
  t5820 = t998 + t2808;
  t5848 = t3*t5820;
  t5900 = -1.*t5857*t5888;
  t5912 = t5848 + t5900;
  t6054 = Cos(var1[5]);
  t6049 = Cos(var1[6]);
  t6051 = Sin(var1[5]);
  t6057 = Sin(var1[6]);
  t6061 = t6054*t6049;
  t6062 = -1.*t6051*t6057;
  t6063 = t6061 + t6062;
  t6073 = -1.*t6049;
  t6074 = 1. + t6073;
  t6075 = 0.4*t6074;
  t6078 = 0.64*t6049;
  t6079 = t6075 + t6078;
  t6053 = -1.*t6049*t6051;
  t6058 = -1.*t6054*t6057;
  t6059 = t6053 + t6058;
  t6060 = t3*t6059;
  t6064 = -1.*t5857*t6063;
  t6065 = t6060 + t6064;
  t5922 = -1.*t1060*t5857;
  t5923 = -1.*t3*t997;
  t5938 = t5922 + t5923;
  t6102 = t3*t1060;
  t6103 = -1.*t5857*t997;
  t6104 = t6102 + t6103;
  t5992 = t3*t5888;
  t5988 = t649*t997;
  t5989 = t1060*t2098;
  t5990 = t5988 + t5989;
  t5991 = -1.*t5857*t5990;
  t5993 = t5991 + t5992;
  t6067 = -1.*t6054*t5857;
  t6068 = -1.*t3*t6051;
  t6069 = t6067 + t6068;
  t6121 = t3*t6054;
  t6122 = -1.*t5857*t6051;
  t6123 = t6121 + t6122;
  t6090 = t3*t6063;
  t6085 = t6049*t6051;
  t6086 = t6054*t6057;
  t6088 = t6085 + t6086;
  t6089 = -1.*t5857*t6088;
  t6091 = t6089 + t6090;
  t6106 = t1060*t5857;
  t6107 = t3*t997;
  t6109 = t6106 + t6107;
  t6112 = t5857*t5820;
  t6115 = t6112 + t5992;
  t6117 = t3*t5990;
  t6118 = t5857*t5888;
  t6119 = t6117 + t6118;
  t6125 = t6054*t5857;
  t6126 = t3*t6051;
  t6127 = t6125 + t6126;
  t6129 = t5857*t6059;
  t6130 = t6129 + t6090;
  t6132 = t3*t6088;
  t6133 = t5857*t6063;
  t6136 = t6132 + t6133;
  t6191 = t5965*t997;
  t6192 = 0.24*t1060*t2098;
  t6193 = t6191 + t6192;
  t6195 = t1060*t5965;
  t6196 = -0.24*t997*t2098;
  t6197 = t6195 + t6196;
  t6211 = t6079*t6051;
  t6212 = 0.24*t6054*t6057;
  t6213 = t6211 + t6212;
  t6215 = t6054*t6079;
  t6216 = -0.24*t6051*t6057;
  t6217 = t6215 + t6216;
  t5953 = -0.748*t5938;
  t5966 = t5965*t2098;
  t5967 = -0.24*t649*t2098;
  t5987 = t5966 + t5967;
  t5995 = t5965*t649;
  t5999 = Power(t2098,2);
  t6013 = 0.24*t5999;
  t6014 = t5995 + t6013;
  t6228 = -1.*t1060*t649;
  t6229 = t997*t2098;
  t6230 = t6228 + t6229;
  t6231 = t5857*t6230;
  t6232 = t5848 + t6231;
  t6105 = -13.6*t5938*t6104;
  t6111 = -13.6*t6109*t6104;
  t6142 = Power(t5938,2);
  t6143 = -6.8*t6142;
  t6144 = -6.8*t5938*t6109;
  t6145 = Power(t6104,2);
  t6146 = -6.8*t6145;
  t6147 = -1.*t3*t1060;
  t6148 = t5857*t997;
  t6149 = t6147 + t6148;
  t6150 = -6.8*t6104*t6149;
  t6151 = -1.*t5857*t5820;
  t6185 = Power(t1060,2);
  t6186 = 0.11*t6185;
  t6187 = Power(t997,2);
  t6188 = 0.11*t6187;
  t6189 = t6186 + t6188;
  t6190 = -6.8*t5938*t6189;
  t6194 = -1.*t6193*t5888;
  t6198 = -1.*t5820*t6197;
  t6199 = t6194 + t6198;
  t6201 = t6193*t5990;
  t6202 = t5888*t6197;
  t6203 = t6201 + t6202;
  t6251 = -1.*t5965*t997;
  t6252 = -0.24*t1060*t2098;
  t6253 = t6251 + t6252;
  t6233 = -0.768*var2[4]*t6232;
  t6234 = -3.2*t5987*t6115;
  t6235 = -3.2*t6014*t6232;
  t6238 = -6.4*t6115*t6119;
  t6239 = -6.4*t6115*t6232;
  t6242 = -3.2*t6115*t5993;
  t6243 = -3.2*t5912*t6119;
  t6244 = t3*t6230;
  t6245 = t6151 + t6244;
  t6246 = -3.2*t6115*t6245;
  t6247 = -3.2*t5912*t6232;
  t6250 = -3.2*t6115*t6199;
  t6255 = t6193*t5888;
  t6256 = t5820*t6197;
  t6260 = -3.2*t6203*t6232;
  t6284 = -0.24*t649*t997;
  t6285 = t6284 + t6252;
  t6262 = -1.*t5820*t6193;
  t6287 = 0.24*t1060*t649;
  t6288 = t6287 + t6196;
  t6264 = -1.*t6197*t6230;
  t6070 = -0.748*t6069;
  t6080 = t6079*t6057;
  t6081 = -0.24*t6049*t6057;
  t6084 = t6080 + t6081;
  t6093 = t6079*t6049;
  t6094 = Power(t6057,2);
  t6097 = 0.24*t6094;
  t6098 = t6093 + t6097;
  t6299 = -1.*t6054*t6049;
  t6300 = t6051*t6057;
  t6301 = t6299 + t6300;
  t6302 = t5857*t6301;
  t6303 = t6060 + t6302;
  t6124 = -13.6*t6069*t6123;
  t6128 = -13.6*t6127*t6123;
  t6162 = Power(t6069,2);
  t6163 = -6.8*t6162;
  t6164 = -6.8*t6069*t6127;
  t6165 = Power(t6123,2);
  t6166 = -6.8*t6165;
  t6167 = -1.*t3*t6054;
  t6168 = t5857*t6051;
  t6169 = t6167 + t6168;
  t6170 = -6.8*t6123*t6169;
  t6171 = -1.*t5857*t6059;
  t6205 = Power(t6054,2);
  t6206 = 0.11*t6205;
  t6207 = Power(t6051,2);
  t6208 = 0.11*t6207;
  t6209 = t6206 + t6208;
  t6210 = -6.8*t6069*t6209;
  t6214 = -1.*t6213*t6063;
  t6218 = -1.*t6059*t6217;
  t6219 = t6214 + t6218;
  t6221 = t6213*t6088;
  t6222 = t6063*t6217;
  t6223 = t6221 + t6222;
  t6322 = -1.*t6079*t6051;
  t6323 = -0.24*t6054*t6057;
  t6324 = t6322 + t6323;
  t6304 = -0.768*var2[6]*t6303;
  t6305 = -3.2*t6084*t6130;
  t6306 = -3.2*t6098*t6303;
  t6309 = -6.4*t6130*t6136;
  t6310 = -6.4*t6130*t6303;
  t6313 = -3.2*t6130*t6091;
  t6314 = -3.2*t6065*t6136;
  t6315 = t3*t6301;
  t6316 = t6171 + t6315;
  t6317 = -3.2*t6130*t6316;
  t6318 = -3.2*t6065*t6303;
  t6321 = -3.2*t6130*t6219;
  t6326 = t6213*t6063;
  t6327 = t6059*t6217;
  t6331 = -3.2*t6223*t6303;
  t6355 = -0.24*t6049*t6051;
  t6356 = t6355 + t6323;
  t6333 = -1.*t6059*t6213;
  t6358 = 0.24*t6054*t6049;
  t6359 = t6358 + t6216;
  t6335 = -1.*t6217*t6301;
  t6152 = -1.*t3*t5888;
  t6153 = t6151 + t6152;
  t6159 = -1.*t3*t5990;
  t6160 = t6159 + t5900;
  t6172 = -1.*t3*t6063;
  t6173 = t6171 + t6172;
  t6179 = -1.*t3*t6088;
  t6180 = t6179 + t6064;
  t6154 = -3.2*t6153*t6115;
  t6155 = Power(t5993,2);
  t6156 = -3.2*t6155;
  t6157 = Power(t5912,2);
  t6158 = -3.2*t6157;
  t6161 = -3.2*t6160*t6119;
  t6174 = -3.2*t6173*t6130;
  t6175 = Power(t6091,2);
  t6176 = -3.2*t6175;
  t6177 = Power(t6065,2);
  t6178 = -3.2*t6177;
  t6181 = -3.2*t6180*t6136;
  t6182 = t6143 + t6144 + t6146 + t6150 + t6154 + t6156 + t6158 + t6161 + t6163 + t6164 + t6166 + t6170 + t6174 + t6176 + t6178 + t6181;
  t6415 = -0.748*t6149;
  t6426 = -13.6*t5938*t6149;
  t6248 = t6143 + t6144 + t6146 + t6150 + t6242 + t6243 + t6246 + t6247;
  t6436 = -6.8*t6149*t6189;
  t6254 = t6253*t5888;
  t6257 = t5990*t6197;
  t6258 = t6254 + t6255 + t6256 + t6257;
  t6261 = -1.*t5820*t6253;
  t6263 = -1.*t5888*t6197;
  t6265 = t6261 + t6262 + t6263 + t6264;
  t6445 = -0.768*var2[4]*t6245;
  t6274 = Power(t649,2);
  t6275 = -0.24*t6274;
  t6276 = t5995 + t6275;
  t6446 = -3.2*t5987*t5912;
  t6270 = -1.*t5965*t2098;
  t6271 = 0.24*t649*t2098;
  t6272 = t6270 + t6271;
  t6447 = -3.2*t6014*t6245;
  t6450 = -6.4*t5993*t5912;
  t6451 = -6.4*t5912*t6245;
  t6282 = t6242 + t6243 + t6246 + t6247;
  t6455 = -3.2*t5912*t6199;
  t6286 = t6285*t5888;
  t6289 = t5990*t6288;
  t6290 = t6286 + t6255 + t6256 + t6289;
  t6457 = -3.2*t6203*t6245;
  t6292 = -1.*t5820*t6285;
  t6293 = -1.*t5888*t6288;
  t6294 = t6292 + t6262 + t6293 + t6264;
  t6421 = -0.748*t6169;
  t6429 = -13.6*t6069*t6169;
  t6319 = t6163 + t6164 + t6166 + t6170 + t6313 + t6314 + t6317 + t6318;
  t6439 = -6.8*t6169*t6209;
  t6325 = t6324*t6063;
  t6328 = t6088*t6217;
  t6329 = t6325 + t6326 + t6327 + t6328;
  t6332 = -1.*t6059*t6324;
  t6334 = -1.*t6063*t6217;
  t6336 = t6332 + t6333 + t6334 + t6335;
  t6474 = -0.768*var2[6]*t6316;
  t6345 = Power(t6049,2);
  t6346 = -0.24*t6345;
  t6347 = t6093 + t6346;
  t6475 = -3.2*t6084*t6065;
  t6341 = -1.*t6079*t6057;
  t6342 = 0.24*t6049*t6057;
  t6343 = t6341 + t6342;
  t6476 = -3.2*t6098*t6316;
  t6479 = -6.4*t6091*t6065;
  t6480 = -6.4*t6065*t6316;
  t6353 = t6313 + t6314 + t6317 + t6318;
  t6484 = -3.2*t6065*t6219;
  t6357 = t6356*t6063;
  t6360 = t6088*t6359;
  t6361 = t6357 + t6326 + t6327 + t6360;
  t6486 = -3.2*t6223*t6316;
  t6363 = -1.*t6059*t6356;
  t6364 = -1.*t6063*t6359;
  t6365 = t6363 + t6333 + t6364 + t6335;
  t6387 = -6.8*t5938*t6104;
  t6388 = -6.8*t6109*t6104;
  t6389 = -3.2*t6115*t5912;
  t6390 = -3.2*t5993*t6119;
  t6391 = -6.8*t6069*t6123;
  t6392 = -6.8*t6127*t6123;
  t6393 = -3.2*t6130*t6065;
  t6394 = -3.2*t6091*t6136;
  t6395 = t6387 + t6388 + t6389 + t6390 + t6391 + t6392 + t6393 + t6394;
  t6370 = Power(t3,2);
  t6371 = -12.*t6370;
  t6372 = Power(t5857,2);
  t6373 = -12.*t6372;
  t6184 = 2.88*t5857;
  t6200 = -3.2*t5993*t6199;
  t6204 = -3.2*t5912*t6203;
  t6220 = -3.2*t6091*t6219;
  t6224 = -3.2*t6065*t6223;
  t6225 = t6184 + t6190 + t6200 + t6204 + t6210 + t6220 + t6224;
  t5994 = -3.2*t5987*t5993;
  t6017 = -3.2*t6014*t5912;
  t6022 = t5953 + t5994 + t6017;
  t6092 = -3.2*t6084*t6091;
  t6099 = -3.2*t6098*t6065;
  t6100 = t6070 + t6092 + t6099;
  t6435 = 2.88*t3;
  t6437 = -3.2*t6160*t6199;
  t6438 = -3.2*t6153*t6203;
  t6440 = -3.2*t6180*t6219;
  t6441 = -3.2*t6173*t6223;
  t6442 = t6435 + t6436 + t6437 + t6438 + t6439 + t6440 + t6441;
  t6456 = -3.2*t5912*t6258;
  t6458 = -3.2*t5993*t6265;
  t6459 = t6436 + t6455 + t6456 + t6457 + t6458;
  t6259 = -3.2*t6115*t6258;
  t6266 = -3.2*t6119*t6265;
  t6267 = t6190 + t6250 + t6259 + t6260 + t6266;
  t6469 = -3.2*t5912*t6290;
  t6470 = -3.2*t5993*t6294;
  t6471 = t6455 + t6469 + t6457 + t6470;
  t6291 = -3.2*t6115*t6290;
  t6295 = -3.2*t6119*t6294;
  t6296 = t6250 + t6291 + t6260 + t6295;
  t6485 = -3.2*t6065*t6329;
  t6487 = -3.2*t6091*t6336;
  t6488 = t6439 + t6484 + t6485 + t6486 + t6487;
  t6330 = -3.2*t6130*t6329;
  t6337 = -3.2*t6136*t6336;
  t6338 = t6210 + t6321 + t6330 + t6331 + t6337;
  t6498 = -3.2*t6065*t6361;
  t6499 = -3.2*t6091*t6365;
  t6500 = t6484 + t6498 + t6486 + t6499;
  t6362 = -3.2*t6130*t6361;
  t6366 = -3.2*t6136*t6365;
  t6367 = t6321 + t6362 + t6331 + t6366;
  t6396 = -2.88*t3;
  t6397 = -6.8*t6104*t6189;
  t6398 = -3.2*t6119*t6199;
  t6399 = -3.2*t6115*t6203;
  t6400 = -6.8*t6123*t6209;
  t6401 = -3.2*t6136*t6219;
  t6402 = -3.2*t6130*t6223;
  t6403 = t6396 + t6397 + t6398 + t6399 + t6400 + t6401 + t6402;
  t6416 = -3.2*t6014*t6153;
  t6417 = -3.2*t5987*t6160;
  t6418 = t6415 + t6416 + t6417;
  t6448 = t6415 + t6446 + t6447;
  t6236 = t5953 + t6234 + t6235;
  t6510 = -3.2*t6014*t6258;
  t6511 = -3.2*t5987*t6265;
  t6512 = t6510 + t6511;
  t6462 = -3.2*t6276*t5993;
  t6463 = -3.2*t6272*t5912;
  t6464 = t6462 + t6446 + t6463 + t6447;
  t6273 = -3.2*t6272*t6115;
  t6277 = -3.2*t6276*t6119;
  t6278 = t6234 + t6273 + t6277 + t6235;
  t6522 = -3.2*t6276*t6199;
  t6523 = -3.2*t6272*t6203;
  t6524 = -3.2*t6014*t6290;
  t6525 = -3.2*t5987*t6294;
  t6526 = t6522 + t6523 + t6524 + t6525;
  t6404 = -0.748*t6104;
  t6405 = -3.2*t6014*t6115;
  t6406 = -3.2*t5987*t6119;
  t6407 = t6404 + t6405 + t6406;
  t6574 = -0.748*t6189;
  t6575 = -3.2*t5987*t6199;
  t6576 = -3.2*t6014*t6203;
  t6577 = -0.67 + t6574 + t6575 + t6576;
  t6613 = -0.768*var2[1]*t6245;
  t6614 = -0.768*var2[0]*t6232;
  t6408 = -0.768*t6115;
  t6504 = -0.768*t5912;
  t6578 = -0.768*t6203;
  t6579 = -0.2 + t6578;
  t6607 = -0.768*t6014;
  t6608 = -0.2 + t6607;
  t6422 = -3.2*t6098*t6173;
  t6423 = -3.2*t6084*t6180;
  t6424 = t6421 + t6422 + t6423;
  t6477 = t6421 + t6475 + t6476;
  t6307 = t6070 + t6305 + t6306;
  t6536 = -3.2*t6098*t6329;
  t6537 = -3.2*t6084*t6336;
  t6538 = t6536 + t6537;
  t6491 = -3.2*t6347*t6091;
  t6492 = -3.2*t6343*t6065;
  t6493 = t6491 + t6475 + t6492 + t6476;
  t6344 = -3.2*t6343*t6130;
  t6348 = -3.2*t6347*t6136;
  t6349 = t6305 + t6344 + t6348 + t6306;
  t6548 = -3.2*t6347*t6219;
  t6549 = -3.2*t6343*t6223;
  t6550 = -3.2*t6098*t6361;
  t6551 = -3.2*t6084*t6365;
  t6552 = t6548 + t6549 + t6550 + t6551;
  t6409 = -0.748*t6123;
  t6410 = -3.2*t6098*t6130;
  t6411 = -3.2*t6084*t6136;
  t6412 = t6409 + t6410 + t6411;
  t6580 = -0.748*t6209;
  t6581 = -3.2*t6084*t6219;
  t6582 = -3.2*t6098*t6223;
  t6583 = -0.67 + t6580 + t6581 + t6582;
  t6646 = -0.768*var2[1]*t6316;
  t6647 = -0.768*var2[0]*t6303;
  t6413 = -0.768*t6130;
  t6505 = -0.768*t6065;
  t6584 = -0.768*t6223;
  t6585 = -0.2 + t6584;
  t6640 = -0.768*t6098;
  t6641 = -0.2 + t6640;
  p_output1[0]=(t6105 + t6111 - 6.4*t5912*t6115 - 6.4*t5993*t6119 + t6124 + t6128 - 6.4*t6065*t6130 - 6.4*t6091*t6136)*var2[0] + t6182*var2[1] + t6225*var2[2] + t6022*var2[3] - 0.768*t5912*var2[4] + t6100*var2[5] - 0.768*t6065*var2[6];
  p_output1[1]=t6233 + (t6105 + t6111 + t6238 + t6239)*var2[0] + t6248*var2[1] + t6267*var2[2] + t6236*var2[3];
  p_output1[2]=t6233 + (t6238 + t6239)*var2[0] + t6282*var2[1] + t6296*var2[2] + t6278*var2[3];
  p_output1[3]=t6304 + (t6124 + t6128 + t6309 + t6310)*var2[0] + t6319*var2[1] + t6338*var2[2] + t6307*var2[5];
  p_output1[4]=t6304 + (t6309 + t6310)*var2[0] + t6353*var2[1] + t6367*var2[2] + t6349*var2[5];
  p_output1[5]=-6.8*Power(t6109,2) - 3.2*Power(t6115,2) - 3.2*Power(t6119,2) - 6.8*Power(t6127,2) - 3.2*Power(t6130,2) - 3.2*Power(t6136,2) + t6146 + t6166 + t6371 + t6373;
  p_output1[6]=t6395;
  p_output1[7]=t6403;
  p_output1[8]=t6407;
  p_output1[9]=t6408;
  p_output1[10]=t6412;
  p_output1[11]=t6413;
  p_output1[12]=t6182*var2[0] + (t6105 + t6124 - 6.4*t5912*t6153 - 6.4*t5993*t6160 - 6.4*t6065*t6173 - 6.4*t6091*t6180 + t6426 + t6429)*var2[1] + t6442*var2[2] + t6418*var2[3] - 0.768*t6153*var2[4] + t6424*var2[5] - 0.768*t6173*var2[6];
  p_output1[13]=t6445 + t6248*var2[0] + (t6105 + t6426 + t6450 + t6451)*var2[1] + t6459*var2[2] + t6448*var2[3];
  p_output1[14]=t6445 + t6282*var2[0] + (t6450 + t6451)*var2[1] + t6471*var2[2] + t6464*var2[3];
  p_output1[15]=t6474 + t6319*var2[0] + (t6124 + t6429 + t6479 + t6480)*var2[1] + t6488*var2[2] + t6477*var2[5];
  p_output1[16]=t6474 + t6353*var2[0] + (t6479 + t6480)*var2[1] + t6500*var2[2] + t6493*var2[5];
  p_output1[17]=t6395;
  p_output1[18]=t6143 + t6146 + t6156 + t6158 + t6163 + t6166 + t6176 + t6178 + t6371 + t6373;
  p_output1[19]=t6225;
  p_output1[20]=t6022;
  p_output1[21]=t6504;
  p_output1[22]=t6100;
  p_output1[23]=t6505;
  p_output1[24]=t6225*var2[0] + t6442*var2[1];
  p_output1[25]=t6267*var2[0] + t6459*var2[1] + (-6.4*t6203*t6258 - 6.4*t6199*t6265)*var2[2] + t6512*var2[3] - 0.768*t6258*var2[4];
  p_output1[26]=t6296*var2[0] + t6471*var2[1] + (-6.4*t6203*t6290 - 6.4*t6199*t6294)*var2[2] + t6526*var2[3] - 0.768*t6290*var2[4];
  p_output1[27]=t6338*var2[0] + t6488*var2[1] + (-6.4*t6223*t6329 - 6.4*t6219*t6336)*var2[2] + t6538*var2[5] - 0.768*t6329*var2[6];
  p_output1[28]=t6367*var2[0] + t6500*var2[1] + (-6.4*t6223*t6361 - 6.4*t6219*t6365)*var2[2] + t6552*var2[5] - 0.768*t6361*var2[6];
  p_output1[29]=t6403;
  p_output1[30]=t6225;
  p_output1[31]=-3.3612 - 6.8*Power(t6189,2) - 3.2*Power(t6199,2) - 3.2*Power(t6203,2) - 6.8*Power(t6209,2) - 3.2*Power(t6219,2) - 3.2*Power(t6223,2);
  p_output1[32]=t6577;
  p_output1[33]=t6579;
  p_output1[34]=t6583;
  p_output1[35]=t6585;
  p_output1[36]=t6022*var2[0] + t6418*var2[1];
  p_output1[37]=t6236*var2[0] + t6448*var2[1] + t6512*var2[2];
  p_output1[38]=t6278*var2[0] + t6464*var2[1] + t6526*var2[2] + (-6.4*t6014*t6272 - 6.4*t5987*t6276)*var2[3] - 0.768*t6272*var2[4];
  p_output1[39]=t6407;
  p_output1[40]=t6022;
  p_output1[41]=t6577;
  p_output1[42]=-1.58228 - 3.2*Power(t5987,2) - 3.2*Power(t6014,2);
  p_output1[43]=t6608;
  p_output1[44]=-0.768*t5912*var2[0] - 0.768*t6153*var2[1];
  p_output1[45]=t6613 + t6614 - 0.768*t6258*var2[2];
  p_output1[46]=t6613 + t6614 - 0.768*t6290*var2[2] - 0.768*t6272*var2[3];
  p_output1[47]=t6408;
  p_output1[48]=t6504;
  p_output1[49]=t6579;
  p_output1[50]=t6608;
  p_output1[51]=-1.2143199999999998;
  p_output1[52]=t6100*var2[0] + t6424*var2[1];
  p_output1[53]=t6307*var2[0] + t6477*var2[1] + t6538*var2[2];
  p_output1[54]=t6349*var2[0] + t6493*var2[1] + t6552*var2[2] + (-6.4*t6098*t6343 - 6.4*t6084*t6347)*var2[5] - 0.768*t6343*var2[6];
  p_output1[55]=t6412;
  p_output1[56]=t6100;
  p_output1[57]=t6583;
  p_output1[58]=-1.58228 - 3.2*Power(t6084,2) - 3.2*Power(t6098,2);
  p_output1[59]=t6641;
  p_output1[60]=-0.768*t6065*var2[0] - 0.768*t6173*var2[1];
  p_output1[61]=t6646 + t6647 - 0.768*t6329*var2[2];
  p_output1[62]=t6646 + t6647 - 0.768*t6361*var2[2] - 0.768*t6343*var2[5];
  p_output1[63]=t6413;
  p_output1[64]=t6505;
  p_output1[65]=t6585;
  p_output1[66]=t6641;
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
