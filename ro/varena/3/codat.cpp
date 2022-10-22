// https://www.varena.ro/problema/codat
#include <bits/stdc++.h>
using namespace std;

ifstream fin("codat.in");
ofstream fout("codat.out");

int main() {
  int n;
  fin>>n;

  vector<int> v(n);
  for (int i=0; i<n; ++i) fin>>v[i];

  vector<int> cod(n);
  stack<int> st, dr;

  for (int i=n-1; i>=0; --i) {
    while (!dr.empty() && v[i]>=v[dr.top()]) dr.pop();
    if (!dr.empty()) cod[i] = dr.top();
    else cod[i] = -1;
    dr.push(i);
  }

  for (int i=0; i<n; ++i) {
    while (!st.empty() && v[i]>=v[st.top()]) st.pop();
    if (st.empty() && cod[i] == -1) fout<<"-1 ";
    else if (!st.empty() && (cod[i] == -1 || i-st.top()<cod[i]-i)) fout<<st.top()+1<<" ";
    else fout<<cod[i]+1<<" ";
    st.push(i);
  }
}