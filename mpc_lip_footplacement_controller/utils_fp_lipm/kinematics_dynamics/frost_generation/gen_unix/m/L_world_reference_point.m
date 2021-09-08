/*
 * Automatically Generated from Mathematica.
 * Wed 8 Sep 2021 02:56:47 GMT-04:00
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
  double t1597;
  double t1599;
  double t1617;
  double t1624;
  double t1627;
  double t1631;
  double t1636;
  double t1637;
  double t1641;
  double t1654;
  double t1657;
  double t1659;
  double t1660;
  double t1664;
  double t1668;
  double t1689;
  double t1690;
  double t1692;
  double t1677;
  double t1679;
  double t1685;
  double t1687;
  double t1688;
  double t1693;
  double t1698;
  double t1699;
  double t1702;
  double t1703;
  double t1704;
  double t1705;
  double t1717;
  double t1718;
  double t1719;
  double t1720;
  double t1722;
  double t1727;
  double t1729;
  double t1730;
  double t1731;
  double t1732;
  double t1734;
  double t1749;
  double t1750;
  double t1751;
  double t1741;
  double t1742;
  double t1743;
  double t1746;
  double t1748;
  double t1752;
  double t1753;
  double t1754;
  double t1756;
  double t1757;
  double t1758;
  double t1759;
  double t1618;
  double t1619;
  double t1642;
  double t1643;
  double t1644;
  double t1782;
  double t1775;
  double t1804;
  double t1805;
  double t1806;
  double t1807;
  double t1808;
  double t1809;
  double t1811;
  double t1789;
  double t1790;
  double t1791;
  double t1655;
  double t1666;
  double t1669;
  double t1670;
  double t1671;
  double t1674;
  double t1675;
  double t1709;
  double t1711;
  double t1714;
  double t1723;
  double t1724;
  double t1725;
  double t1848;
  double t1849;
  double t1850;
  double t1851;
  double t1852;
  double t1853;
  double t1855;
  double t1834;
  double t1835;
  double t1836;
  double t1728;
  double t1733;
  double t1735;
  double t1736;
  double t1737;
  double t1738;
  double t1739;
  double t1760;
  double t1761;
  double t1762;
  double t1778;
  double t1779;
  double t1797;
  double t1798;
  double t1799;
  double t1812;
  double t1813;
  double t1814;
  double t1815;
  double t1816;
  double t1817;
  double t1818;
  double t1819;
  double t1820;
  double t1821;
  double t1842;
  double t1843;
  double t1844;
  double t1856;
  double t1857;
  double t1858;
  double t1859;
  double t1860;
  double t1861;
  double t1862;
  double t1863;
  double t1864;
  double t1865;
  t1597 = -1.*var3[1];
  t1599 = 0. + t1597;
  t1617 = Sin(var1[2]);
  t1624 = Cos(var1[3]);
  t1627 = -1.*t1624*t1617;
  t1631 = Cos(var1[2]);
  t1636 = Sin(var1[3]);
  t1637 = -1.*t1631*t1636;
  t1641 = t1627 + t1637;
  t1654 = Cos(var1[4]);
  t1657 = t1631*t1624;
  t1659 = -1.*t1617*t1636;
  t1660 = t1657 + t1659;
  t1664 = Sin(var1[4]);
  t1668 = t1654*t1641;
  t1689 = -1.*t1631*t1624;
  t1690 = t1617*t1636;
  t1692 = t1689 + t1690;
  t1677 = -1.*t1654;
  t1679 = 1. + t1677;
  t1685 = 0.4*t1679;
  t1687 = 0. + t1685;
  t1688 = t1687*t1641;
  t1693 = -0.4*t1664;
  t1698 = 0. + t1693;
  t1699 = t1692*t1698;
  t1702 = t1692*t1664;
  t1703 = t1668 + t1702;
  t1704 = 0.64*t1703;
  t1705 = t1688 + t1699 + t1704;
  t1717 = Cos(var1[5]);
  t1718 = -1.*t1717*t1617;
  t1719 = Sin(var1[5]);
  t1720 = -1.*t1631*t1719;
  t1722 = t1718 + t1720;
  t1727 = Cos(var1[6]);
  t1729 = t1631*t1717;
  t1730 = -1.*t1617*t1719;
  t1731 = t1729 + t1730;
  t1732 = Sin(var1[6]);
  t1734 = t1727*t1722;
  t1749 = -1.*t1631*t1717;
  t1750 = t1617*t1719;
  t1751 = t1749 + t1750;
  t1741 = -1.*t1727;
  t1742 = 1. + t1741;
  t1743 = 0.4*t1742;
  t1746 = 0. + t1743;
  t1748 = t1746*t1722;
  t1752 = -0.4*t1732;
  t1753 = 0. + t1752;
  t1754 = t1751*t1753;
  t1756 = t1751*t1732;
  t1757 = t1734 + t1756;
  t1758 = 0.64*t1757;
  t1759 = t1748 + t1754 + t1758;
  t1618 = -0.24*var2[2]*t1617;
  t1619 = var2[1] + t1618;
  t1642 = 0.11*var2[2]*t1641;
  t1643 = 0.11*var2[3]*t1641;
  t1644 = var2[1] + t1642 + t1643;
  t1782 = -1.*var3[0];
  t1775 = -1.*var3[2];
  t1804 = t1687*t1660;
  t1805 = t1641*t1698;
  t1806 = t1654*t1660;
  t1807 = t1641*t1664;
  t1808 = t1806 + t1807;
  t1809 = 0.64*t1808;
  t1811 = t1804 + t1805 + t1809;
  t1789 = t1624*t1617;
  t1790 = t1631*t1636;
  t1791 = t1789 + t1790;
  t1655 = -0.4*t1654*t1641;
  t1666 = 0.4*t1660*t1664;
  t1669 = -1.*t1660*t1664;
  t1670 = t1668 + t1669;
  t1671 = 0.64*t1670;
  t1674 = t1655 + t1666 + t1671;
  t1675 = var2[4]*t1674;
  t1709 = var2[2]*t1705;
  t1711 = var2[3]*t1705;
  t1714 = var2[1] + t1675 + t1709 + t1711;
  t1723 = 0.11*var2[2]*t1722;
  t1724 = 0.11*var2[5]*t1722;
  t1725 = var2[1] + t1723 + t1724;
  t1848 = t1746*t1731;
  t1849 = t1722*t1753;
  t1850 = t1727*t1731;
  t1851 = t1722*t1732;
  t1852 = t1850 + t1851;
  t1853 = 0.64*t1852;
  t1855 = t1848 + t1849 + t1853;
  t1834 = t1717*t1617;
  t1835 = t1631*t1719;
  t1836 = t1834 + t1835;
  t1728 = -0.4*t1727*t1722;
  t1733 = 0.4*t1731*t1732;
  t1735 = -1.*t1731*t1732;
  t1736 = t1734 + t1735;
  t1737 = 0.64*t1736;
  t1738 = t1728 + t1733 + t1737;
  t1739 = var2[6]*t1738;
  t1760 = var2[2]*t1759;
  t1761 = var2[5]*t1759;
  t1762 = var2[1] + t1739 + t1760 + t1761;
  t1778 = 0.24*var2[2]*t1631;
  t1779 = var2[0] + t1778;
  t1797 = 0.11*var2[2]*t1660;
  t1798 = 0.11*var2[3]*t1660;
  t1799 = var2[0] + t1797 + t1798;
  t1812 = var2[2]*t1811;
  t1813 = var2[3]*t1811;
  t1814 = -0.4*t1654*t1660;
  t1815 = 0.4*t1791*t1664;
  t1816 = -1.*t1791*t1664;
  t1817 = t1806 + t1816;
  t1818 = 0.64*t1817;
  t1819 = t1814 + t1815 + t1818;
  t1820 = var2[4]*t1819;
  t1821 = var2[0] + t1812 + t1813 + t1820;
  t1842 = 0.11*var2[2]*t1731;
  t1843 = 0.11*var2[5]*t1731;
  t1844 = var2[0] + t1842 + t1843;
  t1856 = var2[2]*t1855;
  t1857 = var2[5]*t1855;
  t1858 = -0.4*t1727*t1731;
  t1859 = 0.4*t1836*t1732;
  t1860 = -1.*t1836*t1732;
  t1861 = t1850 + t1860;
  t1862 = 0.64*t1861;
  t1863 = t1858 + t1859 + t1862;
  t1864 = var2[6]*t1863;
  t1865 = var2[0] + t1856 + t1857 + t1864;
  p_output1[0]=0. + 12.*t1599*t1619 + 6.8*t1599*t1644 + 3.2*t1599*t1714 + 6.8*t1599*t1725 + 3.2*t1599*t1762;
  p_output1[1]=0. + 12.*(-1.*t1619*(0.24*t1617 + t1782 + var1[0]) + t1779*(0.24*t1631 + t1775 + var1[1])) + 6.8*(-1.*t1644*(t1782 + 0.11*t1791 + var1[0]) + t1799*(0.11*t1660 + t1775 + var1[1])) + 6.8*(-1.*t1725*(t1782 + 0.11*t1836 + var1[0]) + t1844*(0.11*t1731 + t1775 + var1[1])) + 3.2*(-1.*t1714*(0. + t1660*t1698 + t1782 + t1687*t1791 + 0.64*(t1660*t1664 + t1654*t1791) + var1[0]) + t1821*(0. + t1775 + t1804 + t1805 + t1809 + var1[1])) + 3.2*(-1.*t1762*(0. + t1731*t1753 + t1782 + t1746*t1836 + 0.64*(t1731*t1732 + t1727*t1836) + var1[0]) + t1865*(0. + t1775 + t1848 + t1849 + t1853 + var1[1])) + 1.33*var2[2] + 0.47*(var2[2] + var2[3]) + 0.2*(0. + var2[2] + var2[3] + var2[4]) + 0.47*(var2[2] + var2[5]) + 0.2*(0. + var2[2] + var2[5] + var2[6]);
  p_output1[2]=0. - 12.*t1599*t1779 - 6.8*t1599*t1799 - 3.2*t1599*t1821 - 6.8*t1599*t1844 - 3.2*t1599*t1865;
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

#include "L_world_reference_point.hh"

namespace SymExpression
{

void L_world_reference_point_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
