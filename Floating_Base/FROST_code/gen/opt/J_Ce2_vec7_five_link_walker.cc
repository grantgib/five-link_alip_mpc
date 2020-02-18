/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:22:32 GMT-05:00
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
  double t1099;
  double t1072;
  double t1073;
  double t2021;
  double t1031;
  double t2802;
  double t6089;
  double t6143;
  double t6144;
  double t6151;
  double t6163;
  double t1079;
  double t2025;
  double t2033;
  double t6214;
  double t6246;
  double t6247;
  double t6280;
  double t6281;
  double t6283;
  double t6172;
  double t2227;
  double t6072;
  double t6084;
  double t6085;
  double t6086;
  double t6087;
  double t6200;
  double t6210;
  double t6212;
  double t6213;
  double t6248;
  double t6254;
  double t6318;
  double t6319;
  double t6330;
  double t6334;
  double t6335;
  double t6336;
  double t6337;
  double t6354;
  double t6355;
  double t6369;
  double t6370;
  double t6371;
  double t6373;
  double t6374;
  double t6375;
  double t6384;
  double t6385;
  double t6386;
  double t6390;
  double t6391;
  double t6173;
  double t6198;
  double t6199;
  double t6295;
  double t6296;
  double t6297;
  double t6416;
  double t6417;
  double t6277;
  double t6278;
  double t6279;
  double t6291;
  double t6292;
  double t6293;
  double t6350;
  double t6398;
  double t6399;
  double t6403;
  double t6372;
  double t6376;
  double t6377;
  double t6388;
  double t6389;
  double t6387;
  double t6392;
  double t6393;
  double t6446;
  double t6447;
  double t6406;
  double t6409;
  double t6405;
  double t6407;
  double t6410;
  double t6456;
  double t6457;
  double t6458;
  double t6418;
  double t6420;
  double t6421;
  double t6425;
  double t6426;
  double t6427;
  double t6428;
  double t6429;
  double t6430;
  double t6431;
  double t6432;
  double t6435;
  double t6436;
  double t6437;
  double t6438;
  double t6439;
  double t6440;
  double t6441;
  double t6442;
  double t6443;
  double t6444;
  double t6445;
  double t6453;
  double t6454;
  double t6459;
  double t6462;
  double t6472;
  double t6473;
  double t6475;
  double t6476;
  double t6522;
  double t6523;
  double t6524;
  double t6525;
  double t6526;
  double t6506;
  double t6507;
  double t6508;
  double t6510;
  double t6511;
  double t6512;
  double t6513;
  double t6514;
  double t6516;
  double t6517;
  double t6518;
  double t6519;
  double t6520;
  double t6347;
  double t6352;
  double t6320;
  double t6328;
  double t6311;
  double t6329;
  double t6345;
  double t6346;
  double t6353;
  double t6357;
  double t6358;
  double t6448;
  double t6449;
  double t6450;
  double t6455;
  double t6460;
  double t6461;
  double t6463;
  double t6465;
  double t6466;
  double t6467;
  double t6470;
  double t6471;
  double t6474;
  double t6477;
  double t6556;
  double t6484;
  double t6485;
  double t6486;
  double t6558;
  double t6560;
  double t6563;
  double t6564;
  double t6565;
  double t6566;
  double t6567;
  double t6568;
  double t6569;
  double t6570;
  double t6571;
  double t6572;
  double t6575;
  double t6493;
  double t6494;
  double t6495;
  double t6498;
  double t6499;
  double t6500;
  double t6515;
  double t6378;
  double t6394;
  double t6404;
  double t6411;
  double t6412;
  double t6272;
  double t6288;
  double t6294;
  double t6304;
  double t6305;
  double t6306;
  double t6598;
  double t6413;
  double t6548;
  double t6549;
  double t6550;
  double t6551;
  double t6552;
  double t6451;
  double t6452;
  double t6464;
  double t6468;
  double t6469;
  double t6478;
  double t6479;
  double t6573;
  double t6574;
  double t6576;
  double t6577;
  double t6578;
  double t6579;
  double t6580;
  double t6492;
  double t6496;
  double t6497;
  double t6501;
  double t6502;
  double t6590;
  double t6591;
  double t6592;
  double t6593;
  double t6594;
  double t6521;
  double t6600;
  double t6652;
  double t6653;
  double t6654;
  double t6655;
  double t6656;
  double t6648;
  double t6649;
  double t6650;
  double t6535;
  double t6536;
  double t6537;
  double t6538;
  double t6539;
  double t6557;
  double t6559;
  double t6561;
  double t6419;
  double t6422;
  double t6423;
  double t6611;
  double t6612;
  double t6613;
  double t6614;
  double t6615;
  double t6584;
  double t6585;
  double t6586;
  double t6587;
  double t6588;
  double t6483;
  double t6487;
  double t6488;
  double t6489;
  double t6490;
  double t6628;
  double t6629;
  double t6630;
  double t6631;
  double t6632;
  double t6633;
  double t6634;
  double t6527;
  double t6601;
  double t6657;
  double t6687;
  double t6688;
  double t6689;
  double t6701;
  double t6702;
  double t6088;
  t1099 = Cos(var1[5]);
  t1072 = Cos(var1[6]);
  t1073 = Sin(var1[5]);
  t2021 = Sin(var1[6]);
  t1031 = Sin(var1[2]);
  t2802 = Cos(var1[2]);
  t6089 = -1.*t1072;
  t6143 = 1. + t6089;
  t6144 = 0.4*t6143;
  t6151 = 0.64*t1072;
  t6163 = t6144 + t6151;
  t1079 = -1.*t1072*t1073;
  t2025 = -1.*t1099*t2021;
  t2033 = t1079 + t2025;
  t6214 = t1099*t1072;
  t6246 = -1.*t1073*t2021;
  t6247 = t6214 + t6246;
  t6280 = t2802*t2033;
  t6281 = -1.*t1031*t6247;
  t6283 = t6280 + t6281;
  t6172 = t6163*t1072;
  t2227 = -1.*t1031*t2033;
  t6072 = -1.*t1099*t1072;
  t6084 = t1073*t2021;
  t6085 = t6072 + t6084;
  t6086 = t2802*t6085;
  t6087 = t2227 + t6086;
  t6200 = t1072*t1073;
  t6210 = t1099*t2021;
  t6212 = t6200 + t6210;
  t6213 = -1.*t1031*t6212;
  t6248 = t2802*t6247;
  t6254 = t6213 + t6248;
  t6318 = t1031*t2033;
  t6319 = t6318 + t6248;
  t6330 = -1.*t2802*t6247;
  t6334 = t2227 + t6330;
  t6335 = t2802*t6212;
  t6336 = t1031*t6247;
  t6337 = t6335 + t6336;
  t6354 = t1031*t6085;
  t6355 = t6280 + t6354;
  t6369 = t6163*t1073;
  t6370 = 0.24*t1099*t2021;
  t6371 = t6369 + t6370;
  t6373 = t1099*t6163;
  t6374 = -0.24*t1073*t2021;
  t6375 = t6373 + t6374;
  t6384 = -0.24*t1072*t1073;
  t6385 = -0.24*t1099*t2021;
  t6386 = t6384 + t6385;
  t6390 = 0.24*t1099*t1072;
  t6391 = t6390 + t6374;
  t6173 = Power(t1072,2);
  t6198 = -0.24*t6173;
  t6199 = t6172 + t6198;
  t6295 = Power(t2021,2);
  t6296 = 0.24*t6295;
  t6297 = t6172 + t6296;
  t6416 = t1031*t6212;
  t6417 = t6416 + t6086;
  t6277 = t6163*t2021;
  t6278 = -0.24*t1072*t2021;
  t6279 = t6277 + t6278;
  t6291 = -1.*t6163*t2021;
  t6292 = 0.24*t1072*t2021;
  t6293 = t6291 + t6292;
  t6350 = -1.*t1031*t6085;
  t6398 = t6371*t6212;
  t6399 = t6247*t6375;
  t6403 = t6398 + t6399;
  t6372 = -1.*t6371*t6247;
  t6376 = -1.*t2033*t6375;
  t6377 = t6372 + t6376;
  t6388 = t6371*t6247;
  t6389 = t2033*t6375;
  t6387 = t6386*t6247;
  t6392 = t6212*t6391;
  t6393 = t6387 + t6388 + t6389 + t6392;
  t6446 = -1.*t6163*t1073;
  t6447 = t6446 + t6385;
  t6406 = -1.*t2033*t6371;
  t6409 = -1.*t6375*t6085;
  t6405 = -1.*t2033*t6386;
  t6407 = -1.*t6247*t6391;
  t6410 = t6405 + t6406 + t6407 + t6409;
  t6456 = -0.24*t1099*t1072;
  t6457 = 0.24*t1073*t2021;
  t6458 = t6456 + t6457;
  t6418 = -0.384*var2[6]*t6417;
  t6420 = 3.2*t6297*t6417;
  t6421 = 3.2*t6279*t6355;
  t6425 = 6.4*t6319*t6283;
  t6426 = 3.2*t6337*t6087;
  t6427 = 3.2*t6283*t6417;
  t6428 = t6335 + t6350;
  t6429 = 3.2*t6319*t6428;
  t6430 = 3.2*t6254*t6355;
  t6431 = 6.4*t6087*t6355;
  t6432 = t6425 + t6426 + t6427 + t6429 + t6430 + t6431;
  t6435 = -0.5*var2[1]*t6432;
  t6436 = Power(t6319,2);
  t6437 = 6.4*t6436;
  t6438 = 6.4*t6319*t6417;
  t6439 = 6.4*t6337*t6355;
  t6440 = Power(t6355,2);
  t6441 = 6.4*t6440;
  t6442 = t6437 + t6438 + t6439 + t6441;
  t6443 = -0.5*var2[0]*t6442;
  t6444 = 3.2*t6403*t6417;
  t6445 = 3.2*t6377*t6355;
  t6453 = -1.*t6386*t6247;
  t6454 = -1.*t6212*t6375;
  t6459 = -1.*t2033*t6458;
  t6462 = -1.*t6371*t6085;
  t6472 = t2033*t6371;
  t6473 = t6386*t6212;
  t6475 = t6247*t6458;
  t6476 = t6375*t6085;
  t6522 = 3.2*t6279*t6319;
  t6523 = 3.2*t6293*t6319;
  t6524 = 3.2*t6199*t6337;
  t6525 = 3.2*t6297*t6355;
  t6526 = t6522 + t6523 + t6524 + t6525;
  t6506 = 6.4*t6319*t6337;
  t6507 = 6.4*t6319*t6355;
  t6508 = t6506 + t6507;
  t6510 = 3.2*t6319*t6254;
  t6511 = 3.2*t6283*t6337;
  t6512 = 3.2*t6319*t6087;
  t6513 = 3.2*t6283*t6355;
  t6514 = t6510 + t6511 + t6512 + t6513;
  t6516 = 3.2*t6319*t6377;
  t6517 = 3.2*t6319*t6393;
  t6518 = 3.2*t6403*t6355;
  t6519 = 3.2*t6337*t6410;
  t6520 = t6516 + t6517 + t6518 + t6519;
  t6347 = -1.*t2802*t2033;
  t6352 = t6347 + t6350;
  t6320 = -1.*t2802*t6212;
  t6328 = t6320 + t6281;
  t6311 = 6.4*t6254*t6283;
  t6329 = 3.2*t6319*t6328;
  t6345 = 3.2*t6334*t6337;
  t6346 = 6.4*t6283*t6087;
  t6353 = 3.2*t6319*t6352;
  t6357 = 3.2*t6334*t6355;
  t6358 = t6311 + t6329 + t6345 + t6346 + t6353 + t6357;
  t6448 = t6447*t6247;
  t6449 = t6212*t6375;
  t6450 = t6448 + t6388 + t6389 + t6449;
  t6455 = -1.*t2033*t6391;
  t6460 = -1.*t6447*t6085;
  t6461 = -1.*t6386*t6085;
  t6463 = t6453 + t6376 + t6454 + t6455 + t6459 + t6460 + t6461 + t6462;
  t6465 = -1.*t2033*t6447;
  t6466 = -1.*t6247*t6375;
  t6467 = t6465 + t6406 + t6466 + t6409;
  t6470 = t2033*t6447;
  t6471 = t2033*t6386;
  t6474 = t6247*t6391;
  t6477 = t6470 + t6471 + t6472 + t6473 + t6399 + t6474 + t6475 + t6476;
  t6556 = -0.384*var2[6]*t6428;
  t6484 = -1.*t6163*t1072;
  t6485 = 0.24*t6173;
  t6486 = t6484 + t6485;
  t6558 = 3.2*t6279*t6087;
  t6560 = 3.2*t6297*t6428;
  t6563 = Power(t6283,2);
  t6564 = 6.4*t6563;
  t6565 = 6.4*t6254*t6087;
  t6566 = Power(t6087,2);
  t6567 = 6.4*t6566;
  t6568 = 6.4*t6283*t6428;
  t6569 = t6564 + t6565 + t6567 + t6568;
  t6570 = -0.5*var2[1]*t6569;
  t6571 = -0.5*var2[0]*t6432;
  t6572 = 3.2*t6377*t6087;
  t6575 = 3.2*t6403*t6428;
  t6493 = -2.*t2033*t6391;
  t6494 = -2.*t6386*t6085;
  t6495 = t6453 + t6454 + t6493 + t6459 + t6494 + t6462;
  t6498 = 2.*t2033*t6386;
  t6499 = 2.*t6247*t6391;
  t6500 = t6498 + t6472 + t6473 + t6499 + t6475 + t6476;
  t6515 = -0.5*var2[6]*t6514;
  t6378 = 3.2*t6283*t6377;
  t6394 = 3.2*t6283*t6393;
  t6404 = 3.2*t6403*t6087;
  t6411 = 3.2*t6254*t6410;
  t6412 = t6378 + t6394 + t6404 + t6411;
  t6272 = 3.2*t6199*t6254;
  t6288 = 3.2*t6279*t6283;
  t6294 = 3.2*t6293*t6283;
  t6304 = 3.2*t6297*t6087;
  t6305 = t6272 + t6288 + t6294 + t6304;
  t6306 = -0.5*var2[5]*t6305;
  t6598 = t6311 + t6346;
  t6413 = -0.5*var2[2]*t6412;
  t6548 = 3.2*t6334*t6377;
  t6549 = 3.2*t6334*t6393;
  t6550 = 3.2*t6403*t6352;
  t6551 = 3.2*t6328*t6410;
  t6552 = t6548 + t6549 + t6550 + t6551;
  t6451 = 3.2*t6450*t6355;
  t6452 = 3.2*t6393*t6355;
  t6464 = 3.2*t6337*t6463;
  t6468 = 3.2*t6319*t6467;
  t6469 = 3.2*t6319*t6410;
  t6478 = 3.2*t6319*t6477;
  t6479 = t6444 + t6445 + t6451 + t6452 + t6464 + t6468 + t6469 + t6478;
  t6573 = 3.2*t6450*t6087;
  t6574 = 3.2*t6393*t6087;
  t6576 = 3.2*t6254*t6463;
  t6577 = 3.2*t6283*t6467;
  t6578 = 3.2*t6283*t6410;
  t6579 = 3.2*t6283*t6477;
  t6580 = t6572 + t6573 + t6574 + t6575 + t6576 + t6577 + t6578 + t6579;
  t6492 = 6.4*t6393*t6355;
  t6496 = 3.2*t6337*t6495;
  t6497 = 6.4*t6319*t6410;
  t6501 = 3.2*t6319*t6500;
  t6502 = t6444 + t6445 + t6492 + t6496 + t6497 + t6501;
  t6590 = 6.4*t6393*t6087;
  t6591 = 3.2*t6254*t6495;
  t6592 = 6.4*t6283*t6410;
  t6593 = 3.2*t6283*t6500;
  t6594 = t6572 + t6590 + t6575 + t6591 + t6592 + t6593;
  t6521 = -0.5*var2[6]*t6520;
  t6600 = -0.5*var2[6]*t6412;
  t6652 = 3.2*t6199*t6377;
  t6653 = 3.2*t6293*t6403;
  t6654 = 3.2*t6297*t6393;
  t6655 = 3.2*t6279*t6410;
  t6656 = t6652 + t6653 + t6654 + t6655;
  t6648 = 6.4*t6403*t6393;
  t6649 = 6.4*t6377*t6410;
  t6650 = t6648 + t6649;
  t6535 = 3.2*t6279*t6334;
  t6536 = 3.2*t6293*t6334;
  t6537 = 3.2*t6199*t6328;
  t6538 = 3.2*t6297*t6352;
  t6539 = t6535 + t6536 + t6537 + t6538;
  t6557 = 3.2*t6199*t6283;
  t6559 = 3.2*t6293*t6087;
  t6561 = t6557 + t6558 + t6559 + t6560;
  t6419 = 3.2*t6199*t6319;
  t6422 = 3.2*t6293*t6355;
  t6423 = t6419 + t6420 + t6421 + t6422;
  t6611 = 3.2*t6293*t6450;
  t6612 = 3.2*t6279*t6463;
  t6613 = 3.2*t6199*t6467;
  t6614 = 3.2*t6297*t6477;
  t6615 = t6611 + t6612 + t6613 + t6614;
  t6584 = 3.2*t6293*t6254;
  t6585 = 6.4*t6199*t6283;
  t6586 = 3.2*t6486*t6283;
  t6587 = 6.4*t6293*t6087;
  t6588 = t6584 + t6585 + t6586 + t6558 + t6587 + t6560;
  t6483 = 6.4*t6199*t6319;
  t6487 = 3.2*t6486*t6319;
  t6488 = 3.2*t6293*t6337;
  t6489 = 6.4*t6293*t6355;
  t6490 = t6483 + t6487 + t6488 + t6420 + t6421 + t6489;
  t6628 = 3.2*t6293*t6377;
  t6629 = 3.2*t6486*t6403;
  t6630 = 6.4*t6293*t6393;
  t6631 = 3.2*t6279*t6495;
  t6632 = 6.4*t6199*t6410;
  t6633 = 3.2*t6297*t6500;
  t6634 = t6628 + t6629 + t6630 + t6631 + t6632 + t6633;
  t6527 = -0.5*var2[6]*t6526;
  t6601 = -0.5*var2[6]*t6305;
  t6657 = -0.5*var2[6]*t6656;
  t6687 = 6.4*t6199*t6279;
  t6688 = 6.4*t6293*t6297;
  t6689 = t6687 + t6688;
  t6701 = -0.384*var2[0]*t6417;
  t6702 = -0.384*var2[1]*t6428;
  t6088 = -0.384*var2[6]*t6087;
  p_output1[0]=(t6088 + t6306 + t6413 - 0.5*(6.4*t6087*t6319 + 6.4*t6254*t6319 + 6.4*t6283*t6337 + 6.4*t6283*t6355)*var2[0] - 0.5*t6358*var2[1])*var2[6];
  p_output1[1]=(t6418 + t6435 + t6443 - 0.5*t6479*var2[2] - 0.5*t6423*var2[5])*var2[6];
  p_output1[2]=(t6418 + t6435 + t6443 - 0.5*t6502*var2[2] - 0.5*t6490*var2[5])*var2[6];
  p_output1[3]=-0.5*t6508*var2[6];
  p_output1[4]=t6515;
  p_output1[5]=t6521;
  p_output1[6]=t6527;
  p_output1[7]=-0.5*t6508*var2[0] - 0.5*t6514*var2[1] - 0.5*t6520*var2[2] - 0.5*t6526*var2[5] - 0.768*t6355*var2[6];
  p_output1[8]=var2[6]*(-0.5*t6358*var2[0] - 0.5*(6.4*t6283*t6328 + 6.4*t6087*t6334 + 6.4*t6254*t6334 + 6.4*t6283*t6352)*var2[1] - 0.5*t6552*var2[2] - 0.5*t6539*var2[5] - 0.384*t6352*var2[6]);
  p_output1[9]=(t6556 + t6570 + t6571 - 0.5*t6580*var2[2] - 0.5*t6561*var2[5])*var2[6];
  p_output1[10]=(t6556 + t6570 + t6571 - 0.5*t6594*var2[2] - 0.5*t6588*var2[5])*var2[6];
  p_output1[11]=t6515;
  p_output1[12]=-0.5*t6598*var2[6];
  p_output1[13]=t6600;
  p_output1[14]=t6601;
  p_output1[15]=t6306 + t6413 - 0.5*t6514*var2[0] - 0.5*t6598*var2[1] - 0.768*t6087*var2[6];
  p_output1[16]=(-0.5*t6412*var2[0] - 0.5*t6552*var2[1])*var2[6];
  p_output1[17]=var2[6]*(-0.5*t6479*var2[0] - 0.5*t6580*var2[1] - 0.5*(6.4*t6393*t6450 + 6.4*t6377*t6463 + 6.4*t6410*t6467 + 6.4*t6403*t6477)*var2[2] - 0.5*t6615*var2[5] - 0.384*t6477*var2[6]);
  p_output1[18]=var2[6]*(-0.5*t6502*var2[0] - 0.5*t6594*var2[1] - 0.5*(6.4*Power(t6393,2) + 6.4*Power(t6410,2) + 6.4*t6377*t6495 + 6.4*t6403*t6500)*var2[2] - 0.5*t6634*var2[5] - 0.384*t6500*var2[6]);
  p_output1[19]=t6521;
  p_output1[20]=t6600;
  p_output1[21]=-0.5*t6650*var2[6];
  p_output1[22]=t6657;
  p_output1[23]=-0.5*t6520*var2[0] - 0.5*t6412*var2[1] - 0.5*t6650*var2[2] - 0.5*t6656*var2[5] - 0.768*t6393*var2[6];
  p_output1[24]=(-0.5*t6305*var2[0] - 0.5*t6539*var2[1])*var2[6];
  p_output1[25]=(-0.5*t6423*var2[0] - 0.5*t6561*var2[1] - 0.5*t6615*var2[2])*var2[6];
  p_output1[26]=var2[6]*(-0.5*t6490*var2[0] - 0.5*t6588*var2[1] - 0.5*t6634*var2[2] - 0.5*(6.4*Power(t6199,2) + 6.4*t6279*t6293 + 6.4*Power(t6293,2) + 6.4*t6297*t6486)*var2[5] - 0.384*t6486*var2[6]);
  p_output1[27]=t6527;
  p_output1[28]=t6601;
  p_output1[29]=t6657;
  p_output1[30]=-0.5*t6689*var2[6];
  p_output1[31]=-0.5*t6526*var2[0] - 0.5*t6305*var2[1] - 0.5*t6656*var2[2] - 0.5*t6689*var2[5] - 0.768*t6293*var2[6];
  p_output1[32]=(-0.384*t6087*var2[0] - 0.384*t6352*var2[1])*var2[6];
  p_output1[33]=(t6701 + t6702 - 0.384*t6477*var2[2])*var2[6];
  p_output1[34]=(t6701 + t6702 - 0.384*t6500*var2[2] - 0.384*t6486*var2[5])*var2[6];
  p_output1[35]=-0.384*t6355*var2[6];
  p_output1[36]=t6088;
  p_output1[37]=-0.384*t6393*var2[6];
  p_output1[38]=-0.384*t6293*var2[6];
  p_output1[39]=-0.384*t6355*var2[0] - 0.384*t6087*var2[1] - 0.384*t6393*var2[2] - 0.384*t6293*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec7_five_link_walker.hh"

namespace RightStance
{

void J_Ce2_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
