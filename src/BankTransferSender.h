//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H


#include <string>
#include "ITransferSender.h"
#include "Person.h"

class BankTransferSender  : public ITransferSender{
private:
    ITransferSender* per = new Person();
public:
    BankTransferSender(ITransferSender*);
    virtual ~BankTransferSender();
    std::string sendPayment();
    void transfer(bool);
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H
