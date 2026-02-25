#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
using namespace std;

#define el "\n"
typedef long long ll;
typedef long double ld;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
FIO
	cout << "Enter the number: ";

	double y;
	if (!(cin >> y)) return 0;

	y += 5;
	cout << y << " (int: " << static_cast<int>(y) << ")" << el;

	y = -2;
	cout << y << " (int: " << static_cast<int>(y) << ")" << el;

	y *= 3;
	cout << y << " (int: " << static_cast<int>(y) << ")" << el;

	y /= 2;
	cout << y << " (int: " << static_cast<int>(y) << ")" << el;

	return 0;
}