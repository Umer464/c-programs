#include<iostream>
using namespace std;
struct Book {
    int accessionNumber; 
    string authorName; 
    string bookTitle; 
    bool isIssued; 
};
int main()
{
	Book myBook;
myBook.accessionNumber = 12345;
cout<<myBook.accessionNumber<<endl;
myBook.authorName = "J.K. Rowling";
cout<<myBook.authorName<<endl;
myBook.bookTitle = "Harry Potter and the Philosopher's Stone";
cout<<myBook.bookTitle<<endl;
myBook.isIssued =false ;
}
