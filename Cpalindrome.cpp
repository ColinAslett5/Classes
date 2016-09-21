// Colin Aslett, Palindrome checker
#include <iostream>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main(){
  char phrase[80];//original phrase
  char perphrase[80];//fixed original phrase
  char phrase2[80];//reversed original phrase
    cin.get(phrase,80);
    cin.get();
    size_t length = strlen(phrase);//length of phrase
    int num = 0;
    //taking away all of the punctuation and changing all charcters to lower case
    for(int b = 0; b < length; b++){
      if(isalpha(phrase[b])){
	perphrase[num] = tolower(phrase[b]);
	num++;
      }
    }
    cout << length << endl;
    size_t perlength = strlen(perphrase);
    perphrase[num] = '\0';
    cout << perphrase << endl;
    int count = 0;
    //Reversing the phrase into phrase2
    for(int i = num; i > -1;i--){
    	    if(perphrase[i] != '\0'){
	    	phrase2[count] = perphrase[i];
		count++;
	    }
    }
    phrase2[count] = '\0';
    cout << phrase2 << endl;
    //Checking for comparison between strings
    if(strcmp(perphrase,phrase2) == 0){
      cout << "Palindrome";
    }
    else{
      cout << "not a palindrome";
    }
    return 0;

}
