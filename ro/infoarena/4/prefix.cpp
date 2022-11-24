// https://www.infoarena.ro/problema/prefix
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("prefix.in");
ofstream fout("prefix.out");

int main() {
  int t;
  fin>>t;

  while (t--) {
    string s;
    fin>>s;
    int n=s.size();
    
    int ans=0;
    vector<int> pi(n);
    pi[0] = 0;
    for (int i=1; i<n; ++i) {
      int j=pi[i-1];
      while (j>0 && s[j] != s[i]) j = pi[j-1];
      if (s[i] == s[j]) pi[i] = j+1;
      if (pi[i] && (i+1)%(i-pi[i]+1)==0) ans = i+1;
      cout<<pi[i]<<" ";
    }
    fout<<ans<<endl;
  }
}