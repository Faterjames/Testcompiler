//
// Created by ubuntu on 28.11.16.
//
#include "lex.h"
#include <stdio.h>

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


char getch(FILE *f){
    char ch = fgetc(f);
    return ch;
}

/*void equal_symbol(char ch){

}*/
void Nobrant(char* ch,FILE *f){
    if((*ch == ' ') || (*ch == -1)){
        while((*ch = getch(f)) == ' ');
        return;
    }
    else return;
}
//used to ignore all brant

///////////////////////////////////////////////
struct _lex_node *int_compare(FILE *f){
    struct _lex_node *node = (struct _lex_node*)malloc(sizeof(struct _lex_node));
    char *name = (char*)malloc(100 * sizeof(char));
    int16_t i = 0;
    char ch;
    while((ch = getch(f)) == ' ');
    while(isAlphabet(ch) || (ch == '_')){
        name[i] = ch;
        i++;
        ch = getch(f);
    }
    node->name = name;
    node->type = y_int;
    node->value = '0';
    printf("%s\n",name);
    return node;
}
//used to solve with int keyword
/////////////////////////////////////////////////////////////////
struct _lex_node *return_compare(FILE *f){
    char ch;
    char* name = (char*) malloc(100 * sizeof(char));
    struct _lex_node *node = (struct _lex_node*)malloc(sizeof(struct _lex_node));
    int16_t i = 0;
    while((ch = getch(f)) == ' ');
    while(isAlphabet(ch) || (ch == '_')){
        name[i] = ch;
        ch = getch(f);
        i ++;
    }
    node->name = name;
    node->type = y_unkown;
    node->value = '0';
    printf("%s\n",name);
    return node;
}
//used to solve return keyword
///////////////////////////////////////////////////////
struct _lex_node* letter_compare(char ch,FILE *f){
    struct _lex_node* node;
    switch (ch){
       /* case 'a' :
            if(getch(f) == 'u')
                if(getch(f) == 't')
                    if(getch(f) == 'o');
                        //auto_compare;
            else{
                //variate_compare();
            }
            break;
        case 'c' :
            if(getch(f) == 'a')
                if(getch(f) == 's')
                    if(getch(f) == 'e');
                        //case_comp
            else if(getch(f) == 'o')
                        if(getch(f) == 'n')
                            if(getch(f) == 's')
                                if(getch(f) == 't');
                                    //const_compare

            else //variate_compare();
            break;
        case 'd' :
            if(getch(f) == 'e')
                if(getch(f) == 'f')
                    if(getch(f) == 'a')
                        if(getch(f) == 'u')
                            if(getch(f) == 'l')
                                if(getch(f) == 't');
                                    //default_compare()
            else if(getch(f) == 'o')
                    if(getch(f) == 'u')
                        if(getch(f) == 'b')
                            if(getch(f) == 'l')
                                if(getch(f) == 'e');
                                    //double_compare()
            else //variate_compare();
            break;
        case 'e':
            if (getch(f) == 'n')
                if (getch(f) == 'u')
                    if (getch(f) == 'm');
                        //enum_compare
            else //variate_compare;
            break;
        case 'f':
            if (getch(f) == 'l')
                if(getch(f) == 'o')
                    if(getch(f) == 'a')
                        if(getch(f) == 't');
                            //float_compare
            else //variate_compare;
            break;
        case 'g':
            if (getch(f) == 'o')
                if(getch(f) == 't')
                    if (getch(f) == 'o');
                        //goto_compare
            else //variate_compare
            break;*/
        case 'i':
            if (getch(f) == 'n')
                if(getch(f) == 't') {
                    node = int_compare(f);
                    printf("%s",node->name);
                    return node;
                }
            else //variate_compare
            break;
        case 'r':
            if (getch(f) == 'e')
                if (getch(f) == 't')
                    if(getch(f) == 'u')
                        if(getch(f) == 'r')
                            if(getch(f) == 'n') {
                                printf("return");
                                node = return_compare(f);
                                return node;
                            }
            else;
                //variate_compare
            break;
        default:
            break;
    }
    return NULL;
}
//when get letter
//////////////////////////////////////////////////////////////////////
void number_compare(char ch,FILE *f){


}
struct _lex_node* lex_ch(char ch,FILE *f) {
    struct _lex_node *lex_node;
    switch (ch) {
        case '=':
            //equal_symbol(ch);
            break;
        case ';':
            break;
        case ' ':
            break;
        case 'a' ... 'z':
            lex_node = letter_compare(ch, f);
            if(lex_node != NULL) {
                printf("%s", lex_node->name);
                return lex_node;
            }
            break;
        case '0' ... '9':
            number_compare(ch,f);
            break;
        case '{':

            break;
    }
    return NULL;
}

