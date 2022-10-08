// https://www.pbinfo.ro/probleme/460/timp
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int h, m, e;
  cin>>h>>m>>e;

  cout<<(h+((m+e)/60))%24<<" "<<(m+e)%60;
}