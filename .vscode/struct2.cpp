#include <iostream>
#include <string>
using namespace std;

struct Player
{
    string name;
    string id;
    string level;
};

int main()
{
    Player pl;

    cout << "Masukkan nama player= ";
    getline(cin, pl.name);
    cout << "Masukkan id= ";
    cin >> pl.id;
    cout << "Masukkan level= ";
    cin >> pl.level;

    cout << "Tampilkan Player" << endl;
    cout << "Nama Player= " << pl.name << endl;
    cout << "Id Player= " << pl.id << endl;
    cout << "Level Player= " << pl.level << endl;
}