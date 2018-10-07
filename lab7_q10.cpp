/*
10. Write a C++ program to generate nth Fibonacci term using recursion.
*/
#include<iostream>
	using namespace std;
	


                                                     //recursive function
	void fibbo(int a,int b,int n,int c,int k)
	{
		if(n!=0)                            //condition for termination
		{ 
                       
			c=a+b;
			a=b;                 //interchange
			b=c;
			n--;
                       if(n!=0)
                        c=0;
			fibbo(a,b,n,c,k);
		}
            else
                cout<<"The "<<k<<"th term of Fibonacci Series is "<<c<<endl;   //output
	}


               int main(){                           //main function
		int n;
		cout<<"Enter a value for n=";             //user input
		cin>>n;
		int k=n;
		int a=0,b=1,c;                     //initialisation
		fibbo(0,1,(n-2),c,k);                 //calling the function
		
	}	
