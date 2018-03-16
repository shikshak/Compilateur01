grammar antlrquejaime;

//Axiome
programme
    : declaration* fonction* main
    ;

 
//declaration variable/fonction
Nom_var
    :   (LETTRE | '_')* (LETTRE)+ (LETTRE | CHIFFRE | '_')*
	;

Type_var
	:	'char' | 'int64_t' | 'int32_t'
	;

Type_fonction
	:	Type_var | 'void'
	;

//structure

//affectation
variable 
    :   Nom_var
    |  Nom_var '['expr']'
    ;
 
aff
	:   Nom_var                 #affVariable
	|   Nom_var '[' expr ']'    # affTableau
	;

affectation
	:	variable'++'
	|	'++'variable
	|	variable'--'
	|	'--'variable
	|   aff  '=' expr
	|	aff '&=' expr
	|	aff '|=' expr
	|	aff '+=' expr
	|	aff '-=' expr
	|	aff '*=' expr
	|	aff '/=' expr
	|	aff '%=' expr
	|	aff '<=' expr
	|	aff '>=' expr
	|	aff '&=' expr
	|	aff '|=' expr
	;

expr
	:	NOMBRE
	|	CHAR
	|	'(' expr ')'
	|	'~'expr
	|	'!'expr
	|	expr '*'  expr
	|	expr '/'  expr
	|	expr '%'  expr
	|	expr '+'  expr
	|	expr '-'  expr
	|	expr '<<' expr
	|	expr '>>' expr
	|	expr '&'  expr
	|	expr '|'  expr
	|	expr '^'  expr
	|	expr '&&' expr
	|	expr '||' expr
	|	expr '<'  expr
	|	expr '<=' expr
	|	expr '>'  expr
	|	expr '>=' expr
	|	expr '==' expr
	|	expr '!=' expr
	|   variable
	|	aff
	;
	
return
    :  'return'  expr? ';'
    ;
 
break
    :   'break' ';'
    ;
 
instruction
    :  structure_if
    |  structure_while
    |   expr ';'
    |   return
    |   break
    ;
 
bloc
    :   instruction*
    ;
 
declaration
    :   Type_var Nom_var (',' Nom_var)* ';'
    |   Type_var Nom_var '=' expr ';'
    |   Type_var Nom_var '[' expr ']'';'
    ;
 
//fonction
fonction
    :   Type_fonction Nom_var '(' parametre ')' '{' declaration*  bloc '}'
    |   Type_fonction Nom_var '('  ')' '{' declaration*  bloc '}'
    |   Type_fonction Nom_var '('  'void'  ')' '{' declaration*  bloc '}'
    ;

parametre
    :   Type_var Nom_var parametre1
    |   Type_var Nom_var '[' expr ']'
    ;

parametre1
    :   (',' parametre)?
    ;

main
    :   Type_fonction Nom_var '(' parametre ')' '{' declaration*  bloc '}'
    |   Type_fonction Nom_var '('  ')' '{' declaration*  bloc '}'
    |   Type_fonction Nom_var '('  'void'  ')' '{' declaration*  bloc '}' parametre
    ;

//Structures de controle
structure_if
    :   'if' '(' expr ')'  clause
    ;

clause
    :   ( '{' bloc '}' | instruction ) else
    ;

else
    :   ( 'else' ( '{' bloc '}' | instruction ) )*
    ;


structure_while
    :   'while' '(' expr ')' ( '{' bloc '}' | instruction )
    ;


// les skip
Include
    :   '#' .*?  ~[\r\n]*
        -> skip //redemander ce qu'il faut faire
	;

EspaceBlanc
	:	[\t\n\r]+
		-> skip
	;


CommentaireBlock
    :   '/*' .*? '*/'
        -> skip
    ;

CommentaireLigne
    :   '//' ~[\r\n]*
        -> skip
	;


LETTRE : [a-zA-Z]+;
CHIFFRE : [0-9];
SYMBOLE : .;
NOMBRE: CHIFFRE+;
CHAR: '‘' SYMBOLE '’';