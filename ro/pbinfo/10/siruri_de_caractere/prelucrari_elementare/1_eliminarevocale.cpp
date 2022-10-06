// https://www.pbinfo.ro/probleme/94/eliminarevocale
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s;
  cin>>s;

  string vs{"aeiou"};
  for (ll i=0; i<s.size(); ++i) {
    if (vs.find(s[i]) == string::npos) continue;
    s.erase(s.begin()+(i--));
  }
  cout<<s;
}