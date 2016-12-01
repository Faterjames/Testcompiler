#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "lex.h"
#include "node_type.h"



int main(){
    FILE *fp;
    if((fp = fopen("/home/ubuntu/programmes/AST_test/test.c","rb")) == NULL){
        printf("error to open file\n");
        exit(1);
    }
    char ch;
    while((ch = getch(fp)) != EOF) lex_node(ch,fp);
	return 0;
}
