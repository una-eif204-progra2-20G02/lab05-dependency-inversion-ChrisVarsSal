//
// Created by Chris on 8/30/2020.
//

#ifndef MY_PROJECT_NAME_ITRANSFERSENDER_H
#define MY_PROJECT_NAME_ITRANSFERSENDER_H


class ITransferSender {
public:
    ITransferSender();
    virtual ~ITransferSender();
    virtual std::string sendPayment()=0;

};


#endif //MY_PROJECT_NAME_ITRANSFERSENDER_H
