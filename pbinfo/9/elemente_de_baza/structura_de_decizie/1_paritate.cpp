// https://www.pbinfo.ro/probleme/109/paritate
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;
  cout<<n<<" ";
  if (n&1) cout<<"este impar";
  else cout<<"este par";
}