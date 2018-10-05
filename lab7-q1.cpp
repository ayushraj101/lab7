//1. Write a C++ program to find power of any number using recursion.
#include<iostream>
using namespace std;
int powfucn (int n, int a, int b)//make a power function
	{	
		b++	;//n*n , b++	
		if (b <=a) 
		return n*powfucn(n, a, b); //which multiple it by itself till b <=a
		else return 1;
			  

	}

int main ()
	{
		int n, a, b=0;
		cout<<"enter the number :"; //input values
		cin>> n;		    
		cout<< "enter the power :" ;
		cin >> a;
		cout <<n<<"^"<<a<<"=" <<powfucn(n, a, b)<< endl;  //call the function
		return 0;
	}
