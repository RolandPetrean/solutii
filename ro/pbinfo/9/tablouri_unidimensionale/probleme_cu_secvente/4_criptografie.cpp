// https://www.pbinfo.ro/probleme/3033/criptografie
#include <bits/stdc++.h>
using namespace std;

ifstream fin("criptografie.in");
ofstream fout("criptografie.out");

int main() {
  int c, k, n;
  string s;
  fin>>c>>k>>n>>s;

  if (c==1) {
    array<int,26> letters{};
    int l=0;
    long long cnt=0;
    for (int r=0; r<n; ++r) {
      ++letters[s[r]-97];
      while (letters[s[r]-97]>k) {
        --letters[s[l]-97];
        ++l;
      }
      cnt += r-l+1;
    }
    fout<<cnt;
  } else {
    array<bool,26> letters{};
    string maxi="";
    int l=0;
    for (int r=0; r<n; ++r) {
      while (letters[s[r]-97]) {
        letters[s[l]-97] = false;
        ++l;
      }
      letters[s[r]-97] = true;

      if (r-l+1>maxi.size() || (r-l+1==maxi.size() && s.substr(l, r-l+1)<maxi)) maxi = s.substr(l, r-l+1);
    }
    fout<<maxi;
  }
}