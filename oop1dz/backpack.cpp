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
//        cout << "��� �������� ������: " << name << endl;
//        return 0;
//    }
//
//    int let() {
//        system("chcp 1251>null");
//        cout << "������� ��� �������: " << skolkoLet << endl;
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
//        cout << "��������: " << name << endl;
//        cout << "�������: " << skolkoLet << " ���" << endl;
//        cout << "����: " << cvet << endl;
//        cout << "��������: " << karmani << endl;
//        cout << "��������: " << material << endl;
//        cout << "������: " << razmer << endl;
//        cout << "�����������: " << vmestimost << endl;
//        cout << "���������: " << porvani << endl;
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
//    myBag.zadat("�������� ������", "�����", "3", "������", "�������", "15 ������", "�����");
//
//    myBag.ima();
//    myBag.let();
//    cout << endl;
//    myBag.info();
//
//    return 0;
//}