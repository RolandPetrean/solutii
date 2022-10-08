// https://www.pbinfo.ro/probleme/94/eliminarevocale
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s;
  cin>>s;

  string vs{"aeiou"};
  for (int i=0; i<s.size(); ++i) {
    if (vs.find(s[i]) == string::npos) continue;
    s.erase(s.begin()+(i--));
  }
  cout<<s;
}