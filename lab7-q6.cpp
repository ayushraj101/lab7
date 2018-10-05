//6. Write a C++ program to find reverse of any number using recursion.
#include<iostream>
using namespace std;
int inverse(int a)//declear fun inverse 1 input
	{
		int b;//int b
		if (a>0)
		{
		b=a%10;//b=a%10
		a=a/10;//a=a/10
		cout << b;//cout b
		inverse (a);//call fun
		}
		else 
		cout<< endl;
		return 0;//return
	}
int main ()//main
	{
		int a;
		cout << "Enter the number you wanna reverse :";//ask number
		cin>> a;//cin numb
		inverse(a);//call fun
		return 0;//return o 
	}
