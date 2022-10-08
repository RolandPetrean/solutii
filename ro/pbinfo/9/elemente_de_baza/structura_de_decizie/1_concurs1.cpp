// https://www.pbinfo.ro/probleme/3185/concurs1
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long a, b, n;
  cin>>a>>b>>n;
  if (n >= a && n <= b) cout<<"DA";
  else cout<<"NU";
}