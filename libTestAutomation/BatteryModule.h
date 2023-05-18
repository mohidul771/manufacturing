#ifndef BATTERYMODULE_H
#define BATTERYMODULE_H

#include "IDevice.h"
#include "ITestAutomation.h"

namespace libTestAutomation {


class LIBTESTAUTOMATION_API BatteryModule : public IDevice {
public:
    void connect() override;
    void reset() override;
    void sendCommand(const std::string& command) override;
};
} // namespace libTestAutomation


#endif //BATTERYMODULE_H
