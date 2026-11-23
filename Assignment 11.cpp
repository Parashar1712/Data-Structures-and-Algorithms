#include<iostream>
#include<vector>
using namespace std;

class DFSgraph{
public:
int n;
int adjmatrix[10][10];
bool visited[20];

DFSgraph(int nodes){
n = nodes;
for(int i =0; i<n;i++){
visited[i]=false;
  for(int j =0; j<n;j++){
    adjmatrix[i][j] = 0;
}
}
}

void addedge(int v, int u){
adjmatrix[v][u]=1;
adjmatrix[u][v]=1;
  
}

void dfs(int vertex){
visited[vertex] = true;
  cout<<vertex<<" ";
for (int i =0; i<n; i++){
  if (adjmatrix[vertex][i] == 1 & !visted[i]){
  dfs(i);
  }
}
}
