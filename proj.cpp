#include <iostream>
using namespace std;
class proj
{
    int i = 0;
    string name = "jal";
    char n;
public:
    void guess();
    void getchar();
    void checking();
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

int main()
{
    proj ob;
    cout << "guess the person's name by typing characters of their name: " << endl;
}
