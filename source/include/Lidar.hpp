#include PolarView
class Lidar : public LocatedDistanceSensor{

public:
	Lidar (double factor, CoordinateBearing coordinate_bearing);
	
	SensorResult get_data() override {
		std::vector<r2d2::Angle,r2d2::Length > Angles = comminucatie_stub.get_angles();
		PolarView v();
		for (int i = 0; i >0; i++){
			v.add_distancereading(Angles[i], r2d2::Length len,
                             DistanceReading::ResultType type);
		}
	}
	
	
	
private:
	Comminucatie comminucatie_stub = new Comminucatie();
}