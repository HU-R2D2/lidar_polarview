#ifndef COMMUNICATIE_STUB
#define COMMUNICATIE_STUB

#include "ADT_Base.hpp"
#include "Angle.hpp"
#include "Length.hpp"
#include "polarview.hpp"
#include "DistanceReading.hpp"
#include "CoordinateAttitude.hpp"
#include "LocatedDistanceSensor.hpp"
#include "rplidar.h"

namespace lidarSDK = rp::standalone::rplidar;

class communicatie_stub{

public:
	coomcommunicatie_stub(){
  };

  void uart_connect(_u32 driverType, const char * port_path, _u32 baudrate, _u32 flag);

  void uart_get_data(char[] * nodebuffer, size_t count, lidarSDK::_u32 timeout);

private:

};
#endif
