//
// Created by Maikol Guzman on 8/24/20.
//

#include "BankTransferSender.h"

BankTransferSender::BankTransferSender(ITransferSender* pe) {
    per=pe;
}

BankTransferSender::~BankTransferSender(){
    delete per;
}

std::string  BankTransferSender::sendPayment(){
    return "Sending the money by transference";
}

void BankTransferSender::transfer(bool afk) {
    if(afk==true){
        per->processPaymentBankTransfer();
    }else{
        if(afk==false){
            std::cout<<"--FAILED--"<<std::endl;
        }
    }
}
