#ifndef KNOWLEDGE_H
#define KNOWLEDGE_H

#include <string>

#include <Drivers/DriverSpecialization.h>

namespace know
{

/**
 * @brief The Knowledge class for interaction
 * with other components (active interface)
 */
class Knowledge
{

public:
    /**
     * @brief RegisterDriverType: Registers driver for data transfer
     * @param driverSpecialization: specialization of corresponding driver
     */
    void RegisterDriverType(const DriverSpecialization& driverSpecialization);

protected:
    /**
     * @brief Knowledge: Instantiates new instance of Knowledge
     */
    Knowledge();

};
}
#endif // KNOWLEDGE_H
