/*
 * NickGenerator.h
 *
 *  Created on: 21 Haz 2017
 *      Author: Guner
 */

#ifndef NICKGENERATOR_H_
#define NICKGENERATOR_H_
#include<cstdlib>
#include<ctime>
#include"Alphabet.h"

namespace menma {

class NickGenerator {
public:
    NickGenerator();
    std::string getNick();
    std::string getNick(int number);
private:
};

} /* namespace gnr */

#endif /* NICKGENERATOR_H_ */