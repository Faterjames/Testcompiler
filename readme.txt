this is a test of compiler
\\compiler of C

first : lex node
		when search keyword : anylse the node for expr or bool or else arge
		when search arge : first to search tablet if there is a arge
						   then if 1 go on 
						   else get error 
		when symbol:case ';': anylse the stack build the AST
					default : get in stack
		
	how to lex: get char in anry, set a compare machine to know the case


	compare machine: 

	lex_node:
		case 1
		case 2
		case 3
		case 4
		default:
			number:
			symbol:
			
		in stack;
		then in ASTtree

example:
	int func(){
		int a;
		int b;
		b = a + b;
		return b;
	}

first int in stack,then func AST_node:name-func,type function,in symbol-null,returntype-int,returnvalue;
then { in stack,while no } continue get symbol 
then int in stack, get while no ';' then a AST_node:name-a,type-int,value-null;
(when AST creat ,clear the stack)
then the same as b
then b in stack , = in stack , in case '=' anlyse the others symbol,then new the AST
return in stack,then new the func returnvalue;
	 
		
