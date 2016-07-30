#ifndef VALUETREE_H
#define VALUETREE_H

#include <map>
#include <string>

#include <Shortcuts/StdShortcuts.h>

namespace know
{

/**
 * @brief The ValueTree class
 * Represents an associative container with
 * deep iteration
 */
class ValueTree
{
protected:

    /**
     * @brief ValueTree: Instantiates new ValueTree
     */
    ValueTree(any root);

    /// root of tree to be represented as
    /// common value
    any root;

    /// Object is a collection of property value pairs
    /// when property is a identified by name string
    /// and value is an instance of any complexity
    std::map<std::string, any> object;


};
}
#endif // VALUETREE_H
