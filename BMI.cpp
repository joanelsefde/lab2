#include"BMI.h"
void BMI::BMI_cul()
{
	BMIv = m/((h/100)*(h/100)); 
}
void BMI::setmass(float mass)
{
	m = mass;
}
void BMI::setheight(float height)
{
	h = height;
}
float BMI::getmass()
{
	return m;
}
float BMI::getheight()
{
	return h;
}
float BMI::getBMI()
{
	return BMIv;
}
string BMI::getcategory()
{
	string A = "Very severely underweight";
	string B = "Severely underweight";
	string C = "Underweight";
	string D = "Normal";
	string E = "Overweight";
	string F = "Obese ClassI(Moderately obese)";
	string G = "Obese ClassII(Severely obese)";
	string H = "Obese ClassIII(Very severely obese)";
	if(BMIv < 15)
	return A;
	if(15 <= BMIv && BMIv < 16)
	return B;
	if(16 <= BMIv && BMIv < 18.5)
	return C;
	if(18.5 <= BMIv && BMIv < 25)
	return D;
	if(25 <= BMIv && BMIv < 30)
	return E;
	if(30 <= BMIv && BMIv < 35)
	return F;
	if(35 <= BMIv && BMIv < 40)
	return G;
	if(BMIv >= 40)
	return H;
}
