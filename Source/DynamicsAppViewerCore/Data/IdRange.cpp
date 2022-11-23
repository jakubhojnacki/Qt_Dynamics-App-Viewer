#include "IdRange.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    IdRange::IdRange() {
    }

    int IdRange::getFrom() const { return this->from; }
    void IdRange::setFrom(const int pFrom) { this->from = pFrom; }

    int IdRange::getTo() const { return this->to; }
    void IdRange::setTo(const int pTo) { this->to = pTo; }
} } } }
