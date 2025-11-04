#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    string first = "";
    string last = "";
    string res = "";

    for(int i=0; i<n/2; i++){
        first = s[i].substr(0, i+1);  
        last  = s[n-1-i].substr(s[n-1-i].size() - i - 1, i+1);  
        res += first + last +" ";
    }
    cout << res << endl;

}
