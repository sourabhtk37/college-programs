#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
	int main()
	{
	long double x,y,z;
	y=-0.9;x=0.85;z=1.25;
	for(double i=1;i<=5;i++)
	{
	x=(17+2*z-y)/20.0;
	y=(z-3*x-18)/20.0;
	z=(25-3*x+3*y)/20.0;
	cout<<"Value at step"<<i<<"x="<<x<<"y="<<y<<"z="<<z<<endl;
	}
	cout<<"The Values by GAUSS SEIDEL METHOD "<<"x="<<x<<endl<<"y="<<y<<endl<<"z="<<z<<endl;
	return 0;
	}
