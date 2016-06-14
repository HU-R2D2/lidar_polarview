#include "../include/Lidar.hpp"

Lidar::Lidar(){
  communicatie_stub::uart_connect(0x0, "\\\\.\\COM1", 115200, 0);
}

r2d2::DistanceSensor::SensorResult Lidar::get_data(){
    MapPolarView mpv = MapPolarView();
    char nodes[359];

  communicatie_stub.get_data(nodes, size(nodes), 0);

  for(int i = 0; i < 360; i++){
    mpv.add_distancereading(r2d2::Angle(i * r2d2::Angle::deg),
      DistanceReading(nodes[i], DistanceReading::ResultType::CHECKED));
  }

  return mpv;
}
