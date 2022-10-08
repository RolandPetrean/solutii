// https://www.pbinfo.ro/probleme/2635/capslock
#include <bits/stdc++.h>
using namespace std;#define mod 1000000007

ifstream fin("capslock.in");
ofstream fout("capslock.out");

int main() {
  string s;
  getline(fin, s);

  bool caps=false;
  for (int i=0; i<s.size(); ++i) {
    if (s[i] == '#') {
      caps = !caps;
      s.erase(s.begin()+(i--));
      continue;
    }
    if (caps) s[i] = toupper(s[i]);
  }
  fout<<s;
}