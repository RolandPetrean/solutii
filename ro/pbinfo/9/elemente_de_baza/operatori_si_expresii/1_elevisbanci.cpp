// https://www.pbinfo.ro/probleme/2671/elevisibanci
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, m, e, b;
  cin>>n>>m>>e>>b;
  cout<<((b*m + e) / (m-n))*n+e<<endl<<(b*m + e) / (m-n);
}