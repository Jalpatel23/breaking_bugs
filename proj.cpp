#include <iostream>
using namespace std;
class proj
{
    int i = 0;
    string name = "yash";
    char n;
public:
    void guess();
    void getchar();
    void check();
}

void proj::guess()
{
    while (name != '\0')
    {
        getchar();
    }
    cout << "you guessed the word right, congrats!!\n\n\n\n";
}

void proj::getchar()
{
    cout << "enter letter " << i + 1 << ": ";
    cin >> n;
}

void proj::check()
{
    if (n == name[i] || n == name[i - 32])
    {
        cout << "\nletter " << i + 1 << " is correct" << endl;
        ++i;
    }
    else
    {
        cout << "wrong letter, guess the character " << i + 1 << " again: " << endl;
    }
}

int main()
{
    proj ob;
    cout << "guess the person's name by typing characters of their name: " << endl;
}
