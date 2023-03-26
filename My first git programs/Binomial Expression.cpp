
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float n,x,power,fact=1,i=1;
	double expression,sum=0,divide;
	cout<<"Enter a value of x: ";
	cin>>x;
	cout<<"Enter a number of terms n: ";
	cin>>n;
	while(n>1)
	{
		power=pow(x,i);
		fact=fact*i;
		divide=power/fact;
		sum=sum+divide;
		n--;
	    i++;
	}
	expression=(1+sum);
	cout<<"The Binomial Expression is: "<<expression;
}
