#include "string"
#include <antlr4-runtime.h> //YOU MUST INCLUDE THIS LIBRARY directory IN VS 2019 PROJECT PROPERTIES!

namespace Compilers
{
	class Scanner /*Write our scanner code within this class!*/
	{
		protected: 
			antlr4::ANTLRFileStream* inputFile = NULL;

		public : Scanner()
		{

		}


		public : Scanner(std::string fileName)
		{
			inputFile = new antlr4::ANTLRFileStream(fileName);
			inputFile->load(fileName);
			ssize_t a, b;
			a = 0;
			b = inputFile->EOF;
			
			std::cout << inputFile->getText(antlr4::misc::Interval(a, b)).length();
		}
	};
};
	
