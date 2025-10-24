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
        cout << "Название карты мира: " << name << endl;
        return 0;
    }

    int info() {
        system("chcp 1251>null");
        cout << "=== Карта Мира ===" << endl;
        cout << "Название: " << name << endl;
        cout << "Климат: " << climate << endl;
        cout << "Тип местности: " << terrain << endl;
        cout << "Размер: " << size << endl;
        cout << "Население: " << population << endl;
        cout << "Главный город: " << mainCity << endl;
        cout << "Уровень опасности: " << dangerLevel << endl;
        cout << "Основные ресурсы: " << resources << endl;
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
        "Континент Элион",
        "Умеренный",
        "Леса и горы",
        "Большой",
        "Люди, эльфы, дворфы",
        "Город Аркадия",
        "Средний",
        "Дерево, руда, магические камни"
    );

    world.ima();
    cout << endl;
    world.info();


    return 0;
}