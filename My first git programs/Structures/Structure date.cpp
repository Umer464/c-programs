#include<iostream>
using namespace std;
struct Date{
	int day;
	int month;
	int year;
};
int main(){
Date Date1,Date2;
	 cout << "Enter second date (day month year): ";
	 cout<<endl;
	cout<<"Enter a Day: ";
	cin>>Date1.day;
	cout<<"Enter a month: ";
	cin>>Date1.month;
	cout<<"Enter a year: ";
	cin>>Date1.year;
	cout<<endl;
	 cout << "Enter second date (day month year): ";
	 cout<<endl;
	cout<<"Enter a Day: ";
	cin>>Date2.day;
	cout<<"Enter a month: ";
	cin>>Date2.month;
	cout<<"Enter a year: ";
	cin>>Date2.year;
	cout<<endl;
if(Date1.day==Date2.day && Date1.month==Date2.month && Date1.year==Date2.year){
	cout<<"Both dates are Equal";}
else{
	cout<<"Both are not equal";}	
}
