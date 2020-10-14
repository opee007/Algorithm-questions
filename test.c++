#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <time.h>
#include<windows.h>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int main(){
    while(true){
        for(int i = 1; i<101; i++){
            printf("%d", i);
        }
    Sleep(3);
    }
    
    return 0;
}
