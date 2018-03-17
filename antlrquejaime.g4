grammar antlrquejaime;

//Axiome
big
    : programme #axiome
    ;

programme
    : declaration* fonction* main   #programme_normal
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
    :   Nom_var             #variable_simple
    |  Nom_var '['expr']'   #variable_tableau
    ;

aff
	:   Nom_var                 #aff_variable
	|   Nom_var '[' expr ']'    #aff_tableau
	;

affectation
	:	variable'++'    #affectation_plusplusapres
	|	'++'variable    #affectation_plusplusavant
	|	variable'--'    #affectation_moinsmoinsapres
	|	'--'variable    #affectation_moinsmoinsavant
	|   aff  '=' expr   #affectation_egal
	|	aff '&=' expr   #affectation_etegal
	|	aff '|=' expr   #affectation_ouegal
	|	aff '+=' expr   #affectation_plusegal
	|	aff '-=' expr   #affectation_moinsegal
	|	aff '*=' expr   #affectation_foisegal
	|	aff '/=' expr   #affectation_divegal
	|	aff '%=' expr   #affectation_pourcentegal
	|	aff '<=' expr   #affectation_infegal
	|	aff '>=' expr   #affectation_supegal
	;

expr
	:	NOMBRE          #expr_nombre
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
	| variable          #expr_variabke
	|	aff             #expr_aff
	;

return_
    :  'return'  expr? ';'  #return_normal
    ;

break_
    :   'break' ';' #break_normal
    ;

instruction
    :  structure_if     #instruction_if
    |  structure_while  #instruction_while
    |   expr ';'        #instruction_expr
    |   return_         #instruction_return
    |   break_          #instruction_break
    ;

bloc
    :   instruction*    #bloc_normal
    ;

declaration
    :   Type_var Nom_var (',' Nom_var)* ';' #declaration_normale
    |   Type_var Nom_var '=' expr ';'       #declaration_definition
    |   Type_var Nom_var '[' expr ']'';'    #declaration_tableau
    ; //il manque declaration definition tableau ?

//fonction
fonction
    :   Type_fonction Nom_var '(' parametre ')' '{' declaration*  bloc '}'  #fonction_avecparametre
    |   Type_fonction Nom_var '('  ')' '{' declaration*  bloc '}'           #fonction_sansparametre
    |   Type_fonction Nom_var '('  'void'  ')' '{' declaration*  bloc '}'   #fonction_parametrevoid
    ;

parametre
    :   Type_var Nom_var parametre1     #parametre_normal
    |   Type_var Nom_var '[' expr ']'   #parametre_tableau
    ;

parametre1
    :   (',' parametre)?    #parametre1_normal
    ;

main
    :   Type_fonction Nom_var '(' parametre ')' '{' declaration*  bloc '}'          #main_avecparametre
    |   Type_fonction Nom_var '('  ')' '{' declaration*  bloc '}'                   #main_sansparametre
    |   Type_fonction Nom_var '('  'void'  ')' '{' declaration*  bloc '}' parametre #main_parametrevoid
    ;

//Structures de controle
structure_if
    :   'if' '(' expr ')'  clause   #structureif_normal
    ;

clause
    :   ( '{' bloc '}' | instruction ) else_    #clause_normal
    ;

else_
    :   ( 'else_' ( '{' bloc '}' | instruction ) )* #else_normal
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