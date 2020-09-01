//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H

#include <string>
#include "ITransferSender.h"
#include "Person.h"

class CashSender : public ITransferSender{
private:
    ITransferSender* per = new Person();
public:
    std::string sendPayment();
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H
