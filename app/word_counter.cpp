// Copyright (c) 2019 -- No copywrite
// This file has been created for assignment purpose only

#include <word_counter.hpp>

// This function will take a string as an input and will
// split it into words using these delimeters
// [' ' ,  ',' , '.' , '!']
// These words will be added to the vector and that
// vector will be returned

std::vector<std::string> StringToWords(std::string stream) {
  std::vector < std::string > words_from_string;  // container for words
  std::string temporary_word;  // temporary words which will be appeneded
  for (auto character : stream) {
    if (character != ' ' && character != '.' && character != ','
        && character != '!') {
      temporary_word += character;
    } else {
      words_from_string.push_back(temporary_word);
      temporary_word.clear();   // After word is added to vector clear it.
    }
  }
  words_from_string.push_back(temporary_word);
  return words_from_string;
}

// This function counts the number of words present in the string
// Vector size essentially gives us the ouput and it will be returned.

int CountWords(std::vector<std::string> words_from_string) {
  return words_from_string.size();
}

// This function prints out how many times every word has been repeated.
// First vector will be sorted with the help of sort algorithm, so that
// repeating words will come side by side. Temporary word is the tracker
// and will append counter if the next word is same. It will be changed
// to the new word otherwwise and counter will be set to 1 again.

void AppearanceOfWord(std::vector<std::string> all_words) {
  int count = 0;  // Counter flag

  sort(all_words.begin(), all_words.end());  // Sorting the vector
  std::string temp_word = all_words[0];
  for (auto w : all_words) {
    if (w == temp_word) {   // checking if next word is same
      count++;  // Counter adds 1
    } else {
      std::cout << "Word " << "\"" << temp_word << "\"" << " has appeared "
          << count << " times\n";
      count = 1;
      temp_word = w;
    }
  }
  if (count == 1) {
    std::cout << "Word " << "\"" << temp_word << "\""
        << " has appeared 1 time \n";
  } else {
    std::cout << "Word " << "\"" << temp_word << "\"" << " has appeared "
        << count << " times\n";
  }
}
