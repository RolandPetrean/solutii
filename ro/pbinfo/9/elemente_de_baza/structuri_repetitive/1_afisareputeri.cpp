// https://www.pbinfo.ro/probleme/348/afisareputeri
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n, p;
  cin>>n>>p;

  long long x=1;
  while (x<=p) {
    cout<<x<<" ";
    x *= n;
  }
}