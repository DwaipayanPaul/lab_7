/*
 5. Write a C++ program to find sum of all even or odd numbers in given range using recursion.
*/

#include<iostream>
using namespace std;

void sum_print(long &sum)    //Function for printing the sum           
{
	cout<<"The sum is ="<<sum<<endl;         //output
}

void odd_sum(long &n,long &sum,long &i)         //Recursive function  :odd
{
	if (i%2==1)                          
	    sum+=i;                       //adding odd numbers
	i++;
	if(i<=n)                         //condition for recursion
	
	 odd_sum(n,sum,i);
	
	else if (i==(n+1))
	
	 sum_print(sum);
	
	else
		cout<<"error in input"<<endl;          //error message
	
}

void even_sum(long &n,long &sum,long &i)   //Recursive function  :even
{
	if (i%2==0)
	   sum+=i;                        //adding even numbers
	i++;
	if(i<=n)                                  //condition for recursion
            even_sum(n,sum,i);
	else if (i==(n+1))
            sum_print(sum);
	else
		cout<<"error in input"<<endl;              //error message
}


int main()                                 //main fuction
{
	long n,sum=0;
	long i=1;
	int choice;
	cout<<"Give the limiting number"<<endl;               //taking the range from the user
	cin>>n;
	cout<<"give 1 for sum of odd series and 2 for sum of even series"<<endl;           //asking user for choice
	cin>>choice;
	               //output according to the choices
           if (choice==1)                           
		odd_sum(n,sum,i);
	if (choice==2)
		even_sum(n,sum,i);
	return 0;
}


