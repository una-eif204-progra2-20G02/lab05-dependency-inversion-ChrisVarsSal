//
// Created by Maikol Guzman on 8/24/20.
//

#include "CheckSender.h"

CheckSender::CheckSender(ITransferSender* pe) {
    per = pe;
}

CheckSender::~CheckSender(){
    delete per;
}

std::string CheckSender::sendPayment(){
    return "Sending the check with the money";
}

void CheckSender::transfer(bool afk) {
    if(afk==true){
        per->processPaymentCheck();
    }else{
        if(afk==false){
            std::cout<<"--FAILED--"<<std::endl;
        }
    }
}