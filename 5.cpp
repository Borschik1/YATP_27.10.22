#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Student{
    string name;
    string sign;
    int counter;

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

int winner(string sign1, string sign2) {
    if (sign1 == "Rock") {
        if (sign2 == "Scissors") return 1;
        if (sign2 == "Paper") return 2;
    }

    if (sign1 == "Scissors") {
        if (sign2 == "Rock") return 2;
        if (sign2 == "Paper") return 1;
    }

    if (sign1 == "Paper") {
        if (sign2 == "Scissors") return 2;
        if (sign2 == "Rock") return 1;
    }
}

int main() {
    Student mas[4];
    mas[0] = { "Gordon", "Scissors", 0 };
    mas[1] = { "Dante", "Paper", 0 };
    mas[2] = { "Lara", "Rock", 0 };
    mas[3] = { "Ezio", "Paper", 0 };

    for (int i = 0; i < 4; ++i) {
        for (int j = i; j < 4; ++j) {
            if (winner(mas[i].sign, mas[j].sign) == 1) {
                mas[i].counter++;
            }
            else {
                mas[j].counter++;
            }
        }
    }
    int answer = 0;
    for (int i = 0; i < 4; ++i) {
        //cout << mas[i].name << " " << mas[i].counter << endl;
        if (mas[i].counter > mas[answer].counter) {
            answer = i;
        }
    }
    cout << mas[answer].name;
    return 0;
}
