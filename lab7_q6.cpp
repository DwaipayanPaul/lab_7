/*
 6. Write a C++ program to find reverse of any number using recursion.
  */
#include<iostream>
	#include<cmath>                       //including math library
	using namespace std;
	                                      //Recursive Function
	int nu_rev(int t,int re,int i)
	{
		if(i!=0)                    //terminating condition
		{
		int r=t%10;
		t=t/10;
		i--;
		re=r*pow(10,i)+nu_rev(t,re,i);  //calculation
		}
		return re;
	}
	int main(){                             //main function
		int n;
		                        //Taking Input
		cout<<"Enter a number=";
		cin>>n;
		int k=n;
		int i=0;
		while(k>0){                 //no of digits
			k=k/10;
			i++;
		}
		                          //Output
		cout<<"The reverse number is="<<nu_rev(n,0,i)<<endl;
	}


