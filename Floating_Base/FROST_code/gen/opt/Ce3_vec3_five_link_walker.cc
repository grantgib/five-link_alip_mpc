/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:47:18 GMT-04:00
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
  double t1106;
  double t1161;
  double t1198;
  double t1195;
  double t1305;
  double t1312;
  double t1320;
  double t1321;
  double t1322;
  double t1325;
  double t1326;
  double t1327;
  double t1336;
  double t1337;
  double t1342;
  double t1343;
  double t1344;
  double t1338;
  double t1339;
  double t1340;
  double t1307;
  double t1313;
  double t1318;
  double t1345;
  double t1346;
  double t1347;
  double t1360;
  double t1362;
  double t1375;
  double t1377;
  double t1381;
  double t1382;
  double t1383;
  double t1386;
  double t1387;
  double t1389;
  double t1390;
  double t1391;
  double t1396;
  double t1397;
  double t1398;
  double t1392;
  double t1393;
  double t1394;
  double t1376;
  double t1378;
  double t1379;
  double t1399;
  double t1400;
  double t1401;
  double t1213;
  double t1217;
  double t1218;
  double t1219;
  double t1261;
  double t1341;
  double t1349;
  double t1350;
  double t1323;
  double t1355;
  double t1357;
  double t1358;
  double t1369;
  double t1370;
  double t1371;
  double t1372;
  double t1373;
  double t1395;
  double t1402;
  double t1403;
  double t1384;
  double t1408;
  double t1409;
  double t1410;
  double t1595;
  double t1596;
  double t1597;
  double t1598;
  double t1620;
  double t1657;
  double t1658;
  double t1659;
  double t1187;
  double t1202;
  double t1210;
  double t1304;
  double t1423;
  double t1424;
  double t1352;
  double t1686;
  double t1687;
  double t1688;
  double t1419;
  double t1420;
  double t1421;
  double t1680;
  double t1681;
  double t1685;
  double t1689;
  double t1690;
  double t1415;
  double t1416;
  double t1417;
  double t1418;
  double t1702;
  double t1703;
  double t1665;
  double t1666;
  double t1667;
  double t1669;
  double t1726;
  double t1727;
  double t1728;
  double t1729;
  double t1731;
  double t1732;
  double t1733;
  double t1671;
  double t1678;
  double t1679;
  double t1694;
  double t1696;
  double t1697;
  double t1698;
  double t1744;
  double t1745;
  double t1746;
  double t1704;
  double t1706;
  double t1707;
  double t1708;
  double t1709;
  double t1710;
  double t1711;
  double t1768;
  double t1769;
  double t1770;
  double t1771;
  double t1778;
  double t1779;
  double t1780;
  double t1781;
  double t1361;
  double t1367;
  double t1368;
  double t1374;
  double t1445;
  double t1450;
  double t1405;
  double t3684;
  double t4327;
  double t4338;
  double t1441;
  double t1442;
  double t1443;
  double t2831;
  double t3121;
  double t3602;
  double t4410;
  double t4426;
  double t1430;
  double t1431;
  double t1432;
  double t1440;
  double t8445;
  double t8456;
  double t1787;
  double t1788;
  double t1789;
  double t1790;
  double t11005;
  double t11006;
  double t11056;
  double t11092;
  double t11105;
  double t11106;
  double t11107;
  double t2650;
  double t2745;
  double t2746;
  double t7953;
  double t8117;
  double t8232;
  double t8319;
  double t11184;
  double t11188;
  double t11204;
  double t8461;
  double t8463;
  double t8468;
  double t8469;
  double t8486;
  double t8487;
  double t8488;
  t1106 = Cos(var1[2]);
  t1161 = Cos(var1[3]);
  t1198 = Sin(var1[3]);
  t1195 = Sin(var1[2]);
  t1305 = Cos(var1[4]);
  t1312 = Sin(var1[4]);
  t1320 = t1161*t1305;
  t1321 = -1.*t1198*t1312;
  t1322 = t1320 + t1321;
  t1325 = -1.*t1305;
  t1326 = 1. + t1325;
  t1327 = 0.4*t1326;
  t1336 = 0.64*t1305;
  t1337 = t1327 + t1336;
  t1342 = -1.*t1305*t1198;
  t1343 = -1.*t1161*t1312;
  t1344 = t1342 + t1343;
  t1338 = t1337*t1198;
  t1339 = 0.24*t1161*t1312;
  t1340 = t1338 + t1339;
  t1307 = t1305*t1198;
  t1313 = t1161*t1312;
  t1318 = t1307 + t1313;
  t1345 = t1161*t1337;
  t1346 = -0.24*t1198*t1312;
  t1347 = t1345 + t1346;
  t1360 = Cos(var1[5]);
  t1362 = Sin(var1[5]);
  t1375 = Cos(var1[6]);
  t1377 = Sin(var1[6]);
  t1381 = t1360*t1375;
  t1382 = -1.*t1362*t1377;
  t1383 = t1381 + t1382;
  t1386 = -1.*t1375;
  t1387 = 1. + t1386;
  t1389 = 0.4*t1387;
  t1390 = 0.64*t1375;
  t1391 = t1389 + t1390;
  t1396 = -1.*t1375*t1362;
  t1397 = -1.*t1360*t1377;
  t1398 = t1396 + t1397;
  t1392 = t1391*t1362;
  t1393 = 0.24*t1360*t1377;
  t1394 = t1392 + t1393;
  t1376 = t1375*t1362;
  t1378 = t1360*t1377;
  t1379 = t1376 + t1378;
  t1399 = t1360*t1391;
  t1400 = -0.24*t1362*t1377;
  t1401 = t1399 + t1400;
  t1213 = Power(t1161,2);
  t1217 = 0.11*t1213;
  t1218 = Power(t1198,2);
  t1219 = 0.11*t1218;
  t1261 = t1217 + t1219;
  t1341 = -1.*t1340*t1322;
  t1349 = -1.*t1344*t1347;
  t1350 = t1341 + t1349;
  t1323 = -1.*t1195*t1322;
  t1355 = t1340*t1318;
  t1357 = t1322*t1347;
  t1358 = t1355 + t1357;
  t1369 = Power(t1360,2);
  t1370 = 0.11*t1369;
  t1371 = Power(t1362,2);
  t1372 = 0.11*t1371;
  t1373 = t1370 + t1372;
  t1395 = -1.*t1394*t1383;
  t1402 = -1.*t1398*t1401;
  t1403 = t1395 + t1402;
  t1384 = -1.*t1195*t1383;
  t1408 = t1394*t1379;
  t1409 = t1383*t1401;
  t1410 = t1408 + t1409;
  t1595 = -1.*t1337*t1198;
  t1596 = -0.24*t1161*t1312;
  t1597 = t1595 + t1596;
  t1598 = t1597*t1322;
  t1620 = t1340*t1322;
  t1657 = t1344*t1347;
  t1658 = t1318*t1347;
  t1659 = t1598 + t1620 + t1657 + t1658;
  t1187 = -1.*t1106*t1161;
  t1202 = t1195*t1198;
  t1210 = t1187 + t1202;
  t1304 = -6.8*t1210*t1261;
  t1423 = t1106*t1344;
  t1424 = t1423 + t1323;
  t1352 = -1.*t1195*t1344;
  t1686 = -1.*t1161*t1305;
  t1687 = t1198*t1312;
  t1688 = t1686 + t1687;
  t1419 = -1.*t1195*t1318;
  t1420 = t1106*t1322;
  t1421 = t1419 + t1420;
  t1680 = -1.*t1344*t1597;
  t1681 = -1.*t1344*t1340;
  t1685 = -1.*t1322*t1347;
  t1689 = -1.*t1347*t1688;
  t1690 = t1680 + t1681 + t1685 + t1689;
  t1415 = -1.*t1161*t1195;
  t1416 = -1.*t1106*t1198;
  t1417 = t1415 + t1416;
  t1418 = -6.8*t1417*t1261;
  t1702 = t1195*t1344;
  t1703 = t1702 + t1420;
  t1665 = t1337*t1305;
  t1666 = Power(t1312,2);
  t1667 = 0.24*t1666;
  t1669 = t1665 + t1667;
  t1726 = -0.24*t1305*t1198;
  t1727 = t1726 + t1596;
  t1728 = t1727*t1322;
  t1729 = 0.24*t1161*t1305;
  t1731 = t1729 + t1346;
  t1732 = t1318*t1731;
  t1733 = t1728 + t1620 + t1657 + t1732;
  t1671 = t1337*t1312;
  t1678 = -0.24*t1305*t1312;
  t1679 = t1671 + t1678;
  t1694 = -3.2*t1424*t1350;
  t1696 = t1106*t1688;
  t1697 = t1352 + t1696;
  t1698 = -3.2*t1358*t1697;
  t1744 = -1.*t1344*t1727;
  t1745 = -1.*t1322*t1731;
  t1746 = t1744 + t1681 + t1745 + t1689;
  t1704 = -3.2*t1703*t1350;
  t1706 = t1195*t1688;
  t1707 = t1423 + t1706;
  t1708 = -3.2*t1358*t1707;
  t1709 = t1106*t1318;
  t1710 = t1195*t1322;
  t1711 = t1709 + t1710;
  t1768 = -1.*t1391*t1362;
  t1769 = -0.24*t1360*t1377;
  t1770 = t1768 + t1769;
  t1771 = t1770*t1383;
  t1778 = t1394*t1383;
  t1779 = t1398*t1401;
  t1780 = t1379*t1401;
  t1781 = t1771 + t1778 + t1779 + t1780;
  t1361 = -1.*t1106*t1360;
  t1367 = t1195*t1362;
  t1368 = t1361 + t1367;
  t1374 = -6.8*t1368*t1373;
  t1445 = t1106*t1398;
  t1450 = t1445 + t1384;
  t1405 = -1.*t1195*t1398;
  t3684 = -1.*t1360*t1375;
  t4327 = t1362*t1377;
  t4338 = t3684 + t4327;
  t1441 = -1.*t1195*t1379;
  t1442 = t1106*t1383;
  t1443 = t1441 + t1442;
  t2831 = -1.*t1398*t1770;
  t3121 = -1.*t1398*t1394;
  t3602 = -1.*t1383*t1401;
  t4410 = -1.*t1401*t4338;
  t4426 = t2831 + t3121 + t3602 + t4410;
  t1430 = -1.*t1360*t1195;
  t1431 = -1.*t1106*t1362;
  t1432 = t1430 + t1431;
  t1440 = -6.8*t1432*t1373;
  t8445 = t1195*t1398;
  t8456 = t8445 + t1442;
  t1787 = t1391*t1375;
  t1788 = Power(t1377,2);
  t1789 = 0.24*t1788;
  t1790 = t1787 + t1789;
  t11005 = -0.24*t1375*t1362;
  t11006 = t11005 + t1769;
  t11056 = t11006*t1383;
  t11092 = 0.24*t1360*t1375;
  t11105 = t11092 + t1400;
  t11106 = t1379*t11105;
  t11107 = t11056 + t1778 + t1779 + t11106;
  t2650 = t1391*t1377;
  t2745 = -0.24*t1375*t1377;
  t2746 = t2650 + t2745;
  t7953 = -3.2*t1450*t1403;
  t8117 = t1106*t4338;
  t8232 = t1405 + t8117;
  t8319 = -3.2*t1410*t8232;
  t11184 = -1.*t1398*t11006;
  t11188 = -1.*t1383*t11105;
  t11204 = t11184 + t3121 + t11188 + t4410;
  t8461 = -3.2*t8456*t1403;
  t8463 = t1195*t4338;
  t8468 = t1445 + t8463;
  t8469 = -3.2*t1410*t8468;
  t8486 = t1106*t1379;
  t8487 = t1195*t1383;
  t8488 = t8486 + t8487;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(2.88*t1195 + t1418 - 3.2*t1350*t1421 - 3.2*t1358*t1424 + t1440 - 3.2*t1403*t1443 - 3.2*t1410*t1450)*var2[0] - 0.5*(2.88*t1106 + t1304 - 3.2*(-1.*t1106*t1318 + t1323)*t1350 - 3.2*(-1.*t1106*t1322 + t1352)*t1358 + t1374 - 3.2*(-1.*t1106*t1379 + t1384)*t1403 - 3.2*(-1.*t1106*t1383 + t1405)*t1410)*var2[1])*var2[2];
  p_output1[3]=var2[2]*(-0.5*(t1418 - 3.2*t1659*t1703 + t1704 + t1708 - 3.2*t1690*t1711)*var2[0] - 0.5*(t1304 - 3.2*t1424*t1659 - 3.2*t1421*t1690 + t1694 + t1698)*var2[1] - 0.5*(-6.4*t1358*t1659 - 6.4*t1350*t1690)*var2[2] - 0.5*(-3.2*t1659*t1669 - 3.2*t1679*t1690)*var2[3] + 0.384*t1659*var2[4]);
  p_output1[4]=var2[2]*(-0.5*(t1704 + t1708 - 3.2*t1703*t1733 - 3.2*t1711*t1746)*var2[0] - 0.5*(t1694 + t1698 - 3.2*t1424*t1733 - 3.2*t1421*t1746)*var2[1] - 0.5*(-6.4*t1358*t1733 - 6.4*t1350*t1746)*var2[2] - 0.5*(-3.2*(0.24*t1305*t1312 - 1.*t1312*t1337)*t1358 - 3.2*t1350*(-0.24*Power(t1305,2) + t1665) - 3.2*t1669*t1733 - 3.2*t1679*t1746)*var2[3] + 0.384*t1733*var2[4]);
  p_output1[5]=var2[2]*(-0.5*(t1440 - 3.2*t1781*t8456 + t8461 + t8469 - 3.2*t4426*t8488)*var2[0] - 0.5*(t1374 - 3.2*t1450*t1781 - 3.2*t1443*t4426 + t7953 + t8319)*var2[1] - 0.5*(-6.4*t1410*t1781 - 6.4*t1403*t4426)*var2[2] - 0.5*(-3.2*t1781*t1790 - 3.2*t2746*t4426)*var2[5] + 0.384*t1781*var2[6]);
  p_output1[6]=var2[2]*(-0.5*(-3.2*t11107*t8456 + t8461 + t8469 - 3.2*t11204*t8488)*var2[0] - 0.5*(-3.2*t11204*t1443 - 3.2*t11107*t1450 + t7953 + t8319)*var2[1] - 0.5*(-6.4*t11204*t1403 - 6.4*t11107*t1410)*var2[2] - 0.5*(-3.2*(0.24*t1375*t1377 - 1.*t1377*t1391)*t1410 - 3.2*t1403*(-0.24*Power(t1375,2) + t1787) - 3.2*t11107*t1790 - 3.2*t11204*t2746)*var2[5] + 0.384*t11107*var2[6]);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce3_vec3_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
