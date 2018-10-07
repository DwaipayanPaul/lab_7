/*
4. Write a C++ program to find sum of all natural numbers between 1 to n using recursion.
*/
#include <iostream>
using namespace std;
                   // recursive function

int print(int n, int i,int sum) 
{
 if(i<n)             //recursion condition
 {
   i++;
   sum+=i;                //storing the sum
   print(n,i,sum);

 }else
    cout<<"The sum of natural numbers is "<<sum<<endl;  //output
    return 0;

}


int main()        //main function
{
    int n,i,s;
    cout<<"Enter a number= ";  //taking input
    cin >> n;
    print(n,i,s);             //calling the function
}
