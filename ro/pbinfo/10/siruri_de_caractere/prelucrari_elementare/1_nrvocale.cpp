// https://www.pbinfo.ro/probleme/890/nrvocale
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s;
  getline(cin, s);

  string vs{"AEIOU"};
  map<charlong long> vm{};
  pair<long long,char> maxi{0,'\0'};
  for (char c : s) {
    c = toupper(c);
    if (vs.find(c) == string::npos) continue;

    ++vm[c];
    if (vm[c] > maxi.first || (vm[c] == maxi.first && c < maxi.second)) maxi = {vm[c], c}; 
  }
  cout<<maxi.second;
}