#pragma once
#include "StateCont.h"
class NotSendedStateCont :
    public StateCont
{
public:
    void putParcel(Parcel* parcel)
    {
        //������� �����: ����� �����-�� ������� � �����-�� ���������
        myContainer->get_parcel(parcel);
    }
};

