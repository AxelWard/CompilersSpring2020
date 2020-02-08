#include "../antlr4-runtime/antlr4-runtime.h"
#include "string"
#include <Compiler\Compiler\src\scanner.cpp>

using namespace antlr4;

int main(int argc, char** argv) {
	if(argc == 2)
	{ 
		std::string fileName = argv[1];
		Compilers::Scanner *scanning = new Compilers::Scanner(new ANTLRFileStream(fileName));
	}
	return 0;
}