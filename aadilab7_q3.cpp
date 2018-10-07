//c++ program to print all even or odd numbers based upon which number (even or odd )you enter as the starting number in a given range using recursion

//library

#include<iostream>
using namespace std;

//defining a new function
int foo(int a ,int b){
	if (a>b)return 0 ;
  //condition for printing all the even  numbers

	if(a%2==0 , a<=b){cout<<a<< endl;
			a=a+2;
			foo(a , b);}
	else{a++;
		foo(a,b);
		}
	
}

//the main function
int main(){ int a , b , result;
	cout<<"Mention the starting number = ";
	cin>>a;
	cout<<"Mention the ending number = ";
	cin>>b;
	cout<<"The even or odd (based upon the starting number a) numbers between a and b are = "<<endl;
	foo(a , b);
	
return 9;
}
