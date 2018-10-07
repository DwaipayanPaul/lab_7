/*
2. Write a C++ program to print all natural numbers between 1 to n using recursion.
*/

#include <iostream>
using namespace std;

int print(int n, int i)  //recursive function
{
 if(i<=n)                //condition for recursion
 {
   
   cout<<i<<endl; 
   i++;
   return print(n,i);
 }
 else  if(i<=0)
  {
    cout<<"error!!!";     //error message
    return 0;
   }
    
}


int main()                    //main function
{
    int n,i=1;
    cout<<"Enter a number= ";            //taking input
    cin >> n;
    print(n,i);                          //calling the function
    return 0;
}
