#include "Runtime.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Dynamics {
    Runtime::Runtime() {
    }

    Runtime::Runtime(int pMajor) : Runtime() {
        this->major = pMajor;
    }

    Runtime::Runtime(int pMajor, int pMinor) : Runtime(pMajor) {
        this->minor = pMinor;
    }

    int Runtime::getMajor() const {
        return this->major;
    }

    int Runtime::getMinor() const {
        return this->minor;
    }

    Runtime Runtime::empty() {
        return Runtime();
    }

    bool Runtime::isEmpty() const {
        return ((this->major == 0) && (this->minor == 0));
    }

    QString Runtime::format() const {
        QString text { };
        //TODO >>> Not implemented
        return text;
    }

    Runtime Runtime::parse(QString& pText) {
        Runtime runtime { };
        //TODO >>> Not implemented
        return runtime;
    }
} } } }
