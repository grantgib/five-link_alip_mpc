/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:22:23 GMT-05:00
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
  double t5238;
  double t3184;
  double t3270;
  double t5245;
  double t5257;
  double t3130;
  double t3362;
  double t5247;
  double t5249;
  double t5337;
  double t5356;
  double t5357;
  double t5358;
  double t5368;
  double t5250;
  double t5259;
  double t5261;
  double t5262;
  double t5263;
  double t5264;
  double t5477;
  double t5496;
  double t5501;
  double t5465;
  double t5466;
  double t5467;
  double t5309;
  double t5319;
  double t5331;
  double t5507;
  double t5508;
  double t5509;
  double t5387;
  double t5388;
  double t5398;
  double t5386;
  double t5410;
  double t5415;
  double t5539;
  double t5529;
  double t5530;
  double t5535;
  double t5542;
  double t5543;
  double t5549;
  double t5550;
  double t5538;
  double t5540;
  double t5551;
  double t5552;
  double t5553;
  double t5576;
  double t5577;
  double t5629;
  double t5630;
  double t5631;
  double t5640;
  double t5641;
  double t5642;
  double t5650;
  double t5651;
  double t5652;
  double t5336;
  double t5435;
  double t5436;
  double t5437;
  double t5447;
  double t5673;
  double t5674;
  double t5370;
  double t5371;
  double t5372;
  double t5502;
  double t5518;
  double t5519;
  double t5524;
  double t5565;
  double t5589;
  double t5590;
  double t5591;
  double t5592;
  double t5596;
  double t5597;
  double t5617;
  double t5618;
  double t5622;
  double t5623;
  double t5624;
  double t5625;
  double t5659;
  double t5660;
  double t5661;
  double t5639;
  double t5643;
  double t5648;
  double t5653;
  double t5654;
  double t5655;
  double t5656;
  double t5657;
  double t5663;
  double t5664;
  double t5665;
  double t5666;
  double t5667;
  double t5707;
  double t5708;
  double t5709;
  double t5675;
  double t5676;
  double t5677;
  double t5680;
  double t5681;
  double t5682;
  double t5683;
  double t5684;
  double t5685;
  double t5686;
  double t5689;
  double t5690;
  double t5695;
  double t5696;
  double t5697;
  double t5698;
  double t5701;
  double t5702;
  double t5747;
  double t5748;
  double t5706;
  double t5750;
  double t5751;
  double t5712;
  double t5721;
  double t5757;
  double t5758;
  double t5725;
  double t5780;
  double t5781;
  double t5782;
  double t5783;
  double t5784;
  double t5786;
  double t5787;
  double t5788;
  double t5789;
  double t5790;
  double t5791;
  double t5792;
  double t5793;
  double t5794;
  double t5796;
  double t5797;
  double t5798;
  double t5799;
  double t5800;
  double t5801;
  double t5564;
  double t5570;
  double t5546;
  double t5547;
  double t5541;
  double t5548;
  double t5554;
  double t5563;
  double t5575;
  double t5583;
  double t5584;
  double t5815;
  double t5820;
  double t5821;
  double t5687;
  double t5829;
  double t5704;
  double t5705;
  double t5710;
  double t5711;
  double t5713;
  double t5716;
  double t5722;
  double t5723;
  double t5724;
  double t5726;
  double t5838;
  double t5732;
  double t5733;
  double t5734;
  double t5839;
  double t5736;
  double t5737;
  double t5738;
  double t5840;
  double t5843;
  double t5844;
  double t5845;
  double t5846;
  double t5847;
  double t5848;
  double t5742;
  double t5852;
  double t5749;
  double t5752;
  double t5753;
  double t5854;
  double t5755;
  double t5756;
  double t5759;
  double t5760;
  double t5761;
  double t5762;
  double t5765;
  double t5766;
  double t5767;
  double t5769;
  double t5770;
  double t5771;
  double t5772;
  double t5773;
  double t5774;
  double t5795;
  double t5649;
  double t5658;
  double t5662;
  double t5668;
  double t5669;
  double t5308;
  double t5416;
  double t5449;
  double t5450;
  double t5879;
  double t5880;
  double t5670;
  double t5830;
  double t5831;
  double t5832;
  double t5833;
  double t5834;
  double t5703;
  double t5714;
  double t5715;
  double t5727;
  double t5728;
  double t5853;
  double t5855;
  double t5856;
  double t5857;
  double t5858;
  double t5746;
  double t5754;
  double t5763;
  double t5764;
  double t5768;
  double t5775;
  double t5776;
  double t5869;
  double t5870;
  double t5871;
  double t5872;
  double t5873;
  double t5874;
  double t5875;
  double t5802;
  double t5882;
  double t5926;
  double t5927;
  double t5928;
  double t5816;
  double t5817;
  double t5818;
  double t5841;
  double t5678;
  double t5893;
  double t5894;
  double t5895;
  double t5862;
  double t5863;
  double t5864;
  double t5735;
  double t5739;
  double t5740;
  double t5910;
  double t5911;
  double t5912;
  double t5913;
  double t5914;
  double t5804;
  double t5805;
  double t5806;
  double t5807;
  double t5451;
  double t5931;
  double t5932;
  double t5933;
  double t5964;
  double t5965;
  double t5813;
  double t5887;
  double t5939;
  t5238 = Cos(var1[3]);
  t3184 = Cos(var1[4]);
  t3270 = Sin(var1[3]);
  t5245 = Sin(var1[4]);
  t5257 = Cos(var1[2]);
  t3130 = Sin(var1[2]);
  t3362 = -1.*t3184*t3270;
  t5247 = -1.*t5238*t5245;
  t5249 = t3362 + t5247;
  t5337 = -1.*t3184;
  t5356 = 1. + t5337;
  t5357 = 0.4*t5356;
  t5358 = 0.64*t3184;
  t5368 = t5357 + t5358;
  t5250 = -1.*t3130*t5249;
  t5259 = -1.*t5238*t3184;
  t5261 = t3270*t5245;
  t5262 = t5259 + t5261;
  t5263 = t5257*t5262;
  t5264 = t5250 + t5263;
  t5477 = t5257*t5238;
  t5496 = -1.*t3130*t3270;
  t5501 = t5477 + t5496;
  t5465 = -1.*t5238*t3130;
  t5466 = -1.*t5257*t3270;
  t5467 = t5465 + t5466;
  t5309 = -1.*t5257*t5238;
  t5319 = t3130*t3270;
  t5331 = t5309 + t5319;
  t5507 = t5238*t3130;
  t5508 = t5257*t3270;
  t5509 = t5507 + t5508;
  t5387 = t5238*t3184;
  t5388 = -1.*t3270*t5245;
  t5398 = t5387 + t5388;
  t5386 = t5257*t5249;
  t5410 = -1.*t3130*t5398;
  t5415 = t5386 + t5410;
  t5539 = t5257*t5398;
  t5529 = t3184*t3270;
  t5530 = t5238*t5245;
  t5535 = t5529 + t5530;
  t5542 = t3130*t5249;
  t5543 = t5542 + t5539;
  t5549 = -1.*t5257*t5398;
  t5550 = t5250 + t5549;
  t5538 = -1.*t3130*t5535;
  t5540 = t5538 + t5539;
  t5551 = t5257*t5535;
  t5552 = t3130*t5398;
  t5553 = t5551 + t5552;
  t5576 = t3130*t5262;
  t5577 = t5386 + t5576;
  t5629 = t5368*t3270;
  t5630 = 0.24*t5238*t5245;
  t5631 = t5629 + t5630;
  t5640 = t5238*t5368;
  t5641 = -0.24*t3270*t5245;
  t5642 = t5640 + t5641;
  t5650 = -1.*t5368*t3270;
  t5651 = -0.24*t5238*t5245;
  t5652 = t5650 + t5651;
  t5336 = 0.748*t5331;
  t5435 = t5368*t3184;
  t5436 = Power(t5245,2);
  t5437 = 0.24*t5436;
  t5447 = t5435 + t5437;
  t5673 = t3130*t5535;
  t5674 = t5673 + t5263;
  t5370 = t5368*t5245;
  t5371 = -0.24*t3184*t5245;
  t5372 = t5370 + t5371;
  t5502 = 20.4*t5467*t5501;
  t5518 = 6.8*t5509*t5501;
  t5519 = 20.4*t5467*t5331;
  t5524 = 6.8*t5509*t5331;
  t5565 = -1.*t3130*t5262;
  t5589 = Power(t5467,2);
  t5590 = 13.6*t5589;
  t5591 = 13.6*t5467*t5509;
  t5592 = Power(t5501,2);
  t5596 = 13.6*t5592;
  t5597 = 13.6*t5501*t5331;
  t5617 = Power(t5238,2);
  t5618 = 0.11*t5617;
  t5622 = Power(t3270,2);
  t5623 = 0.11*t5622;
  t5624 = t5618 + t5623;
  t5625 = 6.8*t5331*t5624;
  t5659 = t5631*t5535;
  t5660 = t5398*t5642;
  t5661 = t5659 + t5660;
  t5639 = -1.*t5631*t5398;
  t5643 = -1.*t5249*t5642;
  t5648 = t5639 + t5643;
  t5653 = t5652*t5398;
  t5654 = t5631*t5398;
  t5655 = t5249*t5642;
  t5656 = t5535*t5642;
  t5657 = t5653 + t5654 + t5655 + t5656;
  t5663 = -1.*t5249*t5652;
  t5664 = -1.*t5249*t5631;
  t5665 = -1.*t5398*t5642;
  t5666 = -1.*t5642*t5262;
  t5667 = t5663 + t5664 + t5665 + t5666;
  t5707 = -1.*t5238*t5368;
  t5708 = 0.24*t3270*t5245;
  t5709 = t5707 + t5708;
  t5675 = -0.384*var2[4]*t5674;
  t5676 = 3.2*t5447*t5674;
  t5677 = 3.2*t5372*t5577;
  t5680 = 6.4*t5543*t5415;
  t5681 = 3.2*t5553*t5264;
  t5682 = 3.2*t5415*t5674;
  t5683 = t5551 + t5565;
  t5684 = 3.2*t5543*t5683;
  t5685 = 3.2*t5540*t5577;
  t5686 = 6.4*t5264*t5577;
  t5689 = Power(t5543,2);
  t5690 = 6.4*t5689;
  t5695 = 6.4*t5543*t5674;
  t5696 = 6.4*t5553*t5577;
  t5697 = Power(t5577,2);
  t5698 = 6.4*t5697;
  t5701 = 3.2*t5661*t5674;
  t5702 = 3.2*t5648*t5577;
  t5747 = -0.24*t3184*t3270;
  t5748 = t5747 + t5651;
  t5706 = -1.*t5535*t5642;
  t5750 = 0.24*t5238*t3184;
  t5751 = t5750 + t5641;
  t5712 = -1.*t5631*t5262;
  t5721 = t5249*t5631;
  t5757 = -0.24*t5238*t3184;
  t5758 = t5757 + t5708;
  t5725 = t5642*t5262;
  t5780 = 13.6*t5467*t5501;
  t5781 = 13.6*t5509*t5501;
  t5782 = 6.4*t5543*t5553;
  t5783 = 6.4*t5543*t5577;
  t5784 = t5780 + t5781 + t5782 + t5783;
  t5786 = 6.8*t5589;
  t5787 = 6.8*t5467*t5509;
  t5788 = 6.8*t5592;
  t5789 = 6.8*t5501*t5331;
  t5790 = 3.2*t5543*t5540;
  t5791 = 3.2*t5415*t5553;
  t5792 = 3.2*t5543*t5264;
  t5793 = 3.2*t5415*t5577;
  t5794 = t5786 + t5787 + t5788 + t5789 + t5790 + t5791 + t5792 + t5793;
  t5796 = 6.8*t5467*t5624;
  t5797 = 3.2*t5543*t5648;
  t5798 = 3.2*t5543*t5657;
  t5799 = 3.2*t5661*t5577;
  t5800 = 3.2*t5553*t5667;
  t5801 = t5796 + t5797 + t5798 + t5799 + t5800;
  t5564 = -1.*t5257*t5249;
  t5570 = t5564 + t5565;
  t5546 = -1.*t5257*t5535;
  t5547 = t5546 + t5410;
  t5541 = 6.4*t5540*t5415;
  t5548 = 3.2*t5543*t5547;
  t5554 = 3.2*t5550*t5553;
  t5563 = 6.4*t5415*t5264;
  t5575 = 3.2*t5543*t5570;
  t5583 = 3.2*t5550*t5577;
  t5584 = t5502 + t5518 + t5519 + t5524 + t5541 + t5548 + t5554 + t5563 + t5575 + t5583;
  t5815 = 0.748*t5509;
  t5820 = Power(t5331,2);
  t5821 = 13.6*t5820;
  t5687 = t5502 + t5518 + t5519 + t5524 + t5680 + t5681 + t5682 + t5684 + t5685 + t5686;
  t5829 = 6.8*t5509*t5624;
  t5704 = -1.*t5652*t5398;
  t5705 = -2.*t5249*t5642;
  t5710 = -1.*t5249*t5709;
  t5711 = -2.*t5652*t5262;
  t5713 = t5704 + t5705 + t5706 + t5710 + t5711 + t5712;
  t5716 = 2.*t5249*t5652;
  t5722 = t5652*t5535;
  t5723 = 2.*t5398*t5642;
  t5724 = t5398*t5709;
  t5726 = t5716 + t5721 + t5722 + t5723 + t5724 + t5725;
  t5838 = -0.384*var2[4]*t5683;
  t5732 = Power(t3184,2);
  t5733 = -0.24*t5732;
  t5734 = t5435 + t5733;
  t5839 = 3.2*t5372*t5264;
  t5736 = -1.*t5368*t5245;
  t5737 = 0.24*t3184*t5245;
  t5738 = t5736 + t5737;
  t5840 = 3.2*t5447*t5683;
  t5843 = Power(t5415,2);
  t5844 = 6.4*t5843;
  t5845 = 6.4*t5540*t5264;
  t5846 = Power(t5264,2);
  t5847 = 6.4*t5846;
  t5848 = 6.4*t5415*t5683;
  t5742 = t5680 + t5681 + t5682 + t5684 + t5685 + t5686;
  t5852 = 3.2*t5648*t5264;
  t5749 = t5748*t5398;
  t5752 = t5535*t5751;
  t5753 = t5749 + t5654 + t5655 + t5752;
  t5854 = 3.2*t5661*t5683;
  t5755 = -1.*t5748*t5398;
  t5756 = -1.*t5249*t5751;
  t5759 = -1.*t5249*t5758;
  t5760 = -1.*t5652*t5262;
  t5761 = -1.*t5748*t5262;
  t5762 = t5755 + t5643 + t5706 + t5756 + t5759 + t5760 + t5761 + t5712;
  t5765 = -1.*t5249*t5748;
  t5766 = -1.*t5398*t5751;
  t5767 = t5765 + t5664 + t5766 + t5666;
  t5769 = t5249*t5652;
  t5770 = t5249*t5748;
  t5771 = t5748*t5535;
  t5772 = t5398*t5751;
  t5773 = t5398*t5758;
  t5774 = t5769 + t5770 + t5721 + t5771 + t5660 + t5772 + t5773 + t5725;
  t5795 = -0.5*var2[3]*t5794;
  t5649 = 3.2*t5415*t5648;
  t5658 = 3.2*t5415*t5657;
  t5662 = 3.2*t5661*t5264;
  t5668 = 3.2*t5540*t5667;
  t5669 = t5625 + t5649 + t5658 + t5662 + t5668;
  t5308 = -0.384*var2[4]*t5264;
  t5416 = 3.2*t5372*t5415;
  t5449 = 3.2*t5447*t5264;
  t5450 = t5336 + t5416 + t5449;
  t5879 = 13.6*t5467*t5331;
  t5880 = t5780 + t5879 + t5541 + t5563;
  t5670 = -0.5*var2[2]*t5669;
  t5830 = 3.2*t5550*t5648;
  t5831 = 3.2*t5550*t5657;
  t5832 = 3.2*t5661*t5570;
  t5833 = 3.2*t5547*t5667;
  t5834 = t5829 + t5830 + t5831 + t5832 + t5833;
  t5703 = 6.4*t5657*t5577;
  t5714 = 3.2*t5553*t5713;
  t5715 = 6.4*t5543*t5667;
  t5727 = 3.2*t5543*t5726;
  t5728 = t5625 + t5701 + t5702 + t5703 + t5714 + t5715 + t5727;
  t5853 = 6.4*t5657*t5264;
  t5855 = 3.2*t5540*t5713;
  t5856 = 6.4*t5415*t5667;
  t5857 = 3.2*t5415*t5726;
  t5858 = t5829 + t5852 + t5853 + t5854 + t5855 + t5856 + t5857;
  t5746 = 3.2*t5657*t5577;
  t5754 = 3.2*t5753*t5577;
  t5763 = 3.2*t5553*t5762;
  t5764 = 3.2*t5543*t5667;
  t5768 = 3.2*t5543*t5767;
  t5775 = 3.2*t5543*t5774;
  t5776 = t5701 + t5702 + t5746 + t5754 + t5763 + t5764 + t5768 + t5775;
  t5869 = 3.2*t5657*t5264;
  t5870 = 3.2*t5753*t5264;
  t5871 = 3.2*t5540*t5762;
  t5872 = 3.2*t5415*t5667;
  t5873 = 3.2*t5415*t5767;
  t5874 = 3.2*t5415*t5774;
  t5875 = t5852 + t5869 + t5870 + t5854 + t5871 + t5872 + t5873 + t5874;
  t5802 = -0.5*var2[3]*t5801;
  t5882 = -0.5*var2[3]*t5669;
  t5926 = 6.4*t5657*t5661;
  t5927 = 6.4*t5648*t5667;
  t5928 = t5926 + t5927;
  t5816 = 3.2*t5372*t5550;
  t5817 = 3.2*t5447*t5570;
  t5818 = t5815 + t5816 + t5817;
  t5841 = t5815 + t5839 + t5840;
  t5678 = t5336 + t5676 + t5677;
  t5893 = 3.2*t5372*t5713;
  t5894 = 3.2*t5447*t5726;
  t5895 = t5893 + t5894;
  t5862 = 3.2*t5734*t5415;
  t5863 = 3.2*t5738*t5264;
  t5864 = t5862 + t5839 + t5863 + t5840;
  t5735 = 3.2*t5734*t5543;
  t5739 = 3.2*t5738*t5577;
  t5740 = t5735 + t5676 + t5677 + t5739;
  t5910 = 3.2*t5738*t5657;
  t5911 = 3.2*t5372*t5762;
  t5912 = 3.2*t5734*t5667;
  t5913 = 3.2*t5447*t5774;
  t5914 = t5910 + t5911 + t5912 + t5913;
  t5804 = 0.748*t5467;
  t5805 = 3.2*t5372*t5543;
  t5806 = 3.2*t5447*t5577;
  t5807 = t5804 + t5805 + t5806;
  t5451 = -0.5*var2[3]*t5450;
  t5931 = 3.2*t5447*t5657;
  t5932 = 3.2*t5372*t5667;
  t5933 = t5931 + t5932;
  t5964 = -0.384*var2[0]*t5674;
  t5965 = -0.384*var2[1]*t5683;
  t5813 = -0.384*var2[3]*t5577;
  t5887 = -0.384*var2[3]*t5264;
  t5939 = -0.384*var2[3]*t5657;
  p_output1[0]=(t5308 + t5451 + t5670 - 0.5*(6.4*t5264*t5543 + 6.4*t5540*t5543 + 6.4*t5415*t5553 + 6.4*t5415*t5577 + t5590 + t5591 + t5596 + t5597)*var2[0] - 0.5*t5584*var2[1])*var2[3];
  p_output1[1]=var2[3]*(t5675 - 0.5*(t5590 + t5591 + t5596 + t5597 + t5690 + t5695 + t5696 + t5698)*var2[0] - 0.5*t5687*var2[1] - 0.5*t5728*var2[2] - 0.5*t5678*var2[3]);
  p_output1[2]=var2[3]*(t5675 - 0.5*(t5690 + t5695 + t5696 + t5698)*var2[0] - 0.5*t5742*var2[1] - 0.5*t5776*var2[2] - 0.5*t5740*var2[3]);
  p_output1[3]=-0.5*t5784*var2[3];
  p_output1[4]=t5795;
  p_output1[5]=t5802;
  p_output1[6]=-0.5*t5784*var2[0] - 0.5*t5794*var2[1] - 0.5*t5801*var2[2] - 1.*t5807*var2[3] - 0.384*t5577*var2[4];
  p_output1[7]=t5813;
  p_output1[8]=var2[3]*(-0.5*t5584*var2[0] - 0.5*(6.4*t5415*t5547 + 6.4*t5264*t5550 + 6.4*t5540*t5550 + 6.4*t5415*t5570 + t5590 + t5591 + t5597 + t5821)*var2[1] - 0.5*t5834*var2[2] - 0.5*t5818*var2[3] - 0.384*t5570*var2[4]);
  p_output1[9]=var2[3]*(t5838 - 0.5*t5687*var2[0] - 0.5*(t5590 + t5591 + t5597 + t5821 + t5844 + t5845 + t5847 + t5848)*var2[1] - 0.5*t5858*var2[2] - 0.5*t5841*var2[3]);
  p_output1[10]=var2[3]*(t5838 - 0.5*t5742*var2[0] - 0.5*(t5844 + t5845 + t5847 + t5848)*var2[1] - 0.5*t5875*var2[2] - 0.5*t5864*var2[3]);
  p_output1[11]=t5795;
  p_output1[12]=-0.5*t5880*var2[3];
  p_output1[13]=t5882;
  p_output1[14]=t5308 + t5670 - 0.5*t5794*var2[0] - 0.5*t5880*var2[1] - 1.*t5450*var2[3];
  p_output1[15]=t5887;
  p_output1[16]=(-0.5*t5669*var2[0] - 0.5*t5834*var2[1])*var2[3];
  p_output1[17]=var2[3]*(-0.5*t5728*var2[0] - 0.5*t5858*var2[1] - 0.5*(6.4*Power(t5657,2) + 6.4*Power(t5667,2) + 6.4*t5648*t5713 + 6.4*t5661*t5726)*var2[2] - 0.5*t5895*var2[3] - 0.384*t5726*var2[4]);
  p_output1[18]=var2[3]*(-0.5*t5776*var2[0] - 0.5*t5875*var2[1] - 0.5*(6.4*t5657*t5753 + 6.4*t5648*t5762 + 6.4*t5667*t5767 + 6.4*t5661*t5774)*var2[2] - 0.5*t5914*var2[3] - 0.384*t5774*var2[4]);
  p_output1[19]=t5802;
  p_output1[20]=t5882;
  p_output1[21]=-0.5*t5928*var2[3];
  p_output1[22]=-0.5*t5801*var2[0] - 0.5*t5669*var2[1] - 0.5*t5928*var2[2] - 1.*t5933*var2[3] - 0.384*t5657*var2[4];
  p_output1[23]=t5939;
  p_output1[24]=(-0.5*t5450*var2[0] - 0.5*t5818*var2[1])*var2[3];
  p_output1[25]=(-0.5*t5678*var2[0] - 0.5*t5841*var2[1] - 0.5*t5895*var2[2])*var2[3];
  p_output1[26]=(-0.5*t5740*var2[0] - 0.5*t5864*var2[1] - 0.5*t5914*var2[2])*var2[3];
  p_output1[27]=-0.5*t5807*var2[3];
  p_output1[28]=t5451;
  p_output1[29]=-0.5*t5933*var2[3];
  p_output1[30]=-0.5*t5807*var2[0] - 0.5*t5450*var2[1] - 0.5*t5933*var2[2];
  p_output1[31]=(-0.384*t5264*var2[0] - 0.384*t5570*var2[1])*var2[3];
  p_output1[32]=(t5964 + t5965 - 0.384*t5726*var2[2])*var2[3];
  p_output1[33]=(t5964 + t5965 - 0.384*t5774*var2[2])*var2[3];
  p_output1[34]=t5813;
  p_output1[35]=t5887;
  p_output1[36]=t5939;
  p_output1[37]=-0.384*t5577*var2[0] - 0.384*t5264*var2[1] - 0.384*t5657*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 38, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec4_five_link_walker.hh"

namespace RightStance
{

void J_Ce2_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
