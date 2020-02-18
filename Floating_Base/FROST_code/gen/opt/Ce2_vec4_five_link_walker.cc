/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:31 GMT-05:00
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
  double t1235;
  double t1187;
  double t1201;
  double t1238;
  double t1257;
  double t1146;
  double t1227;
  double t1242;
  double t1250;
  double t1359;
  double t1360;
  double t1361;
  double t1362;
  double t1363;
  double t1253;
  double t1258;
  double t1259;
  double t1301;
  double t1344;
  double t1345;
  double t1347;
  double t1352;
  double t1353;
  double t1389;
  double t1390;
  double t1391;
  double t1367;
  double t1376;
  double t1377;
  double t1378;
  double t1379;
  double t1380;
  double t1393;
  double t1394;
  double t1395;
  double t1397;
  double t1398;
  double t1399;
  double t1400;
  double t1401;
  double t1402;
  double t1419;
  double t1420;
  double t1435;
  double t1436;
  double t1437;
  double t1439;
  double t1440;
  double t1441;
  double t1445;
  double t1446;
  double t1447;
  double t1422;
  double t1423;
  double t1424;
  double t1412;
  double t1413;
  double t1414;
  double t1364;
  double t1365;
  double t1366;
  double t1382;
  double t1383;
  double t1384;
  double t1385;
  double t1392;
  double t1416;
  double t1417;
  double t1407;
  double t1408;
  double t1409;
  double t1410;
  double t1411;
  double t1415;
  double t1418;
  double t1421;
  double t1425;
  double t1426;
  double t1427;
  double t1429;
  double t1430;
  double t1431;
  double t1432;
  double t1433;
  double t1438;
  double t1442;
  double t1443;
  double t1448;
  double t1449;
  double t1450;
  double t1451;
  double t1452;
  double t1454;
  double t1455;
  double t1456;
  double t1458;
  double t1459;
  double t1460;
  double t1461;
  double t1462;
  double t1480;
  double t1481;
  double t1482;
  double t1483;
  double t1484;
  double t1485;
  double t1434;
  double t1444;
  double t1453;
  double t1457;
  double t1463;
  double t1464;
  double t1469;
  double t1470;
  double t1471;
  double t1472;
  double t1358;
  double t1381;
  double t1386;
  double t1387;
  double t1490;
  double t1491;
  double t1492;
  t1235 = Cos(var1[3]);
  t1187 = Cos(var1[4]);
  t1201 = Sin(var1[3]);
  t1238 = Sin(var1[4]);
  t1257 = Sin(var1[2]);
  t1146 = Cos(var1[2]);
  t1227 = -1.*t1187*t1201;
  t1242 = -1.*t1235*t1238;
  t1250 = t1227 + t1242;
  t1359 = -1.*t1187;
  t1360 = 1. + t1359;
  t1361 = 0.4*t1360;
  t1362 = 0.64*t1187;
  t1363 = t1361 + t1362;
  t1253 = t1146*t1250;
  t1258 = -1.*t1235*t1187;
  t1259 = t1201*t1238;
  t1301 = t1258 + t1259;
  t1344 = t1257*t1301;
  t1345 = t1253 + t1344;
  t1347 = -1.*t1235*t1257;
  t1352 = -1.*t1146*t1201;
  t1353 = t1347 + t1352;
  t1389 = t1146*t1235;
  t1390 = -1.*t1257*t1201;
  t1391 = t1389 + t1390;
  t1367 = t1257*t1250;
  t1376 = t1235*t1187;
  t1377 = -1.*t1201*t1238;
  t1378 = t1376 + t1377;
  t1379 = t1146*t1378;
  t1380 = t1367 + t1379;
  t1393 = t1235*t1257;
  t1394 = t1146*t1201;
  t1395 = t1393 + t1394;
  t1397 = t1187*t1201;
  t1398 = t1235*t1238;
  t1399 = t1397 + t1398;
  t1400 = t1146*t1399;
  t1401 = t1257*t1378;
  t1402 = t1400 + t1401;
  t1419 = -1.*t1257*t1378;
  t1420 = t1253 + t1419;
  t1435 = t1363*t1201;
  t1436 = 0.24*t1235*t1238;
  t1437 = t1435 + t1436;
  t1439 = t1235*t1363;
  t1440 = -0.24*t1201*t1238;
  t1441 = t1439 + t1440;
  t1445 = -1.*t1363*t1201;
  t1446 = -0.24*t1235*t1238;
  t1447 = t1445 + t1446;
  t1422 = -1.*t1257*t1250;
  t1423 = t1146*t1301;
  t1424 = t1422 + t1423;
  t1412 = -1.*t1146*t1235;
  t1413 = t1257*t1201;
  t1414 = t1412 + t1413;
  t1364 = t1363*t1238;
  t1365 = -0.24*t1187*t1238;
  t1366 = t1364 + t1365;
  t1382 = t1363*t1187;
  t1383 = Power(t1238,2);
  t1384 = 0.24*t1383;
  t1385 = t1382 + t1384;
  t1392 = 13.6*t1353*t1391;
  t1416 = -1.*t1257*t1399;
  t1417 = t1416 + t1379;
  t1407 = Power(t1353,2);
  t1408 = 6.8*t1407;
  t1409 = 6.8*t1353*t1395;
  t1410 = Power(t1391,2);
  t1411 = 6.8*t1410;
  t1415 = 6.8*t1391*t1414;
  t1418 = 3.2*t1380*t1417;
  t1421 = 3.2*t1420*t1402;
  t1425 = 3.2*t1380*t1424;
  t1426 = 3.2*t1420*t1345;
  t1427 = t1408 + t1409 + t1411 + t1415 + t1418 + t1421 + t1425 + t1426;
  t1429 = Power(t1235,2);
  t1430 = 0.11*t1429;
  t1431 = Power(t1201,2);
  t1432 = 0.11*t1431;
  t1433 = t1430 + t1432;
  t1438 = -1.*t1437*t1378;
  t1442 = -1.*t1250*t1441;
  t1443 = t1438 + t1442;
  t1448 = t1447*t1378;
  t1449 = t1437*t1378;
  t1450 = t1250*t1441;
  t1451 = t1399*t1441;
  t1452 = t1448 + t1449 + t1450 + t1451;
  t1454 = t1437*t1399;
  t1455 = t1378*t1441;
  t1456 = t1454 + t1455;
  t1458 = -1.*t1250*t1447;
  t1459 = -1.*t1250*t1437;
  t1460 = -1.*t1378*t1441;
  t1461 = -1.*t1441*t1301;
  t1462 = t1458 + t1459 + t1460 + t1461;
  t1480 = 6.8*t1414*t1433;
  t1481 = 3.2*t1420*t1443;
  t1482 = 3.2*t1420*t1452;
  t1483 = 3.2*t1456*t1424;
  t1484 = 3.2*t1417*t1462;
  t1485 = t1480 + t1481 + t1482 + t1483 + t1484;
  t1434 = 6.8*t1353*t1433;
  t1444 = 3.2*t1380*t1443;
  t1453 = 3.2*t1380*t1452;
  t1457 = 3.2*t1456*t1345;
  t1463 = 3.2*t1402*t1462;
  t1464 = t1434 + t1444 + t1453 + t1457 + t1463;
  t1469 = 0.748*t1414;
  t1470 = 3.2*t1366*t1420;
  t1471 = 3.2*t1385*t1424;
  t1472 = t1469 + t1470 + t1471;
  t1358 = 0.748*t1353;
  t1381 = 3.2*t1366*t1380;
  t1386 = 3.2*t1385*t1345;
  t1387 = t1358 + t1381 + t1386;
  t1490 = 3.2*t1385*t1452;
  t1491 = 3.2*t1366*t1462;
  t1492 = t1490 + t1491;
  p_output1[0]=var2[3]*(-0.5*(6.4*t1345*t1380 + t1392 + 13.6*t1391*t1395 + 6.4*t1380*t1402)*var2[0] - 0.5*t1427*var2[1] - 0.5*t1464*var2[2] - 0.5*t1387*var2[3] - 0.384*t1345*var2[4]);
  p_output1[1]=var2[3]*(-0.5*t1427*var2[0] - 0.5*(t1392 + 13.6*t1353*t1414 + 6.4*t1417*t1420 + 6.4*t1420*t1424)*var2[1] - 0.5*t1485*var2[2] - 0.5*t1472*var2[3] - 0.384*t1424*var2[4]);
  p_output1[2]=var2[3]*(-0.5*t1464*var2[0] - 0.5*t1485*var2[1] - 0.5*(6.4*t1452*t1456 + 6.4*t1443*t1462)*var2[2] - 0.5*t1492*var2[3] - 0.384*t1452*var2[4]);
  p_output1[3]=(-0.5*t1387*var2[0] - 0.5*t1472*var2[1] - 0.5*t1492*var2[2])*var2[3];
  p_output1[4]=(-0.384*t1345*var2[0] - 0.384*t1424*var2[1] - 0.384*t1452*var2[2])*var2[3];
  p_output1[5]=0;
  p_output1[6]=0;
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

#include "Ce2_vec4_five_link_walker.hh"

namespace RightStance
{

void Ce2_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
