#include <iostream>
#include <windows.h>
using namespace std;

// Defining a class called "proj"
class proj
{
    // Defining private data members for the class
    int i = 0;
    string name = "yash";
    string n;
public:
    void guess();
    void getchar();
    void check();
    void error();
    void setColor(int color);
};

// Defining member function "guess"
void proj::guess()
{
    // Loop through each character in the name
    while (name[i] != '\0')
    {
        // Calling member function "getchar" and "check"
        getchar();
        check();
    }
    // text color set to blue
    setColor(9);
    cout << "you guessed the word right, congrats!!\n\n\n\n";
}

// Defining member function "getchar"
void proj::getchar()
{
    setColor(9);
    cout << "enter letter " << i + 1 << ": ";
    cin >> n;
    // Call member function "error"
    error();
}

// Define member function "check" for the class
void proj::check()
{
    // Check if the input letter matches or not
    if (n[0] == name[i] || n[0] == name[i - 32])
    {
        // text color set to green
        setColor(10);
        cout << "\nletter " << i + 1 << " is correct" << endl;
        ++i;
    }
    else
    {
        // text color set to yellow
        setColor(14);
        cout << "wrong letter, guess the character " << i + 1 << " again: " << endl;
    }
    setColor(9);
}

// Define member function "error"
void proj::error()
{
     // error will be displayed if more then 1 character is entered
    if (n[1] != '\0')
    {
        // text color set to red
        setColor(12);
        cout << "error!! you entered more than 1 character" << endl;
        cout << "enter character again" << endl;
        getchar();
    }
    // program will continue if alphabet is entered
    else if (n[0] >= 'A' && n[0] <= 'Z')
    {
        cout << endl;
    }
    else if (n[0] >= 'a' && n[0] <= 'z')
    {
        cout << endl;
    }
    // error will be displayed if any other character is entered
    else
    {
        setColor(12);
        cout << "error!! you did not enter a character" << endl;
        cout << "enter again" << endl;
        getchar();
    }
    setColor(9);
}

// Define member function "setColor"
void proj::setColor(int color)
{
    // Set the console text color
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

// Define the main function
int main()
{
    // Create an object of the "proj" class
    proj ob;
    ob.setColor(9);
    // printing default message
    cout << "guess the person's name by typing characters of their name: " << endl;
    // calling function "guess" of object "ob"
    ob.guess();
}
