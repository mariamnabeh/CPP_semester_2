#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <queue>
#include <deque>
#include <stack>
#include <set>
using namespace std;

// ---------- Type Aliases ----------
using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<ll>;

// ---------- Macros ----------
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define pb push_back
#define all(x) (x).begin()+1, (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define per(i,a,b) for(int i=a;i>=b;i--) 

// ---------- Constants ----------
const ll INF = 1e18;
const int MOD = 1e9+7;

// ---------- Debug (disable in contest) ----------
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

// ---------- Utility Functions ----------
ll gcd(ll a, ll b){
    return b==0 ? a : gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return a/gcd(a,b)*b;
}

ll modpow(ll a, ll b){
    ll res = 1;
    while(b){
        if(b&1) res = (res*a)%MOD;
        a = (a*a)%MOD;
        b >>= 1;
    }
    return res;
}

// ---------- Main ----------
int main(){
    fast

    int t =1;
    cin >> t;
    while(t--){

            ll m , n ; cin >>n >>m ;
             vll freq1(5000,0);
             vll freq2(5000,0);
            vector<char> s1(n+1);
            vector<char> s2(m+1);
            rep(i,1,n){
                cin >> s1[i];
            }
            rep(i,1,m){
                cin >> s2[i];
            }
            if (m > n ){
                cout << -1 << "\n"; 
                continue;
            }
            rep(i,1,n){
                freq1[s1[i]]++;
            }
             rep(i,1,m){
                freq2[s2[i]]++;
            }
            bool flage =true;
            rep(i,1,m){
                if (freq2[s2[i]]> freq1[s2[i]]) flage =false;
                
            }
            if (flage){
                rep(i,1,m){
                    cout << s2[i];
                }
                cout << '\n';
            }
            else cout << -1 << '\n';

            


        
    }

    return 0;
}