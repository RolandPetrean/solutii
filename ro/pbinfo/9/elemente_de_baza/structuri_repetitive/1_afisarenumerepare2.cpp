// https://www.pbinfo.ro/probleme/3232/afisarenumerepare2
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  for (int i=2; i<=n; i+=2) cout<<i<<" ";
}