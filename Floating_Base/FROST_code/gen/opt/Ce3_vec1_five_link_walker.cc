/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:47:11 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t7982;
  double t4035;
  double t4164;
  double t8030;
  double t8318;
  double t3970;
  double t10706;
  double t10812;
  double t10813;
  double t10865;
  double t10871;
  double t10872;
  double t10873;
  double t10874;
  double t4425;
  double t8139;
  double t8229;
  double t8316;
  double t10814;
  double t10815;
  double t10905;
  double t10902;
  double t10903;
  double t10906;
  double t10910;
  double t10911;
  double t10912;
  double t10920;
  double t10921;
  double t10922;
  double t10923;
  double t10924;
  double t10904;
  double t10907;
  double t10908;
  double t10909;
  double t10913;
  double t10914;
  double t10829;
  double t10862;
  double t10863;
  double t10942;
  double t10943;
  double t10944;
  double t10892;
  double t10883;
  double t10884;
  double t10885;
  double t10891;
  double t10893;
  double t10916;
  double t10917;
  double t10918;
  double t10957;
  double t10958;
  double t10959;
  double t10932;
  double t10928;
  double t10929;
  double t10930;
  double t10931;
  double t10933;
  double t10946;
  double t10947;
  double t10948;
  double t10950;
  double t10951;
  double t10953;
  double t10954;
  double t10955;
  double t10961;
  double t10962;
  double t10963;
  double t10965;
  double t10966;
  double t10968;
  double t10969;
  double t10970;
  double t11023;
  double t11024;
  double t11025;
  double t11027;
  double t11028;
  double t11029;
  double t11043;
  double t11044;
  double t11045;
  double t11047;
  double t11048;
  double t11049;
  double t10864;
  double t10875;
  double t10876;
  double t10882;
  double t10895;
  double t10896;
  double t10897;
  double t10898;
  double t11061;
  double t11062;
  double t11063;
  double t11064;
  double t11065;
  double t10945;
  double t10949;
  double t10974;
  double t10975;
  double t10976;
  double t10977;
  double t10978;
  double t10979;
  double t10980;
  double t10981;
  double t10982;
  double t10983;
  double t11017;
  double t11018;
  double t11019;
  double t11020;
  double t11021;
  double t11022;
  double t11026;
  double t11030;
  double t11031;
  double t11033;
  double t11034;
  double t11035;
  double t11084;
  double t11085;
  double t11086;
  double t11066;
  double t11067;
  double t11068;
  double t11071;
  double t11072;
  double t11075;
  double t11076;
  double t11077;
  double t11078;
  double t11079;
  double t11080;
  double t11083;
  double t11088;
  double t11089;
  double t11093;
  double t11118;
  double t11119;
  double t11095;
  double t11121;
  double t11122;
  double t11097;
  double t10919;
  double t10925;
  double t10926;
  double t10927;
  double t10935;
  double t10936;
  double t10937;
  double t10938;
  double t11134;
  double t11135;
  double t11136;
  double t11137;
  double t11138;
  double t10960;
  double t10964;
  double t10994;
  double t10995;
  double t10996;
  double t10997;
  double t10998;
  double t10999;
  double t11000;
  double t11001;
  double t11002;
  double t11003;
  double t11037;
  double t11038;
  double t11039;
  double t11040;
  double t11041;
  double t11042;
  double t11046;
  double t11050;
  double t11051;
  double t11053;
  double t11054;
  double t11055;
  double t11157;
  double t11158;
  double t11159;
  double t11139;
  double t11140;
  double t11141;
  double t11144;
  double t11145;
  double t11148;
  double t11149;
  double t11150;
  double t11151;
  double t11152;
  double t11153;
  double t11156;
  double t11161;
  double t11162;
  double t11166;
  double t11191;
  double t11192;
  double t11168;
  double t11194;
  double t11195;
  double t11170;
  t7982 = Cos(var1[3]);
  t4035 = Cos(var1[4]);
  t4164 = Sin(var1[3]);
  t8030 = Sin(var1[4]);
  t8318 = Sin(var1[2]);
  t3970 = Cos(var1[2]);
  t10706 = t7982*t4035;
  t10812 = -1.*t4164*t8030;
  t10813 = t10706 + t10812;
  t10865 = -1.*t4035;
  t10871 = 1. + t10865;
  t10872 = 0.4*t10871;
  t10873 = 0.64*t4035;
  t10874 = t10872 + t10873;
  t4425 = -1.*t4035*t4164;
  t8139 = -1.*t7982*t8030;
  t8229 = t4425 + t8139;
  t8316 = t3970*t8229;
  t10814 = -1.*t8318*t10813;
  t10815 = t8316 + t10814;
  t10905 = Cos(var1[5]);
  t10902 = Cos(var1[6]);
  t10903 = Sin(var1[5]);
  t10906 = Sin(var1[6]);
  t10910 = t10905*t10902;
  t10911 = -1.*t10903*t10906;
  t10912 = t10910 + t10911;
  t10920 = -1.*t10902;
  t10921 = 1. + t10920;
  t10922 = 0.4*t10921;
  t10923 = 0.64*t10902;
  t10924 = t10922 + t10923;
  t10904 = -1.*t10902*t10903;
  t10907 = -1.*t10905*t10906;
  t10908 = t10904 + t10907;
  t10909 = t3970*t10908;
  t10913 = -1.*t8318*t10912;
  t10914 = t10909 + t10913;
  t10829 = -1.*t7982*t8318;
  t10862 = -1.*t3970*t4164;
  t10863 = t10829 + t10862;
  t10942 = t3970*t7982;
  t10943 = -1.*t8318*t4164;
  t10944 = t10942 + t10943;
  t10892 = t3970*t10813;
  t10883 = t4035*t4164;
  t10884 = t7982*t8030;
  t10885 = t10883 + t10884;
  t10891 = -1.*t8318*t10885;
  t10893 = t10891 + t10892;
  t10916 = -1.*t10905*t8318;
  t10917 = -1.*t3970*t10903;
  t10918 = t10916 + t10917;
  t10957 = t3970*t10905;
  t10958 = -1.*t8318*t10903;
  t10959 = t10957 + t10958;
  t10932 = t3970*t10912;
  t10928 = t10902*t10903;
  t10929 = t10905*t10906;
  t10930 = t10928 + t10929;
  t10931 = -1.*t8318*t10930;
  t10933 = t10931 + t10932;
  t10946 = t7982*t8318;
  t10947 = t3970*t4164;
  t10948 = t10946 + t10947;
  t10950 = t8318*t8229;
  t10951 = t10950 + t10892;
  t10953 = t3970*t10885;
  t10954 = t8318*t10813;
  t10955 = t10953 + t10954;
  t10961 = t10905*t8318;
  t10962 = t3970*t10903;
  t10963 = t10961 + t10962;
  t10965 = t8318*t10908;
  t10966 = t10965 + t10932;
  t10968 = t3970*t10930;
  t10969 = t8318*t10912;
  t10970 = t10968 + t10969;
  t11023 = t10874*t4164;
  t11024 = 0.24*t7982*t8030;
  t11025 = t11023 + t11024;
  t11027 = t7982*t10874;
  t11028 = -0.24*t4164*t8030;
  t11029 = t11027 + t11028;
  t11043 = t10924*t10903;
  t11044 = 0.24*t10905*t10906;
  t11045 = t11043 + t11044;
  t11047 = t10905*t10924;
  t11048 = -0.24*t10903*t10906;
  t11049 = t11047 + t11048;
  t10864 = -0.748*t10863;
  t10875 = t10874*t8030;
  t10876 = -0.24*t4035*t8030;
  t10882 = t10875 + t10876;
  t10895 = t10874*t4035;
  t10896 = Power(t8030,2);
  t10897 = 0.24*t10896;
  t10898 = t10895 + t10897;
  t11061 = -1.*t7982*t4035;
  t11062 = t4164*t8030;
  t11063 = t11061 + t11062;
  t11064 = t8318*t11063;
  t11065 = t8316 + t11064;
  t10945 = -13.6*t10863*t10944;
  t10949 = -13.6*t10948*t10944;
  t10974 = Power(t10863,2);
  t10975 = -6.8*t10974;
  t10976 = -6.8*t10863*t10948;
  t10977 = Power(t10944,2);
  t10978 = -6.8*t10977;
  t10979 = -1.*t3970*t7982;
  t10980 = t8318*t4164;
  t10981 = t10979 + t10980;
  t10982 = -6.8*t10944*t10981;
  t10983 = -1.*t8318*t8229;
  t11017 = Power(t7982,2);
  t11018 = 0.11*t11017;
  t11019 = Power(t4164,2);
  t11020 = 0.11*t11019;
  t11021 = t11018 + t11020;
  t11022 = -6.8*t10863*t11021;
  t11026 = -1.*t11025*t10813;
  t11030 = -1.*t8229*t11029;
  t11031 = t11026 + t11030;
  t11033 = t11025*t10885;
  t11034 = t10813*t11029;
  t11035 = t11033 + t11034;
  t11084 = -1.*t10874*t4164;
  t11085 = -0.24*t7982*t8030;
  t11086 = t11084 + t11085;
  t11066 = 0.384*var2[4]*t11065;
  t11067 = -3.2*t10882*t10951;
  t11068 = -3.2*t10898*t11065;
  t11071 = -6.4*t10951*t10955;
  t11072 = -6.4*t10951*t11065;
  t11075 = -3.2*t10951*t10893;
  t11076 = -3.2*t10815*t10955;
  t11077 = t3970*t11063;
  t11078 = t10983 + t11077;
  t11079 = -3.2*t10951*t11078;
  t11080 = -3.2*t10815*t11065;
  t11083 = -3.2*t10951*t11031;
  t11088 = t11025*t10813;
  t11089 = t8229*t11029;
  t11093 = -3.2*t11035*t11065;
  t11118 = -0.24*t4035*t4164;
  t11119 = t11118 + t11085;
  t11095 = -1.*t8229*t11025;
  t11121 = 0.24*t7982*t4035;
  t11122 = t11121 + t11028;
  t11097 = -1.*t11029*t11063;
  t10919 = -0.748*t10918;
  t10925 = t10924*t10906;
  t10926 = -0.24*t10902*t10906;
  t10927 = t10925 + t10926;
  t10935 = t10924*t10902;
  t10936 = Power(t10906,2);
  t10937 = 0.24*t10936;
  t10938 = t10935 + t10937;
  t11134 = -1.*t10905*t10902;
  t11135 = t10903*t10906;
  t11136 = t11134 + t11135;
  t11137 = t8318*t11136;
  t11138 = t10909 + t11137;
  t10960 = -13.6*t10918*t10959;
  t10964 = -13.6*t10963*t10959;
  t10994 = Power(t10918,2);
  t10995 = -6.8*t10994;
  t10996 = -6.8*t10918*t10963;
  t10997 = Power(t10959,2);
  t10998 = -6.8*t10997;
  t10999 = -1.*t3970*t10905;
  t11000 = t8318*t10903;
  t11001 = t10999 + t11000;
  t11002 = -6.8*t10959*t11001;
  t11003 = -1.*t8318*t10908;
  t11037 = Power(t10905,2);
  t11038 = 0.11*t11037;
  t11039 = Power(t10903,2);
  t11040 = 0.11*t11039;
  t11041 = t11038 + t11040;
  t11042 = -6.8*t10918*t11041;
  t11046 = -1.*t11045*t10912;
  t11050 = -1.*t10908*t11049;
  t11051 = t11046 + t11050;
  t11053 = t11045*t10930;
  t11054 = t10912*t11049;
  t11055 = t11053 + t11054;
  t11157 = -1.*t10924*t10903;
  t11158 = -0.24*t10905*t10906;
  t11159 = t11157 + t11158;
  t11139 = 0.384*var2[6]*t11138;
  t11140 = -3.2*t10927*t10966;
  t11141 = -3.2*t10938*t11138;
  t11144 = -6.4*t10966*t10970;
  t11145 = -6.4*t10966*t11138;
  t11148 = -3.2*t10966*t10933;
  t11149 = -3.2*t10914*t10970;
  t11150 = t3970*t11136;
  t11151 = t11003 + t11150;
  t11152 = -3.2*t10966*t11151;
  t11153 = -3.2*t10914*t11138;
  t11156 = -3.2*t10966*t11051;
  t11161 = t11045*t10912;
  t11162 = t10908*t11049;
  t11166 = -3.2*t11055*t11138;
  t11191 = -0.24*t10902*t10903;
  t11192 = t11191 + t11158;
  t11168 = -1.*t10908*t11045;
  t11194 = 0.24*t10905*t10902;
  t11195 = t11194 + t11048;
  t11170 = -1.*t11049*t11136;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[0]*(-0.5*(t10945 + t10949 - 6.4*t10815*t10951 - 6.4*t10893*t10955 + t10960 + t10964 - 6.4*t10914*t10966 - 6.4*t10933*t10970)*var2[0] - 0.5*(-3.2*Power(t10815,2) - 3.2*Power(t10893,2) - 3.2*Power(t10914,2) - 3.2*Power(t10933,2) + t10975 + t10976 + t10978 + t10982 + t10995 + t10996 + t10998 + t11002 - 3.2*t10951*(t10983 - 1.*t10813*t3970) - 3.2*t10955*(t10814 - 1.*t10885*t3970) - 3.2*t10966*(t11003 - 1.*t10912*t3970) - 3.2*t10970*(t10913 - 1.*t10930*t3970))*var2[1] - 0.5*(t11022 - 3.2*t10893*t11031 - 3.2*t10815*t11035 + t11042 - 3.2*t10933*t11051 - 3.2*t10914*t11055 + 2.88*t8318)*var2[2] - 0.5*(t10864 - 3.2*t10882*t10893 - 3.2*t10815*t10898)*var2[3] + 0.384*t10815*var2[4] - 0.5*(t10919 - 3.2*t10927*t10933 - 3.2*t10914*t10938)*var2[5] + 0.384*t10914*var2[6]);
  p_output1[3]=var2[0]*(t11066 - 0.5*(t10945 + t10949 + t11071 + t11072)*var2[0] - 0.5*(t10975 + t10976 + t10978 + t10982 + t11075 + t11076 + t11079 + t11080)*var2[1] - 0.5*(t11022 + t11083 - 3.2*t10951*(t10885*t11029 + t10813*t11086 + t11088 + t11089) + t11093 - 3.2*t10955*(-1.*t10813*t11029 + t11095 + t11097 - 1.*t11086*t8229))*var2[2] - 0.5*(t10864 + t11067 + t11068)*var2[3]);
  p_output1[4]=var2[0]*(t11066 - 0.5*(t11071 + t11072)*var2[0] - 0.5*(t11075 + t11076 + t11079 + t11080)*var2[1] - 0.5*(t11083 + t11093 - 3.2*t10951*(t11088 + t11089 + t10813*t11119 + t10885*t11122) - 3.2*t10955*(t11095 + t11097 - 1.*t10813*t11122 - 1.*t11119*t8229))*var2[2] - 0.5*(t11067 + t11068 - 3.2*t10955*(t10895 - 0.24*Power(t4035,2)) - 3.2*t10951*(-1.*t10874*t8030 + 0.24*t4035*t8030))*var2[3]);
  p_output1[5]=var2[0]*(t11139 - 0.5*(t10960 + t10964 + t11144 + t11145)*var2[0] - 0.5*(t10995 + t10996 + t10998 + t11002 + t11148 + t11149 + t11152 + t11153)*var2[1] - 0.5*(t11042 + t11156 - 3.2*t10966*(t10930*t11049 + t10912*t11159 + t11161 + t11162) + t11166 - 3.2*t10970*(-1.*t10912*t11049 - 1.*t10908*t11159 + t11168 + t11170))*var2[2] - 0.5*(t10919 + t11140 + t11141)*var2[5]);
  p_output1[6]=var2[0]*(t11139 - 0.5*(t11144 + t11145)*var2[0] - 0.5*(t11148 + t11149 + t11152 + t11153)*var2[1] - 0.5*(t11156 + t11166 - 3.2*t10970*(t11168 + t11170 - 1.*t10908*t11192 - 1.*t10912*t11195) - 3.2*t10966*(t11161 + t11162 + t10912*t11192 + t10930*t11195))*var2[2] - 0.5*(-3.2*(0.24*t10902*t10906 - 1.*t10906*t10924)*t10966 - 3.2*(-0.24*Power(t10902,2) + t10935)*t10970 + t11140 + t11141)*var2[5]);
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

#include "Ce3_vec1_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec1_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
