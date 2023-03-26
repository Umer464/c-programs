#include<iostream>
#include<math.h>
using namespace std;
int main()
{
double a,b,c,d,e,quadratic_formula1,quadratic_formula2,disc;
cout<<"Enter the value of a: ";
cin>>a;
cout<<endl;
cout<<"Enter the value of b: ";
cin>>b;
cout<<endl;
cout<<"Enter the value of c: ";
cin>>c;
cout<<endl;
d=sqrt(b*b-(4*a*c));
e=sqrt(b*b-(4*a*c));
quadratic_formula1= (-b+d)/2*a;
quadratic_formula2=	(-b-e)/2*a;
cout<<"The roots are: "<<quadratic_formula1<<" "<<"and"<<" "<<quadratic_formula2<<endl;
cout<<endl;
disc=(b*b-(4*a*c));
 cout<<"The roots of Discriminent is: "<<disc<<endl;
 cout<<"The nature of Roots is: "<<endl;
cout<<endl;
if(disc>0)
cout<<"The roots are real and different";
if(disc=0)
cout<<"The roots are real and equal";
if(disc<0)
cout<<"The roots are complex and different";
}
