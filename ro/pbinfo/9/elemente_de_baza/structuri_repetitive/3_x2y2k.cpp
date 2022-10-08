// https://www.pbinfo.ro/probleme/285/x2y2k
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int k;
  cin>>k;

  for (int x=1; x*x<=k; ++x) {
    double y = sqrt(k-x*x);
    if (x <= y && (int) y == y) cout<<x<<" "<<y<<endl;
  }
}