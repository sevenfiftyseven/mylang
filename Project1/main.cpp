#pragma warning(disable:4146)

#include "llvm/ADT/APFloat.h"
#include "llvm/ADT/STLExtras.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Verifier.h"

#include "AntlrFiles/mylang.h"
#include "AntlrFiles/mylangBaseVisitor.h"
#include "AntlrFiles/intermediate/base_lexer.h"

#include <antlr4-runtime.h>

#include <string>
#include <fstream>
#include <iostream>
#include "ASTBuilder.h"
#include "CodeGen.h"

using namespace llvm;
using namespace antlr4;

int main(int argc, char* argv[])
{
	printf("Hello World!\n");

	std::ifstream ifs("sample.mc");

	ANTLRInputStream input(ifs);
	base_lexer lexer(&input);
	CommonTokenStream tokens(&lexer);

	//tokens.fill();
	//auto token_list = tokens.getTokens();
	//for (auto token : token_list) {
	//	std::cout << token->getType() << "\t" << token->getText() << std::endl;
	//}
	//tokens.reset();

	mylang parser(&tokens);

	tree::ParseTree* tree = parser.program();
	

	std::stack<std::pair<int, tree::ParseTree*>> nodes;
	nodes.push(std::make_pair(0, tree));

	std::cout << tree->toStringTree(&parser, true) << std::endl;

	ASTBuilder* visitor = new ASTBuilder();
	auto program = std::any_cast<AST::Program>(visitor->visit(tree));
	 
	CodeGen generator;
	generator.ImportSystem();

	generator.generateCode(program);
	generator.ExportModule("out.ll");

	return 0;
}
