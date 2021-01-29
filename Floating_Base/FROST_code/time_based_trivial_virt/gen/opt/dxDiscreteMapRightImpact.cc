/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 10:59:16 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t1432;
  double t1429;
  double t1430;
  double t1433;
  double t1437;
  double t1428;
  double t1431;
  double t1434;
  double t1435;
  double t1436;
  double t1438;
  double t1439;
  double t1440;
  double t1441;
  double t1442;
  double t1450;
  double t1451;
  double t1452;
  double t1453;
  double t1454;
  double t1479;
  double t1474;
  double t1477;
  double t1480;
  double t1478;
  double t1481;
  double t1482;
  double t1483;
  double t1484;
  double t1485;
  double t1486;
  double t1487;
  double t1488;
  double t1496;
  double t1497;
  double t1498;
  double t1499;
  double t1500;
  double t1446;
  double t1447;
  double t1448;
  double t1463;
  double t1464;
  double t1465;
  double t1466;
  double t1467;
  double t1468;
  double t1492;
  double t1493;
  double t1494;
  double t1509;
  double t1510;
  double t1511;
  double t1512;
  double t1513;
  double t1514;
  double t1524;
  double t1525;
  double t1526;
  double t1539;
  double t1540;
  double t1541;
  double t1585;
  double t1586;
  double t1587;
  double t1589;
  double t1590;
  double t1591;
  double t1605;
  double t1606;
  double t1607;
  double t1609;
  double t1610;
  double t1611;
  double t1426;
  double t1427;
  double t1528;
  double t1529;
  double t1530;
  double t1444;
  double t1445;
  double t1520;
  double t1521;
  double t1522;
  double t1460;
  double t1461;
  double t1462;
  double t1532;
  double t1533;
  double t1455;
  double t1456;
  double t1457;
  double t1458;
  double t1472;
  double t1473;
  double t1543;
  double t1544;
  double t1545;
  double t1490;
  double t1491;
  double t1535;
  double t1536;
  double t1537;
  double t1506;
  double t1507;
  double t1508;
  double t1547;
  double t1548;
  double t1501;
  double t1502;
  double t1503;
  double t1504;
  double t1518;
  double t1519;
  double t1554;
  double t1555;
  double t1556;
  double t1557;
  double t1560;
  double t1561;
  double t1568;
  double t1569;
  double t1552;
  double t1553;
  double t1523;
  double t1527;
  double t1531;
  double t1534;
  double t1538;
  double t1542;
  double t1546;
  double t1549;
  double t1550;
  double t1576;
  double t1577;
  double t1579;
  double t1580;
  double t1581;
  double t1582;
  double t1583;
  double t1588;
  double t1592;
  double t1593;
  double t1595;
  double t1596;
  double t1597;
  double t1599;
  double t1600;
  double t1601;
  double t1602;
  double t1603;
  double t1608;
  double t1612;
  double t1613;
  double t1615;
  double t1616;
  double t1617;
  double t1669;
  double t1670;
  double t1671;
  double t1578;
  double t1584;
  double t1594;
  double t1598;
  double t1604;
  double t1614;
  double t1618;
  double t1619;
  double t1650;
  double t1651;
  double t1652;
  double t1653;
  double t1654;
  double t1655;
  double t1656;
  double t1657;
  double t1660;
  double t1661;
  double t1662;
  double t1663;
  double t1664;
  double t1665;
  double t1666;
  double t1667;
  double t1668;
  double t1672;
  double t1673;
  double t1674;
  double t1675;
  double t1676;
  double t1677;
  double t1678;
  double t1624;
  double t1625;
  double t1626;
  double t1627;
  double t1449;
  double t1459;
  double t1469;
  double t1470;
  double t1682;
  double t1683;
  double t1684;
  double t1685;
  double t1712;
  double t1713;
  double t1679;
  double t1680;
  double t1630;
  double t1631;
  double t1632;
  double t1633;
  double t1495;
  double t1505;
  double t1515;
  double t1516;
  double t1690;
  double t1691;
  double t1692;
  double t1693;
  double t1745;
  double t1746;
  double t1687;
  double t1688;
  t1432 = Cos(var2[3]);
  t1429 = Cos(var2[4]);
  t1430 = Sin(var2[3]);
  t1433 = Sin(var2[4]);
  t1437 = Cos(var2[2]);
  t1428 = Sin(var2[2]);
  t1431 = -1.*t1429*t1430;
  t1434 = -1.*t1432*t1433;
  t1435 = t1431 + t1434;
  t1436 = t1428*t1435;
  t1438 = t1432*t1429;
  t1439 = -1.*t1430*t1433;
  t1440 = t1438 + t1439;
  t1441 = t1437*t1440;
  t1442 = t1436 + t1441;
  t1450 = -1.*t1429;
  t1451 = 1. + t1450;
  t1452 = 0.4*t1451;
  t1453 = 0.64*t1429;
  t1454 = t1452 + t1453;
  t1479 = Cos(var2[5]);
  t1474 = Cos(var2[6]);
  t1477 = Sin(var2[5]);
  t1480 = Sin(var2[6]);
  t1478 = -1.*t1474*t1477;
  t1481 = -1.*t1479*t1480;
  t1482 = t1478 + t1481;
  t1483 = t1428*t1482;
  t1484 = t1479*t1474;
  t1485 = -1.*t1477*t1480;
  t1486 = t1484 + t1485;
  t1487 = t1437*t1486;
  t1488 = t1483 + t1487;
  t1496 = -1.*t1474;
  t1497 = 1. + t1496;
  t1498 = 0.4*t1497;
  t1499 = 0.64*t1474;
  t1500 = t1498 + t1499;
  t1446 = t1437*t1432;
  t1447 = -1.*t1428*t1430;
  t1448 = t1446 + t1447;
  t1463 = t1429*t1430;
  t1464 = t1432*t1433;
  t1465 = t1463 + t1464;
  t1466 = t1437*t1465;
  t1467 = t1428*t1440;
  t1468 = t1466 + t1467;
  t1492 = t1437*t1479;
  t1493 = -1.*t1428*t1477;
  t1494 = t1492 + t1493;
  t1509 = t1474*t1477;
  t1510 = t1479*t1480;
  t1511 = t1509 + t1510;
  t1512 = t1437*t1511;
  t1513 = t1428*t1486;
  t1514 = t1512 + t1513;
  t1524 = t1432*t1428;
  t1525 = t1437*t1430;
  t1526 = t1524 + t1525;
  t1539 = t1479*t1428;
  t1540 = t1437*t1477;
  t1541 = t1539 + t1540;
  t1585 = t1454*t1430;
  t1586 = 0.24*t1432*t1433;
  t1587 = t1585 + t1586;
  t1589 = t1432*t1454;
  t1590 = -0.24*t1430*t1433;
  t1591 = t1589 + t1590;
  t1605 = t1500*t1477;
  t1606 = 0.24*t1479*t1480;
  t1607 = t1605 + t1606;
  t1609 = t1479*t1500;
  t1610 = -0.24*t1477*t1480;
  t1611 = t1609 + t1610;
  t1426 = -1.*var1[4];
  t1427 = var3[4] + t1426;
  t1528 = t1437*t1435;
  t1529 = -1.*t1428*t1440;
  t1530 = t1528 + t1529;
  t1444 = -1.*var1[3];
  t1445 = var3[3] + t1444;
  t1520 = -1.*t1432*t1428;
  t1521 = -1.*t1437*t1430;
  t1522 = t1520 + t1521;
  t1460 = t1454*t1433;
  t1461 = -0.24*t1429*t1433;
  t1462 = t1460 + t1461;
  t1532 = -1.*t1428*t1465;
  t1533 = t1532 + t1441;
  t1455 = t1454*t1429;
  t1456 = Power(t1433,2);
  t1457 = 0.24*t1456;
  t1458 = t1455 + t1457;
  t1472 = -1.*var1[6];
  t1473 = var3[6] + t1472;
  t1543 = t1437*t1482;
  t1544 = -1.*t1428*t1486;
  t1545 = t1543 + t1544;
  t1490 = -1.*var1[5];
  t1491 = var3[5] + t1490;
  t1535 = -1.*t1479*t1428;
  t1536 = -1.*t1437*t1477;
  t1537 = t1535 + t1536;
  t1506 = t1500*t1480;
  t1507 = -0.24*t1474*t1480;
  t1508 = t1506 + t1507;
  t1547 = -1.*t1428*t1511;
  t1548 = t1547 + t1487;
  t1501 = t1500*t1474;
  t1502 = Power(t1480,2);
  t1503 = 0.24*t1502;
  t1504 = t1501 + t1503;
  t1518 = -1.*var1[1];
  t1519 = var3[1] + t1518;
  t1554 = Power(t1437,2);
  t1555 = 12.*t1554;
  t1556 = Power(t1428,2);
  t1557 = 12.*t1556;
  t1560 = Power(t1448,2);
  t1561 = 6.8*t1560;
  t1568 = Power(t1494,2);
  t1569 = 6.8*t1568;
  t1552 = -1.*var1[0];
  t1553 = var3[0] + t1552;
  t1523 = 6.8*t1522*t1448;
  t1527 = 6.8*t1526*t1448;
  t1531 = 3.2*t1442*t1530;
  t1534 = 3.2*t1533*t1468;
  t1538 = 6.8*t1537*t1494;
  t1542 = 6.8*t1541*t1494;
  t1546 = 3.2*t1488*t1545;
  t1549 = 3.2*t1548*t1514;
  t1550 = t1523 + t1527 + t1531 + t1534 + t1538 + t1542 + t1546 + t1549;
  t1576 = -1.*var1[2];
  t1577 = var3[2] + t1576;
  t1579 = Power(t1432,2);
  t1580 = 0.11*t1579;
  t1581 = Power(t1430,2);
  t1582 = 0.11*t1581;
  t1583 = t1580 + t1582;
  t1588 = -1.*t1587*t1440;
  t1592 = -1.*t1435*t1591;
  t1593 = t1588 + t1592;
  t1595 = t1587*t1465;
  t1596 = t1440*t1591;
  t1597 = t1595 + t1596;
  t1599 = Power(t1479,2);
  t1600 = 0.11*t1599;
  t1601 = Power(t1477,2);
  t1602 = 0.11*t1601;
  t1603 = t1600 + t1602;
  t1608 = -1.*t1607*t1486;
  t1612 = -1.*t1482*t1611;
  t1613 = t1608 + t1612;
  t1615 = t1607*t1511;
  t1616 = t1486*t1611;
  t1617 = t1615 + t1616;
  t1669 = -1.*t1437*t1432;
  t1670 = t1428*t1430;
  t1671 = t1669 + t1670;
  t1578 = 2.88*t1437;
  t1584 = 6.8*t1448*t1583;
  t1594 = 3.2*t1468*t1593;
  t1598 = 3.2*t1442*t1597;
  t1604 = 6.8*t1494*t1603;
  t1614 = 3.2*t1514*t1613;
  t1618 = 3.2*t1488*t1617;
  t1619 = t1578 + t1584 + t1594 + t1598 + t1604 + t1614 + t1618;
  t1650 = -2.88*t1428;
  t1651 = 6.8*t1522*t1583;
  t1652 = 3.2*t1533*t1593;
  t1653 = 3.2*t1530*t1597;
  t1654 = 6.8*t1537*t1603;
  t1655 = 3.2*t1548*t1613;
  t1656 = 3.2*t1545*t1617;
  t1657 = t1650 + t1651 + t1652 + t1653 + t1654 + t1655 + t1656;
  t1660 = 0.4*t1451*t1448;
  t1661 = -0.4*t1522*t1433;
  t1662 = t1429*t1448;
  t1663 = t1522*t1433;
  t1664 = t1662 + t1663;
  t1665 = 0.8*t1664;
  t1666 = t1660 + t1661 + t1665;
  t1667 = -1.*var4[0]*t1666;
  t1668 = 0.4*t1451*t1522;
  t1672 = -0.4*t1671*t1433;
  t1673 = t1429*t1522;
  t1674 = t1671*t1433;
  t1675 = t1673 + t1674;
  t1676 = 0.8*t1675;
  t1677 = t1668 + t1672 + t1676;
  t1678 = -1.*var4[2]*t1677;
  t1624 = 0.748*t1522;
  t1625 = 3.2*t1462*t1533;
  t1626 = 3.2*t1458*t1530;
  t1627 = t1624 + t1625 + t1626;
  t1449 = 0.748*t1448;
  t1459 = 3.2*t1458*t1442;
  t1469 = 3.2*t1462*t1468;
  t1470 = t1449 + t1459 + t1469;
  t1682 = 0.748*t1583;
  t1683 = 3.2*t1462*t1593;
  t1684 = 3.2*t1458*t1597;
  t1685 = 0.67 + t1682 + t1683 + t1684;
  t1712 = 0.768*t1458;
  t1713 = 0.2 + t1712;
  t1679 = 0.768*t1597;
  t1680 = 0.2 + t1679;
  t1630 = 0.748*t1537;
  t1631 = 3.2*t1508*t1548;
  t1632 = 3.2*t1504*t1545;
  t1633 = t1630 + t1631 + t1632;
  t1495 = 0.748*t1494;
  t1505 = 3.2*t1504*t1488;
  t1515 = 3.2*t1508*t1514;
  t1516 = t1495 + t1505 + t1515;
  t1690 = 0.748*t1603;
  t1691 = 3.2*t1508*t1613;
  t1692 = 3.2*t1504*t1617;
  t1693 = 0.67 + t1690 + t1691 + t1692;
  t1745 = 0.768*t1504;
  t1746 = 0.2 + t1745;
  t1687 = 0.768*t1617;
  t1688 = 0.2 + t1687;
  p_output1[0]=0.768*t1427*t1442 + t1445*t1470 + 0.768*t1473*t1488 + t1491*t1516 + t1519*t1550 + t1553*(3.2*Power(t1442,2) + 3.2*Power(t1468,2) + 3.2*Power(t1488,2) + 3.2*Power(t1514,2) + 6.8*Power(t1526,2) + 6.8*Power(t1541,2) + t1555 + t1557 + t1561 + t1569) + t1577*t1619 - 1.*var4[0];
  p_output1[1]=0.768*t1427*t1530 + 0.768*t1473*t1545 + t1550*t1553 + t1519*(6.8*Power(t1522,2) + 3.2*Power(t1530,2) + 3.2*Power(t1533,2) + 6.8*Power(t1537,2) + 3.2*Power(t1545,2) + 3.2*Power(t1548,2) + t1555 + t1557 + t1561 + t1569) + t1445*t1627 + t1491*t1633 + t1577*t1657 - 1.*var4[2];
  p_output1[2]=t1577*(3.3612 + 6.8*Power(t1583,2) + 3.2*Power(t1593,2) + 3.2*Power(t1597,2) + 6.8*Power(t1603,2) + 3.2*Power(t1613,2) + 3.2*Power(t1617,2)) + t1553*t1619 + t1519*t1657 + t1667 + t1678 + t1427*t1680 + t1445*t1685 + t1473*t1688 + t1491*t1693;
  p_output1[3]=t1445*(1.58228 + 3.2*Power(t1458,2) + 3.2*Power(t1462,2)) + t1470*t1553 + t1519*t1627 + t1667 + t1678 + t1577*t1685 + t1427*t1713;
  p_output1[4]=1.2143199999999998*t1427 + 0.768*t1519*t1530 + 0.768*t1442*t1553 + t1577*t1680 + t1445*t1713 - 1.*(-0.4*t1429*t1448 + 0.4*t1433*t1526 + 0.8*(-1.*t1433*t1526 + t1662))*var4[0] - 1.*(0.4*t1433*t1448 - 0.4*t1429*t1522 + 0.8*(-1.*t1433*t1448 + t1673))*var4[2];
  p_output1[5]=t1491*(1.58228 + 3.2*Power(t1504,2) + 3.2*Power(t1508,2)) + t1516*t1553 + t1519*t1633 + t1577*t1693 + t1473*t1746;
  p_output1[6]=1.2143199999999998*t1473 + 0.768*t1519*t1545 + 0.768*t1488*t1553 + t1577*t1688 + t1491*t1746;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMapRightImpact.hh"

namespace RightImpact
{

void dxDiscreteMapRightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
