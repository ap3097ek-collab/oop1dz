#include <iostream>
#include <string>
using namespace std;

class Map {
    string name;        
    string climate;      
    string terrain;      
    string size;        
    string population;  
    string mainCity;    
    string dangerLevel;  
    string resources;


public:
    int ima() {
        system("chcp 1251>null");
        cout << "�������� ����� ����: " << name << endl;
        return 0;
    }

    int info() {
        system("chcp 1251>null");
        cout << "=== ����� ���� ===" << endl;
        cout << "��������: " << name << endl;
        cout << "������: " << climate << endl;
        cout << "��� ���������: " << terrain << endl;
        cout << "������: " << size << endl;
        cout << "���������: " << population << endl;
        cout << "������� �����: " << mainCity << endl;
        cout << "������� ���������: " << dangerLevel << endl;
        cout << "�������� �������: " << resources << endl;
        return 0;
    }


    void zadat(string n, string c, string t, string s, string p, string city, string danger, string res) {
        name = n;
        climate = c;
        terrain = t;
        size = s;
        population = p;
        mainCity = city;
        dangerLevel = danger;
        resources = res;
    }


   
};

int main() {
    Map world;

    world.zadat(
        "��������� �����",
        "���������",
        "���� � ����",
        "�������",
        "����, �����, ������",
        "����� �������",
        "�������",
        "������, ����, ���������� �����"
    );

    world.ima();
    cout << endl;
    world.info();


    return 0;
}