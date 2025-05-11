#ifndef MATH_TREE_H
#define MATH_TREE_H

#include <stdio.h>
#include <stdlib.h>

typedef enum operations { plus, minus, multiply, divide, none };

typedef struct MathTree{
    struct MathTree *left;
    struct MathTree *right;
    double ans;
    operations oper;
} MathTree;

MathTree* makeVariale(double val); // Оконечный узел

MathTree* makeTree(operations _operation, MathTree *left, MathTree *right); // Узел с операцией

void mathTreeFree(MathTree *tree); // Освобождение памяти

#endif // MATH_TREE_H
