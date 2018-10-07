/*
8. Write a C++ program to find sum of digits of a given number using recursion.
*/
#include<iostream>
	#include<cmath>        //including math library
	using namespace std;
	                         //Recursive Function
	int nu_sum(int t,int re,int i) 
	{
		if(i!=0)            //termination condition
		{
		int r=t%10;
		t=t/10;
		i--;
		re=r+nu_sum(t,re,i);     //calculating the sum : recursion
		}
		return re;
	}
	int main(){
		int n;
		                   //taking input
		cout<<"Enter a number=";
		cin>>n;
		int k=n;
		int i=0;
		while(k>0)                  //no of digits
                   {
			k=k/10;
			i++;
		}
		                         //Output
		cout<<"The sum of the digits is="<<nu_sum(n,0,i)<<endl;
	}


