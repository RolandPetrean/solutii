// https://www.pbinfo.ro/probleme/3609/countmod10
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int a, b;
  cin>>a>>b;

  cout<<b/10-(a-1)/10;
}