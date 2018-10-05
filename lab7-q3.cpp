//3. Write a C++ program to print all even or odd numbers in given range using recursion.
#include <iostream>
using namespace std;
int even(int a, int b)// defi fuct even 3 varr
	{ 
		if (a<b)
		{
		 //incrementing funct 
		cout<< a<< endl;
		even (a+2,b);
		}//  cout a
		return 0;
	}
int main()//main 
	{
		int a, b;// int n,a , b
		cout<<"Enter the lower limit of the even series :";//ask for range
		cin >> a;//cin n a 
		cout <<"Enter the upper limit of the even series :";
		cin>> b;
		if (a%2==0)
		a=a;
		else a=a+1;//if b%2=0 b=b else b=b+1
		even (a, b);//call func
		return 0;
}
