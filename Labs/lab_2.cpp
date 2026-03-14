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
    int n;
    cin>>n;
 vector <int>arr(n);
    cout << "Enter the size of the array: ";
 
    if (n <= 0) {
        cout << "Size must be greater than zero.";
        return 0;
    }

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print the array
    cout << "\nArray elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Find maximum
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    // Calculate average
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    ld average = (ld)sum / n;

    cout << "\nMaximum element: " << max;
    cout << "\nAverage: " << average;

    return 0;
}
