#include<iostream>
#include <vector>
using namespace std;

vector <int> postOrder, preOrder, inOrder; 

void inorder(int keys[], int left[], int right[], int idx) {
   if(idx == -1)return;
   inorder(keys, left, right, left[idx]);
   inOrder.push_back(keys[idx]);
   inorder(keys, left, right, right[idx]);
}
void preorder(int keys[], int left[], int right[], int idx) {
   if(idx == -1)return;
   preOrder.push_back(keys[idx]);
   preorder(keys, left, right, left[idx]);
   preorder(keys, left, right, right[idx]);
}
void postorder(int keys[], int left[], int right[], int idx) {
   if(idx == -1)return;
   postorder(keys, left, right, left[idx]);
   postorder(keys, left, right, right[idx]);
   postOrder.push_back(keys[idx]);
}

int main() {
   int n;
   cin >> n;
   int keys[n], left[n], right[n];
   for (int i = 0; i < n; i++)
   {
      cin >> keys[i] >> left[i] >> right[i];
   }
   inorder(keys, left, right, 0);
   preorder(keys, left, right, 0);
   postorder(keys, left, right, 0);
   for(auto i: inOrder) cout << i << ' ';
   cout << "\n";
   for(auto i: preOrder) cout << i << ' ';
   cout << "\n";
   for(auto i: postOrder) cout << i << ' ';
   cout << "\n";
   return 0;
}

// 12/3/2023