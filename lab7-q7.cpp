//7. Write a C++ program to check whether a number is palindrome or not using recursion.
#include<iostream>
using namespace std;
int inverse(int a, int b, int c, int d, int e)//declear fun inverse 1 input
	{
		if (a>0)
		{
		b=a%10;//b=a%10
		a=a/10;//a=a/10
		c = d+b;//put c = b
		d = c*10;
		inverse (a, b , c, d, e);//call fun
		
		}
		else if (d == e*10)
			{
				cout <<"Yes, it is a plandromic series. " << endl;
			}
		else 
		cout<< "Its not a plandromeic series. "<< endl;
		return 0;//return
	}
int main ()//main
	{
		int a, e, b=0, c= 0, d = 0;
		cout << "Enter the number :";//ask number
		cin>> a;//cin numb
		e=a;
		inverse(a, b , c, d, e);//call fun
		return 0;//return o 
	}
