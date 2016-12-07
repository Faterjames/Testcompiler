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
    char ch = getch(fp);
    struct _lex_node* node = lex_ch(&ch,fp);
    printf("%s,  %c",node->name,ch);
    if(node->type == 101) printf("sss");
	return 0;
}
