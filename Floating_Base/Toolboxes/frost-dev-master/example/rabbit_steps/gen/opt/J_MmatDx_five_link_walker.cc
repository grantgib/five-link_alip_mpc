/*
 * Automatically Generated from Mathematica.
 * Tue 7 Apr 2020 01:51:36 GMT-04:00
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
  double t4435;
  double t2293;
  double t2393;
  double t4436;
  double t4447;
  double t578;
  double t4448;
  double t4449;
  double t4450;
  double t4458;
  double t4459;
  double t4472;
  double t4473;
  double t4476;
  double t4422;
  double t4444;
  double t4445;
  double t4446;
  double t4451;
  double t4452;
  double t4513;
  double t4508;
  double t4509;
  double t4514;
  double t4518;
  double t4519;
  double t4520;
  double t4528;
  double t4529;
  double t4532;
  double t4533;
  double t4534;
  double t4510;
  double t4515;
  double t4516;
  double t4517;
  double t4521;
  double t4522;
  double t4454;
  double t4455;
  double t4456;
  double t4552;
  double t4553;
  double t4554;
  double t4498;
  double t4492;
  double t4493;
  double t4494;
  double t4495;
  double t4499;
  double t4524;
  double t4525;
  double t4526;
  double t4567;
  double t4568;
  double t4569;
  double t4542;
  double t4538;
  double t4539;
  double t4540;
  double t4541;
  double t4543;
  double t4556;
  double t4557;
  double t4558;
  double t4560;
  double t4561;
  double t4563;
  double t4564;
  double t4565;
  double t4571;
  double t4572;
  double t4573;
  double t4575;
  double t4576;
  double t4578;
  double t4579;
  double t4580;
  double t4633;
  double t4634;
  double t4635;
  double t4637;
  double t4638;
  double t4639;
  double t4653;
  double t4654;
  double t4655;
  double t4657;
  double t4658;
  double t4659;
  double t4457;
  double t4481;
  double t4484;
  double t4489;
  double t4501;
  double t4502;
  double t4503;
  double t4504;
  double t4670;
  double t4671;
  double t4672;
  double t4673;
  double t4674;
  double t4555;
  double t4559;
  double t4584;
  double t4585;
  double t4586;
  double t4587;
  double t4588;
  double t4589;
  double t4590;
  double t4591;
  double t4592;
  double t4593;
  double t4627;
  double t4628;
  double t4629;
  double t4630;
  double t4631;
  double t4632;
  double t4636;
  double t4640;
  double t4641;
  double t4643;
  double t4644;
  double t4645;
  double t4693;
  double t4694;
  double t4695;
  double t4675;
  double t4676;
  double t4677;
  double t4680;
  double t4681;
  double t4684;
  double t4685;
  double t4686;
  double t4687;
  double t4688;
  double t4689;
  double t4692;
  double t4697;
  double t4698;
  double t4702;
  double t4726;
  double t4727;
  double t4704;
  double t4729;
  double t4730;
  double t4706;
  double t4527;
  double t4535;
  double t4536;
  double t4537;
  double t4545;
  double t4546;
  double t4547;
  double t4548;
  double t4741;
  double t4742;
  double t4743;
  double t4744;
  double t4745;
  double t4570;
  double t4574;
  double t4604;
  double t4605;
  double t4606;
  double t4607;
  double t4608;
  double t4609;
  double t4610;
  double t4611;
  double t4612;
  double t4613;
  double t4647;
  double t4648;
  double t4649;
  double t4650;
  double t4651;
  double t4652;
  double t4656;
  double t4660;
  double t4661;
  double t4663;
  double t4664;
  double t4665;
  double t4764;
  double t4765;
  double t4766;
  double t4746;
  double t4747;
  double t4748;
  double t4751;
  double t4752;
  double t4755;
  double t4756;
  double t4757;
  double t4758;
  double t4759;
  double t4760;
  double t4763;
  double t4768;
  double t4769;
  double t4773;
  double t4797;
  double t4798;
  double t4775;
  double t4800;
  double t4801;
  double t4777;
  double t4594;
  double t4595;
  double t4601;
  double t4602;
  double t4614;
  double t4615;
  double t4621;
  double t4622;
  double t4596;
  double t4597;
  double t4598;
  double t4599;
  double t4600;
  double t4603;
  double t4616;
  double t4617;
  double t4618;
  double t4619;
  double t4620;
  double t4623;
  double t4624;
  double t4857;
  double t4868;
  double t4690;
  double t4878;
  double t4696;
  double t4699;
  double t4700;
  double t4703;
  double t4705;
  double t4707;
  double t4887;
  double t4716;
  double t4717;
  double t4718;
  double t4888;
  double t4712;
  double t4713;
  double t4714;
  double t4889;
  double t4892;
  double t4893;
  double t4724;
  double t4897;
  double t4728;
  double t4731;
  double t4732;
  double t4899;
  double t4734;
  double t4735;
  double t4736;
  double t4863;
  double t4871;
  double t4761;
  double t4881;
  double t4767;
  double t4770;
  double t4771;
  double t4774;
  double t4776;
  double t4778;
  double t4916;
  double t4787;
  double t4788;
  double t4789;
  double t4917;
  double t4783;
  double t4784;
  double t4785;
  double t4918;
  double t4921;
  double t4922;
  double t4795;
  double t4926;
  double t4799;
  double t4802;
  double t4803;
  double t4928;
  double t4805;
  double t4806;
  double t4807;
  double t4829;
  double t4830;
  double t4831;
  double t4832;
  double t4833;
  double t4834;
  double t4835;
  double t4836;
  double t4837;
  double t4812;
  double t4813;
  double t4814;
  double t4815;
  double t4626;
  double t4642;
  double t4646;
  double t4662;
  double t4666;
  double t4667;
  double t4500;
  double t4505;
  double t4506;
  double t4544;
  double t4549;
  double t4550;
  double t4877;
  double t4879;
  double t4880;
  double t4882;
  double t4883;
  double t4884;
  double t4898;
  double t4900;
  double t4901;
  double t4701;
  double t4708;
  double t4709;
  double t4911;
  double t4912;
  double t4913;
  double t4733;
  double t4737;
  double t4738;
  double t4927;
  double t4929;
  double t4930;
  double t4772;
  double t4779;
  double t4780;
  double t4940;
  double t4941;
  double t4942;
  double t4804;
  double t4808;
  double t4809;
  double t4838;
  double t4839;
  double t4840;
  double t4841;
  double t4842;
  double t4843;
  double t4844;
  double t4845;
  double t4858;
  double t4859;
  double t4860;
  double t4890;
  double t4678;
  double t4952;
  double t4953;
  double t4954;
  double t4904;
  double t4905;
  double t4906;
  double t4715;
  double t4719;
  double t4720;
  double t4964;
  double t4965;
  double t4966;
  double t4967;
  double t4968;
  double t4846;
  double t4847;
  double t4848;
  double t4849;
  double t5016;
  double t5017;
  double t5018;
  double t5019;
  double t5055;
  double t5056;
  double t4850;
  double t4946;
  double t5020;
  double t5021;
  double t5049;
  double t5050;
  double t4864;
  double t4865;
  double t4866;
  double t4919;
  double t4749;
  double t4978;
  double t4979;
  double t4980;
  double t4933;
  double t4934;
  double t4935;
  double t4786;
  double t4790;
  double t4791;
  double t4990;
  double t4991;
  double t4992;
  double t4993;
  double t4994;
  double t4851;
  double t4852;
  double t4853;
  double t4854;
  double t5022;
  double t5023;
  double t5024;
  double t5025;
  double t5088;
  double t5089;
  double t4855;
  double t4947;
  double t5026;
  double t5027;
  double t5082;
  double t5083;
  t4435 = Cos(var1[3]);
  t2293 = Cos(var1[4]);
  t2393 = Sin(var1[3]);
  t4436 = Sin(var1[4]);
  t4447 = Sin(var1[2]);
  t578 = Cos(var1[2]);
  t4448 = t4435*t2293;
  t4449 = -1.*t2393*t4436;
  t4450 = t4448 + t4449;
  t4458 = -1.*t2293;
  t4459 = 1. + t4458;
  t4472 = 0.4*t4459;
  t4473 = 0.64*t2293;
  t4476 = t4472 + t4473;
  t4422 = -1.*t2293*t2393;
  t4444 = -1.*t4435*t4436;
  t4445 = t4422 + t4444;
  t4446 = t578*t4445;
  t4451 = -1.*t4447*t4450;
  t4452 = t4446 + t4451;
  t4513 = Cos(var1[5]);
  t4508 = Cos(var1[6]);
  t4509 = Sin(var1[5]);
  t4514 = Sin(var1[6]);
  t4518 = t4513*t4508;
  t4519 = -1.*t4509*t4514;
  t4520 = t4518 + t4519;
  t4528 = -1.*t4508;
  t4529 = 1. + t4528;
  t4532 = 0.4*t4529;
  t4533 = 0.64*t4508;
  t4534 = t4532 + t4533;
  t4510 = -1.*t4508*t4509;
  t4515 = -1.*t4513*t4514;
  t4516 = t4510 + t4515;
  t4517 = t578*t4516;
  t4521 = -1.*t4447*t4520;
  t4522 = t4517 + t4521;
  t4454 = -1.*t4435*t4447;
  t4455 = -1.*t578*t2393;
  t4456 = t4454 + t4455;
  t4552 = t578*t4435;
  t4553 = -1.*t4447*t2393;
  t4554 = t4552 + t4553;
  t4498 = t578*t4450;
  t4492 = t2293*t2393;
  t4493 = t4435*t4436;
  t4494 = t4492 + t4493;
  t4495 = -1.*t4447*t4494;
  t4499 = t4495 + t4498;
  t4524 = -1.*t4513*t4447;
  t4525 = -1.*t578*t4509;
  t4526 = t4524 + t4525;
  t4567 = t578*t4513;
  t4568 = -1.*t4447*t4509;
  t4569 = t4567 + t4568;
  t4542 = t578*t4520;
  t4538 = t4508*t4509;
  t4539 = t4513*t4514;
  t4540 = t4538 + t4539;
  t4541 = -1.*t4447*t4540;
  t4543 = t4541 + t4542;
  t4556 = t4435*t4447;
  t4557 = t578*t2393;
  t4558 = t4556 + t4557;
  t4560 = t4447*t4445;
  t4561 = t4560 + t4498;
  t4563 = t578*t4494;
  t4564 = t4447*t4450;
  t4565 = t4563 + t4564;
  t4571 = t4513*t4447;
  t4572 = t578*t4509;
  t4573 = t4571 + t4572;
  t4575 = t4447*t4516;
  t4576 = t4575 + t4542;
  t4578 = t578*t4540;
  t4579 = t4447*t4520;
  t4580 = t4578 + t4579;
  t4633 = t4476*t2393;
  t4634 = 0.24*t4435*t4436;
  t4635 = t4633 + t4634;
  t4637 = t4435*t4476;
  t4638 = -0.24*t2393*t4436;
  t4639 = t4637 + t4638;
  t4653 = t4534*t4509;
  t4654 = 0.24*t4513*t4514;
  t4655 = t4653 + t4654;
  t4657 = t4513*t4534;
  t4658 = -0.24*t4509*t4514;
  t4659 = t4657 + t4658;
  t4457 = -0.748*t4456;
  t4481 = t4476*t4436;
  t4484 = -0.24*t2293*t4436;
  t4489 = t4481 + t4484;
  t4501 = t4476*t2293;
  t4502 = Power(t4436,2);
  t4503 = 0.24*t4502;
  t4504 = t4501 + t4503;
  t4670 = -1.*t4435*t2293;
  t4671 = t2393*t4436;
  t4672 = t4670 + t4671;
  t4673 = t4447*t4672;
  t4674 = t4446 + t4673;
  t4555 = -13.6*t4456*t4554;
  t4559 = -13.6*t4558*t4554;
  t4584 = Power(t4456,2);
  t4585 = -6.8*t4584;
  t4586 = -6.8*t4456*t4558;
  t4587 = Power(t4554,2);
  t4588 = -6.8*t4587;
  t4589 = -1.*t578*t4435;
  t4590 = t4447*t2393;
  t4591 = t4589 + t4590;
  t4592 = -6.8*t4554*t4591;
  t4593 = -1.*t4447*t4445;
  t4627 = Power(t4435,2);
  t4628 = 0.11*t4627;
  t4629 = Power(t2393,2);
  t4630 = 0.11*t4629;
  t4631 = t4628 + t4630;
  t4632 = -6.8*t4456*t4631;
  t4636 = -1.*t4635*t4450;
  t4640 = -1.*t4445*t4639;
  t4641 = t4636 + t4640;
  t4643 = t4635*t4494;
  t4644 = t4450*t4639;
  t4645 = t4643 + t4644;
  t4693 = -1.*t4476*t2393;
  t4694 = -0.24*t4435*t4436;
  t4695 = t4693 + t4694;
  t4675 = -0.768*var2[4]*t4674;
  t4676 = -3.2*t4489*t4561;
  t4677 = -3.2*t4504*t4674;
  t4680 = -6.4*t4561*t4565;
  t4681 = -6.4*t4561*t4674;
  t4684 = -3.2*t4561*t4499;
  t4685 = -3.2*t4452*t4565;
  t4686 = t578*t4672;
  t4687 = t4593 + t4686;
  t4688 = -3.2*t4561*t4687;
  t4689 = -3.2*t4452*t4674;
  t4692 = -3.2*t4561*t4641;
  t4697 = t4635*t4450;
  t4698 = t4445*t4639;
  t4702 = -3.2*t4645*t4674;
  t4726 = -0.24*t2293*t2393;
  t4727 = t4726 + t4694;
  t4704 = -1.*t4445*t4635;
  t4729 = 0.24*t4435*t2293;
  t4730 = t4729 + t4638;
  t4706 = -1.*t4639*t4672;
  t4527 = -0.748*t4526;
  t4535 = t4534*t4514;
  t4536 = -0.24*t4508*t4514;
  t4537 = t4535 + t4536;
  t4545 = t4534*t4508;
  t4546 = Power(t4514,2);
  t4547 = 0.24*t4546;
  t4548 = t4545 + t4547;
  t4741 = -1.*t4513*t4508;
  t4742 = t4509*t4514;
  t4743 = t4741 + t4742;
  t4744 = t4447*t4743;
  t4745 = t4517 + t4744;
  t4570 = -13.6*t4526*t4569;
  t4574 = -13.6*t4573*t4569;
  t4604 = Power(t4526,2);
  t4605 = -6.8*t4604;
  t4606 = -6.8*t4526*t4573;
  t4607 = Power(t4569,2);
  t4608 = -6.8*t4607;
  t4609 = -1.*t578*t4513;
  t4610 = t4447*t4509;
  t4611 = t4609 + t4610;
  t4612 = -6.8*t4569*t4611;
  t4613 = -1.*t4447*t4516;
  t4647 = Power(t4513,2);
  t4648 = 0.11*t4647;
  t4649 = Power(t4509,2);
  t4650 = 0.11*t4649;
  t4651 = t4648 + t4650;
  t4652 = -6.8*t4526*t4651;
  t4656 = -1.*t4655*t4520;
  t4660 = -1.*t4516*t4659;
  t4661 = t4656 + t4660;
  t4663 = t4655*t4540;
  t4664 = t4520*t4659;
  t4665 = t4663 + t4664;
  t4764 = -1.*t4534*t4509;
  t4765 = -0.24*t4513*t4514;
  t4766 = t4764 + t4765;
  t4746 = -0.768*var2[6]*t4745;
  t4747 = -3.2*t4537*t4576;
  t4748 = -3.2*t4548*t4745;
  t4751 = -6.4*t4576*t4580;
  t4752 = -6.4*t4576*t4745;
  t4755 = -3.2*t4576*t4543;
  t4756 = -3.2*t4522*t4580;
  t4757 = t578*t4743;
  t4758 = t4613 + t4757;
  t4759 = -3.2*t4576*t4758;
  t4760 = -3.2*t4522*t4745;
  t4763 = -3.2*t4576*t4661;
  t4768 = t4655*t4520;
  t4769 = t4516*t4659;
  t4773 = -3.2*t4665*t4745;
  t4797 = -0.24*t4508*t4509;
  t4798 = t4797 + t4765;
  t4775 = -1.*t4516*t4655;
  t4800 = 0.24*t4513*t4508;
  t4801 = t4800 + t4658;
  t4777 = -1.*t4659*t4743;
  t4594 = -1.*t578*t4450;
  t4595 = t4593 + t4594;
  t4601 = -1.*t578*t4494;
  t4602 = t4601 + t4451;
  t4614 = -1.*t578*t4520;
  t4615 = t4613 + t4614;
  t4621 = -1.*t578*t4540;
  t4622 = t4621 + t4521;
  t4596 = -3.2*t4595*t4561;
  t4597 = Power(t4499,2);
  t4598 = -3.2*t4597;
  t4599 = Power(t4452,2);
  t4600 = -3.2*t4599;
  t4603 = -3.2*t4602*t4565;
  t4616 = -3.2*t4615*t4576;
  t4617 = Power(t4543,2);
  t4618 = -3.2*t4617;
  t4619 = Power(t4522,2);
  t4620 = -3.2*t4619;
  t4623 = -3.2*t4622*t4580;
  t4624 = t4585 + t4586 + t4588 + t4592 + t4596 + t4598 + t4600 + t4603 + t4605 + t4606 + t4608 + t4612 + t4616 + t4618 + t4620 + t4623;
  t4857 = -0.748*t4591;
  t4868 = -13.6*t4456*t4591;
  t4690 = t4585 + t4586 + t4588 + t4592 + t4684 + t4685 + t4688 + t4689;
  t4878 = -6.8*t4591*t4631;
  t4696 = t4695*t4450;
  t4699 = t4494*t4639;
  t4700 = t4696 + t4697 + t4698 + t4699;
  t4703 = -1.*t4445*t4695;
  t4705 = -1.*t4450*t4639;
  t4707 = t4703 + t4704 + t4705 + t4706;
  t4887 = -0.768*var2[4]*t4687;
  t4716 = Power(t2293,2);
  t4717 = -0.24*t4716;
  t4718 = t4501 + t4717;
  t4888 = -3.2*t4489*t4452;
  t4712 = -1.*t4476*t4436;
  t4713 = 0.24*t2293*t4436;
  t4714 = t4712 + t4713;
  t4889 = -3.2*t4504*t4687;
  t4892 = -6.4*t4499*t4452;
  t4893 = -6.4*t4452*t4687;
  t4724 = t4684 + t4685 + t4688 + t4689;
  t4897 = -3.2*t4452*t4641;
  t4728 = t4727*t4450;
  t4731 = t4494*t4730;
  t4732 = t4728 + t4697 + t4698 + t4731;
  t4899 = -3.2*t4645*t4687;
  t4734 = -1.*t4445*t4727;
  t4735 = -1.*t4450*t4730;
  t4736 = t4734 + t4704 + t4735 + t4706;
  t4863 = -0.748*t4611;
  t4871 = -13.6*t4526*t4611;
  t4761 = t4605 + t4606 + t4608 + t4612 + t4755 + t4756 + t4759 + t4760;
  t4881 = -6.8*t4611*t4651;
  t4767 = t4766*t4520;
  t4770 = t4540*t4659;
  t4771 = t4767 + t4768 + t4769 + t4770;
  t4774 = -1.*t4516*t4766;
  t4776 = -1.*t4520*t4659;
  t4778 = t4774 + t4775 + t4776 + t4777;
  t4916 = -0.768*var2[6]*t4758;
  t4787 = Power(t4508,2);
  t4788 = -0.24*t4787;
  t4789 = t4545 + t4788;
  t4917 = -3.2*t4537*t4522;
  t4783 = -1.*t4534*t4514;
  t4784 = 0.24*t4508*t4514;
  t4785 = t4783 + t4784;
  t4918 = -3.2*t4548*t4758;
  t4921 = -6.4*t4543*t4522;
  t4922 = -6.4*t4522*t4758;
  t4795 = t4755 + t4756 + t4759 + t4760;
  t4926 = -3.2*t4522*t4661;
  t4799 = t4798*t4520;
  t4802 = t4540*t4801;
  t4803 = t4799 + t4768 + t4769 + t4802;
  t4928 = -3.2*t4665*t4758;
  t4805 = -1.*t4516*t4798;
  t4806 = -1.*t4520*t4801;
  t4807 = t4805 + t4775 + t4806 + t4777;
  t4829 = -6.8*t4456*t4554;
  t4830 = -6.8*t4558*t4554;
  t4831 = -3.2*t4561*t4452;
  t4832 = -3.2*t4499*t4565;
  t4833 = -6.8*t4526*t4569;
  t4834 = -6.8*t4573*t4569;
  t4835 = -3.2*t4576*t4522;
  t4836 = -3.2*t4543*t4580;
  t4837 = t4829 + t4830 + t4831 + t4832 + t4833 + t4834 + t4835 + t4836;
  t4812 = Power(t578,2);
  t4813 = -12.*t4812;
  t4814 = Power(t4447,2);
  t4815 = -12.*t4814;
  t4626 = 2.88*t4447;
  t4642 = -3.2*t4499*t4641;
  t4646 = -3.2*t4452*t4645;
  t4662 = -3.2*t4543*t4661;
  t4666 = -3.2*t4522*t4665;
  t4667 = t4626 + t4632 + t4642 + t4646 + t4652 + t4662 + t4666;
  t4500 = -3.2*t4489*t4499;
  t4505 = -3.2*t4504*t4452;
  t4506 = t4457 + t4500 + t4505;
  t4544 = -3.2*t4537*t4543;
  t4549 = -3.2*t4548*t4522;
  t4550 = t4527 + t4544 + t4549;
  t4877 = 2.88*t578;
  t4879 = -3.2*t4602*t4641;
  t4880 = -3.2*t4595*t4645;
  t4882 = -3.2*t4622*t4661;
  t4883 = -3.2*t4615*t4665;
  t4884 = t4877 + t4878 + t4879 + t4880 + t4881 + t4882 + t4883;
  t4898 = -3.2*t4452*t4700;
  t4900 = -3.2*t4499*t4707;
  t4901 = t4878 + t4897 + t4898 + t4899 + t4900;
  t4701 = -3.2*t4561*t4700;
  t4708 = -3.2*t4565*t4707;
  t4709 = t4632 + t4692 + t4701 + t4702 + t4708;
  t4911 = -3.2*t4452*t4732;
  t4912 = -3.2*t4499*t4736;
  t4913 = t4897 + t4911 + t4899 + t4912;
  t4733 = -3.2*t4561*t4732;
  t4737 = -3.2*t4565*t4736;
  t4738 = t4692 + t4733 + t4702 + t4737;
  t4927 = -3.2*t4522*t4771;
  t4929 = -3.2*t4543*t4778;
  t4930 = t4881 + t4926 + t4927 + t4928 + t4929;
  t4772 = -3.2*t4576*t4771;
  t4779 = -3.2*t4580*t4778;
  t4780 = t4652 + t4763 + t4772 + t4773 + t4779;
  t4940 = -3.2*t4522*t4803;
  t4941 = -3.2*t4543*t4807;
  t4942 = t4926 + t4940 + t4928 + t4941;
  t4804 = -3.2*t4576*t4803;
  t4808 = -3.2*t4580*t4807;
  t4809 = t4763 + t4804 + t4773 + t4808;
  t4838 = -2.88*t578;
  t4839 = -6.8*t4554*t4631;
  t4840 = -3.2*t4565*t4641;
  t4841 = -3.2*t4561*t4645;
  t4842 = -6.8*t4569*t4651;
  t4843 = -3.2*t4580*t4661;
  t4844 = -3.2*t4576*t4665;
  t4845 = t4838 + t4839 + t4840 + t4841 + t4842 + t4843 + t4844;
  t4858 = -3.2*t4504*t4595;
  t4859 = -3.2*t4489*t4602;
  t4860 = t4857 + t4858 + t4859;
  t4890 = t4857 + t4888 + t4889;
  t4678 = t4457 + t4676 + t4677;
  t4952 = -3.2*t4504*t4700;
  t4953 = -3.2*t4489*t4707;
  t4954 = t4952 + t4953;
  t4904 = -3.2*t4718*t4499;
  t4905 = -3.2*t4714*t4452;
  t4906 = t4904 + t4888 + t4905 + t4889;
  t4715 = -3.2*t4714*t4561;
  t4719 = -3.2*t4718*t4565;
  t4720 = t4676 + t4715 + t4719 + t4677;
  t4964 = -3.2*t4718*t4641;
  t4965 = -3.2*t4714*t4645;
  t4966 = -3.2*t4504*t4732;
  t4967 = -3.2*t4489*t4736;
  t4968 = t4964 + t4965 + t4966 + t4967;
  t4846 = -0.748*t4554;
  t4847 = -3.2*t4504*t4561;
  t4848 = -3.2*t4489*t4565;
  t4849 = t4846 + t4847 + t4848;
  t5016 = -0.748*t4631;
  t5017 = -3.2*t4489*t4641;
  t5018 = -3.2*t4504*t4645;
  t5019 = -0.67 + t5016 + t5017 + t5018;
  t5055 = -0.768*var2[1]*t4687;
  t5056 = -0.768*var2[0]*t4674;
  t4850 = -0.768*t4561;
  t4946 = -0.768*t4452;
  t5020 = -0.768*t4645;
  t5021 = -0.2 + t5020;
  t5049 = -0.768*t4504;
  t5050 = -0.2 + t5049;
  t4864 = -3.2*t4548*t4615;
  t4865 = -3.2*t4537*t4622;
  t4866 = t4863 + t4864 + t4865;
  t4919 = t4863 + t4917 + t4918;
  t4749 = t4527 + t4747 + t4748;
  t4978 = -3.2*t4548*t4771;
  t4979 = -3.2*t4537*t4778;
  t4980 = t4978 + t4979;
  t4933 = -3.2*t4789*t4543;
  t4934 = -3.2*t4785*t4522;
  t4935 = t4933 + t4917 + t4934 + t4918;
  t4786 = -3.2*t4785*t4576;
  t4790 = -3.2*t4789*t4580;
  t4791 = t4747 + t4786 + t4790 + t4748;
  t4990 = -3.2*t4789*t4661;
  t4991 = -3.2*t4785*t4665;
  t4992 = -3.2*t4548*t4803;
  t4993 = -3.2*t4537*t4807;
  t4994 = t4990 + t4991 + t4992 + t4993;
  t4851 = -0.748*t4569;
  t4852 = -3.2*t4548*t4576;
  t4853 = -3.2*t4537*t4580;
  t4854 = t4851 + t4852 + t4853;
  t5022 = -0.748*t4651;
  t5023 = -3.2*t4537*t4661;
  t5024 = -3.2*t4548*t4665;
  t5025 = -0.67 + t5022 + t5023 + t5024;
  t5088 = -0.768*var2[1]*t4758;
  t5089 = -0.768*var2[0]*t4745;
  t4855 = -0.768*t4576;
  t4947 = -0.768*t4522;
  t5026 = -0.768*t4665;
  t5027 = -0.2 + t5026;
  t5082 = -0.768*t4548;
  t5083 = -0.2 + t5082;
  p_output1[0]=(t4555 + t4559 - 6.4*t4452*t4561 - 6.4*t4499*t4565 + t4570 + t4574 - 6.4*t4522*t4576 - 6.4*t4543*t4580)*var2[0] + t4624*var2[1] + t4667*var2[2] + t4506*var2[3] - 0.768*t4452*var2[4] + t4550*var2[5] - 0.768*t4522*var2[6];
  p_output1[1]=t4675 + (t4555 + t4559 + t4680 + t4681)*var2[0] + t4690*var2[1] + t4709*var2[2] + t4678*var2[3];
  p_output1[2]=t4675 + (t4680 + t4681)*var2[0] + t4724*var2[1] + t4738*var2[2] + t4720*var2[3];
  p_output1[3]=t4746 + (t4570 + t4574 + t4751 + t4752)*var2[0] + t4761*var2[1] + t4780*var2[2] + t4749*var2[5];
  p_output1[4]=t4746 + (t4751 + t4752)*var2[0] + t4795*var2[1] + t4809*var2[2] + t4791*var2[5];
  p_output1[5]=-6.8*Power(t4558,2) - 3.2*Power(t4561,2) - 3.2*Power(t4565,2) - 6.8*Power(t4573,2) - 3.2*Power(t4576,2) - 3.2*Power(t4580,2) + t4588 + t4608 + t4813 + t4815;
  p_output1[6]=t4837;
  p_output1[7]=t4845;
  p_output1[8]=t4849;
  p_output1[9]=t4850;
  p_output1[10]=t4854;
  p_output1[11]=t4855;
  p_output1[12]=t4624*var2[0] + (t4555 + t4570 - 6.4*t4452*t4595 - 6.4*t4499*t4602 - 6.4*t4522*t4615 - 6.4*t4543*t4622 + t4868 + t4871)*var2[1] + t4884*var2[2] + t4860*var2[3] - 0.768*t4595*var2[4] + t4866*var2[5] - 0.768*t4615*var2[6];
  p_output1[13]=t4887 + t4690*var2[0] + (t4555 + t4868 + t4892 + t4893)*var2[1] + t4901*var2[2] + t4890*var2[3];
  p_output1[14]=t4887 + t4724*var2[0] + (t4892 + t4893)*var2[1] + t4913*var2[2] + t4906*var2[3];
  p_output1[15]=t4916 + t4761*var2[0] + (t4570 + t4871 + t4921 + t4922)*var2[1] + t4930*var2[2] + t4919*var2[5];
  p_output1[16]=t4916 + t4795*var2[0] + (t4921 + t4922)*var2[1] + t4942*var2[2] + t4935*var2[5];
  p_output1[17]=t4837;
  p_output1[18]=t4585 + t4588 + t4598 + t4600 + t4605 + t4608 + t4618 + t4620 + t4813 + t4815;
  p_output1[19]=t4667;
  p_output1[20]=t4506;
  p_output1[21]=t4946;
  p_output1[22]=t4550;
  p_output1[23]=t4947;
  p_output1[24]=t4667*var2[0] + t4884*var2[1];
  p_output1[25]=t4709*var2[0] + t4901*var2[1] + (-6.4*t4645*t4700 - 6.4*t4641*t4707)*var2[2] + t4954*var2[3] - 0.768*t4700*var2[4];
  p_output1[26]=t4738*var2[0] + t4913*var2[1] + (-6.4*t4645*t4732 - 6.4*t4641*t4736)*var2[2] + t4968*var2[3] - 0.768*t4732*var2[4];
  p_output1[27]=t4780*var2[0] + t4930*var2[1] + (-6.4*t4665*t4771 - 6.4*t4661*t4778)*var2[2] + t4980*var2[5] - 0.768*t4771*var2[6];
  p_output1[28]=t4809*var2[0] + t4942*var2[1] + (-6.4*t4665*t4803 - 6.4*t4661*t4807)*var2[2] + t4994*var2[5] - 0.768*t4803*var2[6];
  p_output1[29]=t4845;
  p_output1[30]=t4667;
  p_output1[31]=-3.3612 - 6.8*Power(t4631,2) - 3.2*Power(t4641,2) - 3.2*Power(t4645,2) - 6.8*Power(t4651,2) - 3.2*Power(t4661,2) - 3.2*Power(t4665,2);
  p_output1[32]=t5019;
  p_output1[33]=t5021;
  p_output1[34]=t5025;
  p_output1[35]=t5027;
  p_output1[36]=t4506*var2[0] + t4860*var2[1];
  p_output1[37]=t4678*var2[0] + t4890*var2[1] + t4954*var2[2];
  p_output1[38]=t4720*var2[0] + t4906*var2[1] + t4968*var2[2] + (-6.4*t4504*t4714 - 6.4*t4489*t4718)*var2[3] - 0.768*t4714*var2[4];
  p_output1[39]=t4849;
  p_output1[40]=t4506;
  p_output1[41]=t5019;
  p_output1[42]=-1.58228 - 3.2*Power(t4489,2) - 3.2*Power(t4504,2);
  p_output1[43]=t5050;
  p_output1[44]=-0.768*t4452*var2[0] - 0.768*t4595*var2[1];
  p_output1[45]=t5055 + t5056 - 0.768*t4700*var2[2];
  p_output1[46]=t5055 + t5056 - 0.768*t4732*var2[2] - 0.768*t4714*var2[3];
  p_output1[47]=t4850;
  p_output1[48]=t4946;
  p_output1[49]=t5021;
  p_output1[50]=t5050;
  p_output1[51]=-1.2143199999999998;
  p_output1[52]=t4550*var2[0] + t4866*var2[1];
  p_output1[53]=t4749*var2[0] + t4919*var2[1] + t4980*var2[2];
  p_output1[54]=t4791*var2[0] + t4935*var2[1] + t4994*var2[2] + (-6.4*t4548*t4785 - 6.4*t4537*t4789)*var2[5] - 0.768*t4785*var2[6];
  p_output1[55]=t4854;
  p_output1[56]=t4550;
  p_output1[57]=t5025;
  p_output1[58]=-1.58228 - 3.2*Power(t4537,2) - 3.2*Power(t4548,2);
  p_output1[59]=t5083;
  p_output1[60]=-0.768*t4522*var2[0] - 0.768*t4615*var2[1];
  p_output1[61]=t5088 + t5089 - 0.768*t4771*var2[2];
  p_output1[62]=t5088 + t5089 - 0.768*t4803*var2[2] - 0.768*t4785*var2[5];
  p_output1[63]=t4855;
  p_output1[64]=t4947;
  p_output1[65]=t5027;
  p_output1[66]=t5083;
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
