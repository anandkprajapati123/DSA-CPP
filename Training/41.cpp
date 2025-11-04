#include <iostream>
#include <cmath>
using namespace std;

bool isJumpingNumber(int num) {
    if (num < 10){
      return true;
    }
    int n1 = num % 10;
    num /= 10;
    while (num > 0) {
        int n2 = num % 10;
        if (abs(n2 - n1) != 1){
          return false;
        }
        n1 = n2;
        num /= 10;
    }
    return true;
}

int main() {
    for (int i = 1; i <= 50; i++) {
        if (isJumpingNumber(i)) cout << i << " ";
    }
    cout << endl;
    return 0;
}