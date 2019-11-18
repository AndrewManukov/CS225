/**
 * @file anagram_dict.cpp
 * Implementation of the AnagramDict class.
 *
 * @author Matt Joras
 * @date Winter 2013
 */

#include "anagram_dict.h"

#include <algorithm> /* I wonder why this is included... */
#include <fstream>

using std::string;
using std::vector;
using std::ifstream;

/**
 * Constructs an AnagramDict from a filename with newline-separated
 * words.
 * @param filename The name of the word list file.
 */
AnagramDict::AnagramDict(const string& filename)
{
    ifstream file(filename);
    string words;
    if(file.is_open())
    {
      while(getline(file, words))
      {
        string word = words;
        std::sort(word.begin(), word.end());
        dict[word].push_back(words);
      }
    }
    /* Your code goes here! */
}

/**
 * Constructs an AnagramDict from a vector of words.
 * @param words The vector of strings to be used as source words.
 */
AnagramDict::AnagramDict(const vector<string>& words)
{
  for(size_t i = 0; i < words.size(); i++)
  {
    string word = words[i];
    sort(word.begin(), word.end());
    dict[word].push_back(words[i]);
  }
    /* Your code goes here! */
}

/**
 * @param word The word to find anagrams of.
 * @return A vector of strings of anagrams of the given word. Empty
 * vector returned if no anagrams are found or the word is not in the
 * word list.
 */
vector<string> AnagramDict::get_anagrams(const string& word) const
{
    /* Your code goes here! */
    string word_ = word;
    sort(word_.begin(), word_.end());

    auto finder = dict.find(word_);

    if(finder != dict.end())
    {
      return finder->second;
    }
    return vector<string>();

}

/**
 * @return A vector of vectors of strings. Each inner vector contains
 * the "anagram siblings", i.e. words that are anagrams of one another.
 * NOTE: It is impossible to have one of these vectors have less than
 * two elements, i.e. words with no anagrams are ommitted.
 */
vector<vector<string>> AnagramDict::get_all_anagrams() const
{
    /* Your code goes here! */
    //auto finder = dict.begin();

    vector<vector<string>> output;

    for(auto finder: dict)
    {
      if(finder.second.size() >= 2)
      {
        output.push_back(finder.second);
      }
    }
    return output;


}
