#include <stdio.h>

struct MathTree{
    MathTree(){ // Empty struct
        left = nullptr;
        right = nullptr;
        ans = NULL;
    }
    MathTree(double val){ // Single variable
        left = nullptr;
        right = nullptr;
        ans = val;
    }
    MathTree(Tree* _left){
        if (!_left.ans) {
            printf("Error: left child is empty\n")
            exit(1);
        }
        left = _left;
        right = nullptr;
        ans = left.ans;
    }
    MathTree *left;
    MathTree *right;
    doble ans;
}
int main() {
	// your code goes here

}
