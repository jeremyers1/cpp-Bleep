#include <iostream>
#include <string>
#include "functions.hpp"

using namespace std;

void bleep(string BadWord, string &CensorThis) {
 string temp = "";

  for(int i = 0; i <= CensorThis.size(); i++) {
//check to see if it is end of a word or end the sentance 
   if (CensorThis[i] == ' ' || CensorThis[i] == '.' || CensorThis[i] == ',' || CensorThis[i] == '!' || CensorThis[i] == '?' || CensorThis[i] == ';' || i == CensorThis.size()) {
    // if so, then checks to see if temp matches BadWord
      if (temp == BadWord) {
        // if so, replaces BadWord letters with *
        for (int j = 0; j < BadWord.size(); j++) {
          CensorThis[i-temp.size()+j] = '*';
        }
      }
      // and then resets temp to emtpy
       temp = "";
// if it is not the end of a word or sentence, then cycle through the letters of the sentence word to see if they match the forbidden word
    }
    else {

        bool flag = false;
        int k = 0;

// this while loop cancels after flag is set to true AND censored word length is reached

        while(!flag && k < BadWord.size()){
       // add letters to temp as long as the word is matching
       // first, convert BadWord letters to lower case 
            CensorThis[k] = tolower(CensorThis[k]);
            if (CensorThis[i] == BadWord[k]){

                temp += CensorThis[i];
                flag = true;
            }
            k++;
        }           
    }
  }
}