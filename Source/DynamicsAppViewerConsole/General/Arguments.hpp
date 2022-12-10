#pragma once

#include <QObject>
#include <QString>

#include "DetailLevel.hpp"

namespace Fortah {
    namespace DynamicsAppViewer {
        namespace Console {
            namespace General {
                class Arguments : public QObject {
                    Q_OBJECT

                    public: Arguments();

                    private: QString path { "" };
                    public: const QString& getPath() const;
                    public: void setPath(const QString& pPath);

                    private: DetailLevel detailLevel { DetailLevel::Basic };
                    public: DetailLevel getDetailLevel() const;
                    public: void setDetailLevel(const DetailLevel pDetailLevel);

                    private: bool showObjects { false };
                    public: bool getShowObjects() const;
                    public: void setShowObjects(const bool pShowObjects);
                };
            }
        }
    }
}
