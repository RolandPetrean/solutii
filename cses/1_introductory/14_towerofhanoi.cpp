// https://cses.fi/problemset/task/2165
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

void hanoi(ll n, ll start, ll end, ll aux) {
  if (n == 1) {
    cout<<start<<" "<<end<<endl;
    return;
  }
  hanoi(n-1, start, aux, end);
  hanoi(1, start, end, aux);
  hanoi(n-1, aux, end, start);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;
  cout<<(1<<n)-1<<endl;
  hanoi(n, 1, 3, 2);
}