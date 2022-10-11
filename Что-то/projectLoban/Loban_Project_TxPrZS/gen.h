#ifndef PASSWORDGENERATOR_H
#define PASSWORDGENERATOR_H

#include <ctime>
#include <random>
#include <string>
using namespace std;

class PasswordGenerator {
public:
    PasswordGenerator();
    PasswordGenerator(bool isNum, bool isLarge, bool isSpecial, size_t min, size_t max);
    string generate();
    string generate(bool isNum, bool isLarge, bool isSpecial, size_t min, size_t max);
private:
    bool isNumExists = false;
    bool isLargeExists = false;
   bool isSpecialExists = false;
    size_t minLength ;
    size_t maxLength ;
    mt19937 gen;
    //pseudo-random generator of 32-bit numbers with a state size of 19937 bits.
};


#endif 