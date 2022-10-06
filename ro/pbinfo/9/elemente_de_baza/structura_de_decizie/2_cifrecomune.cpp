// https://www.pbinfo.ro/probleme/1308/cifrecomune
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, m;
  cin>>n>>m;

  if (n%10==m%10 || n%10==m/10%10 || n/10%10==m%10 || n/10%10 == m/10%10) cout<<"da";
  else cout<<"nu";
}