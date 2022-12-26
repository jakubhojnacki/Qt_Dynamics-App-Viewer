#include "Runtime.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    Runtime::Runtime() { }

    Runtime::Runtime(int pMajor) : Runtime() { this->mMajor = pMajor; }

    Runtime::Runtime(int pMajor, int pMinor) : Runtime(pMajor) { this->mMinor = pMinor; }

    int Runtime::major() const { return this->mMajor; }

    int Runtime::minor() const { return this->mMinor; }

    Runtime Runtime::empty() { return Runtime(); }

    bool Runtime::isEmpty() const { return ((this->mMajor == 0) && (this->mMinor == 0)); }

    QString Runtime::format() const {
        QString text { };
        //TODO >>> Not implemented
        return text;
    }

    QSharedDataPointer<Runtime> Runtime::parse(QString& pText) {
        QSharedDataPointer<Runtime> runtime { new Runtime { } };
        //TODO >>> Not implemented
        return runtime;
    }
} } } }
