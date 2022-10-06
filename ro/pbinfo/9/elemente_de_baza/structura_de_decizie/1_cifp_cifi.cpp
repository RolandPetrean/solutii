// https://www.pbinfo.ro/probleme/2696/cifp-cifi
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int a, b;
  cin>>a>>b;

  if (a%2==b%2) {
    cout<<!(a%10%2)+!(a/10%10%2)+!(b%10%2)+!(b/10%10%2);
  } else {
    cout<<(a%10%2)+(a/10%10%2)+(b%10%2)+(b/10%10%2);
  }
}