//
// Created by ubuntu on 05.12.16.
//

#ifndef TESTCOMPILER_USING_STRUCT_H
#define TESTCOMPILER_USING_STRUCT_H

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
    struct variate_node variate_node;
    struct value_node value_node;

    struct AST_node *left;
    struct AST_node *right;

};



struct _lex_node{
    char *name;
    enum y_type type;
    char value;
};

#endif //TESTCOMPILER_USING_STRUCT_H
