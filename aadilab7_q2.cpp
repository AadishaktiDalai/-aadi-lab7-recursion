//c++ program to print all natural numbers from 1 to n using recursion
#include<iostream>
using namespace std;

int num(int i , int n){
	//condition
	if(i==(n+1)){return 9;}
	else{cout<<i<<endl;
		i++; //increase by 1
		//recursing function
		num(i , n);
		}
	return 0;
	}

int main(){
	int i , n;
	cout<<"the last number is ";
	cin>>n;
	cout<<endl;
	
	//calling the function
	num(1, n); 

	return 8;
	}