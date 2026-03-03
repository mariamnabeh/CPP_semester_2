#include <iostream>
#include <algorithm>
#define el "\n"
typedef long long ll;
typedef long double ld;

using namespace std;
int main(){
    int res=1;
    int num;
    cout<<"Inter num" <<el;
    cin>>num;
    for (int x=1; x<=num;x++){
        res*=x;
    }
cout<<"factorial("  <<num<< ") =" <<res<<el;

}
