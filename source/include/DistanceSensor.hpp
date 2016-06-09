
#include "Sensor.hpp"
#include "../../../deps/adt/source/include/ADT_Base.hpp"
#include "../../../deps/polarview/source/include/polarview.hpp"

class DistanceSensor : public Sensor<PolarView>{

  public:
    DistanceSensor(double error);
}

class Locatable{
  public:
    //coordiante attitude
    Locatable(CoordinateBearing coordinate_bearing);

  private:
    CoordinateBearing coordinate_bearing;
}

class LocatedDistanceSensor : public DistanceSensor, public Locatable{
  public:
    LocatedDistanceSensor(double error, CoordinateBearing coordinate_bearing);  
}
