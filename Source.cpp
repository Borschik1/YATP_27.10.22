#include <iostream>
#include <string>
#include <algorithm>

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

string reverse(string str) {
    string new_str = "";
    int len = str.length();
    for (int i = 0; i < len; ++i) {
        new_str += str[len - i - 1];
    }
    return new_str;
}


int main() {
    Student mas[3];
    string names[3];
    mas[0] = { 19, "Gordon", "Coffe" };
    mas[1] = { 18, "Dante", "Beer" };
    mas[2] = { 23, "Lara", "Tea" };

    for (int i = 0; i < 3; ++i) {
        names[i] = reverse(mas[i].name);
    }
    sort(names, names + 3);
    for (int i = 0; i < 3; ++i) {
        cout << names[i] << endl;
    }
    return 0;
}