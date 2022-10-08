// https://www.pbinfo.ro/probleme/12/initiale
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

void display(string w) {
  long long s=w.size()-2;
  w[0] = toupper(w[0]);
  w[s] = toupper(w[s]);
  cout<<w;
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
  s.push_back(' ');
  display(s);
}