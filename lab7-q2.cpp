//2. Write a C++ program to print all natural numbers between 1 to n using recursion.
#include<iostream>
using namespace std;
int numb(int n, int b)//make a function sumtill 2 int 
	{		
		if (b<=n)//b<=n
		{		
		
		cout <<b<<endl;
		numb(n,b+1);		
		}
	return 0;
	
	}
		
int main()
	{
		int n, b ;//declear int 
		cout << "Enter the last number of series :";//ask for the value of n
		cin >> n;
		b=0;		//assi b=0
		numb(n, b);		//cout funct
		return 0;
	}
