// https://www.pbinfo.ro/probleme/3928/abcd
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int a, b, c, d;
  cin>>a>>b>>c>>d;

  cout<<d/3+b/3-(a-1)/3-(c-1)/3;
}