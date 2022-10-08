// https://www.pbinfo.ro/probleme/972/pozitii
// ver2
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s;
  getline(cin, s);

  long long cnt=0;
  string vs{"aeiou"};
  for (int i=1; i<s.size()-1; ++i) {
    bool vc=false, c1=true, c2=true;
    if (vs.find(s[i]) != string::npos) vc = true;
    if (vs.find(s[i-1]) != string::npos || s[i-1] == ' ') c1 = false;
    if (vs.find(s[i+1]) != string::npos || s[i+1] == ' ') c2 = false;
    if (vc && c1 && c2) ++cnt;
  }
  cout<<cnt;
}