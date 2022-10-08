// https://www.pbinfo.ro/probleme/2699/puterileluin
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

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