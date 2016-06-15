#include "../include/communicatie_stub.hpp"

namespace lidarSDK = rp::standalone::rplidar;

void communicatie_stub::uart_connect(_u32 driverType, const char * port_path, _u32 baudrate, _u32 flag){
  //0x00 is default for uart
  lidarSDK::RPlidarDriver lidarSDK::RPlidarDriver::CreateDriver(0x00);
  //connect to com port
  lidarSDK::RPlidarDriver *lidarSDK::RPlidarDriver::connect(port_path, baudrate, flag);

}

void communicatie_stub::uart_get_data(char[] * nodebuffer, size_t count, lidarSDK::_u32 timeout){
    return lidarSDK::grab_data(nodebuffer, count, timeout);
}
