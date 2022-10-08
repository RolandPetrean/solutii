// https://www.pbinfo.ro/probleme/1684/numerepiramidale
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  long long s=0;
  for (int i=1; i<=n; ++i) {
    s += i*i;
    cout<<s<<" ";
  }
}