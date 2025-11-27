#include <iostream>
using namespace std;

bool prime(long long n){
    if(n<2) return false;
    for(long long i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}   

int main(){
    int n; 
    cin >> n;
    long long c = 2;
    
    for(int printed = 0; printed < n; ){
        while(!prime(c)) c++;
        long long p1 = c++;

        cout << (printed ? " " : "") << p1;
        if(++printed == n) break;

        while(!prime(c)) c++;
        long long p2 = c++;

        cout << " " << p2;
        if(++printed == n) break;

        cout << " " << p1*p2;
        printed++;
    }
}
