//4. Write a C++ program to find sum of all natural numbers between 1 to n using recursion.
#include<iostream>
using namespace std;
int sumtill(int sum, int counter, int limit )//declear func sumtill 3 int 
	{
		if (counter <= limit) //counter <= limt
		{
			sum = sum + counter;//sum = sum + counter 
			sumtill(sum, counter +1, limit);// f(sum , counter, limit )
		}
		else (cout<< sum)<< endl;
		
		return 0 ; //return
	}
int main ()//main
	{
		int sum, counter, limit;//int 3
		sum = 0;//sum=0
		counter = 1;//coumter =1
		cout<< "Enter the limit till that we have to sum :";//ask for limit
		cin >> limit;//cin limt
		sumtill (sum, counter, limit);//call function
		return 0;
	}
