#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string dCoder(string s, int n)
{
    int i, j, k = 0;
    char a[3][3] = { {'0','0','0'}, {'0','0','0'}, {'0','0','0'} };
    string result = "";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = s[k];
            k++;
        }
    }
    //for (i = 0; i < n; i++) {
    //    for (j = 0; j < n; j++) {
    //        cout << a[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    for (j = 0; j < n; j++) {
        for (i = 0; i < n; i++) {
            result = result + a[i][j];
        }
    }
    return result;
}
string nCoder(string s, int n)
{
    int i, j, k = 0;
    char a[3][3] = { {'0','0','0'}, {'0','0','0'}, {'0','0','0'} };
    string result = "";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = s[k];
            k++;
        }
    }
    for (j = 0; j < n; j++) {
        for (i = 0; i < n; i++) {
            result = result + a[i][j];
        }
    }
    return result;
}

int main()
{
    string s = "1 234 5678 91234";
    int n = 4;
    cout << "Encrypt this text: ";
    for (int i = 0; i < s.length(); i++) {
        cout << s[i];
    }
    cout << endl;
    string result = dCoder(s, n);
    cout << "Encrypted text is: ";
    for (int i = 0; i < s.length(); i++) {
        cout << result[i];
    }
    cout << endl;
    string old = nCoder(result, n);
    cout << "Decrypted text is: ";
    for (int i = 0; i < s.length(); i++) {
        cout << old[i];
    }
}