//c++ program to find the sum of all natural numbers from 1 to n using recursion

//library
#include<iostream>
using namespace std;

//defining a function to find the sum of all N from 1 to n
int add(int n){ //conditon to find the sum 
		if (n != 0)
		return n + add(n - 1);
		return 0;
		}

//the main function
int main(){
	int n;
	cout<<"Enter the value of n = ";    //asking the user the value of n
	cin>>n;
	cout<<"The sum of all natural numbers from 1 to n = "<<add(n)<<endl;
	return 6;
}
