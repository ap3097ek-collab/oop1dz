//#include <iostream>
//#include <string>
//using namespace std;
//
//class Backpack {
//    string name;        
//    int skolkoLet = 7;   
//    string cvet;        
//    string karmani;      
//    string material;     
//    string razmer;       
//    string vmestimost;   
//    string porvani;      
//
//public:
//    int ima() {
//        system("chcp 1251>null");
//        cout << "Как величать рюкзак: " << name << endl;
//        return 0;
//    }
//
//    int let() {
//        system("chcp 1251>null");
//        cout << "Сколько лет рюкзаку: " << skolkoLet << endl;
//        return 0;
//    }
//
//  
//    void setName(string newName) {
//        name = newName;
//    }
//
//    
//    int info() {
//        system("chcp 1251>null");
//        cout << "Название: " << name << endl;
//        cout << "Возраст: " << skolkoLet << " лет" << endl;
//        cout << "Цвет: " << cvet << endl;
//        cout << "Карманов: " << karmani << endl;
//        cout << "Материал: " << material << endl;
//        cout << "Размер: " << razmer << endl;
//        cout << "Вместимость: " << vmestimost << endl;
//        cout << "Состояние: " << porvani << endl;
//        return 0;
//    }
//
//
//    void zadat(string n, string c, string k, string m, string r, string v, string p) {
//        name = n;
//        cvet = c;
//        karmani = k;
//        material = m;
//        razmer = r;
//        vmestimost = v;
//        porvani = p;
//    }
//};
//
//
//int main() {
//    Backpack myBag;
//
//    myBag.zadat("Школьный рюкзак", "Синий", "3", "Нейлон", "Средний", "15 литров", "Целый");
//
//    myBag.ima();
//    myBag.let();
//    cout << endl;
//    myBag.info();
//
//    return 0;
//}