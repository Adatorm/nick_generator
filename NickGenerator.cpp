/*
 * NickGenerator.cpp
 *
 *  Created on: 21 Haz 2017
 *      Author: Guner
 */

#include "NickGenerator.h"

namespace menma {

NickGenerator::NickGenerator() {
    // TODO Auto-generated constructor stub
    srand (time(NULL));
}

std::string NickGenerator::getNick() {
    std::string ss;
    int number = (rand() % 5) + 1;
    int index;
    for (int i = 0; i < number; ++i) {
        index = (rand() % Alphabet::length);
        ss.append(Alphabet::str[index]);
    }
    return ss;
}

std::string NickGenerator::getNick(int number) {
    std::string ss;
    int index;
    for (int i = 0; i < number; ++i) {
        index = (rand() % Alphabet::length);
        ss.append(Alphabet::str[index]);
    }
    return ss;
}


} /* namespace gnr */