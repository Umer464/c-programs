#include<iostream>
#include<string>
using namespace std;

struct Customer {
string name;
int account_number;
double balance;
};
void printCustomersWithLowBalance(Customer customers[], int n) {
cout << "Customers with balance less than $200: " << endl;
for (int i = 0; i < n; i++) {
if (customers[i].balance < 200) {
cout << customers[i].name << endl;}}
}
void addHundredToHighBalanceCustomers(Customer customers[], int n) {
for (int i = 0; i < n; i++) {
if (customers[i].balance > 1000) {
customers[i].balance += 100;
cout << customers[i].name << "'s new balance is $" << customers[i].balance << endl;}}
}

int main()
{ const int numCustomers = 10;
Customer customers[numCustomers] = {
{"Alice", 1001, 500.0},
{"Bob", 1002, 800.0},
{"Charlie", 1003, 150.0},
{"David", 1004, 1200.0},
{"Eve", 1005, 50.0},
{"Frank", 1006, 600.0},
{"Grace", 1007, 900.0},
{"Harry", 1008, 1100.0},
{"Isabelle", 1009, 2000.0},
{"John", 1010, 400.0}};
printCustomersWithLowBalance(customers, numCustomers);
addHundredToHighBalanceCustomers(customers, numCustomers);
return 0;	
}
