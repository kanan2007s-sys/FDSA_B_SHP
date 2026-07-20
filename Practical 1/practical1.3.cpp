#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    string sentence;
    cout<<"Enter a sentence: ";
    getline(cin,sentence);
    stringstream ss(sentence);      // Convert the sentence into a stream of words
    string word;                    // Stores one word at a time
    string largest = "";
    while (ss >> word)              // Read one word from the sentence each time
    {
        if (word.length() > largest.length())   // Check if current word is longer
        {
            largest = word;         //save the current word as the longest
        }
    }
    cout << "The longest word is: " << largest;
    return 0;
}
