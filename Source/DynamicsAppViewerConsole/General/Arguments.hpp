#pragma once

#include <QSharedDataPointer>
#include <QString>

#include "DetailLevel.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace General {
    class Arguments {
        public: Arguments();

        private: QString mPath { "" };
        public: const QString& path() const;
        public: void path(const QString& pPath);

        private: QSharedDataPointer<DetailLevel> mDetailLevel { new DetailLevel { DetailLevel::Type::Basic } };
        public: QSharedDataPointer<DetailLevel> detailLevel() const;
        public: void detailLevel(const QSharedDataPointer<DetailLevel> pDetailLevel);

        private: bool mShowObjects { false };
        public: bool showObjects() const;
        public: void showObjects(const bool pShowObjects);
    };
} } } }
