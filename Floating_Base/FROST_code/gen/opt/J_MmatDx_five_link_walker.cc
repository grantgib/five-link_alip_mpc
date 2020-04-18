/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 14:53:18 GMT-04:00
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
  double t361;
  double t352;
  double t353;
  double t364;
  double t372;
  double t340;
  double t373;
  double t374;
  double t375;
  double t383;
  double t384;
  double t385;
  double t386;
  double t389;
  double t356;
  double t369;
  double t370;
  double t371;
  double t376;
  double t377;
  double t412;
  double t409;
  double t410;
  double t413;
  double t417;
  double t418;
  double t419;
  double t427;
  double t428;
  double t429;
  double t430;
  double t431;
  double t411;
  double t414;
  double t415;
  double t416;
  double t420;
  double t421;
  double t379;
  double t380;
  double t381;
  double t449;
  double t450;
  double t451;
  double t397;
  double t393;
  double t394;
  double t395;
  double t396;
  double t398;
  double t423;
  double t424;
  double t425;
  double t464;
  double t465;
  double t466;
  double t439;
  double t435;
  double t436;
  double t437;
  double t438;
  double t440;
  double t453;
  double t454;
  double t455;
  double t457;
  double t458;
  double t460;
  double t461;
  double t462;
  double t468;
  double t469;
  double t470;
  double t472;
  double t473;
  double t475;
  double t476;
  double t477;
  double t530;
  double t531;
  double t532;
  double t534;
  double t535;
  double t536;
  double t550;
  double t551;
  double t552;
  double t554;
  double t555;
  double t556;
  double t382;
  double t390;
  double t391;
  double t392;
  double t400;
  double t401;
  double t402;
  double t403;
  double t567;
  double t568;
  double t569;
  double t570;
  double t571;
  double t452;
  double t456;
  double t481;
  double t482;
  double t483;
  double t484;
  double t485;
  double t486;
  double t487;
  double t488;
  double t489;
  double t490;
  double t524;
  double t525;
  double t526;
  double t527;
  double t528;
  double t529;
  double t533;
  double t537;
  double t538;
  double t540;
  double t541;
  double t542;
  double t590;
  double t591;
  double t592;
  double t572;
  double t573;
  double t574;
  double t577;
  double t578;
  double t581;
  double t582;
  double t583;
  double t584;
  double t585;
  double t586;
  double t589;
  double t594;
  double t595;
  double t599;
  double t623;
  double t624;
  double t601;
  double t626;
  double t627;
  double t603;
  double t426;
  double t432;
  double t433;
  double t434;
  double t442;
  double t443;
  double t444;
  double t445;
  double t638;
  double t639;
  double t640;
  double t641;
  double t642;
  double t467;
  double t471;
  double t501;
  double t502;
  double t503;
  double t504;
  double t505;
  double t506;
  double t507;
  double t508;
  double t509;
  double t510;
  double t544;
  double t545;
  double t546;
  double t547;
  double t548;
  double t549;
  double t553;
  double t557;
  double t558;
  double t560;
  double t561;
  double t562;
  double t661;
  double t662;
  double t663;
  double t643;
  double t644;
  double t645;
  double t648;
  double t649;
  double t652;
  double t653;
  double t654;
  double t655;
  double t656;
  double t657;
  double t660;
  double t665;
  double t666;
  double t670;
  double t694;
  double t695;
  double t672;
  double t697;
  double t698;
  double t674;
  double t491;
  double t492;
  double t498;
  double t499;
  double t511;
  double t512;
  double t518;
  double t519;
  double t493;
  double t494;
  double t495;
  double t496;
  double t497;
  double t500;
  double t513;
  double t514;
  double t515;
  double t516;
  double t517;
  double t520;
  double t521;
  double t754;
  double t765;
  double t587;
  double t775;
  double t593;
  double t596;
  double t597;
  double t600;
  double t602;
  double t604;
  double t784;
  double t613;
  double t614;
  double t615;
  double t785;
  double t609;
  double t610;
  double t611;
  double t786;
  double t789;
  double t790;
  double t621;
  double t794;
  double t625;
  double t628;
  double t629;
  double t796;
  double t631;
  double t632;
  double t633;
  double t760;
  double t768;
  double t658;
  double t778;
  double t664;
  double t667;
  double t668;
  double t671;
  double t673;
  double t675;
  double t813;
  double t684;
  double t685;
  double t686;
  double t814;
  double t680;
  double t681;
  double t682;
  double t815;
  double t818;
  double t819;
  double t692;
  double t823;
  double t696;
  double t699;
  double t700;
  double t825;
  double t702;
  double t703;
  double t704;
  double t726;
  double t727;
  double t728;
  double t729;
  double t730;
  double t731;
  double t732;
  double t733;
  double t734;
  double t709;
  double t710;
  double t711;
  double t712;
  double t523;
  double t539;
  double t543;
  double t559;
  double t563;
  double t564;
  double t399;
  double t404;
  double t405;
  double t441;
  double t446;
  double t447;
  double t774;
  double t776;
  double t777;
  double t779;
  double t780;
  double t781;
  double t795;
  double t797;
  double t798;
  double t598;
  double t605;
  double t606;
  double t808;
  double t809;
  double t810;
  double t630;
  double t634;
  double t635;
  double t824;
  double t826;
  double t827;
  double t669;
  double t676;
  double t677;
  double t837;
  double t838;
  double t839;
  double t701;
  double t705;
  double t706;
  double t735;
  double t736;
  double t737;
  double t738;
  double t739;
  double t740;
  double t741;
  double t742;
  double t755;
  double t756;
  double t757;
  double t787;
  double t575;
  double t849;
  double t850;
  double t851;
  double t801;
  double t802;
  double t803;
  double t612;
  double t616;
  double t617;
  double t861;
  double t862;
  double t863;
  double t864;
  double t865;
  double t743;
  double t744;
  double t745;
  double t746;
  double t913;
  double t914;
  double t915;
  double t916;
  double t952;
  double t953;
  double t747;
  double t843;
  double t917;
  double t918;
  double t946;
  double t947;
  double t761;
  double t762;
  double t763;
  double t816;
  double t646;
  double t875;
  double t876;
  double t877;
  double t830;
  double t831;
  double t832;
  double t683;
  double t687;
  double t688;
  double t887;
  double t888;
  double t889;
  double t890;
  double t891;
  double t748;
  double t749;
  double t750;
  double t751;
  double t919;
  double t920;
  double t921;
  double t922;
  double t985;
  double t986;
  double t752;
  double t844;
  double t923;
  double t924;
  double t979;
  double t980;
  t361 = Cos(var1[3]);
  t352 = Cos(var1[4]);
  t353 = Sin(var1[3]);
  t364 = Sin(var1[4]);
  t372 = Sin(var1[2]);
  t340 = Cos(var1[2]);
  t373 = t361*t352;
  t374 = -1.*t353*t364;
  t375 = t373 + t374;
  t383 = -1.*t352;
  t384 = 1. + t383;
  t385 = 0.4*t384;
  t386 = 0.64*t352;
  t389 = t385 + t386;
  t356 = -1.*t352*t353;
  t369 = -1.*t361*t364;
  t370 = t356 + t369;
  t371 = t340*t370;
  t376 = -1.*t372*t375;
  t377 = t371 + t376;
  t412 = Cos(var1[5]);
  t409 = Cos(var1[6]);
  t410 = Sin(var1[5]);
  t413 = Sin(var1[6]);
  t417 = t412*t409;
  t418 = -1.*t410*t413;
  t419 = t417 + t418;
  t427 = -1.*t409;
  t428 = 1. + t427;
  t429 = 0.4*t428;
  t430 = 0.64*t409;
  t431 = t429 + t430;
  t411 = -1.*t409*t410;
  t414 = -1.*t412*t413;
  t415 = t411 + t414;
  t416 = t340*t415;
  t420 = -1.*t372*t419;
  t421 = t416 + t420;
  t379 = -1.*t361*t372;
  t380 = -1.*t340*t353;
  t381 = t379 + t380;
  t449 = t340*t361;
  t450 = -1.*t372*t353;
  t451 = t449 + t450;
  t397 = t340*t375;
  t393 = t352*t353;
  t394 = t361*t364;
  t395 = t393 + t394;
  t396 = -1.*t372*t395;
  t398 = t396 + t397;
  t423 = -1.*t412*t372;
  t424 = -1.*t340*t410;
  t425 = t423 + t424;
  t464 = t340*t412;
  t465 = -1.*t372*t410;
  t466 = t464 + t465;
  t439 = t340*t419;
  t435 = t409*t410;
  t436 = t412*t413;
  t437 = t435 + t436;
  t438 = -1.*t372*t437;
  t440 = t438 + t439;
  t453 = t361*t372;
  t454 = t340*t353;
  t455 = t453 + t454;
  t457 = t372*t370;
  t458 = t457 + t397;
  t460 = t340*t395;
  t461 = t372*t375;
  t462 = t460 + t461;
  t468 = t412*t372;
  t469 = t340*t410;
  t470 = t468 + t469;
  t472 = t372*t415;
  t473 = t472 + t439;
  t475 = t340*t437;
  t476 = t372*t419;
  t477 = t475 + t476;
  t530 = t389*t353;
  t531 = 0.24*t361*t364;
  t532 = t530 + t531;
  t534 = t361*t389;
  t535 = -0.24*t353*t364;
  t536 = t534 + t535;
  t550 = t431*t410;
  t551 = 0.24*t412*t413;
  t552 = t550 + t551;
  t554 = t412*t431;
  t555 = -0.24*t410*t413;
  t556 = t554 + t555;
  t382 = -0.748*t381;
  t390 = t389*t364;
  t391 = -0.24*t352*t364;
  t392 = t390 + t391;
  t400 = t389*t352;
  t401 = Power(t364,2);
  t402 = 0.24*t401;
  t403 = t400 + t402;
  t567 = -1.*t361*t352;
  t568 = t353*t364;
  t569 = t567 + t568;
  t570 = t372*t569;
  t571 = t371 + t570;
  t452 = -13.6*t381*t451;
  t456 = -13.6*t455*t451;
  t481 = Power(t381,2);
  t482 = -6.8*t481;
  t483 = -6.8*t381*t455;
  t484 = Power(t451,2);
  t485 = -6.8*t484;
  t486 = -1.*t340*t361;
  t487 = t372*t353;
  t488 = t486 + t487;
  t489 = -6.8*t451*t488;
  t490 = -1.*t372*t370;
  t524 = Power(t361,2);
  t525 = 0.11*t524;
  t526 = Power(t353,2);
  t527 = 0.11*t526;
  t528 = t525 + t527;
  t529 = -6.8*t381*t528;
  t533 = -1.*t532*t375;
  t537 = -1.*t370*t536;
  t538 = t533 + t537;
  t540 = t532*t395;
  t541 = t375*t536;
  t542 = t540 + t541;
  t590 = -1.*t389*t353;
  t591 = -0.24*t361*t364;
  t592 = t590 + t591;
  t572 = -0.768*var2[4]*t571;
  t573 = -3.2*t392*t458;
  t574 = -3.2*t403*t571;
  t577 = -6.4*t458*t462;
  t578 = -6.4*t458*t571;
  t581 = -3.2*t458*t398;
  t582 = -3.2*t377*t462;
  t583 = t340*t569;
  t584 = t490 + t583;
  t585 = -3.2*t458*t584;
  t586 = -3.2*t377*t571;
  t589 = -3.2*t458*t538;
  t594 = t532*t375;
  t595 = t370*t536;
  t599 = -3.2*t542*t571;
  t623 = -0.24*t352*t353;
  t624 = t623 + t591;
  t601 = -1.*t370*t532;
  t626 = 0.24*t361*t352;
  t627 = t626 + t535;
  t603 = -1.*t536*t569;
  t426 = -0.748*t425;
  t432 = t431*t413;
  t433 = -0.24*t409*t413;
  t434 = t432 + t433;
  t442 = t431*t409;
  t443 = Power(t413,2);
  t444 = 0.24*t443;
  t445 = t442 + t444;
  t638 = -1.*t412*t409;
  t639 = t410*t413;
  t640 = t638 + t639;
  t641 = t372*t640;
  t642 = t416 + t641;
  t467 = -13.6*t425*t466;
  t471 = -13.6*t470*t466;
  t501 = Power(t425,2);
  t502 = -6.8*t501;
  t503 = -6.8*t425*t470;
  t504 = Power(t466,2);
  t505 = -6.8*t504;
  t506 = -1.*t340*t412;
  t507 = t372*t410;
  t508 = t506 + t507;
  t509 = -6.8*t466*t508;
  t510 = -1.*t372*t415;
  t544 = Power(t412,2);
  t545 = 0.11*t544;
  t546 = Power(t410,2);
  t547 = 0.11*t546;
  t548 = t545 + t547;
  t549 = -6.8*t425*t548;
  t553 = -1.*t552*t419;
  t557 = -1.*t415*t556;
  t558 = t553 + t557;
  t560 = t552*t437;
  t561 = t419*t556;
  t562 = t560 + t561;
  t661 = -1.*t431*t410;
  t662 = -0.24*t412*t413;
  t663 = t661 + t662;
  t643 = -0.768*var2[6]*t642;
  t644 = -3.2*t434*t473;
  t645 = -3.2*t445*t642;
  t648 = -6.4*t473*t477;
  t649 = -6.4*t473*t642;
  t652 = -3.2*t473*t440;
  t653 = -3.2*t421*t477;
  t654 = t340*t640;
  t655 = t510 + t654;
  t656 = -3.2*t473*t655;
  t657 = -3.2*t421*t642;
  t660 = -3.2*t473*t558;
  t665 = t552*t419;
  t666 = t415*t556;
  t670 = -3.2*t562*t642;
  t694 = -0.24*t409*t410;
  t695 = t694 + t662;
  t672 = -1.*t415*t552;
  t697 = 0.24*t412*t409;
  t698 = t697 + t555;
  t674 = -1.*t556*t640;
  t491 = -1.*t340*t375;
  t492 = t490 + t491;
  t498 = -1.*t340*t395;
  t499 = t498 + t376;
  t511 = -1.*t340*t419;
  t512 = t510 + t511;
  t518 = -1.*t340*t437;
  t519 = t518 + t420;
  t493 = -3.2*t492*t458;
  t494 = Power(t398,2);
  t495 = -3.2*t494;
  t496 = Power(t377,2);
  t497 = -3.2*t496;
  t500 = -3.2*t499*t462;
  t513 = -3.2*t512*t473;
  t514 = Power(t440,2);
  t515 = -3.2*t514;
  t516 = Power(t421,2);
  t517 = -3.2*t516;
  t520 = -3.2*t519*t477;
  t521 = t482 + t483 + t485 + t489 + t493 + t495 + t497 + t500 + t502 + t503 + t505 + t509 + t513 + t515 + t517 + t520;
  t754 = -0.748*t488;
  t765 = -13.6*t381*t488;
  t587 = t482 + t483 + t485 + t489 + t581 + t582 + t585 + t586;
  t775 = -6.8*t488*t528;
  t593 = t592*t375;
  t596 = t395*t536;
  t597 = t593 + t594 + t595 + t596;
  t600 = -1.*t370*t592;
  t602 = -1.*t375*t536;
  t604 = t600 + t601 + t602 + t603;
  t784 = -0.768*var2[4]*t584;
  t613 = Power(t352,2);
  t614 = -0.24*t613;
  t615 = t400 + t614;
  t785 = -3.2*t392*t377;
  t609 = -1.*t389*t364;
  t610 = 0.24*t352*t364;
  t611 = t609 + t610;
  t786 = -3.2*t403*t584;
  t789 = -6.4*t398*t377;
  t790 = -6.4*t377*t584;
  t621 = t581 + t582 + t585 + t586;
  t794 = -3.2*t377*t538;
  t625 = t624*t375;
  t628 = t395*t627;
  t629 = t625 + t594 + t595 + t628;
  t796 = -3.2*t542*t584;
  t631 = -1.*t370*t624;
  t632 = -1.*t375*t627;
  t633 = t631 + t601 + t632 + t603;
  t760 = -0.748*t508;
  t768 = -13.6*t425*t508;
  t658 = t502 + t503 + t505 + t509 + t652 + t653 + t656 + t657;
  t778 = -6.8*t508*t548;
  t664 = t663*t419;
  t667 = t437*t556;
  t668 = t664 + t665 + t666 + t667;
  t671 = -1.*t415*t663;
  t673 = -1.*t419*t556;
  t675 = t671 + t672 + t673 + t674;
  t813 = -0.768*var2[6]*t655;
  t684 = Power(t409,2);
  t685 = -0.24*t684;
  t686 = t442 + t685;
  t814 = -3.2*t434*t421;
  t680 = -1.*t431*t413;
  t681 = 0.24*t409*t413;
  t682 = t680 + t681;
  t815 = -3.2*t445*t655;
  t818 = -6.4*t440*t421;
  t819 = -6.4*t421*t655;
  t692 = t652 + t653 + t656 + t657;
  t823 = -3.2*t421*t558;
  t696 = t695*t419;
  t699 = t437*t698;
  t700 = t696 + t665 + t666 + t699;
  t825 = -3.2*t562*t655;
  t702 = -1.*t415*t695;
  t703 = -1.*t419*t698;
  t704 = t702 + t672 + t703 + t674;
  t726 = -6.8*t381*t451;
  t727 = -6.8*t455*t451;
  t728 = -3.2*t458*t377;
  t729 = -3.2*t398*t462;
  t730 = -6.8*t425*t466;
  t731 = -6.8*t470*t466;
  t732 = -3.2*t473*t421;
  t733 = -3.2*t440*t477;
  t734 = t726 + t727 + t728 + t729 + t730 + t731 + t732 + t733;
  t709 = Power(t340,2);
  t710 = -12.*t709;
  t711 = Power(t372,2);
  t712 = -12.*t711;
  t523 = 2.88*t372;
  t539 = -3.2*t398*t538;
  t543 = -3.2*t377*t542;
  t559 = -3.2*t440*t558;
  t563 = -3.2*t421*t562;
  t564 = t523 + t529 + t539 + t543 + t549 + t559 + t563;
  t399 = -3.2*t392*t398;
  t404 = -3.2*t403*t377;
  t405 = t382 + t399 + t404;
  t441 = -3.2*t434*t440;
  t446 = -3.2*t445*t421;
  t447 = t426 + t441 + t446;
  t774 = 2.88*t340;
  t776 = -3.2*t499*t538;
  t777 = -3.2*t492*t542;
  t779 = -3.2*t519*t558;
  t780 = -3.2*t512*t562;
  t781 = t774 + t775 + t776 + t777 + t778 + t779 + t780;
  t795 = -3.2*t377*t597;
  t797 = -3.2*t398*t604;
  t798 = t775 + t794 + t795 + t796 + t797;
  t598 = -3.2*t458*t597;
  t605 = -3.2*t462*t604;
  t606 = t529 + t589 + t598 + t599 + t605;
  t808 = -3.2*t377*t629;
  t809 = -3.2*t398*t633;
  t810 = t794 + t808 + t796 + t809;
  t630 = -3.2*t458*t629;
  t634 = -3.2*t462*t633;
  t635 = t589 + t630 + t599 + t634;
  t824 = -3.2*t421*t668;
  t826 = -3.2*t440*t675;
  t827 = t778 + t823 + t824 + t825 + t826;
  t669 = -3.2*t473*t668;
  t676 = -3.2*t477*t675;
  t677 = t549 + t660 + t669 + t670 + t676;
  t837 = -3.2*t421*t700;
  t838 = -3.2*t440*t704;
  t839 = t823 + t837 + t825 + t838;
  t701 = -3.2*t473*t700;
  t705 = -3.2*t477*t704;
  t706 = t660 + t701 + t670 + t705;
  t735 = -2.88*t340;
  t736 = -6.8*t451*t528;
  t737 = -3.2*t462*t538;
  t738 = -3.2*t458*t542;
  t739 = -6.8*t466*t548;
  t740 = -3.2*t477*t558;
  t741 = -3.2*t473*t562;
  t742 = t735 + t736 + t737 + t738 + t739 + t740 + t741;
  t755 = -3.2*t403*t492;
  t756 = -3.2*t392*t499;
  t757 = t754 + t755 + t756;
  t787 = t754 + t785 + t786;
  t575 = t382 + t573 + t574;
  t849 = -3.2*t403*t597;
  t850 = -3.2*t392*t604;
  t851 = t849 + t850;
  t801 = -3.2*t615*t398;
  t802 = -3.2*t611*t377;
  t803 = t801 + t785 + t802 + t786;
  t612 = -3.2*t611*t458;
  t616 = -3.2*t615*t462;
  t617 = t573 + t612 + t616 + t574;
  t861 = -3.2*t615*t538;
  t862 = -3.2*t611*t542;
  t863 = -3.2*t403*t629;
  t864 = -3.2*t392*t633;
  t865 = t861 + t862 + t863 + t864;
  t743 = -0.748*t451;
  t744 = -3.2*t403*t458;
  t745 = -3.2*t392*t462;
  t746 = t743 + t744 + t745;
  t913 = -0.748*t528;
  t914 = -3.2*t392*t538;
  t915 = -3.2*t403*t542;
  t916 = -0.67 + t913 + t914 + t915;
  t952 = -0.768*var2[1]*t584;
  t953 = -0.768*var2[0]*t571;
  t747 = -0.768*t458;
  t843 = -0.768*t377;
  t917 = -0.768*t542;
  t918 = -0.2 + t917;
  t946 = -0.768*t403;
  t947 = -0.2 + t946;
  t761 = -3.2*t445*t512;
  t762 = -3.2*t434*t519;
  t763 = t760 + t761 + t762;
  t816 = t760 + t814 + t815;
  t646 = t426 + t644 + t645;
  t875 = -3.2*t445*t668;
  t876 = -3.2*t434*t675;
  t877 = t875 + t876;
  t830 = -3.2*t686*t440;
  t831 = -3.2*t682*t421;
  t832 = t830 + t814 + t831 + t815;
  t683 = -3.2*t682*t473;
  t687 = -3.2*t686*t477;
  t688 = t644 + t683 + t687 + t645;
  t887 = -3.2*t686*t558;
  t888 = -3.2*t682*t562;
  t889 = -3.2*t445*t700;
  t890 = -3.2*t434*t704;
  t891 = t887 + t888 + t889 + t890;
  t748 = -0.748*t466;
  t749 = -3.2*t445*t473;
  t750 = -3.2*t434*t477;
  t751 = t748 + t749 + t750;
  t919 = -0.748*t548;
  t920 = -3.2*t434*t558;
  t921 = -3.2*t445*t562;
  t922 = -0.67 + t919 + t920 + t921;
  t985 = -0.768*var2[1]*t655;
  t986 = -0.768*var2[0]*t642;
  t752 = -0.768*t473;
  t844 = -0.768*t421;
  t923 = -0.768*t562;
  t924 = -0.2 + t923;
  t979 = -0.768*t445;
  t980 = -0.2 + t979;
  p_output1[0]=(t452 + t456 - 6.4*t377*t458 - 6.4*t398*t462 + t467 + t471 - 6.4*t421*t473 - 6.4*t440*t477)*var2[0] + t521*var2[1] + t564*var2[2] + t405*var2[3] - 0.768*t377*var2[4] + t447*var2[5] - 0.768*t421*var2[6];
  p_output1[1]=t572 + (t452 + t456 + t577 + t578)*var2[0] + t587*var2[1] + t606*var2[2] + t575*var2[3];
  p_output1[2]=t572 + (t577 + t578)*var2[0] + t621*var2[1] + t635*var2[2] + t617*var2[3];
  p_output1[3]=t643 + (t467 + t471 + t648 + t649)*var2[0] + t658*var2[1] + t677*var2[2] + t646*var2[5];
  p_output1[4]=t643 + (t648 + t649)*var2[0] + t692*var2[1] + t706*var2[2] + t688*var2[5];
  p_output1[5]=-6.8*Power(t455,2) - 3.2*Power(t458,2) - 3.2*Power(t462,2) - 6.8*Power(t470,2) - 3.2*Power(t473,2) - 3.2*Power(t477,2) + t485 + t505 + t710 + t712;
  p_output1[6]=t734;
  p_output1[7]=t742;
  p_output1[8]=t746;
  p_output1[9]=t747;
  p_output1[10]=t751;
  p_output1[11]=t752;
  p_output1[12]=t521*var2[0] + (t452 + t467 - 6.4*t377*t492 - 6.4*t398*t499 - 6.4*t421*t512 - 6.4*t440*t519 + t765 + t768)*var2[1] + t781*var2[2] + t757*var2[3] - 0.768*t492*var2[4] + t763*var2[5] - 0.768*t512*var2[6];
  p_output1[13]=t784 + t587*var2[0] + (t452 + t765 + t789 + t790)*var2[1] + t798*var2[2] + t787*var2[3];
  p_output1[14]=t784 + t621*var2[0] + (t789 + t790)*var2[1] + t810*var2[2] + t803*var2[3];
  p_output1[15]=t813 + t658*var2[0] + (t467 + t768 + t818 + t819)*var2[1] + t827*var2[2] + t816*var2[5];
  p_output1[16]=t813 + t692*var2[0] + (t818 + t819)*var2[1] + t839*var2[2] + t832*var2[5];
  p_output1[17]=t734;
  p_output1[18]=t482 + t485 + t495 + t497 + t502 + t505 + t515 + t517 + t710 + t712;
  p_output1[19]=t564;
  p_output1[20]=t405;
  p_output1[21]=t843;
  p_output1[22]=t447;
  p_output1[23]=t844;
  p_output1[24]=t564*var2[0] + t781*var2[1];
  p_output1[25]=t606*var2[0] + t798*var2[1] + (-6.4*t542*t597 - 6.4*t538*t604)*var2[2] + t851*var2[3] - 0.768*t597*var2[4];
  p_output1[26]=t635*var2[0] + t810*var2[1] + (-6.4*t542*t629 - 6.4*t538*t633)*var2[2] + t865*var2[3] - 0.768*t629*var2[4];
  p_output1[27]=t677*var2[0] + t827*var2[1] + (-6.4*t562*t668 - 6.4*t558*t675)*var2[2] + t877*var2[5] - 0.768*t668*var2[6];
  p_output1[28]=t706*var2[0] + t839*var2[1] + (-6.4*t562*t700 - 6.4*t558*t704)*var2[2] + t891*var2[5] - 0.768*t700*var2[6];
  p_output1[29]=t742;
  p_output1[30]=t564;
  p_output1[31]=-3.3612 - 6.8*Power(t528,2) - 3.2*Power(t538,2) - 3.2*Power(t542,2) - 6.8*Power(t548,2) - 3.2*Power(t558,2) - 3.2*Power(t562,2);
  p_output1[32]=t916;
  p_output1[33]=t918;
  p_output1[34]=t922;
  p_output1[35]=t924;
  p_output1[36]=t405*var2[0] + t757*var2[1];
  p_output1[37]=t575*var2[0] + t787*var2[1] + t851*var2[2];
  p_output1[38]=t617*var2[0] + t803*var2[1] + t865*var2[2] + (-6.4*t403*t611 - 6.4*t392*t615)*var2[3] - 0.768*t611*var2[4];
  p_output1[39]=t746;
  p_output1[40]=t405;
  p_output1[41]=t916;
  p_output1[42]=-1.58228 - 3.2*Power(t392,2) - 3.2*Power(t403,2);
  p_output1[43]=t947;
  p_output1[44]=-0.768*t377*var2[0] - 0.768*t492*var2[1];
  p_output1[45]=t952 + t953 - 0.768*t597*var2[2];
  p_output1[46]=t952 + t953 - 0.768*t629*var2[2] - 0.768*t611*var2[3];
  p_output1[47]=t747;
  p_output1[48]=t843;
  p_output1[49]=t918;
  p_output1[50]=t947;
  p_output1[51]=-1.2143199999999998;
  p_output1[52]=t447*var2[0] + t763*var2[1];
  p_output1[53]=t646*var2[0] + t816*var2[1] + t877*var2[2];
  p_output1[54]=t688*var2[0] + t832*var2[1] + t891*var2[2] + (-6.4*t445*t682 - 6.4*t434*t686)*var2[5] - 0.768*t682*var2[6];
  p_output1[55]=t751;
  p_output1[56]=t447;
  p_output1[57]=t922;
  p_output1[58]=-1.58228 - 3.2*Power(t434,2) - 3.2*Power(t445,2);
  p_output1[59]=t980;
  p_output1[60]=-0.768*t421*var2[0] - 0.768*t512*var2[1];
  p_output1[61]=t985 + t986 - 0.768*t668*var2[2];
  p_output1[62]=t985 + t986 - 0.768*t700*var2[2] - 0.768*t682*var2[5];
  p_output1[63]=t752;
  p_output1[64]=t844;
  p_output1[65]=t924;
  p_output1[66]=t980;
  p_output1[67]=-1.2143199999999998;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 68, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_MmatDx_five_link_walker.hh"

namespace RightStance
{

void J_MmatDx_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
