#include <stdio.h>

#define wrongOperationError printf("Error: wrong operation\n") / 
            exit(1);
#define checkOperation(op) if (op != '-' && op != '+' /
        && op != '*' && op != '/' /
        && op != '0'){ /
            wrongOperationError/
        }

#define checkChildAns(child) if (!child.ans) { /
            printf("Error: child's ans is empty\n") /
            exit(1); /
        }
struct MathTree{
    MathTree(char _operation){ // Empty struct
        checkOperation( _operation)
        left = nullptr;
        right = nullptr;
        ans = NULL;
        operation = _operation;
    }
    MathTree(double val){ // Single variable
        left = nullptr;
        right = nullptr;
        ans = val;
        operation = '0';
    }
    MathTree(char _operation, Tree* _left, Tree* _right){
        checkChildAns(_left)
        checkChildAns(_right)
        left = _left;
        right = _right;
        switch (operation){
            case '-':
                ans = left.ans - right.ans;
                break;
            case '+':
                ans = left.ans + right.ans;
                break;
            case '*':
                ans = left.ans  right.ans;
                break;
            case '/':
                ans = left.ans / right.ans;
                break;
            default:
                wrongOperationError
        }
    }
    void addLeftChild
    void addRightChild
    
    MathTree *left;
    MathTree *right;
    doble ans;
    char operation; // - + * / 0
}
int main() {
	// your code goes here

}

