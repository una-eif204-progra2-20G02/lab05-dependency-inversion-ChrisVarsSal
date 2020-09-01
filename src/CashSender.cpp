//
// Created by Maikol Guzman on 8/24/20.
//

#include "CashSender.h"

CashSender::CashSender(ITransferSender* pe) {
    per=pe;
}

CashSender::~CashSender(){
    delete per;
}

std::string CashSender::sendPayment(){
    return "Give the money in the hands";
}

void CashSender::transfer(bool afk) {
    if(afk==true){
        per->processPaymentCash();
    }else{
        if(afk==false){
            std::cout<<"--FAILED--"<<std::endl;
        }
    }
}
