/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 14:55:54 GMT-04:00
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
  double t1472;
  double t1469;
  double t1470;
  double t1473;
  double t1477;
  double t1468;
  double t1471;
  double t1474;
  double t1475;
  double t1476;
  double t1478;
  double t1479;
  double t1480;
  double t1481;
  double t1482;
  double t1490;
  double t1491;
  double t1492;
  double t1493;
  double t1494;
  double t1519;
  double t1514;
  double t1517;
  double t1520;
  double t1518;
  double t1521;
  double t1522;
  double t1523;
  double t1524;
  double t1525;
  double t1526;
  double t1527;
  double t1528;
  double t1536;
  double t1537;
  double t1538;
  double t1539;
  double t1540;
  double t1486;
  double t1487;
  double t1488;
  double t1503;
  double t1504;
  double t1505;
  double t1506;
  double t1507;
  double t1508;
  double t1532;
  double t1533;
  double t1534;
  double t1549;
  double t1550;
  double t1551;
  double t1552;
  double t1553;
  double t1554;
  double t1564;
  double t1565;
  double t1566;
  double t1579;
  double t1580;
  double t1581;
  double t1625;
  double t1626;
  double t1627;
  double t1629;
  double t1630;
  double t1631;
  double t1645;
  double t1646;
  double t1647;
  double t1649;
  double t1650;
  double t1651;
  double t1466;
  double t1467;
  double t1568;
  double t1569;
  double t1570;
  double t1484;
  double t1485;
  double t1560;
  double t1561;
  double t1562;
  double t1500;
  double t1501;
  double t1502;
  double t1572;
  double t1573;
  double t1495;
  double t1496;
  double t1497;
  double t1498;
  double t1512;
  double t1513;
  double t1583;
  double t1584;
  double t1585;
  double t1530;
  double t1531;
  double t1575;
  double t1576;
  double t1577;
  double t1546;
  double t1547;
  double t1548;
  double t1587;
  double t1588;
  double t1541;
  double t1542;
  double t1543;
  double t1544;
  double t1558;
  double t1559;
  double t1594;
  double t1595;
  double t1596;
  double t1597;
  double t1600;
  double t1601;
  double t1608;
  double t1609;
  double t1592;
  double t1593;
  double t1563;
  double t1567;
  double t1571;
  double t1574;
  double t1578;
  double t1582;
  double t1586;
  double t1589;
  double t1590;
  double t1616;
  double t1617;
  double t1619;
  double t1620;
  double t1621;
  double t1622;
  double t1623;
  double t1628;
  double t1632;
  double t1633;
  double t1635;
  double t1636;
  double t1637;
  double t1639;
  double t1640;
  double t1641;
  double t1642;
  double t1643;
  double t1648;
  double t1652;
  double t1653;
  double t1655;
  double t1656;
  double t1657;
  double t1709;
  double t1710;
  double t1711;
  double t1618;
  double t1624;
  double t1634;
  double t1638;
  double t1644;
  double t1654;
  double t1658;
  double t1659;
  double t1690;
  double t1691;
  double t1692;
  double t1693;
  double t1694;
  double t1695;
  double t1696;
  double t1697;
  double t1700;
  double t1701;
  double t1702;
  double t1703;
  double t1704;
  double t1705;
  double t1706;
  double t1707;
  double t1708;
  double t1712;
  double t1713;
  double t1714;
  double t1715;
  double t1716;
  double t1717;
  double t1718;
  double t1664;
  double t1665;
  double t1666;
  double t1667;
  double t1489;
  double t1499;
  double t1509;
  double t1510;
  double t1722;
  double t1723;
  double t1724;
  double t1725;
  double t1752;
  double t1753;
  double t1719;
  double t1720;
  double t1670;
  double t1671;
  double t1672;
  double t1673;
  double t1535;
  double t1545;
  double t1555;
  double t1556;
  double t1730;
  double t1731;
  double t1732;
  double t1733;
  double t1785;
  double t1786;
  double t1727;
  double t1728;
  t1472 = Cos(var2[3]);
  t1469 = Cos(var2[4]);
  t1470 = Sin(var2[3]);
  t1473 = Sin(var2[4]);
  t1477 = Cos(var2[2]);
  t1468 = Sin(var2[2]);
  t1471 = -1.*t1469*t1470;
  t1474 = -1.*t1472*t1473;
  t1475 = t1471 + t1474;
  t1476 = t1468*t1475;
  t1478 = t1472*t1469;
  t1479 = -1.*t1470*t1473;
  t1480 = t1478 + t1479;
  t1481 = t1477*t1480;
  t1482 = t1476 + t1481;
  t1490 = -1.*t1469;
  t1491 = 1. + t1490;
  t1492 = 0.4*t1491;
  t1493 = 0.64*t1469;
  t1494 = t1492 + t1493;
  t1519 = Cos(var2[5]);
  t1514 = Cos(var2[6]);
  t1517 = Sin(var2[5]);
  t1520 = Sin(var2[6]);
  t1518 = -1.*t1514*t1517;
  t1521 = -1.*t1519*t1520;
  t1522 = t1518 + t1521;
  t1523 = t1468*t1522;
  t1524 = t1519*t1514;
  t1525 = -1.*t1517*t1520;
  t1526 = t1524 + t1525;
  t1527 = t1477*t1526;
  t1528 = t1523 + t1527;
  t1536 = -1.*t1514;
  t1537 = 1. + t1536;
  t1538 = 0.4*t1537;
  t1539 = 0.64*t1514;
  t1540 = t1538 + t1539;
  t1486 = t1477*t1472;
  t1487 = -1.*t1468*t1470;
  t1488 = t1486 + t1487;
  t1503 = t1469*t1470;
  t1504 = t1472*t1473;
  t1505 = t1503 + t1504;
  t1506 = t1477*t1505;
  t1507 = t1468*t1480;
  t1508 = t1506 + t1507;
  t1532 = t1477*t1519;
  t1533 = -1.*t1468*t1517;
  t1534 = t1532 + t1533;
  t1549 = t1514*t1517;
  t1550 = t1519*t1520;
  t1551 = t1549 + t1550;
  t1552 = t1477*t1551;
  t1553 = t1468*t1526;
  t1554 = t1552 + t1553;
  t1564 = t1472*t1468;
  t1565 = t1477*t1470;
  t1566 = t1564 + t1565;
  t1579 = t1519*t1468;
  t1580 = t1477*t1517;
  t1581 = t1579 + t1580;
  t1625 = t1494*t1470;
  t1626 = 0.24*t1472*t1473;
  t1627 = t1625 + t1626;
  t1629 = t1472*t1494;
  t1630 = -0.24*t1470*t1473;
  t1631 = t1629 + t1630;
  t1645 = t1540*t1517;
  t1646 = 0.24*t1519*t1520;
  t1647 = t1645 + t1646;
  t1649 = t1519*t1540;
  t1650 = -0.24*t1517*t1520;
  t1651 = t1649 + t1650;
  t1466 = -1.*var1[4];
  t1467 = var3[4] + t1466;
  t1568 = t1477*t1475;
  t1569 = -1.*t1468*t1480;
  t1570 = t1568 + t1569;
  t1484 = -1.*var1[3];
  t1485 = var3[3] + t1484;
  t1560 = -1.*t1472*t1468;
  t1561 = -1.*t1477*t1470;
  t1562 = t1560 + t1561;
  t1500 = t1494*t1473;
  t1501 = -0.24*t1469*t1473;
  t1502 = t1500 + t1501;
  t1572 = -1.*t1468*t1505;
  t1573 = t1572 + t1481;
  t1495 = t1494*t1469;
  t1496 = Power(t1473,2);
  t1497 = 0.24*t1496;
  t1498 = t1495 + t1497;
  t1512 = -1.*var1[6];
  t1513 = var3[6] + t1512;
  t1583 = t1477*t1522;
  t1584 = -1.*t1468*t1526;
  t1585 = t1583 + t1584;
  t1530 = -1.*var1[5];
  t1531 = var3[5] + t1530;
  t1575 = -1.*t1519*t1468;
  t1576 = -1.*t1477*t1517;
  t1577 = t1575 + t1576;
  t1546 = t1540*t1520;
  t1547 = -0.24*t1514*t1520;
  t1548 = t1546 + t1547;
  t1587 = -1.*t1468*t1551;
  t1588 = t1587 + t1527;
  t1541 = t1540*t1514;
  t1542 = Power(t1520,2);
  t1543 = 0.24*t1542;
  t1544 = t1541 + t1543;
  t1558 = -1.*var1[1];
  t1559 = var3[1] + t1558;
  t1594 = Power(t1477,2);
  t1595 = 12.*t1594;
  t1596 = Power(t1468,2);
  t1597 = 12.*t1596;
  t1600 = Power(t1488,2);
  t1601 = 6.8*t1600;
  t1608 = Power(t1534,2);
  t1609 = 6.8*t1608;
  t1592 = -1.*var1[0];
  t1593 = var3[0] + t1592;
  t1563 = 6.8*t1562*t1488;
  t1567 = 6.8*t1566*t1488;
  t1571 = 3.2*t1482*t1570;
  t1574 = 3.2*t1573*t1508;
  t1578 = 6.8*t1577*t1534;
  t1582 = 6.8*t1581*t1534;
  t1586 = 3.2*t1528*t1585;
  t1589 = 3.2*t1588*t1554;
  t1590 = t1563 + t1567 + t1571 + t1574 + t1578 + t1582 + t1586 + t1589;
  t1616 = -1.*var1[2];
  t1617 = var3[2] + t1616;
  t1619 = Power(t1472,2);
  t1620 = 0.11*t1619;
  t1621 = Power(t1470,2);
  t1622 = 0.11*t1621;
  t1623 = t1620 + t1622;
  t1628 = -1.*t1627*t1480;
  t1632 = -1.*t1475*t1631;
  t1633 = t1628 + t1632;
  t1635 = t1627*t1505;
  t1636 = t1480*t1631;
  t1637 = t1635 + t1636;
  t1639 = Power(t1519,2);
  t1640 = 0.11*t1639;
  t1641 = Power(t1517,2);
  t1642 = 0.11*t1641;
  t1643 = t1640 + t1642;
  t1648 = -1.*t1647*t1526;
  t1652 = -1.*t1522*t1651;
  t1653 = t1648 + t1652;
  t1655 = t1647*t1551;
  t1656 = t1526*t1651;
  t1657 = t1655 + t1656;
  t1709 = -1.*t1477*t1472;
  t1710 = t1468*t1470;
  t1711 = t1709 + t1710;
  t1618 = 2.88*t1477;
  t1624 = 6.8*t1488*t1623;
  t1634 = 3.2*t1508*t1633;
  t1638 = 3.2*t1482*t1637;
  t1644 = 6.8*t1534*t1643;
  t1654 = 3.2*t1554*t1653;
  t1658 = 3.2*t1528*t1657;
  t1659 = t1618 + t1624 + t1634 + t1638 + t1644 + t1654 + t1658;
  t1690 = -2.88*t1468;
  t1691 = 6.8*t1562*t1623;
  t1692 = 3.2*t1573*t1633;
  t1693 = 3.2*t1570*t1637;
  t1694 = 6.8*t1577*t1643;
  t1695 = 3.2*t1588*t1653;
  t1696 = 3.2*t1585*t1657;
  t1697 = t1690 + t1691 + t1692 + t1693 + t1694 + t1695 + t1696;
  t1700 = 0.4*t1491*t1488;
  t1701 = -0.4*t1562*t1473;
  t1702 = t1469*t1488;
  t1703 = t1562*t1473;
  t1704 = t1702 + t1703;
  t1705 = 0.8*t1704;
  t1706 = t1700 + t1701 + t1705;
  t1707 = -1.*var4[0]*t1706;
  t1708 = 0.4*t1491*t1562;
  t1712 = -0.4*t1711*t1473;
  t1713 = t1469*t1562;
  t1714 = t1711*t1473;
  t1715 = t1713 + t1714;
  t1716 = 0.8*t1715;
  t1717 = t1708 + t1712 + t1716;
  t1718 = -1.*var4[2]*t1717;
  t1664 = 0.748*t1562;
  t1665 = 3.2*t1502*t1573;
  t1666 = 3.2*t1498*t1570;
  t1667 = t1664 + t1665 + t1666;
  t1489 = 0.748*t1488;
  t1499 = 3.2*t1498*t1482;
  t1509 = 3.2*t1502*t1508;
  t1510 = t1489 + t1499 + t1509;
  t1722 = 0.748*t1623;
  t1723 = 3.2*t1502*t1633;
  t1724 = 3.2*t1498*t1637;
  t1725 = 0.67 + t1722 + t1723 + t1724;
  t1752 = 0.768*t1498;
  t1753 = 0.2 + t1752;
  t1719 = 0.768*t1637;
  t1720 = 0.2 + t1719;
  t1670 = 0.748*t1577;
  t1671 = 3.2*t1548*t1588;
  t1672 = 3.2*t1544*t1585;
  t1673 = t1670 + t1671 + t1672;
  t1535 = 0.748*t1534;
  t1545 = 3.2*t1544*t1528;
  t1555 = 3.2*t1548*t1554;
  t1556 = t1535 + t1545 + t1555;
  t1730 = 0.748*t1643;
  t1731 = 3.2*t1548*t1653;
  t1732 = 3.2*t1544*t1657;
  t1733 = 0.67 + t1730 + t1731 + t1732;
  t1785 = 0.768*t1544;
  t1786 = 0.2 + t1785;
  t1727 = 0.768*t1657;
  t1728 = 0.2 + t1727;
  p_output1[0]=0.768*t1467*t1482 + t1485*t1510 + 0.768*t1513*t1528 + t1531*t1556 + t1559*t1590 + t1593*(3.2*Power(t1482,2) + 3.2*Power(t1508,2) + 3.2*Power(t1528,2) + 3.2*Power(t1554,2) + 6.8*Power(t1566,2) + 6.8*Power(t1581,2) + t1595 + t1597 + t1601 + t1609) + t1617*t1659 - 1.*var4[0];
  p_output1[1]=0.768*t1467*t1570 + 0.768*t1513*t1585 + t1590*t1593 + t1559*(6.8*Power(t1562,2) + 3.2*Power(t1570,2) + 3.2*Power(t1573,2) + 6.8*Power(t1577,2) + 3.2*Power(t1585,2) + 3.2*Power(t1588,2) + t1595 + t1597 + t1601 + t1609) + t1485*t1667 + t1531*t1673 + t1617*t1697 - 1.*var4[2];
  p_output1[2]=t1617*(3.3612 + 6.8*Power(t1623,2) + 3.2*Power(t1633,2) + 3.2*Power(t1637,2) + 6.8*Power(t1643,2) + 3.2*Power(t1653,2) + 3.2*Power(t1657,2)) + t1593*t1659 + t1559*t1697 + t1707 + t1718 + t1467*t1720 + t1485*t1725 + t1513*t1728 + t1531*t1733;
  p_output1[3]=t1485*(1.58228 + 3.2*Power(t1498,2) + 3.2*Power(t1502,2)) + t1510*t1593 + t1559*t1667 + t1707 + t1718 + t1617*t1725 + t1467*t1753;
  p_output1[4]=1.2143199999999998*t1467 + 0.768*t1559*t1570 + 0.768*t1482*t1593 + t1617*t1720 + t1485*t1753 - 1.*(-0.4*t1469*t1488 + 0.4*t1473*t1566 + 0.8*(-1.*t1473*t1566 + t1702))*var4[0] - 1.*(0.4*t1473*t1488 - 0.4*t1469*t1562 + 0.8*(-1.*t1473*t1488 + t1713))*var4[2];
  p_output1[5]=t1531*(1.58228 + 3.2*Power(t1544,2) + 3.2*Power(t1548,2)) + t1556*t1593 + t1559*t1673 + t1617*t1733 + t1513*t1786;
  p_output1[6]=1.2143199999999998*t1513 + 0.768*t1559*t1585 + 0.768*t1528*t1593 + t1617*t1728 + t1531*t1786;
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
