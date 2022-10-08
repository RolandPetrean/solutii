// https://cses.fi/problemset/task/2431
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int pow10(int x) {
  int res = 1;
  for (int i=0; i<x; i++) {
    res *= 10;
  }
  return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int q;
  cin>>q;

  int k;
  for (int i=0; i<q; i++) {
    cin>>k;

    // Calculate the length of the numbers in the range where k is located
    int len=1, drange=9;
    while (drange < k) {
      // Calculate the upper bound of the digit range for each length
      k -= drange;
      len++;
      drange = len * 9 * pow10(len-1);
    }

    k--;
    int num = pow10(len-1) + k/len; // Calculate the number the digit is part of
    cout<<num / pow10(len - k%len - 1) % 10<<endl; // Get the correct digit of the number
  }
}