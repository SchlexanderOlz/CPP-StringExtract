#include <criterion/criterion.h>
#include "../include/StringExtract.hpp"


using namespace str_extract;


Test(SplitStringTest, SplitStringTest) {
    string test_str = "Hello World!";
    vector<string> split_res = Split(test_str, ' ');

    cr_assert(split_res[0] == "Hello" && split_res[1] == "World!");
}

Test(TrimTest, SpaceTrimTest) {
    string test_str = " \n  Unresolved Input       \n";
    Trim(test_str);
    cr_assert(test_str == "Unresolved Input");
}

Test(ExtractSubStr, ExtractTest) {
    string test_str = "I like this string (not) but actually I don't (yes)";
    vector<string> extracted = ExtractSubStr(test_str, '(', ')');
    cr_assert(extracted[0] == "not" && extracted[1] == "yes");
}

Test(Contains, ContainsTest) {
    string test_str = "Is sour mom gae?";
    cr_assert(Contains(test_str, "gae"));
}

Test(Contains, DoesntContainsTest) {
    string test_str = "How has your day been?";
    cr_assert(!Contains(test_str, "yesterday"));
}