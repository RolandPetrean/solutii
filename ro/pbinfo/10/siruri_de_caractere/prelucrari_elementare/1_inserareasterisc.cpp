// https://www.pbinfo.ro/probleme/85/inserareasterisc
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s;
  getline(cin, s);

  array<char,5> vs{'a', 'e', 'i', 'o', 'u'};
  for (int i=0; i<s.size(); ++i) {
    bool ok = false;
    for (auto v : vs) if (s[i] == v) ok = true;
    if (!ok) continue;
    s.insert(s.begin()+i+1, '*');
  }
  if (s.find('*') != string::npos) cout<<s;
  else cout<<"FARA VOCALE";
}