//c++ program to find the nth fibonacci series

//library
#include<iostream>
using namespace std;

//the user defined function 
int fibo(int n){ if ((n == 1)||(n == 2))       //condition for fibonacci series of 1 and 2
			return 1;
		else
		     return fibo(n - 1) + fibo(n - 2);      //recursive function
		return 0;
		}

//the main function
int main(){
	int n;
	cout<<"Enter the numer of the series (n) = ";
	cin>>n;
	//calling the function to find the nth fibonacci series
	cout<<"The fibonacci series of the nth series = "<<fibo(n)<<endl;     
	return 0;
}
