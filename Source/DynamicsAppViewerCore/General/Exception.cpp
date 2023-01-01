#include "Exception.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace General {
    Exception::Exception(const QString& pMessage) : message { pMessage } { }

    const QString& Exception::getMessage() const { return this->message; }

    const QString& Exception::toString() const { return this->message; }
} } } }
