/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:35 GMT-05:00
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
  double t1636;
  double t1620;
  double t1628;
  double t1637;
  double t1698;
  double t1635;
  double t1638;
  double t1660;
  double t1584;
  double t1709;
  double t1710;
  double t1711;
  double t1718;
  double t1719;
  double t1726;
  double t1727;
  double t1728;
  double t1729;
  double t1730;
  double t1731;
  double t1737;
  double t1697;
  double t1699;
  double t1700;
  double t1705;
  double t1706;
  double t1707;
  double t1741;
  double t1742;
  double t1743;
  double t1744;
  double t1745;
  double t1746;
  double t1761;
  double t1762;
  double t1771;
  double t1772;
  double t1773;
  double t1775;
  double t1776;
  double t1777;
  double t1781;
  double t1782;
  double t1783;
  double t1787;
  double t1788;
  double t1764;
  double t1765;
  double t1766;
  double t1738;
  double t1739;
  double t1740;
  double t1758;
  double t1759;
  double t1720;
  double t1721;
  double t1725;
  double t1733;
  double t1734;
  double t1735;
  double t1748;
  double t1749;
  double t1750;
  double t1760;
  double t1763;
  double t1767;
  double t1768;
  double t1769;
  double t1774;
  double t1778;
  double t1779;
  double t1784;
  double t1785;
  double t1786;
  double t1789;
  double t1790;
  double t1792;
  double t1793;
  double t1794;
  double t1796;
  double t1797;
  double t1798;
  double t1799;
  double t1800;
  double t1818;
  double t1819;
  double t1820;
  double t1821;
  double t1822;
  double t1780;
  double t1791;
  double t1795;
  double t1801;
  double t1802;
  double t1807;
  double t1808;
  double t1809;
  double t1810;
  double t1811;
  double t1732;
  double t1736;
  double t1747;
  double t1751;
  double t1752;
  double t1827;
  double t1828;
  double t1829;
  double t1830;
  double t1831;
  t1636 = Cos(var1[5]);
  t1620 = Cos(var1[6]);
  t1628 = Sin(var1[5]);
  t1637 = Sin(var1[6]);
  t1698 = Sin(var1[2]);
  t1635 = -1.*t1620*t1628;
  t1638 = -1.*t1636*t1637;
  t1660 = t1635 + t1638;
  t1584 = Cos(var1[2]);
  t1709 = -1.*t1620;
  t1710 = 1. + t1709;
  t1711 = 0.4*t1710;
  t1718 = 0.64*t1620;
  t1719 = t1711 + t1718;
  t1726 = t1698*t1660;
  t1727 = t1636*t1620;
  t1728 = -1.*t1628*t1637;
  t1729 = t1727 + t1728;
  t1730 = t1584*t1729;
  t1731 = t1726 + t1730;
  t1737 = t1719*t1620;
  t1697 = t1584*t1660;
  t1699 = -1.*t1636*t1620;
  t1700 = t1628*t1637;
  t1705 = t1699 + t1700;
  t1706 = t1698*t1705;
  t1707 = t1697 + t1706;
  t1741 = t1620*t1628;
  t1742 = t1636*t1637;
  t1743 = t1741 + t1742;
  t1744 = t1584*t1743;
  t1745 = t1698*t1729;
  t1746 = t1744 + t1745;
  t1761 = -1.*t1698*t1729;
  t1762 = t1697 + t1761;
  t1771 = t1719*t1628;
  t1772 = 0.24*t1636*t1637;
  t1773 = t1771 + t1772;
  t1775 = t1636*t1719;
  t1776 = -0.24*t1628*t1637;
  t1777 = t1775 + t1776;
  t1781 = -0.24*t1620*t1628;
  t1782 = -0.24*t1636*t1637;
  t1783 = t1781 + t1782;
  t1787 = 0.24*t1636*t1620;
  t1788 = t1787 + t1776;
  t1764 = -1.*t1698*t1660;
  t1765 = t1584*t1705;
  t1766 = t1764 + t1765;
  t1738 = Power(t1620,2);
  t1739 = -0.24*t1738;
  t1740 = t1737 + t1739;
  t1758 = -1.*t1698*t1743;
  t1759 = t1758 + t1730;
  t1720 = t1719*t1637;
  t1721 = -0.24*t1620*t1637;
  t1725 = t1720 + t1721;
  t1733 = -1.*t1719*t1637;
  t1734 = 0.24*t1620*t1637;
  t1735 = t1733 + t1734;
  t1748 = Power(t1637,2);
  t1749 = 0.24*t1748;
  t1750 = t1737 + t1749;
  t1760 = 3.2*t1731*t1759;
  t1763 = 3.2*t1762*t1746;
  t1767 = 3.2*t1731*t1766;
  t1768 = 3.2*t1762*t1707;
  t1769 = t1760 + t1763 + t1767 + t1768;
  t1774 = -1.*t1773*t1729;
  t1778 = -1.*t1660*t1777;
  t1779 = t1774 + t1778;
  t1784 = t1783*t1729;
  t1785 = t1773*t1729;
  t1786 = t1660*t1777;
  t1789 = t1743*t1788;
  t1790 = t1784 + t1785 + t1786 + t1789;
  t1792 = t1773*t1743;
  t1793 = t1729*t1777;
  t1794 = t1792 + t1793;
  t1796 = -1.*t1660*t1783;
  t1797 = -1.*t1660*t1773;
  t1798 = -1.*t1729*t1788;
  t1799 = -1.*t1777*t1705;
  t1800 = t1796 + t1797 + t1798 + t1799;
  t1818 = 3.2*t1762*t1779;
  t1819 = 3.2*t1762*t1790;
  t1820 = 3.2*t1794*t1766;
  t1821 = 3.2*t1759*t1800;
  t1822 = t1818 + t1819 + t1820 + t1821;
  t1780 = 3.2*t1731*t1779;
  t1791 = 3.2*t1731*t1790;
  t1795 = 3.2*t1794*t1707;
  t1801 = 3.2*t1746*t1800;
  t1802 = t1780 + t1791 + t1795 + t1801;
  t1807 = 3.2*t1740*t1759;
  t1808 = 3.2*t1725*t1762;
  t1809 = 3.2*t1735*t1762;
  t1810 = 3.2*t1750*t1766;
  t1811 = t1807 + t1808 + t1809 + t1810;
  t1732 = 3.2*t1725*t1731;
  t1736 = 3.2*t1735*t1731;
  t1747 = 3.2*t1740*t1746;
  t1751 = 3.2*t1750*t1707;
  t1752 = t1732 + t1736 + t1747 + t1751;
  t1827 = 3.2*t1740*t1779;
  t1828 = 3.2*t1735*t1794;
  t1829 = 3.2*t1750*t1790;
  t1830 = 3.2*t1725*t1800;
  t1831 = t1827 + t1828 + t1829 + t1830;
  p_output1[0]=var2[6]*(-0.5*(6.4*t1707*t1731 + 6.4*t1731*t1746)*var2[0] - 0.5*t1769*var2[1] - 0.5*t1802*var2[2] - 0.5*t1752*var2[5] - 0.384*t1707*var2[6]);
  p_output1[1]=var2[6]*(-0.5*t1769*var2[0] - 0.5*(6.4*t1759*t1762 + 6.4*t1762*t1766)*var2[1] - 0.5*t1822*var2[2] - 0.5*t1811*var2[5] - 0.384*t1766*var2[6]);
  p_output1[2]=var2[6]*(-0.5*t1802*var2[0] - 0.5*t1822*var2[1] - 0.5*(6.4*t1790*t1794 + 6.4*t1779*t1800)*var2[2] - 0.5*t1831*var2[5] - 0.384*t1790*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=var2[6]*(-0.5*t1752*var2[0] - 0.5*t1811*var2[1] - 0.5*t1831*var2[2] - 0.5*(6.4*t1725*t1740 + 6.4*t1735*t1750)*var2[5] - 0.384*t1735*var2[6]);
  p_output1[6]=(-0.384*t1707*var2[0] - 0.384*t1766*var2[1] - 0.384*t1790*var2[2] - 0.384*t1735*var2[5])*var2[6];
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

#include "Ce2_vec7_five_link_walker.hh"

namespace RightStance
{

void Ce2_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
