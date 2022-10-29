// https://infoarena.ro/problema/vila2
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("vila2.in");
ofstream fout("vila2.out");

int main() {
  int n, k;
  fin>>n>>k;

  vector<int> a(n);
  deque<int> maxi, mini;
  for (int i=0; i<k; ++i) {
    fin>>a[i];
    while (!maxi.empty() && a[i]>a[maxi.back()]) maxi.pop_back();
    while (!mini.empty() && a[i]<a[mini.back()]) mini.pop_back();
    maxi.push_back(i);
    mini.push_back(i);
  }

  int maxd=a[maxi.front()]-a[mini.front()];
  for (int i=k; i<n; ++i) {
    fin>>a[i];
    while (!maxi.empty() && maxi.front() < i-k) maxi.pop_front();
    while (!maxi.empty() && a[i]>a[maxi.back()]) maxi.pop_back();
    while (!mini.empty() && mini.front() < i-k) mini.pop_front();
    while (!mini.empty() && a[i]<a[mini.back()]) mini.pop_back();
    maxi.push_back(i);
    mini.push_back(i);
    maxd = max(maxd, a[maxi.front()]-a[mini.front()]);
  }
  fout<<maxd;
}