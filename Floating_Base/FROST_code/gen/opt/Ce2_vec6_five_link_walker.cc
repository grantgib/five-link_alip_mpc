/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:34 GMT-05:00
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
  double t1524;
  double t1521;
  double t1522;
  double t1525;
  double t1573;
  double t1476;
  double t1523;
  double t1538;
  double t1571;
  double t1594;
  double t1600;
  double t1601;
  double t1602;
  double t1603;
  double t1572;
  double t1574;
  double t1580;
  double t1581;
  double t1582;
  double t1583;
  double t1585;
  double t1591;
  double t1592;
  double t1621;
  double t1622;
  double t1623;
  double t1607;
  double t1608;
  double t1609;
  double t1610;
  double t1611;
  double t1612;
  double t1625;
  double t1626;
  double t1627;
  double t1629;
  double t1630;
  double t1631;
  double t1632;
  double t1633;
  double t1634;
  double t1651;
  double t1652;
  double t1667;
  double t1668;
  double t1669;
  double t1671;
  double t1672;
  double t1673;
  double t1677;
  double t1678;
  double t1679;
  double t1654;
  double t1655;
  double t1656;
  double t1644;
  double t1645;
  double t1646;
  double t1604;
  double t1605;
  double t1606;
  double t1614;
  double t1615;
  double t1616;
  double t1617;
  double t1624;
  double t1648;
  double t1649;
  double t1639;
  double t1640;
  double t1641;
  double t1642;
  double t1643;
  double t1647;
  double t1650;
  double t1653;
  double t1657;
  double t1658;
  double t1659;
  double t1661;
  double t1662;
  double t1663;
  double t1664;
  double t1665;
  double t1670;
  double t1674;
  double t1675;
  double t1680;
  double t1681;
  double t1682;
  double t1683;
  double t1684;
  double t1686;
  double t1687;
  double t1688;
  double t1690;
  double t1691;
  double t1692;
  double t1693;
  double t1694;
  double t1712;
  double t1713;
  double t1714;
  double t1715;
  double t1716;
  double t1717;
  double t1666;
  double t1676;
  double t1685;
  double t1689;
  double t1695;
  double t1696;
  double t1701;
  double t1702;
  double t1703;
  double t1704;
  double t1593;
  double t1613;
  double t1618;
  double t1619;
  double t1722;
  double t1723;
  double t1724;
  t1524 = Cos(var1[5]);
  t1521 = Cos(var1[6]);
  t1522 = Sin(var1[5]);
  t1525 = Sin(var1[6]);
  t1573 = Sin(var1[2]);
  t1476 = Cos(var1[2]);
  t1523 = -1.*t1521*t1522;
  t1538 = -1.*t1524*t1525;
  t1571 = t1523 + t1538;
  t1594 = -1.*t1521;
  t1600 = 1. + t1594;
  t1601 = 0.4*t1600;
  t1602 = 0.64*t1521;
  t1603 = t1601 + t1602;
  t1572 = t1476*t1571;
  t1574 = -1.*t1524*t1521;
  t1580 = t1522*t1525;
  t1581 = t1574 + t1580;
  t1582 = t1573*t1581;
  t1583 = t1572 + t1582;
  t1585 = -1.*t1524*t1573;
  t1591 = -1.*t1476*t1522;
  t1592 = t1585 + t1591;
  t1621 = t1476*t1524;
  t1622 = -1.*t1573*t1522;
  t1623 = t1621 + t1622;
  t1607 = t1573*t1571;
  t1608 = t1524*t1521;
  t1609 = -1.*t1522*t1525;
  t1610 = t1608 + t1609;
  t1611 = t1476*t1610;
  t1612 = t1607 + t1611;
  t1625 = t1524*t1573;
  t1626 = t1476*t1522;
  t1627 = t1625 + t1626;
  t1629 = t1521*t1522;
  t1630 = t1524*t1525;
  t1631 = t1629 + t1630;
  t1632 = t1476*t1631;
  t1633 = t1573*t1610;
  t1634 = t1632 + t1633;
  t1651 = -1.*t1573*t1610;
  t1652 = t1572 + t1651;
  t1667 = t1603*t1522;
  t1668 = 0.24*t1524*t1525;
  t1669 = t1667 + t1668;
  t1671 = t1524*t1603;
  t1672 = -0.24*t1522*t1525;
  t1673 = t1671 + t1672;
  t1677 = -1.*t1603*t1522;
  t1678 = -0.24*t1524*t1525;
  t1679 = t1677 + t1678;
  t1654 = -1.*t1573*t1571;
  t1655 = t1476*t1581;
  t1656 = t1654 + t1655;
  t1644 = -1.*t1476*t1524;
  t1645 = t1573*t1522;
  t1646 = t1644 + t1645;
  t1604 = t1603*t1525;
  t1605 = -0.24*t1521*t1525;
  t1606 = t1604 + t1605;
  t1614 = t1603*t1521;
  t1615 = Power(t1525,2);
  t1616 = 0.24*t1615;
  t1617 = t1614 + t1616;
  t1624 = 13.6*t1592*t1623;
  t1648 = -1.*t1573*t1631;
  t1649 = t1648 + t1611;
  t1639 = Power(t1592,2);
  t1640 = 6.8*t1639;
  t1641 = 6.8*t1592*t1627;
  t1642 = Power(t1623,2);
  t1643 = 6.8*t1642;
  t1647 = 6.8*t1623*t1646;
  t1650 = 3.2*t1612*t1649;
  t1653 = 3.2*t1652*t1634;
  t1657 = 3.2*t1612*t1656;
  t1658 = 3.2*t1652*t1583;
  t1659 = t1640 + t1641 + t1643 + t1647 + t1650 + t1653 + t1657 + t1658;
  t1661 = Power(t1524,2);
  t1662 = 0.11*t1661;
  t1663 = Power(t1522,2);
  t1664 = 0.11*t1663;
  t1665 = t1662 + t1664;
  t1670 = -1.*t1669*t1610;
  t1674 = -1.*t1571*t1673;
  t1675 = t1670 + t1674;
  t1680 = t1679*t1610;
  t1681 = t1669*t1610;
  t1682 = t1571*t1673;
  t1683 = t1631*t1673;
  t1684 = t1680 + t1681 + t1682 + t1683;
  t1686 = t1669*t1631;
  t1687 = t1610*t1673;
  t1688 = t1686 + t1687;
  t1690 = -1.*t1571*t1679;
  t1691 = -1.*t1571*t1669;
  t1692 = -1.*t1610*t1673;
  t1693 = -1.*t1673*t1581;
  t1694 = t1690 + t1691 + t1692 + t1693;
  t1712 = 6.8*t1646*t1665;
  t1713 = 3.2*t1652*t1675;
  t1714 = 3.2*t1652*t1684;
  t1715 = 3.2*t1688*t1656;
  t1716 = 3.2*t1649*t1694;
  t1717 = t1712 + t1713 + t1714 + t1715 + t1716;
  t1666 = 6.8*t1592*t1665;
  t1676 = 3.2*t1612*t1675;
  t1685 = 3.2*t1612*t1684;
  t1689 = 3.2*t1688*t1583;
  t1695 = 3.2*t1634*t1694;
  t1696 = t1666 + t1676 + t1685 + t1689 + t1695;
  t1701 = 0.748*t1646;
  t1702 = 3.2*t1606*t1652;
  t1703 = 3.2*t1617*t1656;
  t1704 = t1701 + t1702 + t1703;
  t1593 = 0.748*t1592;
  t1613 = 3.2*t1606*t1612;
  t1618 = 3.2*t1617*t1583;
  t1619 = t1593 + t1613 + t1618;
  t1722 = 3.2*t1617*t1684;
  t1723 = 3.2*t1606*t1694;
  t1724 = t1722 + t1723;
  p_output1[0]=var2[5]*(-0.5*(6.4*t1583*t1612 + t1624 + 13.6*t1623*t1627 + 6.4*t1612*t1634)*var2[0] - 0.5*t1659*var2[1] - 0.5*t1696*var2[2] - 0.5*t1619*var2[5] - 0.384*t1583*var2[6]);
  p_output1[1]=var2[5]*(-0.5*t1659*var2[0] - 0.5*(t1624 + 13.6*t1592*t1646 + 6.4*t1649*t1652 + 6.4*t1652*t1656)*var2[1] - 0.5*t1717*var2[2] - 0.5*t1704*var2[5] - 0.384*t1656*var2[6]);
  p_output1[2]=var2[5]*(-0.5*t1696*var2[0] - 0.5*t1717*var2[1] - 0.5*(6.4*t1684*t1688 + 6.4*t1675*t1694)*var2[2] - 0.5*t1724*var2[5] - 0.384*t1684*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(-0.5*t1619*var2[0] - 0.5*t1704*var2[1] - 0.5*t1724*var2[2])*var2[5];
  p_output1[6]=(-0.384*t1583*var2[0] - 0.384*t1656*var2[1] - 0.384*t1684*var2[2])*var2[5];
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

#include "Ce2_vec6_five_link_walker.hh"

namespace RightStance
{

void Ce2_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
