/*
3. Write a C++ program to print all even or odd numbers in given range using recursion.
*/

#include<iostream>
using namespace std;
                           //Recursion function :for odd
void print_odd(long &n,int &i)
{
	
	if(i<n)                   //conditions for recursion
	{
		if (i%2==1)
		   cout<<i<<endl;                //output
		i++;
		print_odd(n,i);
	}
	else if(i==n)
	{
		if (i%2==1)
		    cout<<i<<endl;
		cout<<"end of series"<<endl;
	}
	else
	{
		cout<<"Error in the input"<<endl;          //error message
	}
}

void print_even(long &n,int &i)                  //Recursion function : even
{
	
	if(i<n)                             //conditions for recursions
	{
		if (i%2==0)
		   cout<<i<<endl;              //output
		i++;
		print_even(n,i);
	}
	else if(i==n)
	{
		if (i%2==0)
		    cout<<i<<endl;
		cout<<" ."<<endl;
	}
	else
	{
		cout<<"Error in the input"<<endl;           //error message
	}
}

int main()                                   //main function
{
	long n;
	int i=1;
	int choice;
	cout<<"Give the range= "<<endl;                 //taking the limitting number
	cin>>n;
	cout<<"Give 1 for odd series and 2 for even series"<<endl;       //taking user choices
	cin>>choice;
	if (choice==1)                                  //output according to choices
		print_odd(n,i);
	if (choice==2)
		print_even(n,i);
	return 0;
}


