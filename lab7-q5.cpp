//5. Write a C++ program to find sum of all even or odd numbers in given range using recursion.
#include<iostream>
using namespace std;
int evensum(int counter, int sum, int limit )//declear func sumtill 3 int 
	{
		if (counter <= limit) //counter <= limt
		{
			sum = (sum + counter);//sum = sum + counter 
			evensum(counter+2, sum, limit);// f(sum , counter, limit )
		}
		else cout<< sum<< endl;
		
		return 0 ; //return
	}
int main ()//main
	{
		int sum, counter, limit;//int 3
		cout<< "Enter the lower  limit :";
		cin>>counter ;//sum input
		if (counter%2==0)
		counter=counter;
		else counter=counter+1;
		sum = 0;//coumter =1
		cout<< "Enter the limit till that we have to sum :";//ask for limit
		cin >> limit;//cin limt
		evensum (counter, sum, limit);//call function
		return 0;
	}
