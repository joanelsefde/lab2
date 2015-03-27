#include<iostream>
#include<string>
#include"BMI.h"
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	BMI a;
	int mass,height;
	ifstream inFile("file.in",ios::in);
	ofstream outFile("file.out",ios::out);
	while(inFile>>height>>mass)
	{
		if(height == 0 && mass == 0)
			break;
		a.setmass(mass);
		a.setheight(height);
		a.BMI_cul();
		outFile<<a.getBMI()<<" "<<a.getcategory()<<endl;
	
	}
	return 0;
}




