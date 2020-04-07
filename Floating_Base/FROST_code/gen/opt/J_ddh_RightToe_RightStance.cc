/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 22:02:52 GMT-04:00
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
  double t580;
  double t1300;
  double t579;
  double t1303;
  double t31;
  double t1298;
  double t1325;
  double t1326;
  double t1424;
  double t1425;
  double t1426;
  double t1427;
  double t1433;
  double t1434;
  double t1435;
  double t1436;
  double t1437;
  double t1438;
  double t1439;
  double t114;
  double t476;
  double t1443;
  double t1444;
  double t1445;
  double t1442;
  double t1446;
  double t1447;
  double t1448;
  double t1449;
  double t1450;
  double t1456;
  double t1458;
  double t1515;
  double t1685;
  double t1760;
  double t1764;
  double t1797;
  double t3020;
  double t3277;
  double t3523;
  double t2694;
  double t3695;
  double t3696;
  double t4599;
  double t6496;
  double t6497;
  double t2375;
  double t6528;
  double t6545;
  double t6557;
  double t1336;
  double t1428;
  double t1429;
  double t1430;
  double t1431;
  double t1432;
  double t1440;
  double t1441;
  double t1451;
  double t1452;
  double t1453;
  double t1454;
  double t1455;
  double t1457;
  double t1459;
  double t1460;
  double t1462;
  double t1463;
  double t1854;
  double t1946;
  double t2051;
  double t2315;
  double t6558;
  double t6573;
  double t6586;
  double t6623;
  double t6624;
  double t6625;
  double t6626;
  double t6627;
  double t6662;
  double t6663;
  double t6664;
  double t6665;
  double t6597;
  double t6598;
  double t6599;
  double t6600;
  double t6601;
  double t6670;
  double t6676;
  double t6678;
  double t6683;
  double t6684;
  double t6685;
  double t6686;
  double t6687;
  double t6692;
  double t6693;
  double t6694;
  double t6695;
  double t6696;
  double t6697;
  double t6698;
  double t6699;
  double t6700;
  double t6701;
  double t6672;
  double t6673;
  double t6674;
  double t6675;
  double t6677;
  double t6679;
  double t6680;
  double t6681;
  double t6682;
  double t6688;
  double t6689;
  double t6690;
  double t6691;
  double t6702;
  double t6703;
  double t6704;
  double t6719;
  double t6720;
  double t6721;
  double t6722;
  t580 = Cos(var1[3]);
  t1300 = Sin(var1[2]);
  t579 = Cos(var1[2]);
  t1303 = Sin(var1[3]);
  t31 = Cos(var1[4]);
  t1298 = t579*t580;
  t1325 = -1.*t1300*t1303;
  t1326 = t1298 + t1325;
  t1424 = -1.*t580*t1300;
  t1425 = -1.*t579*t1303;
  t1426 = t1424 + t1425;
  t1427 = Sin(var1[4]);
  t1433 = -0.4*t31*t1426;
  t1434 = 0.4*t1326*t1427;
  t1435 = t31*t1426;
  t1436 = -1.*t1326*t1427;
  t1437 = t1435 + t1436;
  t1438 = 0.8*t1437;
  t1439 = t1433 + t1434 + t1438;
  t114 = -1.*t31;
  t476 = 1. + t114;
  t1443 = -1.*t579*t580;
  t1444 = t1300*t1303;
  t1445 = t1443 + t1444;
  t1442 = 0.4*t476*t1426;
  t1446 = -0.4*t1445*t1427;
  t1447 = t1445*t1427;
  t1448 = t1435 + t1447;
  t1449 = 0.8*t1448;
  t1450 = t1442 + t1446 + t1449;
  t1456 = 0.4*t1426*t1427;
  t1458 = -1.*t1426*t1427;
  t1515 = -0.4*t31*t1445;
  t1685 = t31*t1445;
  t1760 = t1685 + t1458;
  t1764 = 0.8*t1760;
  t1797 = t1515 + t1456 + t1764;
  t3020 = t580*t1300;
  t3277 = t579*t1303;
  t3523 = t3020 + t3277;
  t2694 = 0.4*t476*t1445;
  t3695 = -0.4*t3523*t1427;
  t3696 = t3523*t1427;
  t4599 = t1685 + t3696;
  t6496 = 0.8*t4599;
  t6497 = t2694 + t3695 + t6496;
  t2375 = var2[4]*t1797;
  t6528 = var2[2]*t6497;
  t6545 = var2[3]*t6497;
  t6557 = t2375 + t6528 + t6545;
  t1336 = 0.4*t476*t1326;
  t1428 = -0.4*t1426*t1427;
  t1429 = t31*t1326;
  t1430 = t1426*t1427;
  t1431 = t1429 + t1430;
  t1432 = 0.8*t1431;
  t1440 = var3[4]*t1439;
  t1441 = var2[4]*t1439;
  t1451 = var3[2]*t1450;
  t1452 = var3[3]*t1450;
  t1453 = var2[2]*t1450;
  t1454 = var2[3]*t1450;
  t1455 = 0.4*t31*t1326;
  t1457 = -1.*t31*t1326;
  t1459 = t1457 + t1458;
  t1460 = 0.8*t1459;
  t1462 = t1455 + t1456 + t1460;
  t1463 = var2[4]*t1462;
  t1854 = var2[2]*t1797;
  t1946 = var2[3]*t1797;
  t2051 = t1463 + t1854 + t1946;
  t2315 = var2[4]*t2051;
  t6558 = var2[2]*t6557;
  t6573 = var2[3]*t6557;
  t6586 = t1336 + t1428 + t1432 + t1440 + t1441 + t1451 + t1452 + t1453 + t1454 + t2315 + t6558 + t6573;
  t6623 = 0.4*t31*t3523;
  t6624 = -1.*t31*t3523;
  t6625 = t6624 + t1436;
  t6626 = 0.8*t6625;
  t6627 = t6623 + t1434 + t6626;
  t6662 = 2.*var2[4]*t1439;
  t6663 = 2.*var2[2]*t1450;
  t6664 = 2.*var2[3]*t1450;
  t6665 = t1336 + t1428 + t1432 + t6662 + t6663 + t6664;
  t6597 = -0.4*t31*t1326;
  t6598 = 0.4*t3523*t1427;
  t6599 = -1.*t3523*t1427;
  t6600 = t1429 + t6599;
  t6601 = 0.8*t6600;
  t6670 = t1336 + t1428 + t1432;
  t6676 = 0.4*t1445*t1427;
  t6678 = -1.*t1445*t1427;
  t6683 = -0.4*t31*t3523;
  t6684 = t31*t3523;
  t6685 = t6684 + t6678;
  t6686 = 0.8*t6685;
  t6687 = t6683 + t6676 + t6686;
  t6692 = 0.4*t476*t3523;
  t6693 = -0.4*t1326*t1427;
  t6694 = t1326*t1427;
  t6695 = t6684 + t6694;
  t6696 = 0.8*t6695;
  t6697 = t6692 + t6693 + t6696;
  t6698 = var2[2]*t6697;
  t6699 = var2[3]*t6697;
  t6700 = var2[4]*t6687;
  t6701 = t6698 + t6699 + t6700;
  t6672 = var3[4]*t1797;
  t6673 = var3[2]*t6497;
  t6674 = var3[3]*t6497;
  t6675 = 0.4*t31*t1426;
  t6677 = -1.*t31*t1426;
  t6679 = t6677 + t6678;
  t6680 = 0.8*t6679;
  t6681 = t6675 + t6676 + t6680;
  t6682 = var2[4]*t6681;
  t6688 = var2[2]*t6687;
  t6689 = var2[3]*t6687;
  t6690 = t6682 + t6688 + t6689;
  t6691 = var2[4]*t6690;
  t6702 = var2[2]*t6701;
  t6703 = var2[3]*t6701;
  t6704 = t1442 + t1446 + t1449 + t6672 + t2375 + t6673 + t6674 + t6528 + t6545 + t6691 + t6702 + t6703;
  t6719 = 2.*var2[4]*t1797;
  t6720 = 2.*var2[2]*t6497;
  t6721 = 2.*var2[3]*t6497;
  t6722 = t1442 + t1446 + t1449 + t6719 + t6720 + t6721;
  p_output1[0]=1.;
  p_output1[1]=t6586;
  p_output1[2]=t6586;
  p_output1[3]=t6597 + t6598 + t6601 + t1439*var2[2] + t2051*var2[2] + t1439*var2[3] + t2051*var2[3] + t6627*var2[4] + var2[4]*(t1462*var2[2] + t1462*var2[3] + (t1455 + t3695 + 0.8*(t1457 + t3696))*var2[4]) + t1439*var3[2] + t1439*var3[3] + t6627*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t6665;
  p_output1[6]=t6665;
  p_output1[7]=t6597 + t6598 + t6601 + 2.*t1439*var2[2] + 2.*t1439*var2[3] + 2.*t6627*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t6670;
  p_output1[10]=t6670;
  p_output1[11]=t6597 + t6598 + t6601;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t6704;
  p_output1[16]=t6704;
  p_output1[17]=t1433 + t1434 + t1438 + t1463 + t1854 + t1946 + t6690*var2[2] + t6690*var2[3] + var2[4]*(t6681*var2[2] + t6681*var2[3] + (t6675 + t6693 + 0.8*(t6677 + t6694))*var2[4]) + t1797*var3[2] + t1797*var3[3] + t1462*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t6722;
  p_output1[20]=t6722;
  p_output1[21]=t1433 + t1434 + t1438 + 2.*t1797*var2[2] + 2.*t1797*var2[3] + 2.*t1462*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t1450;
  p_output1[24]=t1450;
  p_output1[25]=t1439;
  p_output1[26]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 27, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_RightToe_RightStance.hh"

namespace RightStance
{

void J_ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
