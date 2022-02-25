#include <iostream>
#include <string>
#include "functions.cpp"

using namespace std;

string word = "broccoli";
// testing the word with capitalization and punctuation
string sentence = "Broccoli is a bad word. Not everyone likes broccoli, Does my program get rid of broccoli?";

int main() {
  cout << "We are going to take the word \"" << word << "\" out of the sentence \"" << sentence << "\".\n\n"; 

  bleep(word, sentence);

  cout << "The censored sentence is now: \n\n" << sentence << "\n\n";

}
