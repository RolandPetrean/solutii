// https://www.pbinfo.ro/probleme/90/numarmaximvocale
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ifstream fin("vocmax.in");
ofstream fout("vocmax.out");

int main() {
  ll n;
  fin>>n;

  pair<ll,string> maxi{-1,""};
  for (ll i=0; i<n+1; ++i) {
    string s;
    getline(fin, s);
    
    ll v=0;
    string vs = "aeiou";
    for (auto c : s) {
      if (vs.find(c) != string::npos) ++v;
    }
    maxi = max(maxi, {v, s});
  }
  fout<<maxi.second;
}