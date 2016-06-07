#include "Sensor.hpp"
#include "DistanceSensor.hpp"
#include "Locatable.hpp"

class LocatedDistanceSensor : public DistanceSensor, public Locatable{
public:
    LocatedDistanceSensor(double error, CoordinateBearing coordinate_bearing);
}
