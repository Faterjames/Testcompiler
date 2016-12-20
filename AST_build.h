//
// Created by ubuntu on 07.12.16.
//

#ifndef TESTCOMPILER_AST_BUILD_H
#define TESTCOMPILER_AST_BUILD_H

#include "using_struct.h"
#include "node_type.h"
#include "lex.h"

void expr(struct Tree* tree, struct _lex_node* node,char* ch,FILE* f);
struct AST_node* T_compare(struct _lex_node* node);
void new_AST_node(struct _lex_node *node);
void init_Tree(struct Tree *tree);
void AST_node_inLeft(struct Tree *tree,struct AST_node* node);
void AST_node_inRight(struct Tree *tree,struct AST_node* node);

#endif //TESTCOMPILER_AST_BUILD_H
