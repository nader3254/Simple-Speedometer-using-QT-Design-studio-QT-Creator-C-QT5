#include "SystemGraphics.h"

/*************************************************************/
SplashUI::SplashUI(QObject *obj) : QObject()
{

    qDebug()<<"hello from strt \n";
    QObject *bootscreen = obj->findChild<QObject*>("SplashScreen");
    obj_m = bootscreen;

};

void SplashUI:: gradient()
{

    obj_m->setProperty("opacity",i);
    if(i>=0)
     {
        i = i - 0.5;
     }

}
/************************************************************/
RpmController:: RpmController(QObject *obj)
{
     PtrObj  = obj->findChild<QObject*>("rpm_needle");
     Textobj = obj->findChild<QObject*>("rpm_text");
}
void RpmController::SetRPM(float val)
{
    rpm_desired =val;
    Textobj->setProperty("text",(int)(val*1000));
    DecodeRpm();
    PtrObj->setProperty("rotation",rpm_m);


}
float  RpmController::GetRPM(){return rpm_desired;};

void RpmController::DecodeRpm()
{

   /* switch ((int)rpm_desired) {
      case 0: rpm_m=0  ;  break;
      case 1: rpm_m=17 ;  break;
      case 2: rpm_m=35 ;  break;
      case 3: rpm_m=52 ;  break;
      case 4: rpm_m=72 ;  break;
      case 5: rpm_m=88 ;  break;
      case 6: rpm_m=105;  break;
      case 7: rpm_m=123;  break;
      case 8: rpm_m=135;  break;
      default:rpm_m = rpm_desired*17.00;
        break;
    }*/
    rpm_m = rpm_desired*17.00;

}
/*********************************************************************/
KmhController::KmhController(QObject *obj)
{
    ptrObj     = obj->findChild<QObject*>("kmhptr");
    kmhtextobj = obj->findChild<QObject*>("kmhtxt");

    ospeedgearnumber  = obj->findChild<QObject*>("gearnum");
    ospeedgearDrive   = obj->findChild<QObject*>("drive");
    ospeedgearNeutral = obj->findChild<QObject*>("neutral");
    ospeedgearReverse = obj->findChild<QObject*>("reverse");
    ospeedgearPark    = obj->findChild<QObject*>("parking");

    ff4 = obj->findChild<QObject*>("fl4");
    ff3 = obj->findChild<QObject*>("fl3");
    ff2 = obj->findChild<QObject*>("fl2");
    ff1 = obj->findChild<QObject*>("fl1");


}
void  KmhController::SetKMH(float val)
{
    kmh_desired =val;
    kmhtextobj->setProperty("text",(int)kmh_desired);
    DecodeKMH();
    ptrObj->setProperty("rotation",kmh_m);

}
void KmhController::DecodeKMH()
{
   kmh_m= ((kmh_desired * 18)/20);

}
void  KmhController::SetGear(TransmissionsStates ts,int number)
{
    TSS     = ts;
    gearNum = number;
    ospeedgearnumber -> setProperty("text",number);
    switch (ts)
    {
    case PARKING:
            ospeedgearDrive    -> setProperty("color","white");
            ospeedgearPark     -> setProperty("color","#56DDFF");
            ospeedgearNeutral  -> setProperty("color","white");
            ospeedgearReverse  -> setProperty("color","white");
        break;
    case DRIVE:
            ospeedgearDrive    -> setProperty("color","#56DDFF");
            ospeedgearPark     -> setProperty("color","white");
            ospeedgearNeutral  -> setProperty("color","white");
            ospeedgearReverse  -> setProperty("color","white");
        break;
    case NEUTRAL:
            ospeedgearDrive    -> setProperty("color","white");
            ospeedgearPark     -> setProperty("color","white");
            ospeedgearNeutral  -> setProperty("color","#56DDFF");
            ospeedgearReverse  -> setProperty("color","white");
        break;
    case REVERSE:
            ospeedgearDrive    -> setProperty("color","white");
            ospeedgearPark     -> setProperty("color","white");
            ospeedgearNeutral  -> setProperty("color","white");
            ospeedgearReverse  -> setProperty("color","#56DDFF");
        break;
    default: break;
    }

}
void  KmhController::SetFuel(FuelState fs)
{
    FSS =fs;
    switch (fs) {
    case level4:
        ff4  -> setProperty("visible",true );
        ff3  -> setProperty("visible",true);
        ff2  -> setProperty("visible",true);
        ff1  -> setProperty("visible",true);
        break;

    case level3:
        ff4  -> setProperty("visible",false );
        ff3  -> setProperty("visible",true);
        ff2  -> setProperty("visible",true);
        ff1  -> setProperty("visible",true);
        break;

    case level2:
        ff4  -> setProperty("visible",false );
        ff3  -> setProperty("visible",false);
        ff2  -> setProperty("visible",true);
        ff1  -> setProperty("visible",true);
        break;

    case level1:
        ff4  -> setProperty("visible",false );
        ff3  -> setProperty("visible",false);
        ff2  -> setProperty("visible",false);
        ff1  -> setProperty("visible",true);
        break;
    default:
        break;
    }

}
float KmhController::GetKMH()
{
    return kmh_desired;

}
int KmhController::GetGearNumber()
{
    return gearNum;

}
TransmissionsStates KmhController::GetGearState()
{
   return TSS;
}
FuelState KmhController::GetFuelState()
{
    return FSS;

}
/***********************************************************************/
WheatheStatus::WheatheStatus(QObject *obj)
{
    wObj = obj->findChild<QObject*>("wheather");
    sobj = obj->findChild<QObject*>("status");
}

void WheatheStatus::SetWheather(int val)
{
    wheather =val;
    wObj->setProperty("text",val);

}
void WheatheStatus::SetStatus(StateType state)
{
    status =state;
    if(state==READY)
    {
      sobj->setProperty("text","READY");
      sobj->setProperty("color","#56DDFF");
    }
    else if (state==INITIALIZING)
    {
         sobj->setProperty("text","INIT..");
         sobj->setProperty("color","white");
    }
    else
    {
         sobj->setProperty("text","ERROR");
         sobj->setProperty("color","#DD134D");

    }

}
int  WheatheStatus::GetWheather()
{
    return wheather;

}
StateType WheatheStatus::GetState()
{
   return status;
}



