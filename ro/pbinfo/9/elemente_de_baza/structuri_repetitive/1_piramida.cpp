// https://www.pbinfo.ro/probleme/351/piramida
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=i; ++j) {
      cout<<j<<" ";
    }
    cout<<endl;
  }
}