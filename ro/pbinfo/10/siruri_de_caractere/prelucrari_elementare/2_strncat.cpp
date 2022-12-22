// https://www.pbinfo.ro/probleme/2804/strncat
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s, p;
  int n, a;
  cin>>s>>n;
  while (n--) {
    cin>>a;
    p = s.substr(0, a);
    if (a&1) s += string(p.rbegin(), p.rend());
    else s += p;
  }
  cout<<s;
}