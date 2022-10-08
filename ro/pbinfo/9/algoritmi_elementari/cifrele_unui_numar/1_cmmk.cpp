// https://www.pbinfo.ro/probleme/3620/cmmk
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, k;
  cin>>n>>k;

  bool mme=true;
  while (n) {
    if (n%10>k) mme = false;
    n /= 10;
  }
  cout<<(mme ? "DA" : "NU");
}