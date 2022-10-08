// https://www.pbinfo.ro/probleme/3231/afisarenumere2
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  for (int i=1; i<=n; ++i) cout<<i<<" ";
  for (int i=n; i>0; --i) cout<<i<<" ";
}