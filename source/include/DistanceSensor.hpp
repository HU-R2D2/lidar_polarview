#include "Sensor.hpp"

class DistanceSensor : public Sensor<PloarView>{
public:
    DistanceSensor(double error);
}
