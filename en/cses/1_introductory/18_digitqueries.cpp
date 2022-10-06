// https://cses.fi/problemset/task/2431
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

ll pow10(ll x) {
  ll res = 1;
  for (ll i=0; i<x; i++) {
    res *= 10;
  }
  return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll q;
  cin>>q;

  ll k;
  for (ll i=0; i<q; i++) {
    cin>>k;

    // Calculate the length of the numbers in the range where k is located
    ll len=1, drange=9;
    while (drange < k) {
      // Calculate the upper bound of the digit range for each length
      k -= drange;
      len++;
      drange = len * 9 * pow10(len-1);
    }

    k--;
    ll num = pow10(len-1) + k/len; // Calculate the number the digit is part of
    cout<<num / pow10(len - k%len - 1) % 10<<endl; // Get the correct digit of the number
  }
}