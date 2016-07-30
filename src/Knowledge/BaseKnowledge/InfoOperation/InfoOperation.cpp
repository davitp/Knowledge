#include <InfoOperation/InfoOperation.h>

/**
 * @brief InfoOperation::InfoOperation
 * @param code
 */
know::InfoOperation::InfoOperation(const std::string& code)
{
    this->setCode(code);
}

/**
 * @brief InfoOperation::getCode
 * @return
 */
const std::string& know::InfoOperation::getCode() const
{
    return this->code;
}

/**
 * @brief InfoOperation::setCode
 * @param code
 */
void know::InfoOperation::setCode(const std::string& code)
{
    this->code = code;
}
