// A pangram is a sentence where every letter of the English alphabet appears at least once.

//     Given a string sentence containing only lowercase English letters,
//     return true if sentence is a pangram, or false otherwise.
// Example 1 :
//     Input : sentence = "thequickbrownfoxjumpsoverthelazydog" Output : true Explanation : sentence contains at least one of every letter of the English alphabet.Example 2 :
//     Input : sentence = "leetcode"
// Output : false
// Constraints :
// 1 <= sentence.length <= 1000 sentence consists of lowercase English letters.
#include <iostream>
#include <string>
#include <set>
using namespace std;
class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        std::set<char> alphabet = {};
        for (auto elem : sentence)
        {
            auto pos = alphabet.find(elem);
            if (pos != alphabet.end())
            {
                continue;
            }
            else
            {
                alphabet.insert(elem);
            }
        }
        // cout << alphabet.size() << endl;
        // for (auto elem : alphabet)
        // {
        //     cout << elem << endl;
        // }
        if (alphabet.size() == 26)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Solution case1;
    cout << case1.checkIfPangram("abcdefghijklmnopqrstuvwxyz");
}