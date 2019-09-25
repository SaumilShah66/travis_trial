// Copyright (c) 2019 -- No copywrite
// This file has been created for assignment purpose only

#pragma once

#include<vector>
#include<iostream>
#include<string>
#include<algorithm>

// @param[in] stream pass an input string whose words you want to split
// @return Vector containing all the words from input string
std::vector<std::string> StringToWords(std::string stream);


// @param[in] words_from_string Vectors containing all words
// @return Number of words present in the vector
int CountWords(std::vector<std::string> words_from_string);


// @param all_words Vector containing all the words
// @return void
void AppearanceOfWord(std::vector<std::string> all_words);
