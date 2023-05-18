// HighVoltagePowerElectronics.h
#ifndef HIGHVOLTAGEPOWERELECTRONICS_H
#define HIGHVOLTAGEPOWERELECTRONICS_H

#include "IDevice.h"
#include "ITestAutomation.h"

namespace libTestAutomation {

    class LIBTESTAUTOMATION_API HighVoltagePowerElectronics : public IDevice {
    public:
        void connect() override;
        void reset() override;
        void sendCommand(const std::string& command) override;
    };

} // namespace libTestAutomation

#endif // HIGHVOLTAGEPOWERELECTRONICS_H
