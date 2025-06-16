#include <bits/stdc++.h>
#include <cstddef>
#include <queue>
using namespace std;

class node {
public:
  int data;
  node *left;
  node *right;

  node(int d) {
    this->data = d;
    this->left = nullptr;
    this->right = nullptr;
  }
};

void reversalLevelOrderTraversal(node *root) {
  queue<node *> q;
  stack<node *> s;
  q.push(root);
  q.push(NULL);
  while (!q.empty()) {
    node *temp = q.front();
    q.pop();
    s.push(temp);
    if (temp) {
      if (temp->right) {
        q.push(temp->right);
      }
      if (temp->left) {
        q.push(temp->left);
      }
    } else {
      if (!q.empty()) {
        q.push(NULL);
      }
    }
  }
  s.pop();
  while (!s.empty()) {
    if (s.top() != NULL) {
      cout << s.top()->data << " ";
    } else {
      cout << endl;
    }
    s.pop();
  }
  cout << endl;
}

void preorderTraversal(node *root) {
  if (root == NULL) {
    return;
  }
  cout << root->data << " ";
  preorderTraversal(root->left);
  preorderTraversal(root->right);
  return;
}

void inorderTraversal(node *root) {
  if (root == NULL) {
    return;
  }
  inorderTraversal(root->left);
  cout << root->data << " ";
  inorderTraversal(root->right);
  return;
}
void postorderTraversal(node *root) {
  if (root == NULL) {
    return;
  }
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  cout << root->data << " ";
  return;
}
void reverseLevelOrderTraversal(node *root) {
  vector<node *> v;
  v.push_back(root);
  v.push_back(NULL);
  int i = 0;
  while (i < v.size() - 1) {
    if (v[i]) {
      if (v[i]->right) {
        v.push_back(v[i]->right);
      }
      if (v[i]->left) {
        v.push_back(v[i]->left);
      }
    } else {
      if (i < v.size() - 1) {
        v.push_back(NULL);
      }
    }
    i++;
  }
  for (int j = v.size() - 2; j >= 0; j--) {
    if (v[j]) {
      cout << v[j]->data << " ";
    } else {
      cout << endl;
    }
  }
  cout << endl;
}
void levelOrderTraversal(node *root) {
  queue<node *> q;
  q.push(root);
  q.push(NULL);
  while (!q.empty()) {
    node *temp = q.front();
    q.pop();
    if (temp == NULL) {
      cout << endl;
      if (!q.empty()) {
        q.push(NULL);
      }
    } else {
      cout << temp->data << " ";
      if (temp->left) {
        q.push(temp->left);
      }
      if (temp->right) {
        q.push(temp->right);
      }
    }
  }
}

void levelOrderBuilt(node *&root) {
  cout << "Enter the root node: " << " ";
  int data;
  cin >> data;
  root = new node(data);
  queue<node *> q;
  q.push(root);
  while (!q.empty()) {
    node *temp = q.front();
    q.pop();
    int leftd;
    cout << "Enter the data to insert in left of node: " << temp->data << endl;
    cin >> leftd;
    if (leftd != -1) {
      temp->left = new node(leftd);
      q.push(temp->left);
    }

    int rightd;
    cout << "Enter the data to insert in right of node: " << temp->data << endl;
    cin >> rightd;

    if (rightd != -1) {
      temp->right = new node(rightd);
      q.push(temp->right);
    }
  }
}

node *buildTree(node *root) {
  int data;
  cout << "Enter the data: " << endl;
  cin >> data;
  if (data == -1) {
    return NULL;
  }
  root = new node(data);
  cout << "Enter the data to insert in left of " << data << endl;
  root->left = buildTree(root->left);
  cout << "Enter the data to insert in right of " << data << endl;
  root->right = buildTree(root->right);
  return root;
}

int main() {
  node *root = NULL;
  levelOrderBuilt(root);
  levelOrderTraversal(root);
  /*root = buildTree(root);*/
  /*cout << "LevelOrderTraversal : " << endl;*/
  /*levelOrderTraversal(root);*/
  /*cout << "reversalLevelOrderTraversal : " << endl;*/
  /*reversalLevelOrderTraversal(root);*/
  /*// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1*/
  /*cout << "Now the inorderTraversal: " << endl;*/
  /*inorderTraversal(root);*/
  /*cout << endl;*/
  /*cout << "Now the preOrderTraversal: " << endl;*/
  /*preorderTraversal(root);*/
  /*cout << endl;*/
  /*cout << "Now the postOrderTraversal: " << endl;*/
  /*postorderTraversal(root);*/
  /*cout << endl;*/
  return 0;
}
