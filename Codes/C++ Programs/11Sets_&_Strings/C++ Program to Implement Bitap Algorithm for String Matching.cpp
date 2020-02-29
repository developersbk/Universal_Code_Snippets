/*This is a C++ Program to Implement Bitap Algorithm. The bitap algorithm (also known as the shift-or, shift-and or Baeza-Yates–Gonnet algorithm) is an approximate string matching algorithm. The algorithm tells whether a given text contains a substring which is “approximately equal” to a given pattern, where approximate equality is defined in terms of Levenshtein distance — if the substring and pattern are within a given distance k of each other, then the algorithm considers them equal. The algorithm begins by precomputing a set of bitmasks containing one bit for each element of the pattern. Then it is able to do most of the work with bitwise operations, which are extremely fast.*/

#include <string>
#include <map>
#include <iostream>

using namespace std;
int bitap_search(string text, string pattern)
{
    int m = pattern.length();
    long pattern_mask[256];
    /** Initialize the bit array R **/
    long R = ~1;
    if (m == 0)
        return -1;
    if (m > 63)
        {
            cout<<"Pattern is too long!";
            return -1;
        }
    /** Initialize the pattern bitmasks **/
    for (int i = 0; i <= 255; ++i)
        pattern_mask[i] = ~0;
    for (int i = 0; i < m; ++i)
        pattern_mask[pattern[i]] &= ~(1L << i);
    for (int i = 0; i < text.length(); ++i)
        {
            /** Update the bit array **/
            R |= pattern_mask[text[i]];
            R <<= 1;
            if ((R & (1L << m)) == 0)
                return i - m + 1;
        }
    return -1;
}
void findPattern(string t, string p)
{
    int pos = bitap_search(t, p);
    if (pos == -1)
        cout << "\nNo Match\n";
    else
        cout << "\nPattern found at position : " << pos;
}

int main(int argc, char **argv)
{
    cout << "Bitap Algorithm Test\n";
    cout << "Enter Text\n";
    string text;
    cin >> text;
    cout << "Enter Pattern\n";
    string pattern;
    cin >> pattern;
    findPattern(text, pattern);
}

/*
Bitap Algorithm Test
Enter Text
DharmendraHingu
Enter Pattern
Hingu

Pattern found at position : 10