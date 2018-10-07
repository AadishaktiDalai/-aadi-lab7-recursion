//c++ program to find the reverse of a given number


#include<iostream>
using namespace std;

int reverse( int x , int y = 0){
			if(x){
				reverse(x/10,(y+(x%10))*10);
				}
			else{
			return y;}
}


int main(){
	int x , y ;
	//ask the user to give a number 
	cout<<"Enter the number = ";
	cin>>x;
	cout<<"The reverse of the number is = "<<reverse(x,y)<<endl;        //calling the function
	return 0;
}
