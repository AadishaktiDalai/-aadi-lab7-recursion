//c++ program to print all power of any number using recursion


#include<iostream>
using namespace std;


	//user defined function to find all the power of any number
	int pwr(int a , int b){ int i; 
		if(b!=0){return a*pwr(a,b-1);}   //recursing function
		else{  
		return 1;}}

	//main function
	int main(){
		int a , b , result;
		cout<<"Enter the number whose power you want to find ";
		cin>>a;
		cout<<endl;
		cout<<"Enter the number upto which you want to find the power ";
		cin>>b;
		cout<<endl;
		result = pwr(a , b);
		cout<<"the result is "<<result;
		cout<<endl;
		pwr(a , b);     //calling the function
	
	return 8;
	}
