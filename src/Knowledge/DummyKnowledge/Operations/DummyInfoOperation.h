#ifndef DUMMYINFOOPERATION_H
#define DUMMYINFOOPERATION_H

#include <BaseKnowledge/InfoOperation/InfoOperation.h>

class DummyInfoOperation : public InfoOperation
{
public:
    /**
     * @brief DummyInfoOperation: Instantiates new instance of Dummy Operation
     * @param code: Code for operation
     */
    DummyInfoOperation(const std::string& code);
};

#endif // DUMMYINFOOPERATION_H
