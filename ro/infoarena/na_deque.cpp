// https://infoarena.ro/problema/deque
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("deque.in");
ofstream fout("deque.out");

int main() {
  int n, k;
  fin>>n>>k;

  vector<int> a(n);
  deque<int> dq;
  for (int i=0; i<k; ++i) {
    fin>>a[i];
    while (!dq.empty() && a[i]<a[dq.back()]) dq.pop_back();
    dq.push_back(i);
  }

  ll s=a[dq.front()];
  for (int i=k; i<n; ++i) {
    fin>>a[i];
    while (!dq.empty() && dq.front() <= i-k) dq.pop_front();
    while (!dq.empty() && a[i]<a[dq.back()]) dq.pop_back();
    dq.push_back(i);
    s += a[dq.front()];
  }
  fout<<s;
}