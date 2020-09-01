//
// Created by Chris on 8/30/2020.
//

#ifndef MY_PROJECT_NAME_ITRANSFERSENDER_H
#define MY_PROJECT_NAME_ITRANSFERSENDER_H

#include <iostream>
using namespace std;

class ITransferSender {
public:
    ITransferSender();
    virtual ~ITransferSender();
    virtual std::string processPaymentBankTransfer()=0;
    virtual std::string processPaymentCash()=0;
    virtual std::string processPaymentCheck()=0;
};


#endif //MY_PROJECT_NAME_ITRANSFERSENDER_H
