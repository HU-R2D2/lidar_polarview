#ifndef LIDAR_H
#define LIDAR_H

#include "ADT_Base.hpp"
#include "Angle.hpp"
#include "Length.hpp"
#include "polarview.hpp"
#include "DistanceReading.hpp"
#include "CoordinateAttitude.hpp"
#include "LocatedDistanceSensor.hpp"


class Lidar : public r2d2::LocatedDistanceSensor {

public:
	Lidar (double error, r2d2::CoordinateAttitude coordinate_attitude);
	SensorResult get_data() override;



private:
	//Comminucatie comminucatie_stub = new Comminucatie();
};
#endif
