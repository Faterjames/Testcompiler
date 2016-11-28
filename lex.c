//
// Created by ubuntu on 28.11.16.
//
#include "lex.h"
#include <stdio.h>
#include <stdlib.h>


char getch(FILE *f){
    char ch = fgetc(f);
    return ch;
}

void equal_symbol(char ch){

}
void lex_node(char ch){
    switch (ch){
        case '=':
            equal_symbol(ch);
            break;
        case ';':
            break;
        case ''
    }
}
