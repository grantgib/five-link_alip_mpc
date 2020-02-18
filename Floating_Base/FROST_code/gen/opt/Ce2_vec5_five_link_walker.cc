/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:32 GMT-05:00
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
  double t1404;
  double t1388;
  double t1396;
  double t1405;
  double t1466;
  double t1403;
  double t1406;
  double t1428;
  double t1346;
  double t1477;
  double t1478;
  double t1479;
  double t1486;
  double t1487;
  double t1494;
  double t1495;
  double t1496;
  double t1497;
  double t1498;
  double t1499;
  double t1505;
  double t1465;
  double t1467;
  double t1468;
  double t1473;
  double t1474;
  double t1475;
  double t1509;
  double t1510;
  double t1511;
  double t1512;
  double t1513;
  double t1514;
  double t1529;
  double t1530;
  double t1539;
  double t1540;
  double t1541;
  double t1543;
  double t1544;
  double t1545;
  double t1549;
  double t1550;
  double t1551;
  double t1555;
  double t1556;
  double t1532;
  double t1533;
  double t1534;
  double t1506;
  double t1507;
  double t1508;
  double t1526;
  double t1527;
  double t1488;
  double t1489;
  double t1493;
  double t1501;
  double t1502;
  double t1503;
  double t1516;
  double t1517;
  double t1518;
  double t1528;
  double t1531;
  double t1535;
  double t1536;
  double t1537;
  double t1542;
  double t1546;
  double t1547;
  double t1552;
  double t1553;
  double t1554;
  double t1557;
  double t1558;
  double t1560;
  double t1561;
  double t1562;
  double t1564;
  double t1565;
  double t1566;
  double t1567;
  double t1568;
  double t1586;
  double t1587;
  double t1588;
  double t1589;
  double t1590;
  double t1548;
  double t1559;
  double t1563;
  double t1569;
  double t1570;
  double t1575;
  double t1576;
  double t1577;
  double t1578;
  double t1579;
  double t1500;
  double t1504;
  double t1515;
  double t1519;
  double t1520;
  double t1595;
  double t1596;
  double t1597;
  double t1598;
  double t1599;
  t1404 = Cos(var1[3]);
  t1388 = Cos(var1[4]);
  t1396 = Sin(var1[3]);
  t1405 = Sin(var1[4]);
  t1466 = Sin(var1[2]);
  t1403 = -1.*t1388*t1396;
  t1406 = -1.*t1404*t1405;
  t1428 = t1403 + t1406;
  t1346 = Cos(var1[2]);
  t1477 = -1.*t1388;
  t1478 = 1. + t1477;
  t1479 = 0.4*t1478;
  t1486 = 0.64*t1388;
  t1487 = t1479 + t1486;
  t1494 = t1466*t1428;
  t1495 = t1404*t1388;
  t1496 = -1.*t1396*t1405;
  t1497 = t1495 + t1496;
  t1498 = t1346*t1497;
  t1499 = t1494 + t1498;
  t1505 = t1487*t1388;
  t1465 = t1346*t1428;
  t1467 = -1.*t1404*t1388;
  t1468 = t1396*t1405;
  t1473 = t1467 + t1468;
  t1474 = t1466*t1473;
  t1475 = t1465 + t1474;
  t1509 = t1388*t1396;
  t1510 = t1404*t1405;
  t1511 = t1509 + t1510;
  t1512 = t1346*t1511;
  t1513 = t1466*t1497;
  t1514 = t1512 + t1513;
  t1529 = -1.*t1466*t1497;
  t1530 = t1465 + t1529;
  t1539 = t1487*t1396;
  t1540 = 0.24*t1404*t1405;
  t1541 = t1539 + t1540;
  t1543 = t1404*t1487;
  t1544 = -0.24*t1396*t1405;
  t1545 = t1543 + t1544;
  t1549 = -0.24*t1388*t1396;
  t1550 = -0.24*t1404*t1405;
  t1551 = t1549 + t1550;
  t1555 = 0.24*t1404*t1388;
  t1556 = t1555 + t1544;
  t1532 = -1.*t1466*t1428;
  t1533 = t1346*t1473;
  t1534 = t1532 + t1533;
  t1506 = Power(t1388,2);
  t1507 = -0.24*t1506;
  t1508 = t1505 + t1507;
  t1526 = -1.*t1466*t1511;
  t1527 = t1526 + t1498;
  t1488 = t1487*t1405;
  t1489 = -0.24*t1388*t1405;
  t1493 = t1488 + t1489;
  t1501 = -1.*t1487*t1405;
  t1502 = 0.24*t1388*t1405;
  t1503 = t1501 + t1502;
  t1516 = Power(t1405,2);
  t1517 = 0.24*t1516;
  t1518 = t1505 + t1517;
  t1528 = 3.2*t1499*t1527;
  t1531 = 3.2*t1530*t1514;
  t1535 = 3.2*t1499*t1534;
  t1536 = 3.2*t1530*t1475;
  t1537 = t1528 + t1531 + t1535 + t1536;
  t1542 = -1.*t1541*t1497;
  t1546 = -1.*t1428*t1545;
  t1547 = t1542 + t1546;
  t1552 = t1551*t1497;
  t1553 = t1541*t1497;
  t1554 = t1428*t1545;
  t1557 = t1511*t1556;
  t1558 = t1552 + t1553 + t1554 + t1557;
  t1560 = t1541*t1511;
  t1561 = t1497*t1545;
  t1562 = t1560 + t1561;
  t1564 = -1.*t1428*t1551;
  t1565 = -1.*t1428*t1541;
  t1566 = -1.*t1497*t1556;
  t1567 = -1.*t1545*t1473;
  t1568 = t1564 + t1565 + t1566 + t1567;
  t1586 = 3.2*t1530*t1547;
  t1587 = 3.2*t1530*t1558;
  t1588 = 3.2*t1562*t1534;
  t1589 = 3.2*t1527*t1568;
  t1590 = t1586 + t1587 + t1588 + t1589;
  t1548 = 3.2*t1499*t1547;
  t1559 = 3.2*t1499*t1558;
  t1563 = 3.2*t1562*t1475;
  t1569 = 3.2*t1514*t1568;
  t1570 = t1548 + t1559 + t1563 + t1569;
  t1575 = 3.2*t1508*t1527;
  t1576 = 3.2*t1493*t1530;
  t1577 = 3.2*t1503*t1530;
  t1578 = 3.2*t1518*t1534;
  t1579 = t1575 + t1576 + t1577 + t1578;
  t1500 = 3.2*t1493*t1499;
  t1504 = 3.2*t1503*t1499;
  t1515 = 3.2*t1508*t1514;
  t1519 = 3.2*t1518*t1475;
  t1520 = t1500 + t1504 + t1515 + t1519;
  t1595 = 3.2*t1508*t1547;
  t1596 = 3.2*t1503*t1562;
  t1597 = 3.2*t1518*t1558;
  t1598 = 3.2*t1493*t1568;
  t1599 = t1595 + t1596 + t1597 + t1598;
  p_output1[0]=var2[4]*(-0.5*(6.4*t1475*t1499 + 6.4*t1499*t1514)*var2[0] - 0.5*t1537*var2[1] - 0.5*t1570*var2[2] - 0.5*t1520*var2[3] - 0.384*t1475*var2[4]);
  p_output1[1]=var2[4]*(-0.5*t1537*var2[0] - 0.5*(6.4*t1527*t1530 + 6.4*t1530*t1534)*var2[1] - 0.5*t1590*var2[2] - 0.5*t1579*var2[3] - 0.384*t1534*var2[4]);
  p_output1[2]=var2[4]*(-0.5*t1570*var2[0] - 0.5*t1590*var2[1] - 0.5*(6.4*t1558*t1562 + 6.4*t1547*t1568)*var2[2] - 0.5*t1599*var2[3] - 0.384*t1558*var2[4]);
  p_output1[3]=var2[4]*(-0.5*t1520*var2[0] - 0.5*t1579*var2[1] - 0.5*t1599*var2[2] - 0.5*(6.4*t1493*t1508 + 6.4*t1503*t1518)*var2[3] - 0.384*t1503*var2[4]);
  p_output1[4]=(-0.384*t1475*var2[0] - 0.384*t1534*var2[1] - 0.384*t1558*var2[2] - 0.384*t1503*var2[3])*var2[4];
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

#include "Ce2_vec5_five_link_walker.hh"

namespace RightStance
{

void Ce2_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
