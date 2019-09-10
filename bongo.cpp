#include <iostream>
#include <cstdlib>
#include <ctime>

const std::string VOWELS[5] = {"a","i","e","o","u"};
const std::string WORDS_FORMAT[7] = {"b+ng+s", "b+b+s", "b+nt+d", "b+t+s", "b+t+b", "b+b+s", "!"};

std::string getVowel() { return VOWELS[std::rand()%4] ;}

std::string getWord(){
    std::string chosen_format = WORDS_FORMAT[std::rand()%7];
    std::string buffer = "";
    for(int i = 0; i < chosen_format.length(); i++){
        if (chosen_format[i] == '+'){ buffer += getVowel();}
        else {buffer += chosen_format[i];}
    }
    return buffer;
}

int main(int argc, char** argv){
	std::srand(std::time(nullptr));
    for(int i = 0; i < 100; i++){
        std::cout << getWord() << " ";
    }
}