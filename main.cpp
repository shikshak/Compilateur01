#include <iostream>

#include "antlr4-runtime.h"
#include "gen/fichierAntlrLexer.h"
#include "gen/fichierAntlrParser.h"

#include "Programme.h"
#include "Constructor.h"

#include "dotexport.h"

using namespace antlr4;

int main(int , const char **) {
  ANTLRInputStream input("int main() { int64_t a, b; a = 1; b = 2; return 0;}");
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

/*  DotExport dotexport(&parser);
  tree::ParseTreeWalker::DEFAULT.walk(&dotexport,tree);
  ofstream out;
  out.open("tmp.dot");
  out<<dotexport.getDotFile();
  out.close();
  system("dot -Tpdf -o out.pdf tmp.dot");
*/

  Constructor constructor ;
  std::cout << "im the constructor" << std::endl;
  Programme * programme = constructor.visit(tree);
  std::cout << "byebye" << std::endl;

  return 0;
}
