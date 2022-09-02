// https://www.varena.ro/problema/dictionar
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("dictionar.in");
ofstream fout("dictionar.out");

int cautbin(vector<pair<string,string>>& x, string s) {
  int l=0, r=x.size()-1, mid=(l+r)/2;
  while (l<=r) {
    mid = (l+r)/2;
    if (x[mid].first==s) return mid;
    else if (x[mid].first<s) l=mid+1;
    else r=mid-1;
  }
  return -1;
}

int main() {
  string s;
  vector<string> words;
  while (fin>>s) {
    if (s[s.size()-1]=='.') {
      s.erase(s.end()-1);
      break;
    }
    words.push_back(s);
  }
  words.push_back(s);
  
  int n;
  fin>>n;

  vector<pair<string,string>> dict{};
  for (int i=0; i<n; ++i) {
    string k, v;
    fin>>k>>v;
    dict.push_back({k, v});
  }
  sort(dict.begin(), dict.end());

  fout<<words.size()<<endl;
  for (int i=0; i<words.size(); ++i) {
    int cb=cautbin(dict, words[i]);
    fout<<dict[cb].second;

    if (i==words.size()-1) fout<<".";
    else fout<<" ";
  }
}