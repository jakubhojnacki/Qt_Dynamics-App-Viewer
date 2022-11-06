#pragma once

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Adapters {
    class ApplicationXmlReader {
        public:
            ApplicationXmlReader();

        public:
            Data::Application read(const QTextStream& pStream);
    };
} } } }
