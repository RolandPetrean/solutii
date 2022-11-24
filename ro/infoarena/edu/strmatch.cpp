// https://www.infoarena.ro/problema/strmatch
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("strmatch.in");
ofstream fout("strmatch.out");

int main() {
  string a, b;
  fin>>a>>b;

  int n=a.size(), m=b.size();
  string c=a+"/"+b;

  vector<int> pi(n+m+1, 0);
  pi[0] = 0;
  for (int i=1; i<=n+m; ++i) {
    int j=pi[i-1];
    while (j>0 && c[j] != c[i]) j = pi[j-1];
    if (c[j] == c[i]) pi[i] = j+1;
  }
  
  vector<int> ans;
  for (int i=n+1; i<=n+m; ++i) {
    if (pi[i]==n) ans.push_back(i-2*n);
  }
  fout<<ans.size()<<endl;
  for (int i=0; i<ans.size() && i<1000; ++i) fout<<ans[i]<<" ";
}