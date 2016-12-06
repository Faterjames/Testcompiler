//
// Created by ubuntu on 28.11.16.
//

#include <stdio.h>
#include <stdbool.h>
#include "using_struct.h"


#ifndef TESTCOMPILER_LEX_H
#define TESTCOMPILER_LEX_H


#define isLowerAlphabet(ch)  (ch >= 'a' && ch <= 'z')
#define isUpperAlphabet(ch)   (ch >= 'A' && ch <='Z')
#define isAlphabet(ch)  isLowerAlphabet(ch) || isUpperAlphabet(ch)
#define isNumber(ch)  (ch >= '0' && ch <= '9'
#define NotEndSymbol(ch)  (ch != ';' && ch != ' ' && ch != EOF)
#define isLBracket(ch)  ch == '('
#define isRBracket(ch)  ch == ')'
#define isLBrace(ch)  ch == '{'
#define isRBrace(ch)  ch == '}'


char getch(FILE* f);
struct _lex_node * lex_ch(char ch, FILE *f);
struct _lex_node * int_compare(FILE* f);
struct _lex_node * letter_compare(char ch, FILE *f);
struct _lex_node * return_compare(FILE *f);
#endif //TESTCOMPILER_LEX_H
