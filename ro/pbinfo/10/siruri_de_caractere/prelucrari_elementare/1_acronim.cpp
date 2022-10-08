// https://www.pbinfo.ro/probleme/2828/acronim
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

void display(string w) {
  if (isupper(w[0])) {
    cout<<w[0];
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s;
  getline(cin, s);

  long long pos=0;
  while ((pos = s.find(" ")) != string::npos) {
    ++pos;
    display(s.substr(0, pos));
    s.erase(0, pos);
  }
  display(s);
}