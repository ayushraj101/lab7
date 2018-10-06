//8. Write a C++ program to find sum of digits of a given number using recursion.
#include<iostream>
using namespace std;
int inverse(int a, int c)//declear fun inverse 1 input
	{
		int b;//int b
		if (a>0)
		{
		b=a%10;//b=a%10
		a=a/10;//a=a/10
		c = c+ b;//cout b
		inverse (a, c);//call fun
		}
		else 
		cout<<c<< endl;
		return 0;//return
	}
int main ()//main
	{
		int a, c=0;
		cout << "Enter the number whose digits you wanna sum :";//ask number
		cin>> a;//cin numb
		inverse(a, c);//call fun
		return 0;//return o 
	}
