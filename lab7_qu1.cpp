/*
1. Write a C++ program to find power of any number using recursion.
*/
#include <iostream>
using namespace std;


int pow(int n,int p)         //recursion function
{
 if(p>1){                     
   p--;  
   return n*pow(n,p);           //calculation of the power
 }
  if(p<0)
  {
    cout<<"error!!!";             //error message
    return 0;
   }
    
}


int main()                        //main function
{
    int n,p; 
                               //taking input
    cout<<"Enter a number= ";
    cin >> n;
    cout<<"Enter power= ";
    cin >> p;
                               //output
    cout << "power of " << n <<" = " << pow(n,p)<<endl;
    return 0;
}
