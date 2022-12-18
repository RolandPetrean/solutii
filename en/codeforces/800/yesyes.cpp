// https://codeforces.com/contest/1759/problem/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    string s;
    cin>>s;

    bool ok=(s[0]=='Y' || s[0]=='e' || s[0]=='s');
    for (int i=1; i<s.size() && ok; ++i) {
      if (s[i]=='Y' && s[i-1] != 's') ok = false;
      else if (s[i]=='s' && s[i-1] != 'e') ok = false;
      else if (s[i]=='e' && s[i-1] != 'Y') ok = false;
      else if (s[i] != 'Y' && s[i] != 'e' && s[i] != 's') ok = false;
    }

    cout<<(ok?"YES":"NO")<<endl;
  }
}