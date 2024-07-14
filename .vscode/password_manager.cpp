#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout << "_____________________________________________________________" << endl;
    cout << "Welcome to Password Manager" << endl;
    cout << "_____________________________________________________________" << endl;
    cout << endl;

    cout << "Your initial password is '0000'. Enter this password to further change your password or view your marks." << endl;
    
    string password;
    getline(cin, password);
while(password!="0000")
{
    cout<<"enter correct demo password "<<endl;

    getline(cin, password);
    
}
    if (password == "0000")
    {
        int press;
        cout << "Press 1 to change the password and 0 to view your marks: ";
        cin >> press;

        if (press == 1)
        {
            int choice;
            cout << "Do you want to make a strong password or an easy one? Press 1 to make a strong password and 0 to make an easy password: ";
            cin >> choice;

            if (choice == 1)
            {
                srand(time(0));
                string new_password = "";
                int count = 0;

                while (count < 7)
                {
                    char b = char(rand() % 27 + 97);
                    new_password += '0' + rand() % 10;
                    count++;
                    new_password += b;
                    count++;
                }
                password = new_password;
                cout << "New password created using different combination: " << password << endl;
            }
            else if (choice == 0)
            {
                string new_password = "";
                int count = 0;
                while (count < 8)
                {
                    new_password += '0' + rand() % 10;
                    count++;
                }
                password = new_password;
                cout << "Easy password created using only numbers: " << password << endl;
            }
            else
            {
                cout << "Invalid choice." << endl;
                return 0;
            }
        }
    }
    else
    {
        cout << "Please enter the correct demo password and try again." << endl;
        return 0;
    }

    string pass;
    cout << "Enter the updated or previous password to view your marks: ";
    cin.ignore();
    getline(cin, pass);

    if (pass == password)
    {
        cout << "Hello, your CGPA is 1.82" << endl;
    }
    else
    {
        cout << "Enter the correct password for your account." << endl;
    }

    return 0;
}