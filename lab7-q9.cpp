//9. Write a C++ program to find factorial of any number using recursion.
#include<iostream>
using namespace std;
int factorial(int number , int multiplier, int fix)// decl funct 3 varri
	{
		if (number > 0)
			{
				multiplier = multiplier* number;//b= b * a
				number = number-1;//a=a-1	
				factorial(number, multiplier, fix);//recur the fun
			}
		else
		cout <<'('<<fix<<")! = "<<multiplier<< endl; 
		return 0;// return
	}
int main()//main
	{
		int number, multiplier=1, fix;// two int
		cout<< "Enter the number :";// ask the num
		cin>> number;//cin nunmber
		fix=number;
		factorial(number, multiplier, fix);//call fun 
		return 0;//return
	}
