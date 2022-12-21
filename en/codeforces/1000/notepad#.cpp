// https://codeforces.com/contest/1766/problem/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n;
    string s;
    cin>>n>>s;

    bool ok=false;
    array<array<int,26>,26> ap{};
    for (int i=1; i<s.size() && !ok; ++i) {
      if (ap[s[i]-'a'][s[i-1]-'a']) {
        if (ap[s[i]-'a'][s[i-1]-'a']<i-1) ok = true;
      }
      else ap[s[i]-'a'][s[i-1]-'a'] = i;
    }

    cout<<(ok?"YES":"NO")<<endl;
  }
}