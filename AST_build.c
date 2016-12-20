//
// Created by ubuntu on 07.12.16.
//

#include "using_struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lex.h"


struct AST_node *new_AST_node(struct _lex_node *node){
    struct AST_node *p_ast_node = (struct AST_node*)malloc(sizeof(struct _lex_node));
    p_ast_node->left = NULL;
    p_ast_node->right = NULL;
    p_ast_node->node = node;
    return p_ast_node;
}

void init_Tree(struct Tree* tree){
    struct AST_node* headNode = (struct AST_node*)malloc(sizeof(struct AST_node));
    headNode->node = 0;
    headNode->left = NULL;
    headNode->right = NULL;
    tree->headNode = headNode;
    tree->pNode = headNode;
}
void AST_node_inLeft(struct Tree *tree,struct AST_node* node){
    tree->pNode->left = node;
    return;
}

void AST_node_inRight(struct Tree *tree, struct AST_node *node){
    tree->pNode->right = node;
    return;
}
void AST_node_in(struct Tree *tree,struct AST_node* node){
    if(tree->pNode = tree->headNode){
        AST_node_inLeft(tree,node);
    }
    else if(tree->headNode->left = tree->pNode){
        AST_node_inLeft(tree,node);
    }
    else{
        if(tree->pNode->left == NULL){
            AST_node_inLeft(tree,node);
        }
        else if(tree->pNode->right == NULL){
            AST_node_inRight(tree,node);
            tree->pNode = tree->pNode->left;
        }
    }
}

struct AST_node* T_compare(struct _lex_node* node){
    struct AST_node* T_node = new_AST_node(node);
    return T_node;
}

void brace_E_compare(struct _lex_node* node){

}

void expr(struct Tree* tree, struct _lex_node* node,char* ch,FILE* f){
    struct AST_node* T_node = T_compare(node);
    if((node->type = y_Lbrace) && (T_node == NULL)){
        brace_E_compare(lex_ch(ch,f));
    }
    AST_node_inLeft(tree,T_node);
    struct _lex_node* nextNode = lex_ch(ch,f);
    if(nextNode->type = y_endsymbol){
        return;
    }
    else if((nextNode->type = y_plus) || (nextNode->type = y_milus)){

    }
}
