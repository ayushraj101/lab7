//10. Write a C++ program to generate nth Fibonacci term using recursion.using namespace std;
#include<iostream>
using namespace std;
int numb(int n, int a, int b, int c, int i)//make a function sumtill 2 int 
	{		
		if (i<n)//b<=n
		{		
		a=b+c;
		b= c; 
		c=a;
		cout <<a<< "  ";
		i++;
		numb(n, a, b, c, i);		
		}
	else cout<< endl;
	return 0;
	
	}
		
int main()
	{
		int n, a, b, c=1, i=0 ;//declear int 
		cout << "Enter the number till the will go series :";//ask for the value of n
		cin >> n;
		b=0;		//assi b=0
		numb(n, a, b, c, i);		//cout funct
		return 0;
	}
