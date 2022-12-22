#include "IdRange.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    IdRange::IdRange() {
    }

    int IdRange::from() const { return this->mFrom; }
    void IdRange::from(const int pFrom) { this->mFrom = pFrom; }

    int IdRange::to() const { return this->mTo; }
    void IdRange::to(const int pTo) { this->mTo = pTo; }
} } } }
