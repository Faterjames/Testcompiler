//
// Created by ubuntu on 28.11.16.
//

#include <stdio.h>

#ifndef TESTCOMPILER_LEX_H
#define TESTCOMPILER_LEX_H

char getch(FILE* f);
void lex_node(char ch,FILE *f);
void int_compare(FILE* f);
void func_compare();
#endif //TESTCOMPILER_LEX_H
