/**
 *  @author Kaito Miyamoto
 *  @date July 10, 2023
 *  @file h20.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
#include <algorithm>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID


#include "h20.h"

// Place your function here
string clean(const string& word)
{
    string result;
    string punctuation = "!?,-\".";
    for (char c : word)
    {
        if (punctuation.find(c) == string::npos)
        {
            result += tolower(c);
        }
    }
    return result;
}
vector<Word> spellCheck(istream& in, const vector<string>& dictionary,
                            const vector<string>& exclued)
{
    vector<Word> results;
    while (true)
    {
        streampos pos = in.tellg();
        if (pos == -1) { break; }
        string word;

        in >> word >> ws;
        word = clean(word);

        bool foundResults = false;
        for (auto& resultWord : results)
        {
            if (resultWord.word == word)
            {
                resultWord.positions.push_back(pos);
                foundResults = true;
                break;
            }
        }
        if (foundResults) { continue; }

        bool foundExclued =false;
        for (const auto& excluedWord : exclued)
        {
            if (excluedWord == word)
            {
                foundExclued = true;
                break;
            }
        }
        if (foundExclued) { continue; }

        bool foundDictionary = false;
        for (const auto& dictionaryWord : dictionary)
        {
            if (dictionaryWord == word)
            {
                foundDictionary = true;
                break;
            }
        }
        if (foundDictionary) { continue; }

        Word newWord;
        newWord.word = word;
        newWord.positions.push_back(pos);
        results.push_back(newWord);
    }
    return results;
}



/////////////// STUDENT TESTING ////////////////////
vector<string> fileToWords(const string& filename);
#include <sstream>
#include <iomanip>
int run()
{
    cout << "Student testing" << endl;
    // vector<string> dictionary = fileToWords("words");
    // vector<string> ignore = fileToWords("excluded.txt");
    // istringstream words("Now is the tyme for all good studunts to "
    //     "come to the aiid of their ai!id classmaates.");
    // vector<Word> misspelled = spellCheck(words, dictionary, ignore);
    // cout << "Misspelled words" << endl;
    // int i{1};
    // for (const auto& e : misspelled)
    // {
    //     cout << setw(4) << i++ << ". " << e.word << ", [ ";
    //     for (auto pos : e.positions)
    //         cout << pos << " ";
    //     cout << "]" << endl;
    // }

    return 0;
}
