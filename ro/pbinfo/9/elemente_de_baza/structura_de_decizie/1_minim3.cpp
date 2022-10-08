// https://www.pbinfo.ro/probleme/106/minim3
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long a, b, c;
  cin>>a>>b>>c;
  cout<<min(a, min(b, c));
}