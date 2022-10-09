// https://www.pbinfo.ro/probleme/101/sortarecuvinte
#include <bits/stdc++.h>
using namespace std;

ifstream fin("sortcuv.in");
ofstream fout("sortcuv.out");

int main() {
  string s;

  vector<string> cuv;
  while (fin>>s) cuv.push_back(s);
  sort(cuv.begin(), cuv.end());

  for (string c:cuv) fout<<c<<endl;
}