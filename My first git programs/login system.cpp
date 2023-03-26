#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // open the file for reading and writing
    fstream file("users.txt", ios::in | ios::out | ios::app);

    // check if the file was opened successfully
    if (!file.is_open())
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    // ask the user if they want to login or register
    cout << "Do you want to login or register? (l/r)" << endl;
    char choice;
    cin >> choice;

    // handle login
    if (choice == 'l')
    {
        string username, password;
        bool found = false;

        // get user input for username and password
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        // search the file for the given username and password
        string line;
        while (getline(file, line))
        {
            if (line.find(username + " " + password) != string::npos)
            {
                found = true;
                break;
            }
        }

        // handle login success or failure
        if (found)
        {
            cout << "Login successful." << endl;
        }
        else
        {
            cout << "Invalid username or password." << endl;
        }
    }

    // handle registration
    else if (choice == 'r')
    {
        string username, password;

        // get user input for username and password
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        // save the username and password to the file
        file << username << " " << password << endl;
        cout << "Registration successful." << endl;
    }

    // handle invalid choice
    else
    {
        cout << "Invalid choice." << endl;
    }

    // close the file
    file.close();

    return 0;
}


