// https://www.pbinfo.ro/probleme/1866/prosir
#include <bits/stdc++.h>
using namespace std;#define mod 1000000007

ifstream fin("prosir.in");
ofstream fout("prosir.out");

void display(string w) {
  if (w == " ") {
    fout<<" ";
    return;
  }
  w[w.size()-2] = '5';
  fout<<w;
}

int main() {
  string s;
  getline(fin, s);
  
  long long pos=0;
  while ((pos = s.find(" ")) != string::npos) {
    ++pos;
    display(s.substr(0, pos));
    s.erase(0, pos);
  }
  display(s);
}