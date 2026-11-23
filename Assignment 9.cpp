#include<iostream>
#include<string>
using namespace std;

struct Node{
string key;
string value;
Node*right;
Node*left;
}

class BST{
public:
Node*root = NULL;

Node*insert(Node*node, string k, string v){
if (node==NULL) return new Node(node, k, v);
else if (k<node->key) node->left = insert(node->left, k,v);
else if (k>node->key) node->right = insert(node->right, k, v);
  return node;
}

void update(Node*node, string k , string v){
if (node==NULL) return ;
if (node->key == k) node->value = v;
else if (k<node->key) update(node->left, k,v);
else update(node->right, k , v);
}

void asc(Node*node){
  if (node==NULL) return;
  asc(node->left);
  cout<<node->key<<":"<<node->value<<endl;
  asc(node->right);
}

void des(Node*node){
  if (node==NULL) return;
des(node->right);
cout<<node->key<<":"<<node->value<<endl;
des(node->left);
}


int search (Node*node, string k,int comps){
  if (node==NULL) return comps;
comps++;
else if (node->key == k) return comps;
else if (k<node->key) return search(node->left, k, comps);
else return search(node->right, k, comps);

}

Node*findmin(Node*node)
{
  while (node->left!=NULL){
    node = node->left;
    
}
  return node;
}

Node*remove(Node*node, string k){
  if (node==NULL) return NULL;
  
}
