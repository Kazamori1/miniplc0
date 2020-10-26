#include "analyser/analyser.h"
#include "catch2/catch.hpp"
#include "instruction/instruction.h"
#include "tokenizer/tokenizer.h"
#include "simple_vm.hpp"
#include <sstream>
#include <vector>

/*
        不要忘记写测试用例喔。
*/
TEST_CASE("xxx") {

std::string input =
        "begin\n"
        "	const a = -1;\n"
        "	var b;\n"
        "	var c = 3;\n"
        "	print(b*(a+c));\n"
        "	print(a);\n"
        "	print(b);\n"
        "	print(c);\n"
        "end\n";
std::stringstream ss;
ss.str(input);
miniplc0::Tokenizer tkz(ss);
auto result = tkz.AllTokens();
miniplc0::Analyser a(result.first);
//auto xx=a.Analyse();
miniplc0::VM x(a.Analyse().first);
auto xy=x.Run();

}