//
// Created by ubuntu on 05.12.16.
//

#ifndef TESTCOMPILER_USING_STRUCT_H
#define TESTCOMPILER_USING_STRUCT_H

#include <sys/param.h>
#include "node_type.h"
struct variate_node{
    char *name;
    enum y_type type;
};
struct value_node{
    int value;
    char ch;
};
struct AST_node{
    struct _lex_node *node;

    struct AST_node *left;
    struct AST_node *right;

};
struct Tree{
    struct AST_node *headNode;
    struct AST_node *pNode;
};

struct forest{
    struct Tree forest[10];
    int8_t whichTree;
};

struct _lex_node{
    char *name;
    enum y_type type;
    char value;
};

#endif //TESTCOMPILER_USING_STRUCT_H
