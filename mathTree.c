#include "math_tree.h"

#define wrongOperationError printf("Error: wrong operation\n"); \
            exit(1);

#define checkChildAns(child) if (!child->ans) { \
            printf("Error: child's ans is empty\n"); \
            exit(1); \
        }

struct MathTree* makeVariale(double val){ // Single variable
    struct MathTree* ret = malloc(sizeof(MathTree));
    ret->ans = val;
    ret->oper = none;
    ret->left = NULL;
    ret->right = NULL;
    return ret;
}
struct MathTree* makeTree(enum operations _operation, MathTree* _left, MathTree* _right){
    checkChildAns(_left)
    checkChildAns(_right)
    struct MathTree* ret = malloc(sizeof(MathTree));
    ret->left = _left;
    ret->right = _right;
    ret->oper = _operation;
    switch (_operation){
        case minus:
            ret->ans = _left->ans - _right->ans;
            break;
        case plus:
            ret->ans = _left->ans + _right->ans;
            break;
        case multiply:
            ret->ans = _left->ans * _right->ans;
            break;
        case divide:
            ret->ans = _left->ans / _right->ans;
            break;
        default:
            wrongOperationError
    }
    return ret;
}

void math_tree_free(MathTree *tree) {
    if (!tree) return;
    math_tree_free(tree->left);
    math_tree_free(tree->right);
    free(tree);
}
