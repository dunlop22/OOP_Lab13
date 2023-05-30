#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <locale.h>   

#include "Transport_Company.h"

//ПЕРЕНЕСИ В КОМПАНИЮ
#include "SendedStateCont.h"
#include "NotSendedStateCont.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    srand(time(NULL));  //для генерации случайных id

    //создание состояний
    StateCont* state1 = new NotSendedStateCont();
    StateCont* state2 = new SendedStateCont();

    //создание большого контейнера с состояниями
    Container* myCont = new Big_Cont(state2, state1);



    /*Transport_Company* tr_company = Transport_Company::Instance();
    Transport_Company* tr_company1 = Transport_Company::Instance();
    
    cout << "Нажмите любую клавишу для продолжения\n";
    _getch();
    tr_company->start_work();*/

    //удаление созданных объектов
    delete myCont;
    delete state1;
    delete state2;

}
