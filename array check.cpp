#include <iostream>
using namespace std;
int main() {
    int n, number[100];
    bool arrayStatus;
    cout << "enter the number of digits: ";
    cin >> n;
    for (int i = 0; i < n ; ++i) {
        cout << "enter your " << i+1 << " number: ";
        cin >> number[i];
    }
    for (int i = 0; i < n; ++i) {
        if (number[i]<number[i+1])
            arrayStatus=1;
        else {
            arrayStatus = 0;
            break;
        }
    }
    if (arrayStatus==1)
        cout << "it is a sorted array";
    else
        cout << "it is not a sorted array";
    return 0;
}
