#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {200, 1800, 1200, 1500, 500, 800, 4000};
    int sum = 0;
    int count = 0;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum <= 5000)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}