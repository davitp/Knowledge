#ifndef DRIVERSPECIALIZATION_H
#define DRIVERSPECIALIZATION_H

#include <string>
#include <vector>

#include <InfoOperation/InfoOperation.h>

namespace know
{

class DriverSpecialization
{
public:

    /**
     * @brief DriverSpecialization: initializes new instance of driver
     * specialization. Should be created with type argument
     * @param driverType: The Type name of driver
     */
    DriverSpecialization(const std::string& driverType)
    {
        this->driverType = driverType;
    }

    /**
     * @brief GetDriverType: Gets type of driver
     * @return
     */
    const std::string& GetDriverType()
    {
        return this->driverType;
    }

    /**
     * @brief Initializes instance of DriverSpecialization
     * Initialization function should prepare all the necessery
     * object instance for retri
     */
    virtual void Initialize() = 0;

    /**
     * @brief GetInfoOperations: Gets Info operations provided by driver specialization
     * @return List of operations
     */
    virtual std::vector<InfoOperation> GetInfoOperations() = 0;

private:
    /// Driver type name
    std::string driverType;

};

}

#endif // DRIVERSPECIALIZATION_H
