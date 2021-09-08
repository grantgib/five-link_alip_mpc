/*
 * Automatically Generated from Mathematica.
 * Wed 8 Sep 2021 02:56:32 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t1574;
  double t1582;
  double t1596;
  double t1601;
  double t1603;
  double t1609;
  double t1614;
  double t1615;
  double t1617;
  double t1625;
  double t1631;
  double t1633;
  double t1634;
  double t1635;
  double t1637;
  double t1656;
  double t1657;
  double t1659;
  double t1645;
  double t1646;
  double t1652;
  double t1654;
  double t1655;
  double t1660;
  double t1664;
  double t1666;
  double t1668;
  double t1669;
  double t1670;
  double t1671;
  double t1680;
  double t1681;
  double t1682;
  double t1684;
  double t1685;
  double t1691;
  double t1693;
  double t1694;
  double t1695;
  double t1697;
  double t1699;
  double t1715;
  double t1716;
  double t1717;
  double t1707;
  double t1708;
  double t1709;
  double t1711;
  double t1714;
  double t1718;
  double t1719;
  double t1720;
  double t1722;
  double t1723;
  double t1724;
  double t1725;
  double t1597;
  double t1598;
  double t1618;
  double t1619;
  double t1620;
  double t1747;
  double t1740;
  double t1768;
  double t1769;
  double t1770;
  double t1771;
  double t1772;
  double t1773;
  double t1775;
  double t1753;
  double t1754;
  double t1755;
  double t1627;
  double t1636;
  double t1640;
  double t1641;
  double t1642;
  double t1643;
  double t1644;
  double t1674;
  double t1675;
  double t1677;
  double t1687;
  double t1688;
  double t1689;
  double t1812;
  double t1813;
  double t1814;
  double t1815;
  double t1816;
  double t1817;
  double t1819;
  double t1798;
  double t1799;
  double t1800;
  double t1692;
  double t1698;
  double t1700;
  double t1702;
  double t1703;
  double t1704;
  double t1705;
  double t1726;
  double t1727;
  double t1728;
  double t1743;
  double t1744;
  double t1761;
  double t1762;
  double t1763;
  double t1776;
  double t1777;
  double t1778;
  double t1779;
  double t1780;
  double t1781;
  double t1782;
  double t1783;
  double t1784;
  double t1785;
  double t1806;
  double t1807;
  double t1808;
  double t1820;
  double t1821;
  double t1822;
  double t1823;
  double t1824;
  double t1825;
  double t1826;
  double t1827;
  double t1828;
  double t1829;
  t1574 = -1.*var3[1];
  t1582 = 0. + t1574;
  t1596 = Sin(var1[2]);
  t1601 = Cos(var1[3]);
  t1603 = -1.*t1601*t1596;
  t1609 = Cos(var1[2]);
  t1614 = Sin(var1[3]);
  t1615 = -1.*t1609*t1614;
  t1617 = t1603 + t1615;
  t1625 = Cos(var1[4]);
  t1631 = t1609*t1601;
  t1633 = -1.*t1596*t1614;
  t1634 = t1631 + t1633;
  t1635 = Sin(var1[4]);
  t1637 = t1625*t1617;
  t1656 = -1.*t1609*t1601;
  t1657 = t1596*t1614;
  t1659 = t1656 + t1657;
  t1645 = -1.*t1625;
  t1646 = 1. + t1645;
  t1652 = 0.4*t1646;
  t1654 = 0. + t1652;
  t1655 = t1654*t1617;
  t1660 = -0.4*t1635;
  t1664 = 0. + t1660;
  t1666 = t1659*t1664;
  t1668 = t1659*t1635;
  t1669 = t1637 + t1668;
  t1670 = 0.64*t1669;
  t1671 = t1655 + t1666 + t1670;
  t1680 = Cos(var1[5]);
  t1681 = -1.*t1680*t1596;
  t1682 = Sin(var1[5]);
  t1684 = -1.*t1609*t1682;
  t1685 = t1681 + t1684;
  t1691 = Cos(var1[6]);
  t1693 = t1609*t1680;
  t1694 = -1.*t1596*t1682;
  t1695 = t1693 + t1694;
  t1697 = Sin(var1[6]);
  t1699 = t1691*t1685;
  t1715 = -1.*t1609*t1680;
  t1716 = t1596*t1682;
  t1717 = t1715 + t1716;
  t1707 = -1.*t1691;
  t1708 = 1. + t1707;
  t1709 = 0.4*t1708;
  t1711 = 0. + t1709;
  t1714 = t1711*t1685;
  t1718 = -0.4*t1697;
  t1719 = 0. + t1718;
  t1720 = t1717*t1719;
  t1722 = t1717*t1697;
  t1723 = t1699 + t1722;
  t1724 = 0.64*t1723;
  t1725 = t1714 + t1720 + t1724;
  t1597 = -0.24*var2[2]*t1596;
  t1598 = var2[1] + t1597;
  t1618 = 0.11*var2[2]*t1617;
  t1619 = 0.11*var2[3]*t1617;
  t1620 = var2[1] + t1618 + t1619;
  t1747 = -1.*var3[0];
  t1740 = -1.*var3[2];
  t1768 = t1654*t1634;
  t1769 = t1617*t1664;
  t1770 = t1625*t1634;
  t1771 = t1617*t1635;
  t1772 = t1770 + t1771;
  t1773 = 0.64*t1772;
  t1775 = t1768 + t1769 + t1773;
  t1753 = t1601*t1596;
  t1754 = t1609*t1614;
  t1755 = t1753 + t1754;
  t1627 = -0.4*t1625*t1617;
  t1636 = 0.4*t1634*t1635;
  t1640 = -1.*t1634*t1635;
  t1641 = t1637 + t1640;
  t1642 = 0.64*t1641;
  t1643 = t1627 + t1636 + t1642;
  t1644 = var2[4]*t1643;
  t1674 = var2[2]*t1671;
  t1675 = var2[3]*t1671;
  t1677 = var2[1] + t1644 + t1674 + t1675;
  t1687 = 0.11*var2[2]*t1685;
  t1688 = 0.11*var2[5]*t1685;
  t1689 = var2[1] + t1687 + t1688;
  t1812 = t1711*t1695;
  t1813 = t1685*t1719;
  t1814 = t1691*t1695;
  t1815 = t1685*t1697;
  t1816 = t1814 + t1815;
  t1817 = 0.64*t1816;
  t1819 = t1812 + t1813 + t1817;
  t1798 = t1680*t1596;
  t1799 = t1609*t1682;
  t1800 = t1798 + t1799;
  t1692 = -0.4*t1691*t1685;
  t1698 = 0.4*t1695*t1697;
  t1700 = -1.*t1695*t1697;
  t1702 = t1699 + t1700;
  t1703 = 0.64*t1702;
  t1704 = t1692 + t1698 + t1703;
  t1705 = var2[6]*t1704;
  t1726 = var2[2]*t1725;
  t1727 = var2[5]*t1725;
  t1728 = var2[1] + t1705 + t1726 + t1727;
  t1743 = 0.24*var2[2]*t1609;
  t1744 = var2[0] + t1743;
  t1761 = 0.11*var2[2]*t1634;
  t1762 = 0.11*var2[3]*t1634;
  t1763 = var2[0] + t1761 + t1762;
  t1776 = var2[2]*t1775;
  t1777 = var2[3]*t1775;
  t1778 = -0.4*t1625*t1634;
  t1779 = 0.4*t1755*t1635;
  t1780 = -1.*t1755*t1635;
  t1781 = t1770 + t1780;
  t1782 = 0.64*t1781;
  t1783 = t1778 + t1779 + t1782;
  t1784 = var2[4]*t1783;
  t1785 = var2[0] + t1776 + t1777 + t1784;
  t1806 = 0.11*var2[2]*t1695;
  t1807 = 0.11*var2[5]*t1695;
  t1808 = var2[0] + t1806 + t1807;
  t1820 = var2[2]*t1819;
  t1821 = var2[5]*t1819;
  t1822 = -0.4*t1691*t1695;
  t1823 = 0.4*t1800*t1697;
  t1824 = -1.*t1800*t1697;
  t1825 = t1814 + t1824;
  t1826 = 0.64*t1825;
  t1827 = t1822 + t1823 + t1826;
  t1828 = var2[6]*t1827;
  t1829 = var2[0] + t1820 + t1821 + t1828;
  p_output1[0]=0. + 12.*t1582*t1598 + 6.8*t1582*t1620 + 3.2*t1582*t1677 + 6.8*t1582*t1689 + 3.2*t1582*t1728;
  p_output1[1]=0. + 12.*(-1.*t1598*(0.24*t1596 + t1747 + var1[0]) + t1744*(0.24*t1609 + t1740 + var1[1])) + 6.8*(-1.*t1620*(t1747 + 0.11*t1755 + var1[0]) + t1763*(0.11*t1634 + t1740 + var1[1])) + 6.8*(-1.*t1689*(t1747 + 0.11*t1800 + var1[0]) + t1808*(0.11*t1695 + t1740 + var1[1])) + 3.2*(-1.*t1677*(0. + t1634*t1664 + t1747 + t1654*t1755 + 0.64*(t1634*t1635 + t1625*t1755) + var1[0]) + t1785*(0. + t1740 + t1768 + t1769 + t1773 + var1[1])) + 3.2*(-1.*t1728*(0. + t1695*t1719 + t1747 + t1711*t1800 + 0.64*(t1695*t1697 + t1691*t1800) + var1[0]) + t1829*(0. + t1740 + t1812 + t1813 + t1817 + var1[1])) + 1.33*var2[2] + 0.47*(var2[2] + var2[3]) + 0.2*(0. + var2[2] + var2[3] + var2[4]) + 0.47*(var2[2] + var2[5]) + 0.2*(0. + var2[2] + var2[5] + var2[6]);
  p_output1[2]=0. - 12.*t1582*t1744 - 6.8*t1582*t1763 - 3.2*t1582*t1785 - 6.8*t1582*t1808 - 3.2*t1582*t1829;
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "L_world_reference_point_src.hh"

namespace SymExpression
{

void L_world_reference_point_src_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
