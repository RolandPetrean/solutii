// https://www.pbinfo.ro/probleme/2858/pv
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  vector<int> v(n);
  for (int i=0; i<n; ++i) cin>>v[i];

  for (int i=n-1; i>=0; --i) cout<<v[i]<<" ";
  cout<<endl;

  int pare=0, pozpare=0, cntdiv10=0, div3pozimp=0;
  for (int i=0; i<n; ++i) {
    if (i&1) pozpare += v[i];
    else if (v[i]%3==0) div3pozimp += v[i];
    if (v[i]%2==0) pare += v[i];
    if (v[i]%10==0) ++cntdiv10;
  }
  cout<<pare<<endl<<pozpare<<endl<<cntdiv10<<endl<<div3pozimp;
}