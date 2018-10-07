/*
9. Write a C++ program to find factorial of any number using recursion.
*/
#include<iostream>
	#include<cmath>         //including math library
	using namespace std;
	                       //Recursive Function
	int nu_rev(int t,int h,int i)
	{
                if(t!=0)              //termination condition
		{
		h=t*nu_rev(t-1,h,i);    //recursion
		}
		return h;
	}
	int main(){                         //main function
		int n;
		                          //Taking Input
		cout<<"Enter a number=";
		cin>>n;
		int k=n;
		                   //Output
		cout<<"The factorial of the number is="<<nu_rev(n,1,k)<<endl;
	}


