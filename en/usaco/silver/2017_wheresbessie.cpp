#include <bits/stdc++.h>
using namespace std;

ifstream fin("where.in");
ofstream fout("where.out");

char img[21][21];
bool visited[21][21];
int chars[100];
pair<int,int> dir[4]{{0,1},{0,-1},{1,0},{-1,0}};

void flood(int x1, int y1, int x2, int y2, int i, int j, char c) {
  stack<pair<int,int>> s{{{i, j}}};
  while (!s.empty()) {
    pair<int,int> curr = s.top();
    s.pop();

    visited[curr.first][curr.second] = true;

    for (pair<int,int> d:dir) {
      int nx=curr.first+d.first, ny=curr.second+d.second;
      if (!visited[nx][ny] && nx >= x1 && ny >= y1 && nx <= x2 && ny <= y2 && img[nx][ny]==c) {
        s.push({nx, ny});
      }
    }
  }
}

int main() {
  int n;
  fin>>n;

  for (int i=0; i<n; ++i) {
    for (int j=0; j<n; ++j) fin>>img[i][j];
  }

  vector<pair<pair<int,int>,pair<int,int>>> pcls;
  for (int x1=0; x1<n; ++x1) {
    for (int y1=0; y1<n; ++y1) {
      for (int x2=x1; x2<n; ++x2) {
        for (int y2=y1; y2<n; ++y2) {
          memset(visited, false, sizeof(visited));
          memset(chars, 0, sizeof(chars));

          bool ok=true;
          for (int i=x1; i<=x2 && ok; ++i) {
            for (int j=y1; j<=y2; ++j) {

              char c = img[i][j];
              if (!visited[i][j]) {
                flood(x1, y1, x2, y2, i, j, c);
                ++chars[c];
              }

            }
          }

          int cnt=0;
          bool one=false, two=false;
          for (int i=0; i<100 && cnt<3; ++i) {
            if (!chars[i]) continue;
            ++cnt;

            if (chars[i] == 1) one = true;
            else two = true;
          }
          if (cnt<3 && one && two) {
            pcls.push_back({{x1, y1}, {x2, y2}});
          }
        }
      }
    }
  }
  
  vector<bool> isPcl(pcls.size(), true);
  for (int i=0; i<pcls.size(); ++i) {
    auto pcl = pcls[i];
    for (int j=0; j<pcls.size(); ++j) {
      auto containing = pcls[j];
      if (pcl == containing) continue;
      if (pcl.first.first <= containing.first.first && pcl.first.second <= containing.first.second && pcl.second.first >= containing.second.first && pcl.second.second >= containing.second.second) {
        isPcl[j] = false;
      }
    }
  }

  int cnt=0;
  for (auto v:isPcl) cnt += v;

  fout<<cnt;
}