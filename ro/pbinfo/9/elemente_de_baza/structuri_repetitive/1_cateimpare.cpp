// https://www.pbinfo.ro/probleme/53/cateimpare
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long x=1, s=0;
  while (x != 0) {
    cin>>x;
    if (x&1) ++s;
  }
  cout<<s;
}