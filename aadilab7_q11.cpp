//c++ program to find GCD(HCF) of two numbers by using recursion


#include<iostream>
using namespace std;


int hcf(int a , int b){ if (b != 0)
			    return hcf(b , a % b);
			else 
			    return a;
			//return 0;
			}

int main(){
	int a , b;
	cout<<"Enter the first number = ";
	cin>>a;
	cout<<"Enter the second number = ";
	cin>>b;
	cout<<"The HCF of the given numbers is = "<<hcf(a , b)<<endl;
	return 0;
}
