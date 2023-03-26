// Palindrome

#include<iostream>
using namespace std;
int main()
{
int n,a,b,c,d;
cout<<"Enter an integer: ";
cin>>n;
a=n/10; //65
b=a/10; //6
c=(a*10)+b ;// 656
if(c==n){
	printf("It is an palindrome");
}else
{
	printf("It is not a palindrome");
}	
}
