// https://www.pbinfo.ro/probleme/90/numarmaximvocale
#include <bits/stdc++.h>
using namespace std;#define mod 1000000007

ifstream fin("vocmax.in");
ofstream fout("vocmax.out");

int main() {
  long long n;
  fin>>n;

  pair<long long,string> maxi{-1,""};
  for (int i=0; i<n+1; ++i) {
    string s;
    getline(fin, s);
    
    long long v=0;
    string vs = "aeiou";
    for (auto c : s) {
      if (vs.find(c) != string::npos) ++v;
    }
    maxi = max(maxi, {v, s});
  }
  fout<<maxi.second;
}