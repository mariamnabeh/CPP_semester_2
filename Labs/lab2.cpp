#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
#define el "\n"
typedef long long ll;
typedef long double ld;
int main()
{
    int j;
    cout << "Enter the size of the array: ";
    cin >> j;

    if (j <= 0) {
        cout << "Size must be greater than zero.";
        return 0;
    }

    int arr[1000];   // fixed size (maximum 1000)

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < j; i++) {
        cin >> arr[i];
    }

    // Print the array
    cout << "\nArray elements: ";
    for (int i = 0; i < j; i++) {
        cout << arr[i] << " ";
    }

    // Find maximum
    int max = arr[0];
    for (int i = 1; i < j; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    // Calculate average
    int sum = 0;
    for (int i = 0; i < j; i++) {
        sum += arr[i];
    }

    ld average = (ld)sum / j;

    cout << "\nMaximum element: " << max;
    cout << "\nAverage: " << average;

    return 0;
}
