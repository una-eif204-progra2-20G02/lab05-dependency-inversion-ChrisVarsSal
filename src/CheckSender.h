//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H

#include <string>
#include "ITransferSender.h"
#include "Person.h"

class CheckSender : public ITransferSender{
private:
    ITransferSender* per = new Person();
public:
    CheckSender(ITransferSender*);
    virtual ~CheckSender();
    static std::string sendPayment();
    void transfer(bool);
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H
