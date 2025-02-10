#include <iostream>
#include <climits>  // For INT_MIN
using namespace std;

int main() {
    int arr[] = {10, 5, 20, 15, 25, 30, 2};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    
    if (n < 3) {
        cout << "Array must have at least 3 elements." << endl;
        return 0;
    }
    
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second ) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
    }

    cout<<"Third maximum is :"<<third;

    return 0;
}
