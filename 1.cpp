#include <iostream>
#include <string>
using namespace std;

string extractDigits(string s) {
    string digits = "";
    for(char c : s) {
        if(isdigit(c)) {
            digits += c;
        }
    }
    return digits;
}

int main() {
    string s1 = "a1b2c3k4m5";
    string s2 = "x9y8z7";

    string d1 = extractDigits(s1);   // digits from string 1
    string d2 = extractDigits(s2);   // digits from string 2

    string result = "";
    int n = min(d1.size(), d2.size());

    // Interleave digits
    for(int i = 0; i < n; i++) {
        result += d1[i];
        result += d2[i];
    }

    // Append remaining extra digits if any
    if(d1.size() > n)
        result += d1.substr(n);

    if(d2.size() > n)
        result += d2.substr(n);

    cout << result;
    return 0;
}