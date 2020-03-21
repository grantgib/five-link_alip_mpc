/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:58 GMT-04:00
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
  double t259;
  double t585;
  double t1161;
  double t1147;
  double t1219;
  double t1304;
  double t1313;
  double t1318;
  double t1319;
  double t1322;
  double t1323;
  double t1324;
  double t1325;
  double t1326;
  double t1339;
  double t1340;
  double t1341;
  double t1327;
  double t1336;
  double t1337;
  double t1261;
  double t1305;
  double t1307;
  double t1342;
  double t1343;
  double t1344;
  double t1357;
  double t1359;
  double t1372;
  double t1374;
  double t1378;
  double t1379;
  double t1380;
  double t1383;
  double t1384;
  double t1385;
  double t1386;
  double t1387;
  double t1393;
  double t1394;
  double t1395;
  double t1389;
  double t1390;
  double t1391;
  double t1373;
  double t1375;
  double t1376;
  double t1396;
  double t1397;
  double t1398;
  double t1198;
  double t1202;
  double t1210;
  double t1213;
  double t1217;
  double t1350;
  double t1338;
  double t1345;
  double t1346;
  double t1352;
  double t1353;
  double t1354;
  double t1362;
  double t1367;
  double t1368;
  double t1369;
  double t1370;
  double t1403;
  double t1392;
  double t1399;
  double t1400;
  double t1405;
  double t1406;
  double t1407;
  double t1106;
  double t1187;
  double t1195;
  double t1218;
  double t1320;
  double t2649;
  double t2650;
  double t1349;
  double t2684;
  double t2773;
  double t2831;
  double t3684;
  double t4087;
  double t4387;
  double t1412;
  double t1413;
  double t1414;
  double t1415;
  double t1351;
  double t2873;
  double t3002;
  double t3022;
  double t3545;
  double t3602;
  double t1419;
  double t1312;
  double t1321;
  double t4591;
  double t4657;
  double t4768;
  double t4778;
  double t5697;
  double t2652;
  double t4459;
  double t4480;
  double t4513;
  double t4529;
  double t4533;
  double t4544;
  double t8749;
  double t8758;
  double t9240;
  double t9249;
  double t5784;
  double t8997;
  double t9394;
  double t9598;
  double t8135;
  double t8181;
  double t8210;
  double t9773;
  double t9830;
  double t10478;
  double t1358;
  double t1360;
  double t1361;
  double t1371;
  double t1381;
  double t10581;
  double t10582;
  double t1402;
  double t11351;
  double t11460;
  double t11463;
  double t11534;
  double t11535;
  double t11536;
  double t1423;
  double t1424;
  double t1429;
  double t1430;
  double t1404;
  double t11478;
  double t11491;
  double t11509;
  double t11510;
  double t11516;
  double t1441;
  double t1377;
  double t1382;
  double t11571;
  double t11572;
  double t11588;
  double t11604;
  double t11608;
  double t11341;
  double t11560;
  double t11561;
  double t11563;
  double t11564;
  double t11566;
  double t11568;
  double t11920;
  double t11928;
  double t12002;
  double t12054;
  double t11645;
  double t11945;
  double t13970;
  double t13971;
  double t11652;
  double t11680;
  double t11782;
  double t14066;
  double t14067;
  double t14076;
  double t264;
  double t1347;
  double t1355;
  double t1401;
  double t1408;
  double t1409;
  double t14154;
  double t14155;
  double t14158;
  double t14161;
  double t14162;
  double t14163;
  double t14164;
  double t14187;
  double t14201;
  double t14232;
  double t14236;
  double t14273;
  double t14276;
  double t14277;
  double t3639;
  double t5714;
  double t5716;
  double t5717;
  double t7925;
  double t8292;
  double t8313;
  double t8316;
  double t8737;
  double t8745;
  double t14498;
  double t14499;
  double t14500;
  double t14490;
  double t14493;
  double t14494;
  double t14497;
  double t14501;
  double t14510;
  double t14511;
  double t1416;
  double t14557;
  double t14558;
  double t1420;
  double t14516;
  double t14521;
  double t14522;
  double t14528;
  double t14529;
  double t14537;
  double t14538;
  double t14565;
  double t14603;
  double t14562;
  double t14513;
  double t14514;
  double t14515;
  double t14641;
  double t14642;
  double t14542;
  double t14543;
  double t14548;
  double t14549;
  double t14637;
  double t14638;
  double t14639;
  double t14640;
  double t14643;
  double t14644;
  double t14554;
  double t14556;
  double t14560;
  double t14563;
  double t14657;
  double t14658;
  double t14659;
  double t14660;
  double t14665;
  double t14666;
  double t14617;
  double t14619;
  double t14620;
  double t14767;
  double t14768;
  double t14769;
  double t14770;
  double t14771;
  double t14775;
  double t14776;
  double t14777;
  double t9643;
  double t10489;
  double t10491;
  double t10506;
  double t10514;
  double t10523;
  double t10524;
  double t10525;
  double t10565;
  double t10573;
  double t14646;
  double t14650;
  double t14651;
  double t14652;
  double t14653;
  double t14672;
  double t14673;
  double t14681;
  double t14682;
  double t14684;
  double t14686;
  double t14687;
  double t14692;
  double t14693;
  double t14695;
  double t14696;
  double t14697;
  double t14698;
  double t14700;
  double t14701;
  double t14702;
  double t14704;
  double t14705;
  double t14706;
  double t14707;
  double t14708;
  double t14709;
  double t14747;
  double t14752;
  double t14753;
  double t14754;
  double t14755;
  double t14761;
  double t14762;
  double t14763;
  double t14764;
  double t14766;
  double t14788;
  double t14790;
  double t14794;
  double t14805;
  double t14806;
  double t14807;
  double t14835;
  double t14836;
  double t14837;
  double t14841;
  double t14842;
  double t14843;
  double t14844;
  double t14845;
  double t11522;
  double t11614;
  double t11621;
  double t11644;
  double t11651;
  double t11783;
  double t11784;
  double t11889;
  double t11915;
  double t11919;
  double t14860;
  double t14861;
  double t14862;
  double t14856;
  double t14857;
  double t14858;
  double t14859;
  double t14863;
  double t14864;
  double t14865;
  double t1431;
  double t14887;
  double t14888;
  double t1442;
  double t14870;
  double t14871;
  double t14872;
  double t14873;
  double t14874;
  double t14875;
  double t14876;
  double t14894;
  double t14895;
  double t14891;
  double t14867;
  double t14868;
  double t14869;
  double t14923;
  double t14924;
  double t14878;
  double t14879;
  double t14880;
  double t14881;
  double t14919;
  double t14920;
  double t14921;
  double t14922;
  double t14925;
  double t14926;
  double t14885;
  double t14886;
  double t14889;
  double t14892;
  double t14932;
  double t14933;
  double t14934;
  double t14935;
  double t14936;
  double t14937;
  double t14900;
  double t14902;
  double t14903;
  double t14970;
  double t14971;
  double t14972;
  double t14973;
  double t14974;
  double t14978;
  double t14979;
  double t14980;
  double t13991;
  double t14081;
  double t14082;
  double t14086;
  double t14087;
  double t14088;
  double t14131;
  double t14137;
  double t14145;
  double t14149;
  double t14927;
  double t14928;
  double t14929;
  double t14930;
  double t14931;
  double t14938;
  double t14939;
  double t14940;
  double t14941;
  double t14942;
  double t14943;
  double t14944;
  double t14945;
  double t14946;
  double t14947;
  double t14948;
  double t14949;
  double t14950;
  double t14951;
  double t14952;
  double t14953;
  double t14954;
  double t14955;
  double t14956;
  double t14957;
  double t14958;
  double t14959;
  double t14960;
  double t14961;
  double t14962;
  double t14963;
  double t14964;
  double t14965;
  double t14966;
  double t14967;
  double t14968;
  double t14969;
  double t14991;
  double t14992;
  double t14993;
  double t15001;
  double t15002;
  double t15003;
  double t15031;
  double t15032;
  double t15033;
  double t15037;
  double t15038;
  double t15039;
  double t15040;
  double t15041;
  t259 = Cos(var1[2]);
  t585 = Cos(var1[3]);
  t1161 = Sin(var1[3]);
  t1147 = Sin(var1[2]);
  t1219 = Cos(var1[4]);
  t1304 = Sin(var1[4]);
  t1313 = t585*t1219;
  t1318 = -1.*t1161*t1304;
  t1319 = t1313 + t1318;
  t1322 = -1.*t1219;
  t1323 = 1. + t1322;
  t1324 = 0.4*t1323;
  t1325 = 0.64*t1219;
  t1326 = t1324 + t1325;
  t1339 = -1.*t1219*t1161;
  t1340 = -1.*t585*t1304;
  t1341 = t1339 + t1340;
  t1327 = t1326*t1161;
  t1336 = 0.24*t585*t1304;
  t1337 = t1327 + t1336;
  t1261 = t1219*t1161;
  t1305 = t585*t1304;
  t1307 = t1261 + t1305;
  t1342 = t585*t1326;
  t1343 = -0.24*t1161*t1304;
  t1344 = t1342 + t1343;
  t1357 = Cos(var1[5]);
  t1359 = Sin(var1[5]);
  t1372 = Cos(var1[6]);
  t1374 = Sin(var1[6]);
  t1378 = t1357*t1372;
  t1379 = -1.*t1359*t1374;
  t1380 = t1378 + t1379;
  t1383 = -1.*t1372;
  t1384 = 1. + t1383;
  t1385 = 0.4*t1384;
  t1386 = 0.64*t1372;
  t1387 = t1385 + t1386;
  t1393 = -1.*t1372*t1359;
  t1394 = -1.*t1357*t1374;
  t1395 = t1393 + t1394;
  t1389 = t1387*t1359;
  t1390 = 0.24*t1357*t1374;
  t1391 = t1389 + t1390;
  t1373 = t1372*t1359;
  t1375 = t1357*t1374;
  t1376 = t1373 + t1375;
  t1396 = t1357*t1387;
  t1397 = -0.24*t1359*t1374;
  t1398 = t1396 + t1397;
  t1198 = Power(t585,2);
  t1202 = 0.11*t1198;
  t1210 = Power(t1161,2);
  t1213 = 0.11*t1210;
  t1217 = t1202 + t1213;
  t1350 = -1.*t259*t1319;
  t1338 = -1.*t1337*t1319;
  t1345 = -1.*t1341*t1344;
  t1346 = t1338 + t1345;
  t1352 = t1337*t1307;
  t1353 = t1319*t1344;
  t1354 = t1352 + t1353;
  t1362 = Power(t1357,2);
  t1367 = 0.11*t1362;
  t1368 = Power(t1359,2);
  t1369 = 0.11*t1368;
  t1370 = t1367 + t1369;
  t1403 = -1.*t259*t1380;
  t1392 = -1.*t1391*t1380;
  t1399 = -1.*t1395*t1398;
  t1400 = t1392 + t1399;
  t1405 = t1391*t1376;
  t1406 = t1380*t1398;
  t1407 = t1405 + t1406;
  t1106 = -1.*t259*t585;
  t1187 = t1147*t1161;
  t1195 = t1106 + t1187;
  t1218 = -6.8*t1195*t1217;
  t1320 = -1.*t1147*t1319;
  t2649 = t259*t1341;
  t2650 = t2649 + t1320;
  t1349 = -1.*t1147*t1341;
  t2684 = -1.*t1326*t1161;
  t2773 = -0.24*t585*t1304;
  t2831 = t2684 + t2773;
  t3684 = -1.*t585*t1219;
  t4087 = t1161*t1304;
  t4387 = t3684 + t4087;
  t1412 = t585*t1147;
  t1413 = t259*t1161;
  t1414 = t1412 + t1413;
  t1415 = -6.8*t1414*t1217;
  t1351 = t1349 + t1350;
  t2873 = t2831*t1319;
  t3002 = t1337*t1319;
  t3022 = t1341*t1344;
  t3545 = t1307*t1344;
  t3602 = t2873 + t3002 + t3022 + t3545;
  t1419 = -1.*t259*t1341;
  t1312 = -1.*t259*t1307;
  t1321 = t1312 + t1320;
  t4591 = -1.*t1341*t2831;
  t4657 = -1.*t1341*t1337;
  t4768 = -1.*t1319*t1344;
  t4778 = -1.*t1344*t4387;
  t5697 = t4591 + t4657 + t4768 + t4778;
  t2652 = -3.2*t2650*t1346;
  t4459 = t259*t4387;
  t4480 = t1349 + t4459;
  t4513 = -3.2*t1354*t4480;
  t4529 = -1.*t1147*t1307;
  t4533 = t259*t1319;
  t4544 = t4529 + t4533;
  t8749 = -0.24*t1219*t1161;
  t8758 = t8749 + t2773;
  t9240 = 0.24*t585*t1219;
  t9249 = t9240 + t1343;
  t5784 = -3.2*t1351*t1346;
  t8997 = t8758*t1319;
  t9394 = t1307*t9249;
  t9598 = t8997 + t3002 + t3022 + t9394;
  t8135 = -1.*t1147*t4387;
  t8181 = t1419 + t8135;
  t8210 = -3.2*t1354*t8181;
  t9773 = -1.*t1341*t8758;
  t9830 = -1.*t1319*t9249;
  t10478 = t9773 + t4657 + t9830 + t4778;
  t1358 = -1.*t259*t1357;
  t1360 = t1147*t1359;
  t1361 = t1358 + t1360;
  t1371 = -6.8*t1361*t1370;
  t1381 = -1.*t1147*t1380;
  t10581 = t259*t1395;
  t10582 = t10581 + t1381;
  t1402 = -1.*t1147*t1395;
  t11351 = -1.*t1387*t1359;
  t11460 = -0.24*t1357*t1374;
  t11463 = t11351 + t11460;
  t11534 = -1.*t1357*t1372;
  t11535 = t1359*t1374;
  t11536 = t11534 + t11535;
  t1423 = t1357*t1147;
  t1424 = t259*t1359;
  t1429 = t1423 + t1424;
  t1430 = -6.8*t1429*t1370;
  t1404 = t1402 + t1403;
  t11478 = t11463*t1380;
  t11491 = t1391*t1380;
  t11509 = t1395*t1398;
  t11510 = t1376*t1398;
  t11516 = t11478 + t11491 + t11509 + t11510;
  t1441 = -1.*t259*t1395;
  t1377 = -1.*t259*t1376;
  t1382 = t1377 + t1381;
  t11571 = -1.*t1395*t11463;
  t11572 = -1.*t1395*t1391;
  t11588 = -1.*t1380*t1398;
  t11604 = -1.*t1398*t11536;
  t11608 = t11571 + t11572 + t11588 + t11604;
  t11341 = -3.2*t10582*t1400;
  t11560 = t259*t11536;
  t11561 = t1402 + t11560;
  t11563 = -3.2*t1407*t11561;
  t11564 = -1.*t1147*t1376;
  t11566 = t259*t1380;
  t11568 = t11564 + t11566;
  t11920 = -0.24*t1372*t1359;
  t11928 = t11920 + t11460;
  t12002 = 0.24*t1357*t1372;
  t12054 = t12002 + t1397;
  t11645 = -3.2*t1404*t1400;
  t11945 = t11928*t1380;
  t13970 = t1376*t12054;
  t13971 = t11945 + t11491 + t11509 + t13970;
  t11652 = -1.*t1147*t11536;
  t11680 = t1441 + t11652;
  t11782 = -3.2*t1407*t11680;
  t14066 = -1.*t1395*t11928;
  t14067 = -1.*t1380*t12054;
  t14076 = t14066 + t11572 + t14067 + t11604;
  t264 = 2.88*t259;
  t1347 = -3.2*t1321*t1346;
  t1355 = -3.2*t1351*t1354;
  t1401 = -3.2*t1382*t1400;
  t1408 = -3.2*t1404*t1407;
  t1409 = t264 + t1218 + t1347 + t1355 + t1371 + t1401 + t1408;
  t14154 = 2.88*t1147;
  t14155 = -1.*t585*t1147;
  t14158 = -1.*t259*t1161;
  t14161 = t14155 + t14158;
  t14162 = -6.8*t14161*t1217;
  t14163 = -3.2*t4544*t1346;
  t14164 = -3.2*t2650*t1354;
  t14187 = -1.*t1357*t1147;
  t14201 = -1.*t259*t1359;
  t14232 = t14187 + t14201;
  t14236 = -6.8*t14232*t1370;
  t14273 = -3.2*t11568*t1400;
  t14276 = -3.2*t10582*t1407;
  t14277 = t14154 + t14162 + t14163 + t14164 + t14236 + t14273 + t14276;
  t3639 = -3.2*t2650*t3602;
  t5714 = -3.2*t4544*t5697;
  t5716 = t1218 + t2652 + t3639 + t4513 + t5714;
  t5717 = -0.5*var2[0]*t5716;
  t7925 = -3.2*t1351*t3602;
  t8292 = -3.2*t1321*t5697;
  t8313 = t1415 + t5784 + t7925 + t8210 + t8292;
  t8316 = -0.5*var2[1]*t8313;
  t8737 = t5717 + t8316;
  t8745 = var2[2]*t8737;
  t14498 = -1.*t585*t1326;
  t14499 = 0.24*t1161*t1304;
  t14500 = t14498 + t14499;
  t14490 = 2.*t1341*t2831;
  t14493 = t1341*t1337;
  t14494 = t2831*t1307;
  t14497 = 2.*t1319*t1344;
  t14501 = t1319*t14500;
  t14510 = t1344*t4387;
  t14511 = t14490 + t14493 + t14494 + t14497 + t14501 + t14510;
  t1416 = t1147*t1307;
  t14557 = t1147*t4387;
  t14558 = t2649 + t14557;
  t1420 = t1147*t1319;
  t14516 = -1.*t2831*t1319;
  t14521 = -2.*t1341*t1344;
  t14522 = -1.*t1307*t1344;
  t14528 = -1.*t1341*t14500;
  t14529 = -2.*t2831*t4387;
  t14537 = -1.*t1337*t4387;
  t14538 = t14516 + t14521 + t14522 + t14528 + t14529 + t14537;
  t14565 = t1147*t1341;
  t14603 = t14565 + t4533;
  t14562 = t259*t1307;
  t14513 = t1326*t1304;
  t14514 = -0.24*t1219*t1304;
  t14515 = t14513 + t14514;
  t14641 = -0.24*t585*t1219;
  t14642 = t14641 + t14499;
  t14542 = t1326*t1219;
  t14543 = Power(t1304,2);
  t14548 = 0.24*t14543;
  t14549 = t14542 + t14548;
  t14637 = t1341*t2831;
  t14638 = t1341*t8758;
  t14639 = t8758*t1307;
  t14640 = t1319*t9249;
  t14643 = t1319*t14642;
  t14644 = t14637 + t14638 + t14493 + t14639 + t1353 + t14640 + t14643 + t14510;
  t14554 = t1416 + t4459;
  t14556 = -3.2*t1354*t14554;
  t14560 = -3.2*t1346*t14558;
  t14563 = t14562 + t1420;
  t14657 = -1.*t8758*t1319;
  t14658 = -1.*t1341*t9249;
  t14659 = -1.*t1341*t14642;
  t14660 = -1.*t2831*t4387;
  t14665 = -1.*t8758*t4387;
  t14666 = t14657 + t1345 + t14522 + t14658 + t14659 + t14660 + t14665 + t14537;
  t14617 = -3.2*t1346*t4480;
  t14619 = t14562 + t8135;
  t14620 = -3.2*t1354*t14619;
  t14767 = -3.2*t14603*t1346;
  t14768 = -3.2*t14603*t3602;
  t14769 = -3.2*t1354*t14558;
  t14770 = -3.2*t14563*t5697;
  t14771 = t14162 + t14767 + t14768 + t14769 + t14770;
  t14775 = -3.2*t14549*t3602;
  t14776 = -3.2*t14515*t5697;
  t14777 = t14775 + t14776;
  t9643 = -3.2*t2650*t9598;
  t10489 = -3.2*t4544*t10478;
  t10491 = t2652 + t9643 + t4513 + t10489;
  t10506 = -0.5*var2[0]*t10491;
  t10514 = -3.2*t1351*t9598;
  t10523 = -3.2*t1321*t10478;
  t10524 = t5784 + t10514 + t8210 + t10523;
  t10525 = -0.5*var2[1]*t10524;
  t10565 = t10506 + t10525;
  t10573 = var2[2]*t10565;
  t14646 = 0.384*var2[4]*t14644;
  t14650 = -1.*t1326*t1304;
  t14651 = 0.24*t1219*t1304;
  t14652 = t14650 + t14651;
  t14653 = -3.2*t14652*t3602;
  t14672 = -3.2*t14515*t14666;
  t14673 = Power(t1219,2);
  t14681 = -0.24*t14673;
  t14682 = t14542 + t14681;
  t14684 = -3.2*t14682*t5697;
  t14686 = -3.2*t14549*t14644;
  t14687 = t14653 + t14672 + t14684 + t14686;
  t14692 = -0.5*var2[3]*t14687;
  t14693 = -3.2*t3602*t14558;
  t14695 = -3.2*t9598*t14558;
  t14696 = -3.2*t14563*t14666;
  t14697 = -3.2*t14603*t5697;
  t14698 = -3.2*t14603*t10478;
  t14700 = -3.2*t14603*t14644;
  t14701 = t14556 + t14560 + t14693 + t14695 + t14696 + t14697 + t14698 + t14700;
  t14702 = -0.5*var2[0]*t14701;
  t14704 = -3.2*t3602*t4480;
  t14705 = -3.2*t9598*t4480;
  t14706 = -3.2*t4544*t14666;
  t14707 = -3.2*t2650*t5697;
  t14708 = -3.2*t2650*t10478;
  t14709 = -3.2*t2650*t14644;
  t14747 = t14617 + t14704 + t14705 + t14620 + t14706 + t14707 + t14708 + t14709;
  t14752 = -0.5*var2[1]*t14747;
  t14753 = -6.4*t3602*t9598;
  t14754 = -6.4*t1346*t14666;
  t14755 = -6.4*t5697*t10478;
  t14761 = -6.4*t1354*t14644;
  t14762 = t14753 + t14754 + t14755 + t14761;
  t14763 = -0.5*var2[2]*t14762;
  t14764 = t14646 + t14692 + t14702 + t14752 + t14763;
  t14766 = var2[2]*t14764;
  t14788 = 2.*t1341*t8758;
  t14790 = 2.*t1319*t9249;
  t14794 = t14788 + t14493 + t14639 + t14790 + t14643 + t14510;
  t14805 = -2.*t1341*t9249;
  t14806 = -2.*t8758*t4387;
  t14807 = t14657 + t14522 + t14805 + t14659 + t14806 + t14537;
  t14835 = -3.2*t14603*t9598;
  t14836 = -3.2*t14563*t10478;
  t14837 = t14767 + t14835 + t14769 + t14836;
  t14841 = -3.2*t14682*t1346;
  t14842 = -3.2*t14652*t1354;
  t14843 = -3.2*t14549*t9598;
  t14844 = -3.2*t14515*t10478;
  t14845 = t14841 + t14842 + t14843 + t14844;
  t11522 = -3.2*t10582*t11516;
  t11614 = -3.2*t11568*t11608;
  t11621 = t1371 + t11341 + t11522 + t11563 + t11614;
  t11644 = -0.5*var2[0]*t11621;
  t11651 = -3.2*t1404*t11516;
  t11783 = -3.2*t1382*t11608;
  t11784 = t1430 + t11645 + t11651 + t11782 + t11783;
  t11889 = -0.5*var2[1]*t11784;
  t11915 = t11644 + t11889;
  t11919 = var2[2]*t11915;
  t14860 = -1.*t1357*t1387;
  t14861 = 0.24*t1359*t1374;
  t14862 = t14860 + t14861;
  t14856 = 2.*t1395*t11463;
  t14857 = t1395*t1391;
  t14858 = t11463*t1376;
  t14859 = 2.*t1380*t1398;
  t14863 = t1380*t14862;
  t14864 = t1398*t11536;
  t14865 = t14856 + t14857 + t14858 + t14859 + t14863 + t14864;
  t1431 = t1147*t1376;
  t14887 = t1147*t11536;
  t14888 = t10581 + t14887;
  t1442 = t1147*t1380;
  t14870 = -1.*t11463*t1380;
  t14871 = -2.*t1395*t1398;
  t14872 = -1.*t1376*t1398;
  t14873 = -1.*t1395*t14862;
  t14874 = -2.*t11463*t11536;
  t14875 = -1.*t1391*t11536;
  t14876 = t14870 + t14871 + t14872 + t14873 + t14874 + t14875;
  t14894 = t1147*t1395;
  t14895 = t14894 + t11566;
  t14891 = t259*t1376;
  t14867 = t1387*t1374;
  t14868 = -0.24*t1372*t1374;
  t14869 = t14867 + t14868;
  t14923 = -0.24*t1357*t1372;
  t14924 = t14923 + t14861;
  t14878 = t1387*t1372;
  t14879 = Power(t1374,2);
  t14880 = 0.24*t14879;
  t14881 = t14878 + t14880;
  t14919 = t1395*t11463;
  t14920 = t1395*t11928;
  t14921 = t11928*t1376;
  t14922 = t1380*t12054;
  t14925 = t1380*t14924;
  t14926 = t14919 + t14920 + t14857 + t14921 + t1406 + t14922 + t14925 + t14864;
  t14885 = t1431 + t11560;
  t14886 = -3.2*t1407*t14885;
  t14889 = -3.2*t1400*t14888;
  t14892 = t14891 + t1442;
  t14932 = -1.*t11928*t1380;
  t14933 = -1.*t1395*t12054;
  t14934 = -1.*t1395*t14924;
  t14935 = -1.*t11463*t11536;
  t14936 = -1.*t11928*t11536;
  t14937 = t14932 + t1399 + t14872 + t14933 + t14934 + t14935 + t14936 + t14875;
  t14900 = -3.2*t1400*t11561;
  t14902 = t14891 + t11652;
  t14903 = -3.2*t1407*t14902;
  t14970 = -3.2*t14895*t1400;
  t14971 = -3.2*t14895*t11516;
  t14972 = -3.2*t1407*t14888;
  t14973 = -3.2*t14892*t11608;
  t14974 = t14236 + t14970 + t14971 + t14972 + t14973;
  t14978 = -3.2*t14881*t11516;
  t14979 = -3.2*t14869*t11608;
  t14980 = t14978 + t14979;
  t13991 = -3.2*t10582*t13971;
  t14081 = -3.2*t11568*t14076;
  t14082 = t11341 + t13991 + t11563 + t14081;
  t14086 = -0.5*var2[0]*t14082;
  t14087 = -3.2*t1404*t13971;
  t14088 = -3.2*t1382*t14076;
  t14131 = t11645 + t14087 + t11782 + t14088;
  t14137 = -0.5*var2[1]*t14131;
  t14145 = t14086 + t14137;
  t14149 = var2[2]*t14145;
  t14927 = 0.384*var2[6]*t14926;
  t14928 = -1.*t1387*t1374;
  t14929 = 0.24*t1372*t1374;
  t14930 = t14928 + t14929;
  t14931 = -3.2*t14930*t11516;
  t14938 = -3.2*t14869*t14937;
  t14939 = Power(t1372,2);
  t14940 = -0.24*t14939;
  t14941 = t14878 + t14940;
  t14942 = -3.2*t14941*t11608;
  t14943 = -3.2*t14881*t14926;
  t14944 = t14931 + t14938 + t14942 + t14943;
  t14945 = -0.5*var2[5]*t14944;
  t14946 = -3.2*t11516*t14888;
  t14947 = -3.2*t13971*t14888;
  t14948 = -3.2*t14892*t14937;
  t14949 = -3.2*t14895*t11608;
  t14950 = -3.2*t14895*t14076;
  t14951 = -3.2*t14895*t14926;
  t14952 = t14886 + t14889 + t14946 + t14947 + t14948 + t14949 + t14950 + t14951;
  t14953 = -0.5*var2[0]*t14952;
  t14954 = -3.2*t11516*t11561;
  t14955 = -3.2*t13971*t11561;
  t14956 = -3.2*t11568*t14937;
  t14957 = -3.2*t10582*t11608;
  t14958 = -3.2*t10582*t14076;
  t14959 = -3.2*t10582*t14926;
  t14960 = t14900 + t14954 + t14955 + t14903 + t14956 + t14957 + t14958 + t14959;
  t14961 = -0.5*var2[1]*t14960;
  t14962 = -6.4*t11516*t13971;
  t14963 = -6.4*t1400*t14937;
  t14964 = -6.4*t11608*t14076;
  t14965 = -6.4*t1407*t14926;
  t14966 = t14962 + t14963 + t14964 + t14965;
  t14967 = -0.5*var2[2]*t14966;
  t14968 = t14927 + t14945 + t14953 + t14961 + t14967;
  t14969 = var2[2]*t14968;
  t14991 = 2.*t1395*t11928;
  t14992 = 2.*t1380*t12054;
  t14993 = t14991 + t14857 + t14921 + t14992 + t14925 + t14864;
  t15001 = -2.*t1395*t12054;
  t15002 = -2.*t11928*t11536;
  t15003 = t14932 + t14872 + t15001 + t14934 + t15002 + t14875;
  t15031 = -3.2*t14895*t13971;
  t15032 = -3.2*t14892*t14076;
  t15033 = t14970 + t15031 + t14972 + t15032;
  t15037 = -3.2*t14941*t1400;
  t15038 = -3.2*t14930*t1407;
  t15039 = -3.2*t14881*t13971;
  t15040 = -3.2*t14869*t14076;
  t15041 = t15037 + t15038 + t15039 + t15040;
  p_output1[0]=(-0.5*t1409*var2[0] - 0.5*(-2.88*t1147 + t1415 - 3.2*t1346*(t1350 + t1416) - 3.2*t1354*(t1419 + t1420) + t1430 - 3.2*t1400*(t1403 + t1431) - 3.2*t1407*(t1441 + t1442))*var2[1])*var2[2];
  p_output1[1]=t8745;
  p_output1[2]=t10573;
  p_output1[3]=t11919;
  p_output1[4]=t14149;
  p_output1[5]=-0.5*t14277*var2[2];
  p_output1[6]=-0.5*t1409*var2[2];
  p_output1[7]=-0.5*t14277*var2[0] - 0.5*t1409*var2[1];
  p_output1[8]=t8745;
  p_output1[9]=var2[2]*(-0.5*(t1218 + t14556 + t14560 - 3.2*t14538*t14563 - 3.2*t14511*t14603 - 6.4*t14558*t3602 - 6.4*t14603*t5697)*var2[0] - 0.5*(t1415 + t14617 + t14620 - 3.2*t14511*t2650 - 6.4*t3602*t4480 - 3.2*t14538*t4544 - 6.4*t2650*t5697)*var2[1] - 0.5*(-6.4*t1354*t14511 - 6.4*t1346*t14538 - 6.4*Power(t3602,2) - 6.4*Power(t5697,2))*var2[2] - 0.5*(-3.2*t14515*t14538 - 3.2*t14511*t14549)*var2[3] + 0.384*t14511*var2[4]);
  p_output1[10]=t14766;
  p_output1[11]=-0.5*t14771*var2[2];
  p_output1[12]=-0.5*t5716*var2[2];
  p_output1[13]=-0.5*t14771*var2[0] - 0.5*t5716*var2[1] - 1.*(-6.4*t1354*t3602 - 6.4*t1346*t5697)*var2[2] - 0.5*t14777*var2[3] + 0.384*t3602*var2[4];
  p_output1[14]=-0.5*t14777*var2[2];
  p_output1[15]=0.384*t3602*var2[2];
  p_output1[16]=t10573;
  p_output1[17]=t14766;
  p_output1[18]=var2[2]*(-0.5*(t14556 + t14560 - 6.4*t10478*t14603 - 3.2*t14603*t14794 - 3.2*t14563*t14807 - 6.4*t14558*t9598)*var2[0] - 0.5*(t14617 + t14620 - 6.4*t10478*t2650 - 3.2*t14794*t2650 - 3.2*t14807*t4544 - 6.4*t4480*t9598)*var2[1] - 0.5*(-6.4*Power(t10478,2) - 6.4*t1354*t14794 - 6.4*t1346*t14807 - 6.4*Power(t9598,2))*var2[2] - 0.5*(-3.2*t1346*t14652 - 3.2*t1354*(-1.*t1219*t1326 + 0.24*t14673) - 6.4*t10478*t14682 - 3.2*t14549*t14794 - 3.2*t14515*t14807 - 6.4*t14652*t9598)*var2[3] + 0.384*t14794*var2[4]);
  p_output1[19]=-0.5*t14837*var2[2];
  p_output1[20]=-0.5*t10491*var2[2];
  p_output1[21]=-0.5*t14837*var2[0] - 0.5*t10491*var2[1] - 1.*(-6.4*t10478*t1346 - 6.4*t1354*t9598)*var2[2] - 0.5*t14845*var2[3] + 0.384*t9598*var2[4];
  p_output1[22]=-0.5*t14845*var2[2];
  p_output1[23]=0.384*t9598*var2[2];
  p_output1[24]=t11919;
  p_output1[25]=var2[2]*(-0.5*(t1371 + t14886 - 6.4*t11516*t14888 + t14889 - 3.2*t14876*t14892 - 6.4*t11608*t14895 - 3.2*t14865*t14895)*var2[0] - 0.5*(-6.4*t11516*t11561 - 6.4*t10582*t11608 + t1430 - 3.2*t10582*t14865 - 3.2*t11568*t14876 + t14900 + t14903)*var2[1] - 0.5*(-6.4*Power(t11516,2) - 6.4*Power(t11608,2) - 6.4*t1407*t14865 - 6.4*t1400*t14876)*var2[2] - 0.5*(-3.2*t14869*t14876 - 3.2*t14865*t14881)*var2[5] + 0.384*t14865*var2[6]);
  p_output1[26]=t14969;
  p_output1[27]=-0.5*t14974*var2[2];
  p_output1[28]=-0.5*t11621*var2[2];
  p_output1[29]=-0.5*t14974*var2[0] - 0.5*t11621*var2[1] - 1.*(-6.4*t11608*t1400 - 6.4*t11516*t1407)*var2[2] - 0.5*t14980*var2[5] + 0.384*t11516*var2[6];
  p_output1[30]=-0.5*t14980*var2[2];
  p_output1[31]=0.384*t11516*var2[2];
  p_output1[32]=t14149;
  p_output1[33]=t14969;
  p_output1[34]=var2[2]*(-0.5*(t14886 - 6.4*t13971*t14888 + t14889 - 6.4*t14076*t14895 - 3.2*t14895*t14993 - 3.2*t14892*t15003)*var2[0] - 0.5*(-6.4*t11561*t13971 - 6.4*t10582*t14076 + t14900 + t14903 - 3.2*t10582*t14993 - 3.2*t11568*t15003)*var2[1] - 0.5*(-6.4*Power(t13971,2) - 6.4*Power(t14076,2) - 6.4*t1407*t14993 - 6.4*t1400*t15003)*var2[2] - 0.5*(-6.4*t13971*t14930 - 3.2*t1400*t14930 - 3.2*t1407*(-1.*t1372*t1387 + 0.24*t14939) - 6.4*t14076*t14941 - 3.2*t14881*t14993 - 3.2*t14869*t15003)*var2[5] + 0.384*t14993*var2[6]);
  p_output1[35]=-0.5*t15033*var2[2];
  p_output1[36]=-0.5*t14082*var2[2];
  p_output1[37]=-0.5*t15033*var2[0] - 0.5*t14082*var2[1] - 1.*(-6.4*t13971*t1407 - 6.4*t1400*t14076)*var2[2] - 0.5*t15041*var2[5] + 0.384*t13971*var2[6];
  p_output1[38]=-0.5*t15041*var2[2];
  p_output1[39]=0.384*t13971*var2[2];
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

#include "J_Ce3_vec3_five_link_walker.hh"

namespace RightStance
{

void J_Ce3_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
