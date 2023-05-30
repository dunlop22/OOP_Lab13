#pragma once
#include "Container.h"

class Container;

class StateCont
{
protected:
	Container* myContainer;

public:
	void setContainer(Container* container);
	void putParcel(Parcel* parcel);
};

