#include <iostream>
#include <string>
using namespace std;

struct Weapon
{
    string name;
    int damage;
};

struct Player
{
    string name;
    string id;
    string level;
    Weapon weapon;
};

int main()
{
    Player pl[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Masukkan nama player= ";
        getline(cin, pl[i].name);
        cout << "Masukkan id= ";
        cin >> pl[i].id;
        cout << "Masukkan level= ";
        cin >> pl[i].level;
        cin.ignore();
        cout << "Masukkan nama weapon= ";
        getline(cin, pl[i].weapon.name);
        cout << "Masukkan damage weapon= ";
        cin >> pl[i].weapon.damage;
        cin.ignore();
    }

    cout << endl;
    cout << "Tampilkan Player" << endl;
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Nama Player= " << pl[i].name << endl;
        cout << "Id Player= " << pl[i].id << endl;
        cout << "Level Player= " << pl[i].level << endl;
        cout << "Masukkan nama weapon= " << pl[i].weapon.name << endl;
        cout << "Masukkan damage weapon= " << pl[i].weapon.damage << endl;
    }
}
