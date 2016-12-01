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

/*void equal_symbol(char ch){

}*/
void brace_(){

}
char* int_compare(FILE *f){
    char name[100];
    int i = 0;
    char ch;
    while((ch = getch(f)) == ' ');
    while((ch != ' ') && (ch != ';')){
     if(ch == '='); //equal_compare
     name[i] = ch;
     ch = getch(f);
     i++;
    }
    printf("%s",name);
    return name;
}
void letter_compare(char ch,FILE *f){
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
                    printf("intcompare");
                    int_compare(f);
                }
            else //variate_compare
            break;
    }
}
void lex_node(char ch,FILE *f) {
    switch (ch) {
        case '=':
            //equal_symbol(ch);
            break;
        case ';':
            break;
        case ' ':
            break;
        default:
            if (('a' < ch) || (ch < 'Z')) {
               // printf("lettercompare");
                letter_compare(ch, f);
            }
    }
}

