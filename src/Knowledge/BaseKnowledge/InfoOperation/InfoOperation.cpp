#include "InfoOperation.h"

/**
 * @brief InfoOperation::InfoOperation
 * @param code
 */
InfoOperation::InfoOperation(const std::string& code)
{
    this->setCode(code);
}

/**
 * @brief InfoOperation::getCode
 * @return
 */
const std::string& InfoOperation::getCode() const
{
    return this->code;
}

/**
 * @brief InfoOperation::setCode
 * @param code
 */
void InfoOperation::setCode(const std::string& code)
{
    this->code = code;
}
