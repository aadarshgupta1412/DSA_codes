// Problem at: https://thejoboverflow.com/problem/194/
// Method: Floyd-Warshall algorithm - https://www.geeksforgeeks.org/floyd-warshall-algorithm-dp-16/

#include <bits/stdc++.h>
using namespace std;

#define INF INT_MAX

int main() {

  int n, k;
  cin>>n>>k;
  vector<int> D;
  for (int i=0; i<k; i++){
        int y;
        cin>>y;
        D.push_back(y);
  }
  int x;
  cin>>x;
  vector<vector<int>> con(n, vector<int>(n, INT_MAX)); 
  for (int i=0; i<x; i++){
      int a, b, c;
      cin>>a>>b>>c;
      con[a][b] = c;
      con[b][a] = c;
  }
  for (int i=0; i<n; i++){
      for (int j=0; j<n; j++){
          if (con[i][j]){
              if (i==j) con[i][j] = 0;
          }
      }
  }
  for (int i=0; i<n; i++){
      for (int j=0; j<n; j++){
          for (int k=0; k<n; k++){
              if (con[i][k]<INT_MAX && con[j][k]<INT_MAX){
                  if (i!=j && i!=k & j!=k){
                      con[i][j] = min(con[i][j], con[i][k]+con[j][k]);
                      con[j][i] = con[i][j];
                  }
              }
          }
      }
  }
  int ans=INT_MAX;
  for (int i=0; i<k; i++){
      for (int j=i; j<k; j++){
        if (j!=i){
            ans = min(ans, con[D[i]][D[j]]);    
        }  
      }
  }
  cout<<ans;

  return 0;

}
