#pragma once

#include <QString>
#include <QUuid>

#include "Version.hpp"

namespace DynamicsAppViewerCore {
    class DynamicsApplication {
        public: DynamicsApplication();

        private: QUuid id { };
        public: const QUuid& getId() const;
        public: void setId(const QUuid& id);

        private: QString name { "" };
        public: const QString& getName() const;
        public: void setName(const QString& name);

        private: QString publisher { "" };
        public: const QString& getPublisher() const;
        public: void setPublisher(const QString& publisher);

        private: Version version { };
        public: const Version& getVersion() const;
        public: void setVersion(const Version& version);

        /*
      "brief": "",
      "description": "",
      "privacyStatement": "",
      "EULA": "",
      "help": "",
      "url": "",
      "logo": "",
      "dependencies": [],
      "screenshots": [],
      "platform": "17.0.0.0",
      "application": "17.0.0.0",
      "idRanges": [
        {
          "from": 50100,
          "to": 50149
        }
      ],
      "contextSensitiveHelpUrl": "https://CodeunitReferenceTest.com/help/",
      "showMyCode": true,
      "runtime": "6.0"
      */
    };
}
