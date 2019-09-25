#include <gtest/gtest.h>
#include <word_counter.hpp>

std::string ss = "This is my string";
auto words = StringToWords(ss);

std::vector<std::string> out = {"This","is","my","string"};
int count = 4;


TEST(Checker, Number_of_words) {
 	EXPECT_EQ(CountWords(out), count);
}


TEST(Checker, AllWords) {
	EXPECT_EQ(StringToWords(ss), out);
}

