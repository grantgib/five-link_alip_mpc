function fcn = dbezier(coeff,s)

  dcoeff =calculations.diff_coeff(coeff);
	fcn = calculations.bezier_Jessy(dcoeff,s);