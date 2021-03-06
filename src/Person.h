#ifndef UNIT_TESTING_01_GTEST_PERSON_H
#define UNIT_TESTING_01_GTEST_PERSON_H

#include <string>
#include <ostream>
#include <iostream>
#include <sstream>
using namespace std;
#include "ITransferSender.h"
#include "CashSender.h"
#include "BankTransferSender.h"
#include "CheckSender.h"

/**
 * Abstract Class of Person
 */
class Person : public ITransferSender{
public:

    // Constructors
    Person();
    Person(const std::string &firstName, const std::string &lastName, int documentId);
    virtual ~Person();

    // Gets and Sets
    const std::string &getFirstName() const;

    void setFirstName(const std::string &firstName);

    const std::string &getLastName() const;

    void setLastName(const std::string &lastName);

    int getDocumentId() const;

    void setDocumentId(int documentId);

    std::string processPaymentBankTransfer() override;
    std::string processPaymentCash() override;
    std::string processPaymentCheck() override;

    virtual std::string toString() const; // Virtual
private:
    std::string firstName;
    std::string lastName;
    int documentId;
    BankTransferSender* bank;
    CheckSender* check;
    CashSender* cash;
};

#endif //UNIT_TESTING_01_BASIC_PERSON_H
