//
// Created by Maikol Guzman on 8/24/20.
//

#include <iostream>

int main(){
#include "ITransferSender.h"
#include "Person.h"
#include "BankTransferSender.h"
#include "CashSender.h"

    ITransferSender* per1 = new Person("Christofer","Vargas",1111111);
    ITransferSender* per2 = new Person("Homero","Simpson",222222);
    ITransferSender* per3 = new Person("Peter","Parker",333333);

    BankTransferSender* bank = new BankTransferSender(per1);
    bank->transfer(true);

    CashSender* cash = new CashSender(per2);
    cash->transfer(false);

    CheckSender* check = new CheckSender(per3);
    check->transfer(true);

    system("pause");
    return 0;
}