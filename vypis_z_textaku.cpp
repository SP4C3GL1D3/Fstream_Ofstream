#include <iostream>
#include <fstream>
#include <string>
#include <sstream> 
using namespace std;

int a;

int main()
{
    cout << "By what standard do you want to display current options?\n";
    cout << "1 = by name || 2 = by colour || 3 = by year || 4 = by price || 5 = show all\n";
    cin >> a;

    string line;
    ifstream MyReadFile("vozidla.txt");

    switch (a)
    {
    case 1:
        while (getline(MyReadFile, line)) {
            istringstream iss(line);
            string name;
            iss >> name;
            cout << name << endl;
        }
        break;
    case 2:
        while (getline(MyReadFile, line)) {
            istringstream iss(line);
            string name, color;
            iss >> name >> color;
            cout << color << endl;
        }
        break;
    case 3:
        while (getline(MyReadFile, line)) {
            istringstream iss(line);
            string name, color, year;
            iss >> name >> color >> year;
            cout << year << endl;
        }
        break;
    case 4:
        while (getline(MyReadFile, line)) {
            istringstream iss(line);
            string name, color, year, price;
            iss >> name >> color >> year >> price;
            cout << price << endl;
        }
        break;
    case 5:
        while (getline(MyReadFile, line)) {
            cout << line << endl;
        }
        break;
    default:
        cout << "Invalid option\n";
        break;
    }

    MyReadFile.close();
    return 0;
}
