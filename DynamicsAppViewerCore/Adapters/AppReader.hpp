#pragma once

#include "../Data/Application.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Adapters {
    class AppReader {
        public:
            AppReader();

        public:
            Data::Application read(const QString& pFilePath);
    };
} } } }
