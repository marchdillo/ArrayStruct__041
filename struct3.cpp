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
    Player pl;

    cout << "Masukkan nama player= ";
    getline(cin, pl.name);
    cout << "Masukkan id= ";
    cin >> pl.id;
    cout << "Masukkan level= ";
    cin >> pl.level;
    cin.ignore();
    cout << "Masukkan nama weapon= ";
    getline(cin, pl.weapon.name);
    cout << "Masukkan damage weapon= ";
    cin >> pl.weapon.damage;

    cout << "Tampilkan Player" << endl;
    cout << "Nama Player= " << pl.name << endl;
    cout << "Id Player= " << pl.id << endl;
    cout << "Level Player= " << pl.level << endl;
    cout << "Masukkan nama weapon= " << pl.weapon.name << endl;
    cout << "Masukkan damage weapon= " << pl.weapon.damage << endl;
}