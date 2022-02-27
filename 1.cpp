#include <iostream>
#include <string>

using namespace std;

struct Student{
    int age;
    string name;
    string drink;
};

int main() {
    Student mas[3];
    for (int i = 0; i < 3; ++i) {
        cin >> mas[i].age >> mas[i].name >> mas[i].drink;
    }
    for (int i = 0; i < 3; ++i) {
        cout << mas[i].age << " " << mas[i].name << " " << mas[i].drink << endl;
    }
    return 0;
}
