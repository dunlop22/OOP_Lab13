#pragma once
#include "StateCont.h"
class NotSendedStateCont :
    public StateCont
{
public:
    void putParcel(Parcel* parcel)
    {
        //сделать вывод: кладём такую-то посылку в такой-то контейнер
        myContainer->get_parcel(parcel);
    }
};

