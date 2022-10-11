#include "gen.h"
using namespace std;

namespace {
    const string smallletters("abcdefghijklmnopqrstuvwxyz");
    const string bigletters("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    const string numbers("0123456789");
    const string special(" !\"#$%&()*+-/@[\\]");
    const size_t lenght = smallletters.length() + bigletters.length() + numbers.length() + special.length();
}

PasswordGenerator::PasswordGenerator() : gen(time(nullptr)) {}

PasswordGenerator::PasswordGenerator(bool isNum, bool isLarge, bool isSpecial, size_t min,
    size_t max) : isNumExists(isNum), isLargeExists(isLarge),
    isSpecialExists(isSpecial),
    minLength(min), maxLength(max),
    gen(time(nullptr)) {}

string PasswordGenerator::generate() {
    return generate(isNumExists, isLargeExists, isSpecialExists, minLength, maxLength);
}

string PasswordGenerator::generate(bool isNum, bool isLarge, bool isSpecial, size_t min,
    size_t max) {
    string alphabet;
    alphabet.reserve(lenght);
    alphabet += smallletters;
    if (isNum) {
        alphabet += numbers;
    }
    if (isLarge) {
        alphabet += bigletters;
    }
    if (isSpecial) {
        alphabet += special;
    }
    uniform_int_distribution<size_t> lengthGenerator(min, max);
    //Produces random integer values  i , uniformly distributed on the closed interval, that is, distributed according to the discrete probability function
    uniform_int_distribution<size_t> indexGenerator(0, alphabet.size() - 1);
    size_t length = lengthGenerator(gen);
    string password(length, '\0');
    for (size_t i = 0; i < length; ++i) {
        password[i] = alphabet[indexGenerator(gen)];
    }
    return password;
}