// https://www.pbinfo.ro/probleme/1261/catepare
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long x, s=0;
  while (cin>>x && x != 0) {
    if (x%2==0) ++s;
  }
  if (s == 0) cout<<"NU EXISTA";
  else cout<<s;
}