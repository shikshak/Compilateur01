grammar antlrquejaime;

//declaration variable/fonction
nom_var
    :   (LETTRE | '_')* (LETTRE)+ (LETTRE | DIGIT | '_')*
	;

type_var
	:	'char' | 'int64_t' | 'int32_t'
	;

type_fonction
	:	type_var | 'void'
	;

//affectation
aff
	:	nom_var | nom_var [expr] # affectationcoteGauche
	;

affectation
	:	aff  '=' expr
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
	|	aff'++'
	|	'++'aff
	|	aff'--'
	|	'--'aff
	;

expr
	:	INT32_T
	|	INT64_T
	|	CHAR
	|	(expr)
	|	expr '*'  expr
	|	expr '/'  expr
	|	expr '+'  expr
	|	expr '-'  expr
	|	expr '%'  expr
	|	expr '<<' expr
	|	expr '>>' expr
	|	expr '&'  expr
	|	expr '|'  expr
	|	expr '^'  expr
	|	'~'expr
	|	expr '&&' expr
	|	expr '||' expr
	|	'!'expr
	|	expr '<'  expr
	|	expr '<=' expr
	|	expr '>'  expr
	|	expr '>=' expr
	|	expr '==' expr
	|	expr '!=' expr
	|	aff
	|	nom_var (expr)
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
INT64 : NOMBRE;
INT32 : NOMBRE;
