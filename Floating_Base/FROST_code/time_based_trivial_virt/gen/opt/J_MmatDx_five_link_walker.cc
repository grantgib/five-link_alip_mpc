/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 10:57:14 GMT-04:00
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
  double t321;
  double t312;
  double t313;
  double t324;
  double t332;
  double t300;
  double t333;
  double t334;
  double t335;
  double t343;
  double t344;
  double t345;
  double t346;
  double t349;
  double t316;
  double t329;
  double t330;
  double t331;
  double t336;
  double t337;
  double t372;
  double t369;
  double t370;
  double t373;
  double t377;
  double t378;
  double t379;
  double t387;
  double t388;
  double t389;
  double t390;
  double t391;
  double t371;
  double t374;
  double t375;
  double t376;
  double t380;
  double t381;
  double t339;
  double t340;
  double t341;
  double t409;
  double t410;
  double t411;
  double t357;
  double t353;
  double t354;
  double t355;
  double t356;
  double t358;
  double t383;
  double t384;
  double t385;
  double t424;
  double t425;
  double t426;
  double t399;
  double t395;
  double t396;
  double t397;
  double t398;
  double t400;
  double t413;
  double t414;
  double t415;
  double t417;
  double t418;
  double t420;
  double t421;
  double t422;
  double t428;
  double t429;
  double t430;
  double t432;
  double t433;
  double t435;
  double t436;
  double t437;
  double t490;
  double t491;
  double t492;
  double t494;
  double t495;
  double t496;
  double t510;
  double t511;
  double t512;
  double t514;
  double t515;
  double t516;
  double t342;
  double t350;
  double t351;
  double t352;
  double t360;
  double t361;
  double t362;
  double t363;
  double t527;
  double t528;
  double t529;
  double t530;
  double t531;
  double t412;
  double t416;
  double t441;
  double t442;
  double t443;
  double t444;
  double t445;
  double t446;
  double t447;
  double t448;
  double t449;
  double t450;
  double t484;
  double t485;
  double t486;
  double t487;
  double t488;
  double t489;
  double t493;
  double t497;
  double t498;
  double t500;
  double t501;
  double t502;
  double t550;
  double t551;
  double t552;
  double t532;
  double t533;
  double t534;
  double t537;
  double t538;
  double t541;
  double t542;
  double t543;
  double t544;
  double t545;
  double t546;
  double t549;
  double t554;
  double t555;
  double t559;
  double t583;
  double t584;
  double t561;
  double t586;
  double t587;
  double t563;
  double t386;
  double t392;
  double t393;
  double t394;
  double t402;
  double t403;
  double t404;
  double t405;
  double t598;
  double t599;
  double t600;
  double t601;
  double t602;
  double t427;
  double t431;
  double t461;
  double t462;
  double t463;
  double t464;
  double t465;
  double t466;
  double t467;
  double t468;
  double t469;
  double t470;
  double t504;
  double t505;
  double t506;
  double t507;
  double t508;
  double t509;
  double t513;
  double t517;
  double t518;
  double t520;
  double t521;
  double t522;
  double t621;
  double t622;
  double t623;
  double t603;
  double t604;
  double t605;
  double t608;
  double t609;
  double t612;
  double t613;
  double t614;
  double t615;
  double t616;
  double t617;
  double t620;
  double t625;
  double t626;
  double t630;
  double t654;
  double t655;
  double t632;
  double t657;
  double t658;
  double t634;
  double t451;
  double t452;
  double t458;
  double t459;
  double t471;
  double t472;
  double t478;
  double t479;
  double t453;
  double t454;
  double t455;
  double t456;
  double t457;
  double t460;
  double t473;
  double t474;
  double t475;
  double t476;
  double t477;
  double t480;
  double t481;
  double t714;
  double t725;
  double t547;
  double t735;
  double t553;
  double t556;
  double t557;
  double t560;
  double t562;
  double t564;
  double t744;
  double t573;
  double t574;
  double t575;
  double t745;
  double t569;
  double t570;
  double t571;
  double t746;
  double t749;
  double t750;
  double t581;
  double t754;
  double t585;
  double t588;
  double t589;
  double t756;
  double t591;
  double t592;
  double t593;
  double t720;
  double t728;
  double t618;
  double t738;
  double t624;
  double t627;
  double t628;
  double t631;
  double t633;
  double t635;
  double t773;
  double t644;
  double t645;
  double t646;
  double t774;
  double t640;
  double t641;
  double t642;
  double t775;
  double t778;
  double t779;
  double t652;
  double t783;
  double t656;
  double t659;
  double t660;
  double t785;
  double t662;
  double t663;
  double t664;
  double t686;
  double t687;
  double t688;
  double t689;
  double t690;
  double t691;
  double t692;
  double t693;
  double t694;
  double t669;
  double t670;
  double t671;
  double t672;
  double t483;
  double t499;
  double t503;
  double t519;
  double t523;
  double t524;
  double t359;
  double t364;
  double t365;
  double t401;
  double t406;
  double t407;
  double t734;
  double t736;
  double t737;
  double t739;
  double t740;
  double t741;
  double t755;
  double t757;
  double t758;
  double t558;
  double t565;
  double t566;
  double t768;
  double t769;
  double t770;
  double t590;
  double t594;
  double t595;
  double t784;
  double t786;
  double t787;
  double t629;
  double t636;
  double t637;
  double t797;
  double t798;
  double t799;
  double t661;
  double t665;
  double t666;
  double t695;
  double t696;
  double t697;
  double t698;
  double t699;
  double t700;
  double t701;
  double t702;
  double t715;
  double t716;
  double t717;
  double t747;
  double t535;
  double t809;
  double t810;
  double t811;
  double t761;
  double t762;
  double t763;
  double t572;
  double t576;
  double t577;
  double t821;
  double t822;
  double t823;
  double t824;
  double t825;
  double t703;
  double t704;
  double t705;
  double t706;
  double t873;
  double t874;
  double t875;
  double t876;
  double t912;
  double t913;
  double t707;
  double t803;
  double t877;
  double t878;
  double t906;
  double t907;
  double t721;
  double t722;
  double t723;
  double t776;
  double t606;
  double t835;
  double t836;
  double t837;
  double t790;
  double t791;
  double t792;
  double t643;
  double t647;
  double t648;
  double t847;
  double t848;
  double t849;
  double t850;
  double t851;
  double t708;
  double t709;
  double t710;
  double t711;
  double t879;
  double t880;
  double t881;
  double t882;
  double t945;
  double t946;
  double t712;
  double t804;
  double t883;
  double t884;
  double t939;
  double t940;
  t321 = Cos(var1[3]);
  t312 = Cos(var1[4]);
  t313 = Sin(var1[3]);
  t324 = Sin(var1[4]);
  t332 = Sin(var1[2]);
  t300 = Cos(var1[2]);
  t333 = t321*t312;
  t334 = -1.*t313*t324;
  t335 = t333 + t334;
  t343 = -1.*t312;
  t344 = 1. + t343;
  t345 = 0.4*t344;
  t346 = 0.64*t312;
  t349 = t345 + t346;
  t316 = -1.*t312*t313;
  t329 = -1.*t321*t324;
  t330 = t316 + t329;
  t331 = t300*t330;
  t336 = -1.*t332*t335;
  t337 = t331 + t336;
  t372 = Cos(var1[5]);
  t369 = Cos(var1[6]);
  t370 = Sin(var1[5]);
  t373 = Sin(var1[6]);
  t377 = t372*t369;
  t378 = -1.*t370*t373;
  t379 = t377 + t378;
  t387 = -1.*t369;
  t388 = 1. + t387;
  t389 = 0.4*t388;
  t390 = 0.64*t369;
  t391 = t389 + t390;
  t371 = -1.*t369*t370;
  t374 = -1.*t372*t373;
  t375 = t371 + t374;
  t376 = t300*t375;
  t380 = -1.*t332*t379;
  t381 = t376 + t380;
  t339 = -1.*t321*t332;
  t340 = -1.*t300*t313;
  t341 = t339 + t340;
  t409 = t300*t321;
  t410 = -1.*t332*t313;
  t411 = t409 + t410;
  t357 = t300*t335;
  t353 = t312*t313;
  t354 = t321*t324;
  t355 = t353 + t354;
  t356 = -1.*t332*t355;
  t358 = t356 + t357;
  t383 = -1.*t372*t332;
  t384 = -1.*t300*t370;
  t385 = t383 + t384;
  t424 = t300*t372;
  t425 = -1.*t332*t370;
  t426 = t424 + t425;
  t399 = t300*t379;
  t395 = t369*t370;
  t396 = t372*t373;
  t397 = t395 + t396;
  t398 = -1.*t332*t397;
  t400 = t398 + t399;
  t413 = t321*t332;
  t414 = t300*t313;
  t415 = t413 + t414;
  t417 = t332*t330;
  t418 = t417 + t357;
  t420 = t300*t355;
  t421 = t332*t335;
  t422 = t420 + t421;
  t428 = t372*t332;
  t429 = t300*t370;
  t430 = t428 + t429;
  t432 = t332*t375;
  t433 = t432 + t399;
  t435 = t300*t397;
  t436 = t332*t379;
  t437 = t435 + t436;
  t490 = t349*t313;
  t491 = 0.24*t321*t324;
  t492 = t490 + t491;
  t494 = t321*t349;
  t495 = -0.24*t313*t324;
  t496 = t494 + t495;
  t510 = t391*t370;
  t511 = 0.24*t372*t373;
  t512 = t510 + t511;
  t514 = t372*t391;
  t515 = -0.24*t370*t373;
  t516 = t514 + t515;
  t342 = -0.748*t341;
  t350 = t349*t324;
  t351 = -0.24*t312*t324;
  t352 = t350 + t351;
  t360 = t349*t312;
  t361 = Power(t324,2);
  t362 = 0.24*t361;
  t363 = t360 + t362;
  t527 = -1.*t321*t312;
  t528 = t313*t324;
  t529 = t527 + t528;
  t530 = t332*t529;
  t531 = t331 + t530;
  t412 = -13.6*t341*t411;
  t416 = -13.6*t415*t411;
  t441 = Power(t341,2);
  t442 = -6.8*t441;
  t443 = -6.8*t341*t415;
  t444 = Power(t411,2);
  t445 = -6.8*t444;
  t446 = -1.*t300*t321;
  t447 = t332*t313;
  t448 = t446 + t447;
  t449 = -6.8*t411*t448;
  t450 = -1.*t332*t330;
  t484 = Power(t321,2);
  t485 = 0.11*t484;
  t486 = Power(t313,2);
  t487 = 0.11*t486;
  t488 = t485 + t487;
  t489 = -6.8*t341*t488;
  t493 = -1.*t492*t335;
  t497 = -1.*t330*t496;
  t498 = t493 + t497;
  t500 = t492*t355;
  t501 = t335*t496;
  t502 = t500 + t501;
  t550 = -1.*t349*t313;
  t551 = -0.24*t321*t324;
  t552 = t550 + t551;
  t532 = -0.768*var2[4]*t531;
  t533 = -3.2*t352*t418;
  t534 = -3.2*t363*t531;
  t537 = -6.4*t418*t422;
  t538 = -6.4*t418*t531;
  t541 = -3.2*t418*t358;
  t542 = -3.2*t337*t422;
  t543 = t300*t529;
  t544 = t450 + t543;
  t545 = -3.2*t418*t544;
  t546 = -3.2*t337*t531;
  t549 = -3.2*t418*t498;
  t554 = t492*t335;
  t555 = t330*t496;
  t559 = -3.2*t502*t531;
  t583 = -0.24*t312*t313;
  t584 = t583 + t551;
  t561 = -1.*t330*t492;
  t586 = 0.24*t321*t312;
  t587 = t586 + t495;
  t563 = -1.*t496*t529;
  t386 = -0.748*t385;
  t392 = t391*t373;
  t393 = -0.24*t369*t373;
  t394 = t392 + t393;
  t402 = t391*t369;
  t403 = Power(t373,2);
  t404 = 0.24*t403;
  t405 = t402 + t404;
  t598 = -1.*t372*t369;
  t599 = t370*t373;
  t600 = t598 + t599;
  t601 = t332*t600;
  t602 = t376 + t601;
  t427 = -13.6*t385*t426;
  t431 = -13.6*t430*t426;
  t461 = Power(t385,2);
  t462 = -6.8*t461;
  t463 = -6.8*t385*t430;
  t464 = Power(t426,2);
  t465 = -6.8*t464;
  t466 = -1.*t300*t372;
  t467 = t332*t370;
  t468 = t466 + t467;
  t469 = -6.8*t426*t468;
  t470 = -1.*t332*t375;
  t504 = Power(t372,2);
  t505 = 0.11*t504;
  t506 = Power(t370,2);
  t507 = 0.11*t506;
  t508 = t505 + t507;
  t509 = -6.8*t385*t508;
  t513 = -1.*t512*t379;
  t517 = -1.*t375*t516;
  t518 = t513 + t517;
  t520 = t512*t397;
  t521 = t379*t516;
  t522 = t520 + t521;
  t621 = -1.*t391*t370;
  t622 = -0.24*t372*t373;
  t623 = t621 + t622;
  t603 = -0.768*var2[6]*t602;
  t604 = -3.2*t394*t433;
  t605 = -3.2*t405*t602;
  t608 = -6.4*t433*t437;
  t609 = -6.4*t433*t602;
  t612 = -3.2*t433*t400;
  t613 = -3.2*t381*t437;
  t614 = t300*t600;
  t615 = t470 + t614;
  t616 = -3.2*t433*t615;
  t617 = -3.2*t381*t602;
  t620 = -3.2*t433*t518;
  t625 = t512*t379;
  t626 = t375*t516;
  t630 = -3.2*t522*t602;
  t654 = -0.24*t369*t370;
  t655 = t654 + t622;
  t632 = -1.*t375*t512;
  t657 = 0.24*t372*t369;
  t658 = t657 + t515;
  t634 = -1.*t516*t600;
  t451 = -1.*t300*t335;
  t452 = t450 + t451;
  t458 = -1.*t300*t355;
  t459 = t458 + t336;
  t471 = -1.*t300*t379;
  t472 = t470 + t471;
  t478 = -1.*t300*t397;
  t479 = t478 + t380;
  t453 = -3.2*t452*t418;
  t454 = Power(t358,2);
  t455 = -3.2*t454;
  t456 = Power(t337,2);
  t457 = -3.2*t456;
  t460 = -3.2*t459*t422;
  t473 = -3.2*t472*t433;
  t474 = Power(t400,2);
  t475 = -3.2*t474;
  t476 = Power(t381,2);
  t477 = -3.2*t476;
  t480 = -3.2*t479*t437;
  t481 = t442 + t443 + t445 + t449 + t453 + t455 + t457 + t460 + t462 + t463 + t465 + t469 + t473 + t475 + t477 + t480;
  t714 = -0.748*t448;
  t725 = -13.6*t341*t448;
  t547 = t442 + t443 + t445 + t449 + t541 + t542 + t545 + t546;
  t735 = -6.8*t448*t488;
  t553 = t552*t335;
  t556 = t355*t496;
  t557 = t553 + t554 + t555 + t556;
  t560 = -1.*t330*t552;
  t562 = -1.*t335*t496;
  t564 = t560 + t561 + t562 + t563;
  t744 = -0.768*var2[4]*t544;
  t573 = Power(t312,2);
  t574 = -0.24*t573;
  t575 = t360 + t574;
  t745 = -3.2*t352*t337;
  t569 = -1.*t349*t324;
  t570 = 0.24*t312*t324;
  t571 = t569 + t570;
  t746 = -3.2*t363*t544;
  t749 = -6.4*t358*t337;
  t750 = -6.4*t337*t544;
  t581 = t541 + t542 + t545 + t546;
  t754 = -3.2*t337*t498;
  t585 = t584*t335;
  t588 = t355*t587;
  t589 = t585 + t554 + t555 + t588;
  t756 = -3.2*t502*t544;
  t591 = -1.*t330*t584;
  t592 = -1.*t335*t587;
  t593 = t591 + t561 + t592 + t563;
  t720 = -0.748*t468;
  t728 = -13.6*t385*t468;
  t618 = t462 + t463 + t465 + t469 + t612 + t613 + t616 + t617;
  t738 = -6.8*t468*t508;
  t624 = t623*t379;
  t627 = t397*t516;
  t628 = t624 + t625 + t626 + t627;
  t631 = -1.*t375*t623;
  t633 = -1.*t379*t516;
  t635 = t631 + t632 + t633 + t634;
  t773 = -0.768*var2[6]*t615;
  t644 = Power(t369,2);
  t645 = -0.24*t644;
  t646 = t402 + t645;
  t774 = -3.2*t394*t381;
  t640 = -1.*t391*t373;
  t641 = 0.24*t369*t373;
  t642 = t640 + t641;
  t775 = -3.2*t405*t615;
  t778 = -6.4*t400*t381;
  t779 = -6.4*t381*t615;
  t652 = t612 + t613 + t616 + t617;
  t783 = -3.2*t381*t518;
  t656 = t655*t379;
  t659 = t397*t658;
  t660 = t656 + t625 + t626 + t659;
  t785 = -3.2*t522*t615;
  t662 = -1.*t375*t655;
  t663 = -1.*t379*t658;
  t664 = t662 + t632 + t663 + t634;
  t686 = -6.8*t341*t411;
  t687 = -6.8*t415*t411;
  t688 = -3.2*t418*t337;
  t689 = -3.2*t358*t422;
  t690 = -6.8*t385*t426;
  t691 = -6.8*t430*t426;
  t692 = -3.2*t433*t381;
  t693 = -3.2*t400*t437;
  t694 = t686 + t687 + t688 + t689 + t690 + t691 + t692 + t693;
  t669 = Power(t300,2);
  t670 = -12.*t669;
  t671 = Power(t332,2);
  t672 = -12.*t671;
  t483 = 2.88*t332;
  t499 = -3.2*t358*t498;
  t503 = -3.2*t337*t502;
  t519 = -3.2*t400*t518;
  t523 = -3.2*t381*t522;
  t524 = t483 + t489 + t499 + t503 + t509 + t519 + t523;
  t359 = -3.2*t352*t358;
  t364 = -3.2*t363*t337;
  t365 = t342 + t359 + t364;
  t401 = -3.2*t394*t400;
  t406 = -3.2*t405*t381;
  t407 = t386 + t401 + t406;
  t734 = 2.88*t300;
  t736 = -3.2*t459*t498;
  t737 = -3.2*t452*t502;
  t739 = -3.2*t479*t518;
  t740 = -3.2*t472*t522;
  t741 = t734 + t735 + t736 + t737 + t738 + t739 + t740;
  t755 = -3.2*t337*t557;
  t757 = -3.2*t358*t564;
  t758 = t735 + t754 + t755 + t756 + t757;
  t558 = -3.2*t418*t557;
  t565 = -3.2*t422*t564;
  t566 = t489 + t549 + t558 + t559 + t565;
  t768 = -3.2*t337*t589;
  t769 = -3.2*t358*t593;
  t770 = t754 + t768 + t756 + t769;
  t590 = -3.2*t418*t589;
  t594 = -3.2*t422*t593;
  t595 = t549 + t590 + t559 + t594;
  t784 = -3.2*t381*t628;
  t786 = -3.2*t400*t635;
  t787 = t738 + t783 + t784 + t785 + t786;
  t629 = -3.2*t433*t628;
  t636 = -3.2*t437*t635;
  t637 = t509 + t620 + t629 + t630 + t636;
  t797 = -3.2*t381*t660;
  t798 = -3.2*t400*t664;
  t799 = t783 + t797 + t785 + t798;
  t661 = -3.2*t433*t660;
  t665 = -3.2*t437*t664;
  t666 = t620 + t661 + t630 + t665;
  t695 = -2.88*t300;
  t696 = -6.8*t411*t488;
  t697 = -3.2*t422*t498;
  t698 = -3.2*t418*t502;
  t699 = -6.8*t426*t508;
  t700 = -3.2*t437*t518;
  t701 = -3.2*t433*t522;
  t702 = t695 + t696 + t697 + t698 + t699 + t700 + t701;
  t715 = -3.2*t363*t452;
  t716 = -3.2*t352*t459;
  t717 = t714 + t715 + t716;
  t747 = t714 + t745 + t746;
  t535 = t342 + t533 + t534;
  t809 = -3.2*t363*t557;
  t810 = -3.2*t352*t564;
  t811 = t809 + t810;
  t761 = -3.2*t575*t358;
  t762 = -3.2*t571*t337;
  t763 = t761 + t745 + t762 + t746;
  t572 = -3.2*t571*t418;
  t576 = -3.2*t575*t422;
  t577 = t533 + t572 + t576 + t534;
  t821 = -3.2*t575*t498;
  t822 = -3.2*t571*t502;
  t823 = -3.2*t363*t589;
  t824 = -3.2*t352*t593;
  t825 = t821 + t822 + t823 + t824;
  t703 = -0.748*t411;
  t704 = -3.2*t363*t418;
  t705 = -3.2*t352*t422;
  t706 = t703 + t704 + t705;
  t873 = -0.748*t488;
  t874 = -3.2*t352*t498;
  t875 = -3.2*t363*t502;
  t876 = -0.67 + t873 + t874 + t875;
  t912 = -0.768*var2[1]*t544;
  t913 = -0.768*var2[0]*t531;
  t707 = -0.768*t418;
  t803 = -0.768*t337;
  t877 = -0.768*t502;
  t878 = -0.2 + t877;
  t906 = -0.768*t363;
  t907 = -0.2 + t906;
  t721 = -3.2*t405*t472;
  t722 = -3.2*t394*t479;
  t723 = t720 + t721 + t722;
  t776 = t720 + t774 + t775;
  t606 = t386 + t604 + t605;
  t835 = -3.2*t405*t628;
  t836 = -3.2*t394*t635;
  t837 = t835 + t836;
  t790 = -3.2*t646*t400;
  t791 = -3.2*t642*t381;
  t792 = t790 + t774 + t791 + t775;
  t643 = -3.2*t642*t433;
  t647 = -3.2*t646*t437;
  t648 = t604 + t643 + t647 + t605;
  t847 = -3.2*t646*t518;
  t848 = -3.2*t642*t522;
  t849 = -3.2*t405*t660;
  t850 = -3.2*t394*t664;
  t851 = t847 + t848 + t849 + t850;
  t708 = -0.748*t426;
  t709 = -3.2*t405*t433;
  t710 = -3.2*t394*t437;
  t711 = t708 + t709 + t710;
  t879 = -0.748*t508;
  t880 = -3.2*t394*t518;
  t881 = -3.2*t405*t522;
  t882 = -0.67 + t879 + t880 + t881;
  t945 = -0.768*var2[1]*t615;
  t946 = -0.768*var2[0]*t602;
  t712 = -0.768*t433;
  t804 = -0.768*t381;
  t883 = -0.768*t522;
  t884 = -0.2 + t883;
  t939 = -0.768*t405;
  t940 = -0.2 + t939;
  p_output1[0]=(t412 + t416 - 6.4*t337*t418 - 6.4*t358*t422 + t427 + t431 - 6.4*t381*t433 - 6.4*t400*t437)*var2[0] + t481*var2[1] + t524*var2[2] + t365*var2[3] - 0.768*t337*var2[4] + t407*var2[5] - 0.768*t381*var2[6];
  p_output1[1]=t532 + (t412 + t416 + t537 + t538)*var2[0] + t547*var2[1] + t566*var2[2] + t535*var2[3];
  p_output1[2]=t532 + (t537 + t538)*var2[0] + t581*var2[1] + t595*var2[2] + t577*var2[3];
  p_output1[3]=t603 + (t427 + t431 + t608 + t609)*var2[0] + t618*var2[1] + t637*var2[2] + t606*var2[5];
  p_output1[4]=t603 + (t608 + t609)*var2[0] + t652*var2[1] + t666*var2[2] + t648*var2[5];
  p_output1[5]=-6.8*Power(t415,2) - 3.2*Power(t418,2) - 3.2*Power(t422,2) - 6.8*Power(t430,2) - 3.2*Power(t433,2) - 3.2*Power(t437,2) + t445 + t465 + t670 + t672;
  p_output1[6]=t694;
  p_output1[7]=t702;
  p_output1[8]=t706;
  p_output1[9]=t707;
  p_output1[10]=t711;
  p_output1[11]=t712;
  p_output1[12]=t481*var2[0] + (t412 + t427 - 6.4*t337*t452 - 6.4*t358*t459 - 6.4*t381*t472 - 6.4*t400*t479 + t725 + t728)*var2[1] + t741*var2[2] + t717*var2[3] - 0.768*t452*var2[4] + t723*var2[5] - 0.768*t472*var2[6];
  p_output1[13]=t744 + t547*var2[0] + (t412 + t725 + t749 + t750)*var2[1] + t758*var2[2] + t747*var2[3];
  p_output1[14]=t744 + t581*var2[0] + (t749 + t750)*var2[1] + t770*var2[2] + t763*var2[3];
  p_output1[15]=t773 + t618*var2[0] + (t427 + t728 + t778 + t779)*var2[1] + t787*var2[2] + t776*var2[5];
  p_output1[16]=t773 + t652*var2[0] + (t778 + t779)*var2[1] + t799*var2[2] + t792*var2[5];
  p_output1[17]=t694;
  p_output1[18]=t442 + t445 + t455 + t457 + t462 + t465 + t475 + t477 + t670 + t672;
  p_output1[19]=t524;
  p_output1[20]=t365;
  p_output1[21]=t803;
  p_output1[22]=t407;
  p_output1[23]=t804;
  p_output1[24]=t524*var2[0] + t741*var2[1];
  p_output1[25]=t566*var2[0] + t758*var2[1] + (-6.4*t502*t557 - 6.4*t498*t564)*var2[2] + t811*var2[3] - 0.768*t557*var2[4];
  p_output1[26]=t595*var2[0] + t770*var2[1] + (-6.4*t502*t589 - 6.4*t498*t593)*var2[2] + t825*var2[3] - 0.768*t589*var2[4];
  p_output1[27]=t637*var2[0] + t787*var2[1] + (-6.4*t522*t628 - 6.4*t518*t635)*var2[2] + t837*var2[5] - 0.768*t628*var2[6];
  p_output1[28]=t666*var2[0] + t799*var2[1] + (-6.4*t522*t660 - 6.4*t518*t664)*var2[2] + t851*var2[5] - 0.768*t660*var2[6];
  p_output1[29]=t702;
  p_output1[30]=t524;
  p_output1[31]=-3.3612 - 6.8*Power(t488,2) - 3.2*Power(t498,2) - 3.2*Power(t502,2) - 6.8*Power(t508,2) - 3.2*Power(t518,2) - 3.2*Power(t522,2);
  p_output1[32]=t876;
  p_output1[33]=t878;
  p_output1[34]=t882;
  p_output1[35]=t884;
  p_output1[36]=t365*var2[0] + t717*var2[1];
  p_output1[37]=t535*var2[0] + t747*var2[1] + t811*var2[2];
  p_output1[38]=t577*var2[0] + t763*var2[1] + t825*var2[2] + (-6.4*t363*t571 - 6.4*t352*t575)*var2[3] - 0.768*t571*var2[4];
  p_output1[39]=t706;
  p_output1[40]=t365;
  p_output1[41]=t876;
  p_output1[42]=-1.58228 - 3.2*Power(t352,2) - 3.2*Power(t363,2);
  p_output1[43]=t907;
  p_output1[44]=-0.768*t337*var2[0] - 0.768*t452*var2[1];
  p_output1[45]=t912 + t913 - 0.768*t557*var2[2];
  p_output1[46]=t912 + t913 - 0.768*t589*var2[2] - 0.768*t571*var2[3];
  p_output1[47]=t707;
  p_output1[48]=t803;
  p_output1[49]=t878;
  p_output1[50]=t907;
  p_output1[51]=-1.2143199999999998;
  p_output1[52]=t407*var2[0] + t723*var2[1];
  p_output1[53]=t606*var2[0] + t776*var2[1] + t837*var2[2];
  p_output1[54]=t648*var2[0] + t792*var2[1] + t851*var2[2] + (-6.4*t405*t642 - 6.4*t394*t646)*var2[5] - 0.768*t642*var2[6];
  p_output1[55]=t711;
  p_output1[56]=t407;
  p_output1[57]=t882;
  p_output1[58]=-1.58228 - 3.2*Power(t394,2) - 3.2*Power(t405,2);
  p_output1[59]=t940;
  p_output1[60]=-0.768*t381*var2[0] - 0.768*t472*var2[1];
  p_output1[61]=t945 + t946 - 0.768*t628*var2[2];
  p_output1[62]=t945 + t946 - 0.768*t660*var2[2] - 0.768*t642*var2[5];
  p_output1[63]=t712;
  p_output1[64]=t804;
  p_output1[65]=t884;
  p_output1[66]=t940;
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
