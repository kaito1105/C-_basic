/**
 *  @author Kaito Miyamoto
 *  @date June 22, 2023
 *  @file h04.cpp
 */
#include <string>
using namespace std;

string STUDENT = "kmiyamoto5";  // Add your Canvas login name

// Write your function here
string toFrenchGender(const string& country)
{

	string result;
    string prefix;
    size_t len = country.size();
    string last = country.substr(len - 2, 2);
    char lastChar = country.back();
    char firstChar = country.front();
    const string vowels = "AEIOUaeiou";
    const string islands = "iles";
    const string plain = "Israel, Madagascar, Sri Lanka, Singapore, Monaco, Cuba, Cyprus";
    const string masculine = "Belize, Cambodge, Honduras, Mexique, Mozambique, Zaire, Zimbabwe";

    if (masculine.find(country) != string::npos)
    {
        prefix = "le ";
    }
    else if (plain.find(country) != string::npos)
    {
        prefix = "";
    }
    else if (country.substr(0, 4) == islands || last == "es" || last == "is" || last == "os" || last == "as")
    {
        prefix = "les ";
    }
    else if (vowels.find(firstChar) != string::npos)
    {
        prefix = "l'";
    }
    else if (lastChar == 'e' || lastChar == 'o')
    {
        prefix = "la ";
    }
    else
    {
        prefix = "le ";
    }
    result = prefix + country;
    return result;

}

/////////////// Optional Student Code /////////////////
int run()
{
    return 0;
}
