template class<T>
class Sensor{

public:

	Sensor(double factor);
	virtual SensorResult get_data();
	
	class SensorResult<T> {
		double error_factor;
		T value
		//Constuctor and oparators written by the engineers
	}
	
private:
	double error_factor;
}