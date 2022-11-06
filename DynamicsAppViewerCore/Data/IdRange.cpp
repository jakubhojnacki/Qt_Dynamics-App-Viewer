#include "IdRange.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    IdRange::IdRange() {
    }

    int IdRange::getFrom() const { return this->from; }
    int IdRange::getTo() const { return this->to; }

    void IdRange::setFrom(const int pFrom) { this->from = pFrom; }
    void IdRange::setTo(const int pTo) { this->to = pTo; }
} } } }
