#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  long long s=n-(n/2)-(n/3)-(n/5)-(n/7)-(n/30)-(n/42)-(n/70)-(n/105)+(n/6)+(n/10)+(n/14)+(n/15)+(n/21)+(n/35)+(n/210);
  cout<<s;
}