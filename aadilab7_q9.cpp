//c++ program to find the factorial of a number

//library

#include<iostream>
using namespace std;

//defining a function to find the factorial of a number
int fact(int n){ //conditon to find the factorial 
		if ((n == 0)||(n == 1))
			return 1;
		else 
			return n * fact(n - 1);      //recursive function 
		return 0;
		}

//the main function
int main(){
	int n;
	cout<<"Enter the value of n = ";    //asking the user the value of n
	cin>>n;
	cout<<"The factorial of the number n is = "<<fact(n)<<endl;     //calling the fact(n)function
	return 6;
}
