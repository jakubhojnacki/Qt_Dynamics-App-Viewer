#pragma once

#include <QObject>
#include <QTextStream>

#include "../Data/Manifest.hpp"

namespace Fortah {
    namespace DynamicsAppViewer {
        namespace Core {
            namespace Adapters {
            class ManifestXmlReader : QObject {
                Q_OBJECT

                public: ManifestXmlReader();

                public: Data::Manifest read(const QTextStream& pStream);
            };
        } } } }
