// https://www.pbinfo.ro/probleme/2581/setbit1
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n, b;
  cin>>n>>b;
  cout<<(n|(1LL<<b));
}