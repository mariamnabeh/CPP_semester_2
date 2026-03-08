#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
#define el "\n"
typedef long long ll;
typedef long double ld;
 typedef string str;
int main()
{
 str a;
cout<<" enter a strig, please :)"<<el;
cin>> a; 
cout<<"the original string:"<< a<<el; // display the input string
str rev=a;
reverse(rev.begin(), rev.end());
cout << "Reversed String: " << rev << el; //reverse
// cout vowels
int freq[26] = {0};
for(int i =0; i<a.size(); i++){
    a[i]= tolower(a[i]);
freq[a[i] - 'a']++;}
for(int i = 0; i < 26; i++){
        char c = i + 'a';

        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){ 
            if(freq[i] > 0){
                cout << c << " : " << freq[i]<< el;
            }
    }

    
}
 // palindrome check
    if(a == rev)
        cout << "Palindrome: Yes";
    else
        cout << "Palindrome: No";

    return 0;


} 