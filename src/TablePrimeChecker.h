//
// Created by grabusr on 27.05.17.
//

#ifndef APP_TABLEPRIMECHECKER_H
#define APP_TABLEPRIMECHECKER_H

#include "PrimeChecker.h"

class TablePrimeChecker : public PrimeChecker
{
public:
    virtual bool isPrime(int number) override;
};


#endif //APP_TABLEPRIMECHECKER_H
