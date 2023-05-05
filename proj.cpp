#include <iostream>
using namespace std;
class proj
{
    int i = 0;
    string name = "yash";
    string n;
public:
    void guess();
    void getchar();
    void check();
    void error();
};

void proj::guess()
{
    while (name[i] != '\0')
    {
        getchar();
        check();
    }
    cout << "you guessed the word right, congrats!!\n\n\n\n";
}

void proj::getchar()
{
    cout << "enter letter " << i + 1 << ": ";
    cin >> n;
    error();
}

void proj::check()
{
    if (n[0] == name[i] || n[0] == name[i - 32])
    {
        cout << "\nletter " << i + 1 << " is correct" << endl;
        ++i;
    }
    else
    {
        cout << "wrong letter, guess the character " << i + 1 << " again: " << endl;
    }
}

void proj::error()
{
    if (n[1] != '\0')
    {
        cout << "error!! you entered more than 1 character" << endl;
        cout << "enter character again" << endl;
        getchar();
    }
    else if (n[0] >= 'A' && n[0] <= 'Z')
    {
        cout << endl;
    }
    else if (n[0] >= 'a' && n[0] <= 'z')
    {
        cout << endl;
    }
    else
    {
        cout << "error!! you did not enter a character" << endl;
        cout << "enter again" << endl;
        getchar();
    }
}

int main()
{
    proj ob;
    cout << "guess the person's name by typing characters of their name: " << endl;
    ob.guess();
}
