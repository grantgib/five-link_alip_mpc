/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:53:24 GMT-04:00
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
  double t4749;
  double t4746;
  double t4747;
  double t4750;
  double t4754;
  double t4745;
  double t4748;
  double t4751;
  double t4752;
  double t4753;
  double t4755;
  double t4756;
  double t4757;
  double t5335;
  double t5734;
  double t8421;
  double t9608;
  double t9722;
  double t9903;
  double t9937;
  double t16284;
  double t14810;
  double t15814;
  double t16596;
  double t16089;
  double t16643;
  double t16644;
  double t16646;
  double t17788;
  double t18022;
  double t18045;
  double t18342;
  double t18383;
  double t19073;
  double t19076;
  double t19081;
  double t21202;
  double t21222;
  double t6983;
  double t7029;
  double t7478;
  double t10914;
  double t11318;
  double t11526;
  double t12532;
  double t12812;
  double t12956;
  double t19006;
  double t19019;
  double t19049;
  double t23052;
  double t23053;
  double t23055;
  double t23056;
  double t23057;
  double t23058;
  double t23068;
  double t23078;
  double t23079;
  double t23096;
  double t23097;
  double t23098;
  double t23142;
  double t23143;
  double t23144;
  double t23146;
  double t23147;
  double t23148;
  double t23162;
  double t23163;
  double t23164;
  double t23166;
  double t23167;
  double t23168;
  double t4738;
  double t4744;
  double t23081;
  double t23082;
  double t23083;
  double t6913;
  double t6965;
  double t23064;
  double t23065;
  double t23066;
  double t10655;
  double t10721;
  double t10746;
  double t23087;
  double t23088;
  double t9942;
  double t10038;
  double t10135;
  double t10278;
  double t14744;
  double t14776;
  double t23100;
  double t23101;
  double t23102;
  double t18837;
  double t18838;
  double t23090;
  double t23093;
  double t23094;
  double t23035;
  double t23048;
  double t23049;
  double t23104;
  double t23105;
  double t21291;
  double t21542;
  double t23014;
  double t23025;
  double t23062;
  double t23063;
  double t23111;
  double t23112;
  double t23113;
  double t23114;
  double t23117;
  double t23118;
  double t23125;
  double t23126;
  double t23109;
  double t23110;
  double t23067;
  double t23080;
  double t23086;
  double t23089;
  double t23095;
  double t23099;
  double t23103;
  double t23106;
  double t23107;
  double t23133;
  double t23134;
  double t23136;
  double t23137;
  double t23138;
  double t23139;
  double t23140;
  double t23145;
  double t23149;
  double t23150;
  double t23152;
  double t23153;
  double t23154;
  double t23156;
  double t23157;
  double t23158;
  double t23159;
  double t23160;
  double t23165;
  double t23169;
  double t23170;
  double t23172;
  double t23173;
  double t23174;
  double t23226;
  double t23227;
  double t23228;
  double t23135;
  double t23141;
  double t23151;
  double t23155;
  double t23161;
  double t23171;
  double t23175;
  double t23176;
  double t23207;
  double t23208;
  double t23209;
  double t23210;
  double t23211;
  double t23212;
  double t23213;
  double t23214;
  double t23217;
  double t23218;
  double t23219;
  double t23220;
  double t23221;
  double t23222;
  double t23223;
  double t23224;
  double t23225;
  double t23229;
  double t23230;
  double t23231;
  double t23232;
  double t23233;
  double t23234;
  double t23235;
  double t23181;
  double t23182;
  double t23183;
  double t23184;
  double t7820;
  double t10318;
  double t12983;
  double t13144;
  double t23239;
  double t23240;
  double t23241;
  double t23242;
  double t23269;
  double t23270;
  double t23236;
  double t23237;
  double t23187;
  double t23188;
  double t23189;
  double t23190;
  double t19052;
  double t23034;
  double t23059;
  double t23060;
  double t23247;
  double t23248;
  double t23249;
  double t23250;
  double t23302;
  double t23303;
  double t23244;
  double t23245;
  t4749 = Cos(var2[3]);
  t4746 = Cos(var2[4]);
  t4747 = Sin(var2[3]);
  t4750 = Sin(var2[4]);
  t4754 = Cos(var2[2]);
  t4745 = Sin(var2[2]);
  t4748 = -1.*t4746*t4747;
  t4751 = -1.*t4749*t4750;
  t4752 = t4748 + t4751;
  t4753 = t4745*t4752;
  t4755 = t4749*t4746;
  t4756 = -1.*t4747*t4750;
  t4757 = t4755 + t4756;
  t5335 = t4754*t4757;
  t5734 = t4753 + t5335;
  t8421 = -1.*t4746;
  t9608 = 1. + t8421;
  t9722 = 0.4*t9608;
  t9903 = 0.64*t4746;
  t9937 = t9722 + t9903;
  t16284 = Cos(var2[5]);
  t14810 = Cos(var2[6]);
  t15814 = Sin(var2[5]);
  t16596 = Sin(var2[6]);
  t16089 = -1.*t14810*t15814;
  t16643 = -1.*t16284*t16596;
  t16644 = t16089 + t16643;
  t16646 = t4745*t16644;
  t17788 = t16284*t14810;
  t18022 = -1.*t15814*t16596;
  t18045 = t17788 + t18022;
  t18342 = t4754*t18045;
  t18383 = t16646 + t18342;
  t19073 = -1.*t14810;
  t19076 = 1. + t19073;
  t19081 = 0.4*t19076;
  t21202 = 0.64*t14810;
  t21222 = t19081 + t21202;
  t6983 = t4754*t4749;
  t7029 = -1.*t4745*t4747;
  t7478 = t6983 + t7029;
  t10914 = t4746*t4747;
  t11318 = t4749*t4750;
  t11526 = t10914 + t11318;
  t12532 = t4754*t11526;
  t12812 = t4745*t4757;
  t12956 = t12532 + t12812;
  t19006 = t4754*t16284;
  t19019 = -1.*t4745*t15814;
  t19049 = t19006 + t19019;
  t23052 = t14810*t15814;
  t23053 = t16284*t16596;
  t23055 = t23052 + t23053;
  t23056 = t4754*t23055;
  t23057 = t4745*t18045;
  t23058 = t23056 + t23057;
  t23068 = t4749*t4745;
  t23078 = t4754*t4747;
  t23079 = t23068 + t23078;
  t23096 = t16284*t4745;
  t23097 = t4754*t15814;
  t23098 = t23096 + t23097;
  t23142 = t9937*t4747;
  t23143 = 0.24*t4749*t4750;
  t23144 = t23142 + t23143;
  t23146 = t4749*t9937;
  t23147 = -0.24*t4747*t4750;
  t23148 = t23146 + t23147;
  t23162 = t21222*t15814;
  t23163 = 0.24*t16284*t16596;
  t23164 = t23162 + t23163;
  t23166 = t16284*t21222;
  t23167 = -0.24*t15814*t16596;
  t23168 = t23166 + t23167;
  t4738 = -1.*var1[4];
  t4744 = var3[4] + t4738;
  t23081 = t4754*t4752;
  t23082 = -1.*t4745*t4757;
  t23083 = t23081 + t23082;
  t6913 = -1.*var1[3];
  t6965 = var3[3] + t6913;
  t23064 = -1.*t4749*t4745;
  t23065 = -1.*t4754*t4747;
  t23066 = t23064 + t23065;
  t10655 = t9937*t4750;
  t10721 = -0.24*t4746*t4750;
  t10746 = t10655 + t10721;
  t23087 = -1.*t4745*t11526;
  t23088 = t23087 + t5335;
  t9942 = t9937*t4746;
  t10038 = Power(t4750,2);
  t10135 = 0.24*t10038;
  t10278 = t9942 + t10135;
  t14744 = -1.*var1[6];
  t14776 = var3[6] + t14744;
  t23100 = t4754*t16644;
  t23101 = -1.*t4745*t18045;
  t23102 = t23100 + t23101;
  t18837 = -1.*var1[5];
  t18838 = var3[5] + t18837;
  t23090 = -1.*t16284*t4745;
  t23093 = -1.*t4754*t15814;
  t23094 = t23090 + t23093;
  t23035 = t21222*t16596;
  t23048 = -0.24*t14810*t16596;
  t23049 = t23035 + t23048;
  t23104 = -1.*t4745*t23055;
  t23105 = t23104 + t18342;
  t21291 = t21222*t14810;
  t21542 = Power(t16596,2);
  t23014 = 0.24*t21542;
  t23025 = t21291 + t23014;
  t23062 = -1.*var1[1];
  t23063 = var3[1] + t23062;
  t23111 = Power(t4754,2);
  t23112 = 12.*t23111;
  t23113 = Power(t4745,2);
  t23114 = 12.*t23113;
  t23117 = Power(t7478,2);
  t23118 = 6.8*t23117;
  t23125 = Power(t19049,2);
  t23126 = 6.8*t23125;
  t23109 = -1.*var1[0];
  t23110 = var3[0] + t23109;
  t23067 = 6.8*t23066*t7478;
  t23080 = 6.8*t23079*t7478;
  t23086 = 3.2*t5734*t23083;
  t23089 = 3.2*t23088*t12956;
  t23095 = 6.8*t23094*t19049;
  t23099 = 6.8*t23098*t19049;
  t23103 = 3.2*t18383*t23102;
  t23106 = 3.2*t23105*t23058;
  t23107 = t23067 + t23080 + t23086 + t23089 + t23095 + t23099 + t23103 + t23106;
  t23133 = -1.*var1[2];
  t23134 = var3[2] + t23133;
  t23136 = Power(t4749,2);
  t23137 = 0.11*t23136;
  t23138 = Power(t4747,2);
  t23139 = 0.11*t23138;
  t23140 = t23137 + t23139;
  t23145 = -1.*t23144*t4757;
  t23149 = -1.*t4752*t23148;
  t23150 = t23145 + t23149;
  t23152 = t23144*t11526;
  t23153 = t4757*t23148;
  t23154 = t23152 + t23153;
  t23156 = Power(t16284,2);
  t23157 = 0.11*t23156;
  t23158 = Power(t15814,2);
  t23159 = 0.11*t23158;
  t23160 = t23157 + t23159;
  t23165 = -1.*t23164*t18045;
  t23169 = -1.*t16644*t23168;
  t23170 = t23165 + t23169;
  t23172 = t23164*t23055;
  t23173 = t18045*t23168;
  t23174 = t23172 + t23173;
  t23226 = -1.*t4754*t4749;
  t23227 = t4745*t4747;
  t23228 = t23226 + t23227;
  t23135 = 2.88*t4754;
  t23141 = 6.8*t7478*t23140;
  t23151 = 3.2*t12956*t23150;
  t23155 = 3.2*t5734*t23154;
  t23161 = 6.8*t19049*t23160;
  t23171 = 3.2*t23058*t23170;
  t23175 = 3.2*t18383*t23174;
  t23176 = t23135 + t23141 + t23151 + t23155 + t23161 + t23171 + t23175;
  t23207 = -2.88*t4745;
  t23208 = 6.8*t23066*t23140;
  t23209 = 3.2*t23088*t23150;
  t23210 = 3.2*t23083*t23154;
  t23211 = 6.8*t23094*t23160;
  t23212 = 3.2*t23105*t23170;
  t23213 = 3.2*t23102*t23174;
  t23214 = t23207 + t23208 + t23209 + t23210 + t23211 + t23212 + t23213;
  t23217 = 0.4*t9608*t7478;
  t23218 = -0.4*t23066*t4750;
  t23219 = t4746*t7478;
  t23220 = t23066*t4750;
  t23221 = t23219 + t23220;
  t23222 = 0.8*t23221;
  t23223 = t23217 + t23218 + t23222;
  t23224 = -1.*var4[0]*t23223;
  t23225 = 0.4*t9608*t23066;
  t23229 = -0.4*t23228*t4750;
  t23230 = t4746*t23066;
  t23231 = t23228*t4750;
  t23232 = t23230 + t23231;
  t23233 = 0.8*t23232;
  t23234 = t23225 + t23229 + t23233;
  t23235 = -1.*var4[2]*t23234;
  t23181 = 0.748*t23066;
  t23182 = 3.2*t10746*t23088;
  t23183 = 3.2*t10278*t23083;
  t23184 = t23181 + t23182 + t23183;
  t7820 = 0.748*t7478;
  t10318 = 3.2*t10278*t5734;
  t12983 = 3.2*t10746*t12956;
  t13144 = t7820 + t10318 + t12983;
  t23239 = 0.748*t23140;
  t23240 = 3.2*t10746*t23150;
  t23241 = 3.2*t10278*t23154;
  t23242 = 0.67 + t23239 + t23240 + t23241;
  t23269 = 0.768*t10278;
  t23270 = 0.2 + t23269;
  t23236 = 0.768*t23154;
  t23237 = 0.2 + t23236;
  t23187 = 0.748*t23094;
  t23188 = 3.2*t23049*t23105;
  t23189 = 3.2*t23025*t23102;
  t23190 = t23187 + t23188 + t23189;
  t19052 = 0.748*t19049;
  t23034 = 3.2*t23025*t18383;
  t23059 = 3.2*t23049*t23058;
  t23060 = t19052 + t23034 + t23059;
  t23247 = 0.748*t23160;
  t23248 = 3.2*t23049*t23170;
  t23249 = 3.2*t23025*t23174;
  t23250 = 0.67 + t23247 + t23248 + t23249;
  t23302 = 0.768*t23025;
  t23303 = 0.2 + t23302;
  t23244 = 0.768*t23174;
  t23245 = 0.2 + t23244;
  p_output1[0]=0.768*t14776*t18383 + t18838*t23060 + t23063*t23107 + t23134*t23176 + 0.768*t4744*t5734 + t23110*(3.2*Power(t12956,2) + 3.2*Power(t18383,2) + 3.2*Power(t23058,2) + 6.8*Power(t23079,2) + 6.8*Power(t23098,2) + t23112 + t23114 + t23118 + t23126 + 3.2*Power(t5734,2)) + t13144*t6965 - 1.*var4[0];
  p_output1[1]=0.768*t14776*t23102 + t23107*t23110 + t23063*(6.8*Power(t23066,2) + 3.2*Power(t23083,2) + 3.2*Power(t23088,2) + 6.8*Power(t23094,2) + 3.2*Power(t23102,2) + 3.2*Power(t23105,2) + t23112 + t23114 + t23118 + t23126) + t18838*t23190 + t23134*t23214 + 0.768*t23083*t4744 + t23184*t6965 - 1.*var4[2];
  p_output1[2]=t23134*(3.3612 + 6.8*Power(t23140,2) + 3.2*Power(t23150,2) + 3.2*Power(t23154,2) + 6.8*Power(t23160,2) + 3.2*Power(t23170,2) + 3.2*Power(t23174,2)) + t23110*t23176 + t23063*t23214 + t23224 + t23235 + t14776*t23245 + t18838*t23250 + t23237*t4744 + t23242*t6965;
  p_output1[3]=t13144*t23110 + t23063*t23184 + t23224 + t23235 + t23134*t23242 + t23270*t4744 + (1.58228 + 3.2*Power(t10278,2) + 3.2*Power(t10746,2))*t6965;
  p_output1[4]=0.768*t23063*t23083 + t23134*t23237 + 1.2143199999999998*t4744 + 0.768*t23110*t5734 + t23270*t6965 - 1.*(0.4*t23079*t4750 + 0.8*(t23219 - 1.*t23079*t4750) - 0.4*t4746*t7478)*var4[0] - 1.*(-0.4*t23066*t4746 + 0.4*t4750*t7478 + 0.8*(t23230 - 1.*t4750*t7478))*var4[2];
  p_output1[5]=t18838*(1.58228 + 3.2*Power(t23025,2) + 3.2*Power(t23049,2)) + t23060*t23110 + t23063*t23190 + t23134*t23250 + t14776*t23303;
  p_output1[6]=1.2143199999999998*t14776 + 0.768*t23063*t23102 + 0.768*t18383*t23110 + t23134*t23245 + t18838*t23303;
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
