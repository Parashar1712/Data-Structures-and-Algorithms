#include<iostream>
#include<vector>
using namespace std;

class Campusgraph{
public:
int n;
int adjmatrix[10][10];
vector<int>adjlist[10];

Campusgraph(int nodes){
n = nodes;
for(int i =0; i<n;i++){
for (int j = 0; j<n;j++){
  adjmatrix[i][j] = 0;
}
}
}

void addedge(int u, int v){
  adjmatrix[u][v]=1;
  adjmatrix[v][u]=1;

  adjlist[u].push_back(v);
  adjlist[v].push_back(u);
}

void displaymatrix(){
  for(int i = 0; i<n;i++){
    for(int j = 0; j<n; j++){
      cout<<adjmatrix[i][j];
    }
    cout<<endl;
  }
}

void displaylist(){
  for(int i = 0; i<n;i++){
    cout<<i<<";";
    for(int j = 0;j<j.adjlist[i].size();j++){
      cout<<adjlist[i][j];
    }
    cout<<endl;
}
