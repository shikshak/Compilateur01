#include <iostream>

#include "antlr4-runtime.h"
#include "gen/fichierAntlrLexer.h"
#include "gen/fichierAntlrParser.h"
#include "RI/BuildIR.h"
#include "Programme.h"
#include "Constructor.h"

#include "dotexport.h"

using namespace antlr4;
using namespace std;

//int main(int , const char **) {
int main(int argc, char* argv[]) {
char* hello = argv[1];
std::cout << hello;
	string strInput,strLine;
	ifstream infile;
	strInput = "";
	//infile.open ("Back/2_putchar.c");
infile.open (hello);
        while(getline(infile,strLine)) // To get you all the lines.
        {
	        strInput = strInput+"\n" +strLine; // Prints our STRING.
        }
	infile.close();
	cout << strInput<<endl;

	ANTLRInputStream input(strInput);
//  ANTLRInputStream input("int main() { int64_t a; a = 'a'; a = a+1; putchar(a); return 0;}");
//  ANTLRInputStream input("int main() { int64_t a; a = 'a'; return 0; }");
  fichierAntlrLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  fichierAntlrParser parser(&tokens);
  tree::ParseTree* tree = parser.programme();

  std::cout << "printing the tree" << std::endl;
  std::cout << tree->toStringTree(&parser) << std::endl << std::endl;
  std::cout << "finish printing the tree" << std::endl;

  DotExport dotexport(&parser);
  tree::ParseTreeWalker::DEFAULT.walk(&dotexport,tree);
  ofstream out;
  out.open("tmp.dot");
  out<<dotexport.getDotFile();
  out.close();
  system("dot -Tpdf -o out.pdf tmp.dot");

  Constructor constructor ;
  std::cout << "im the constructor" << std::endl;
  Programme* programme = constructor.visit(tree);
  std::cout << "byebye for me" << std::endl;
 // std::cout << *programme;
  std::cout << "fin print programme" << endl;

 BuildIR* build = new BuildIR(programme);
std::cout << "bonjour monsieur IR" << std::endl;

 build->print();

std::cout << "au revoir monsieur IR" << std::endl << endl;


  ofstream mycutefile;
  mycutefile.open ("yeah.s");

  cout << "Le fichier magnifique yeah" << endl;

    for (CFG* cfg : build->getCFGs()){
	cfg->gen_asm(mycutefile);        
	cfg->gen_asm(cout);
	}
    mycutefile.close();

cout << "your magic file has been created wow" << endl;

cout << endl << "lets run the file !" << endl;

cout << "with clang" << endl;
system("clang yeah.s -o yeah");
system("./yeah");
cout << endl;
cout << "with as gcc" << endl;
system("as -o main.o yeah.s");
//system("gcc main.o");
system("gcc -o main main.o");
system("./main");
cout << endl;
cout << "c'est fini !!!!!!!!!" << endl;
  return 0;
}
