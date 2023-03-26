#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    int age;
    string address;
};

const int MAX_STUDENTS = 20;
Student students[MAX_STUDENTS];
int n = 0; 

void printNamesOfStudentsAge14() {
    cout << "Names of students with age 14:" << endl;
    for (int i = 0; i < n; i++) {
        if (students[i].age == 14) {
            cout << students[i].name << endl;
        }
    }
}

// function to print names of students with even roll no
void printNamesOfStudentsEvenRollNo() {
    cout << "Names of students with even roll no:" << endl;
    for (int i = 0; i < n; i++) {
        if (students[i].rollNo % 2 == 0) {
            cout << students[i].name << endl;
        }
    }
}

void displayStudentDetails(int rollNo) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (students[i].rollNo == rollNo) {
            cout << "Name: " << students[i].name << endl;
            cout << "Roll No: " << students[i].rollNo << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Address: " << students[i].address << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student with roll no " << rollNo << " not found." << endl;
    }
}

int main() {

    students[0] = {"Alice", 1, 12, "123 Main St"};
    students[1] = {"Bob", 2, 13, "456 Oak Ave"};
    students[2] = {"Charlie", 3, 14, "789 Maple St"};
    students[3]={"Umer",7,14,"456 Jubilee Town"};
    students[4]={"Ahmad",18,14,"210 AWT"};
    students[5]={"Mamoor",15,14,"120 Palm VillaS"};
    students[6]={"Dilawar",4,11,"140 Johar Town"};
    students[7]={"Ramzan",5,11,"Street no. 246 Payuki"};
    students[8]={"Adnan",6,12,"246 Mohlanwar LDA"};
    students[9]={"Zain",12,13,"Street no. 25 Jehlum"};
    n = 10;

    printNamesOfStudentsAge14();
    cout << endl;
    printNamesOfStudentsEvenRollNo();
    cout << endl;
    int rollNo;
    cout << "Enter roll no of student to display details: ";
    cin >> rollNo;
    displayStudentDetails(rollNo);

    return 0;
}

