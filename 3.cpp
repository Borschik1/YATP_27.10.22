#include <iostream>
#include <string>

using namespace std;

struct Student{
    int age;
    string name;
    string drink;
};

bool prime(int num) {
    for (int i = 2; i < pow(num, 0.5) + 2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    Student mas[3];
    mas[0] = { 19, "Gordon", "Coffee" };
    mas[1] = { 18, "Dante", "Beer" };
    mas[2] = { 23, "Lara", "Tea" };

    int maxi = 0;
    for (int i = 0; i < 3; ++i) {
        if (prime(mas[i].age)) {
            cout << mas[i].name << " " << mas[i].drink << endl;
        }
    }
    cout << maxi;
    return 0;
}
