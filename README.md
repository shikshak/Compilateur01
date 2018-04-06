-----------------------PLD COMP------------------------------
-------------------------H4212-------------------------------
-------------------------------------------------------------
Le projet longue durée dans le but de réaliser un compilateur 

Le programme après compilation est lancée par la commande:
	./exe <nom_du_fichier.c>

Pour compiler le projet il faut ajouter la librairie compilée
antlr dans le dossier principal puis make

Les fichiers .c illustrant les fonctionnalités implémentées
sont présents dans le dossier /Back 

-------------------------------------------------------------
Le compilateur compile les programmes c composé d'un main,
vide ou rempli d'instruction.
Les types des variables peuvent être 'int64_t' 'int32_t' et
char mais elles seront toutes castée en int64_t.
Les variables peuvent être déclarées, aussi affecté une valeur.
Le compilateur supporte les additions, les multiplications, 
les soustractions, les parentheses.
L'opérateur <nom_variable>++ est aussi implémentée.
L'appel à la fonction putchar(<variable>) l'est aussi.
  
                            ,     \    /      ,
                         / \    )\__/(     / \   
                        /   \  (_\  /_)   /   \                
     __________________/_____\__\@  @/___/_____\_________________
     |                          |\../|                          |
     |                           \VV/                           |
     |                                                          |
     |                    H4212 - PLD COMP                      |
     |                                                          |
     |                                                          |
     |__________________________________________________________|
                   |    /\ /      \\       \ /\    |
                   |  /   V        ))       V   \  |
                   |/     `       //        '     \|
                   `              V                '
