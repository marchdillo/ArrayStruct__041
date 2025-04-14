#include <iostream>
#include <string>
using namespace std;

struct weapon
{
    string name;
    string damage;
};

struct player
{
    string name;
    string id;
    string level;
    weapon weapon;
};

int main()
{
    player pl[3];

    for (i = 0; i < 3; i++)
        cout << "masukkan nama player= ";
    getline(cin, pl.name);
    cout << "masukkan id= ";
    getline(cin, pl.id);
    cout << "masukkan level= ";
    cin >> pl.level;
    cout << "masukkan weapon";
    getline(cin, pl.weapon.name);

    cout << "tampilkan nama player " << endl;
    cout << "nama player=" << pl.name << endl;
    cout << "id player=" << pl.id << endl;
    cout << "Level player=" << pl.level << endl;
}