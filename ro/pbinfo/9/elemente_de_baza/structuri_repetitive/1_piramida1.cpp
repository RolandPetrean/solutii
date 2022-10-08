// https://www.pbinfo.ro/probleme/456/piramida1
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  char c;
  cin>>n>>c;

  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=i; ++j) {
      cout<<c;
    }
    cout<<endl;
  }
}