#ifndef INFOOPERATION_H
#define INFOOPERATION_H

#include <string>

#include <Shortcuts/StdShortcuts.h>

namespace know {

class InfoOperation
{
public:
    /**
     * @brief InfoOperation: Initializes new instance of InfoOperation
     * @param code: Given code of operation
     */
    InfoOperation(const std::string& code);

    /**
     * @brief getCode: Gets operation code
     * @return Code of operation
     */
    const std::string& getCode() const;

protected:

private:
    /**
     * @brief setCode: Sets code of operation
     * @param code: Given code to set
     */
    void setCode(const std::string& code);

    /// Code of operation
    std::string code;
};

}
#endif // INFOOPERATION_H
