// https://www.pbinfo.ro/probleme/1456/cuvant
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s;
  cin>>s;

  bool con=false;
  for (char c : s) {
    if (c == 'a' || c == 'e' || c == 'o' || c == 'u') {
      con = false;
      break;
    }
    if (c != 'i') con = true;
  }
  if (con) cout<<"DA";
  else cout<<"NU";
}