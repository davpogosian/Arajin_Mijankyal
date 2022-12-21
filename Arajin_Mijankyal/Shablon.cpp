#include <iostream>
using namespace std;
string array1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
string array2 = "ZABCDEFGHIGKLMNOPQRSTUVWXYzabcdefghijklmnopqrstuvwxy1234567890";

string ncoder(string s) {
    int j;
    int i = 0;
    while (s[i]) {
        j = 0;
        while (array2[j]) {
            if (s[i] == array2[j]) {
                s[i] = array1[j];
                break;
            }
            j++;
        }
        i++;
    }
    return s;
}

string dcoder(string s) {
    int j;
    int i = 0;
    while (s[i]) {
        j = 0;
        while (array1[j]) {
            if (s[i] == array1[j]) {
                s[i] = array2[j];
                break;
            }
            j++;
        }
        i++;
    }
    return s;
}

int main() {
    string s = "A big cat - 12";
    string result = dcoder(s);
    string old = ncoder(result);
    cout << result << endl << old;

}