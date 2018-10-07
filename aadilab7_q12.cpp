//c++ program to find the LCM of two given numbers

//Library
#include<iostream>
using namespace std;

//user defined function
int lcm(int a , int b){ static int m = 0;

			//increasing the multiple by adding the maximum value to it
			m += b;

			if ((m % a == 0) and (m % b == 0)){
			    return m;}
			else {
			    return lcm(a , b);}     //recursive function
		
			}

//the main function
int main(){
	int a , b , nlcm;
	//asking the user to give two numbers
	cout<<"Enter the first number = ";
	cin>>a;
	cout<<"Enter the second number = ";
	cin>>b;
	//conditions to call the function
		if(a > b){nlcm = lcm(b , a);}
		else{nlcm = lcm(a , b);}
	cout<<"The LCM of the given numbers is = "<<nlcm<<endl;
	return 0;
}
