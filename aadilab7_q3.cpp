//c++ program to print all even or odd numbers in a given range using recursion
#include<iostream>
using namespace std;

int foo(int a ,int b){
	if (a>b)return 0;
	if(a%2==0 , a<=b){cout<<a<< endl;
			a=a+2;
			foo(a , b);}
	else{a++;
		foo(a,b);
		}
	if(a%2!=0 , a<=b){ 
			foo(a , b);
			}
	else{  a++; foo(a , b);}
}





int main(){ int a , b , result;
	cout<<"Mention the starting number = ";
	cin>>a;
	cout<<"Mention the ending number = ";
	cin>>b;
	cout<<"The even and odd numbers between a and b are = ";
	result=foo(a , b);	
	//cout<<result;

return 9;
}
