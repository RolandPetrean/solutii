// https://www.pbinfo.ro/probleme/3185/concurs1
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll a, b, n;
  cin>>a>>b>>n;
  if (n >= a && n <= b) cout<<"DA";
  else cout<<"NU";
}