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
    mas[0] = { 22, "Gordon", "Coffe" };
    mas[1] = { 18, "Dante", "Beer" };
    mas[2] = { 21, "Lara", "Tea" };

    int maxi = 0;
    for (int i = 0; i < 3; ++i) {
        maxi = max(maxi, mas[i].age);
    }
    cout << maxi;
    return 0;
}
