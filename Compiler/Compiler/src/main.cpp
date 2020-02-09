#include "antlr4-runtime.h"
#include "string"
#include "scanner.cpp"

using namespace antlr4;

int main(int argc, char** argv) {
	if(argc == 2)
	{ 
		std::string fileName = argv[1];
		Compilers::Scanner *scanning = new Compilers::Scanner(fileName);
	}
	return 0;
}