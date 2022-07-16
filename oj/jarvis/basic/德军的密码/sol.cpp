#include <bits/stdc++.h>
using namespace std;

int main() {
    string t = "000000000000000000000000000000000000000000000000000101110000110001000000101000000001";
    string key = "WELCOMETOCFF";
    // int cnt = 0;
    string res = "";
    string temp = "";
    int pos = 0;
    for (int i = 1; i <= (int)t.size() ; i++) {
        temp += (char)t[i-1];
        if (i % 7 == 0) {
            res += (char)(stoi(temp, nullptr, 2) ^ key[pos]);
            temp = "";
            pos++;
        }
    }
    cout << res << endl;
    return 0;
}
