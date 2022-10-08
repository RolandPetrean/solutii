// https://www.pbinfo.ro/probleme/178/patratperfect
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  long long sq = sqrt(n);
  if (sq*sq == n) cout<<"da";
  else cout<<"nu";
}