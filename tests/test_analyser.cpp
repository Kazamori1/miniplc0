#include "analyser/analyser.h"
#include "catch2/catch.hpp"
#include "instruction/instruction.h"
#include "tokenizer/tokenizer.h"
#include <sstream>
#include <vector>

/*
        不要忘记写测试用例喔。
*/
TEST_CASE("xxx") {

std::string input =
        "begin\n"
        "	const a = 1;\n"
        "	var b = 100;\n"
        "	print(a+b);\n"
        "end\n";
std::stringstream ss;
ss.str(input);
miniplc0::Tokenizer tkz(ss);
auto result = tkz.AllTokens();
miniplc0::Analyser a(result.first);
a.Analyse();
if (result.second.has_value()) {
FAIL();
}
}