// Copyright (c) 2019 -- No copywrite
// This file has been created for assignment purpose only

#include <iostream>
#include <word_counter.hpp>

int main() {
  std::string input_stream;
  std::cout << "Please enter a string here : ";
  std::getline(std::cin, input_stream);  // Taking input stream
  auto words_from_stream = StringToWords(input_stream);
  std::cout << "Total number of words in string = "
      << CountWords(words_from_stream) << "\n";
  AppearanceOfWord(words_from_stream);  // Function call
  return 0;
}

