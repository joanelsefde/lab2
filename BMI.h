#include<iostream>
#include<string>
using namespace std;

class	BMI{
public:
	void BMI_cul();
	void setmass(float mass);
	void setheight(float height);
	float getmass();
	float getheight();
	float getBMI();
	string getcategory();
private:
	float BMIv,m,h;
};

