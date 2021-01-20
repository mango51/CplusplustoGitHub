#ifndef CACULATOR_HEADER
#pragma once

#include "Caculator.h"
namespace CPU_4001
{
	class Caculator {
		private:

			static void Adder(
				const bool& A,
				const bool& B,
				const bool& Cin,
				bool& Cout,
				bool& Sum,
				const bool& p_Debug = false);
			
	public:
		static void TestAdder();
	};
}


#endif
