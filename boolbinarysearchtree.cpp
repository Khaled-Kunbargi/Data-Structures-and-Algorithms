#include <iostream>
#include <vector>
using namespace std;

vector <int> test;

void inorder(int keys[], int left[], int right[], int idx) {
   if(idx == -1)return;
   inorder(keys, left, right, left[idx]);
   test.push_back(keys[idx]);
   inorder(keys, left, right, right[idx]);
}


//To check if a tree is a binary search tree put it in the in order then check if it is sorted.
int main(){
   int n;
   cin >> n;
   if(n == 0){cout << "CORRECT\n";
        return 0;
   }
   int keys[n], left[n], right[n];
   for (int i = 0; i < n; i++)
   {
    cin >> keys[i] >> left[i] >> right[i];
   }
    inorder(keys, left, right, 0);
    bool isSorted = true;
    for (int i = 0; i < n; i++)
    {
        if(i!=n-1)if(test[i] > test[i+1])isSorted = false;
    }
    if(isSorted)cout << "CORRECT\n";
    else cout << "INCORRECT\n";
    return 0;
}

// 12/3/2023