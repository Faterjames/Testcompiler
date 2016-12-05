//
// Created by ubuntu on 28.11.16.
//
#include "lex.h"
#include <stdio.h>

#include <stdlib.h>
#include <string.h>


char getch(FILE *f){
    char ch = fgetc(f);
    return ch;
}

/*void equal_symbol(char ch){

}*/
void brace_(FILE *f){
    char ch = getch(f);
    while (ch != '}'){
        lex_node(ch,f);
        ch = getch(f);
    }
}
void int_compare(FILE *f){
    char *name = (char*)malloc(100 * sizeof(char));
    int i = 0;
    char ch;
 //   memset(name,'\0',strlen(name));
    while((ch = getch(f)) == ' ');
    while((ch != ' ') && (ch != ';') && (ch != EOF)){
     if(ch == '='); //equal_compare
     if(ch == '{'){
         brace_(f);
         break;
     }
     name[i] = ch;
     ch = getch(f);
     i++;
    }
    printf("%s\n",name);
    return;
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
        case 'r':
            if (getch(f) == 'e')
                if (getch(f) == 't')
                    if(getch(f) == 'u')
                        if(getch(f) == 'r')
                            if(getch(f) == 'n');
                                //return_compare()
            else;
                //variate_compare
            break;
        default:
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
        case 'a' ... 'z':
                letter_compare(ch, f);
                break;
        case '{':
            brace_(f);
            break;
    }
}

