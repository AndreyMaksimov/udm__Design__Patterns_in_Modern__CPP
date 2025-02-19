/*
Flyweight Coding Exercise
You are given a class called Sentence , which takes a string such as "hello world".
You need to provide an interface such that the indexer (operator [] ) returns a WordToken
that can be used to capitalize a particular word in the sentence.

Typical use would be something like:

Sentence sentence("hello world");
sentence[1].capitalize = true;
cout << sentence.str(); // prints "hello WORLD"
*/

#include <string>
#include <iostream>
#include <map>
using namespace std;


#if 1 // Solution

struct Sentence
{
    struct WordToken
    {
        bool capitalize {false};
    };

    map<size_t, WordToken> caps_hash{};
    const string text;
    Sentence(const string& text) : text(text)
    {

    }

    WordToken& operator[](size_t index)
    {
        return caps_hash[index];
    }

    string str() const
    {
        string s;
        int token_counter = 0;
        auto it_caps =  caps_hash.find(token_counter);
        auto to_caps = it_caps != end(caps_hash) ? it_caps->second.capitalize : false;
        for (auto it = cbegin(text); it != cend(text); ++it) {
            if (*it == ' ') {
                ++token_counter;
                while (*it == ' ' && it != cend(text)) {
                    s += *it++;
                }
                if (it == cend(text)) break;
                it_caps =  caps_hash.find(token_counter);
                to_caps = it_caps != end(caps_hash) ? it_caps->second.capitalize : false;
            }
            s += to_caps ? toupper(*it) : *it;
        }
        return s;
    }
};

int main() {
    Sentence sentence("hello world");
    sentence[1].capitalize = true;
    cout << sentence.str(); // prints "hello WORLD"

    Sentence s{"alpha beta gamma"};
    s[0].capitalize = s[2].capitalize = false;
    s[1].capitalize = true;
    cout << s.str();
}

#else // Initial

struct Sentence
{
    struct WordToken
    {
        bool capitalize;
    };

    Sentence(const string& text)
    {
        // todo
    }

    WordToken& operator[](size_t index)
    {
        // todo
    }

    string str() const
    {
        // todo
    }
};

#endif
