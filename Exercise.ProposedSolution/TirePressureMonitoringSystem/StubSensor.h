#ifndef STUBSENSOR_H
#define STUBSENSOR_H

#include "Transducer.h"

class StubSensor : public Transducer {
public:
	void setStubPressureValue(double pressureValue);
	double popNextPressurePsiValue() override;
};

#endif /* STUBSENSOR_H */