#pragma once

#include <QTextStream>

#include "../Data/Manifest.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Adapters {
    class ManifestXmlReader {
        public: ManifestXmlReader();

        public: Data::Manifest read(const QTextStream& pStream);
    };
} } } }
