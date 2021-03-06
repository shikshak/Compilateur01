grammar fichierAntlr;

programme
    : declaration* fonction* main*   #programme_normal
    ;

//structure
//fonction
main
    :   type_fonction 'main' '(' parametre ')' '{' declaration*  bloc '}'          #main_avecparametre
    |   type_fonction 'main' '('  ')' '{' declaration*  bloc '}'                   #main_sansparametre
    |   type_fonction 'main' '('  'void'  ')' '{' declaration*  bloc '}'           #main_parametrevoid
    ;

fonction
    :   type_fonction NOM '(' parametre ')' '{' declaration*  bloc '}'  #fonction_avecparametre
    |   type_fonction NOM '('  ')' '{' declaration*  bloc '}'           #fonction_sansparametre
    |   type_fonction NOM '('  'void'  ')' '{' declaration*  bloc '}'   #fonction_parametrevoid
    ;

parametre
    :   type_var NOM      #parametre_normal
    |   type_var NOM '[' CHIFFRE ']'  #parametre_tableau
    ;


//affectation
variable
    :   NOM             #variable_simple
    |   NOM '['expr']'   #variable_tableau
    ;

affectation
	:	variable'++'    #affectation_plusplusapres
	|	'++'variable    #affectation_plusplusavant
	|	variable'--'    #affectation_moinsmoinsapres
	|	'--'variable    #affectation_moinsmoinsavant
	|   variable  '=' expr   #affectation_egal
	|	variable '&=' expr   #affectation_etegal
	|	variable '|=' expr   #affectation_ouegal
	|	variable '+=' expr   #affectation_plusegal
	|	variable '-=' expr   #affectation_moinsegal
	|	variable '*=' expr   #affectation_foisegal
	|	variable '/=' expr   #affectation_divegal
	|	variable '%=' expr   #affectation_pourcentegal
	|	variable '<=' expr   #affectation_infegal
	|	variable '>=' expr   #affectation_supegal
	;

expr
	:	CHIFFRE         #expr_chiffre
	|   NOMBRE          #expr_nombre
	|	CHAR            #expr_char
	|	'(' expr ')'    #expr_parenthese
	|	'~'expr         #expr_vague
	|	'!'expr         #expr_exclamation
	|	expr '*'  expr  #expr_multiplication
	|	expr '/'  expr  #expr_division
	|	expr '%'  expr  #expr_mod
	|	expr '+'  expr  #expr_addition
	|	expr '-'  expr  #expr_soustraction
	|	expr '<<' expr  #expr_infinf
	|	expr '>>' expr  #expr_supsup
	|	expr '&'  expr  #expr_et
	|	expr '|'  expr  #expr_ou
	|	expr '^'  expr  #expr_chapeau
	|	expr '&&' expr  #expr_etet
	|	expr '||' expr  #expr_ouou
	|	expr '<'  expr  #expr_inf
	|	expr '<=' expr  #expr_infegal
	|	expr '>'  expr  #expr_sup
	|	expr '>=' expr  #expr_supegal
	|	expr '==' expr  #expr_egalegal
	|	expr '!=' expr  #expr_diffegal
	|   variable        	#expr_variable
	|   affectation     	#expr_affectation
	|   NOM '(' ( expr ( ',' expr )* )? ')' #expr_fonction
	;

return_
    :  'return'  expr? ';'  #return_normal
    ;

break_
    :   'break' ';' #break_normal
    ;

instruction
    :   structure_if    #instruction_if
    |   structure_while #instruction_while
    |   expr ';'        #instruction_expr
    |   return_         #instruction_return
    |   break_          #instruction_break
    ;

bloc
    :   instruction*    #bloc_normal
    ;

declaration
    :   type_var NOM (',' NOM)* ';' #declaration_normale
    |   type_var NOM '=' expr ';'       #declaration_definition
    |   type_var NOM '[' expr ']'';'    #declaration_tableau
    |   type_var NOM '[' expr ']' '=' '{' NOMBRE (',' NOMBRE)* '}' ';'     #declaration_definitiontableau_nombre
    |   type_var NOM '[' expr ']' '=' '{' CHAR (',' CHAR)* '}' ';'     #declaration_definitiontableau_char
    ;




//Structures de controle
structure_if
    :   'if' '(' expr ')'  ( '{' bloc '}' | instruction ) else_   #structureif_normal
    ;


else_
    :   ( 'else' ( '{' bloc '}' | instruction ) )? #else_normal
    ;


structure_while
    :   'while' '(' expr ')' ( '{' bloc '}' | instruction ) #structurewhile_normal
    ;


// les skip
Include
    :   '#' .*?  ~[\r\n]*
        -> skip //redemander ce qu'il faut faire
	;

EspaceBlanc
	:	( ' ' | '\t' | '\r' | '\n' )+
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

//declaration variable/fonction
NOM
    :   ([A-Za-z][0-9_a-zA-Z]*)
	;

type_var
	:	'char'
	| 'int64_t'
	| 'int32_t'
	;

type_fonction
	:	'char' | 'int64_t' | 'int32_t' | 'int' | 'void'
	;

LETTRE : [a-zA-Z]+;
CHIFFRE : [0-9];
NOMBRE: [0-9]+;
CHAR: '\'' SYMBOLE '\'';
SYMBOLE : '\\'. | .;
