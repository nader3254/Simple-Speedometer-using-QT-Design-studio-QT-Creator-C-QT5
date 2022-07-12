#ifndef SYSTEMGRAPHICS_H
#define SYSTEMGRAPHICS_H

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickItem>
#include <qthread.h>
#include <qtimer.h>
#include <qdebug.h>

/**************************************************************************/
/*                         SPLASH SCREEN                                 */
/*************************************************************************/

class SplashUI: public QObject
{
   Q_OBJECT

public:
     SplashUI(QObject *obj=nullptr);
     virtual ~SplashUI(){} ;

     void gradient();

private :
        QObject *obj_m;
        float i = 1.0;


};
/**************************************************************************/
/*                       RPM SPEEDOMETER                                 */
/*************************************************************************/
class RpmController: public QObject
{
   Q_OBJECT

public:
     RpmController(QObject *obj=nullptr);
     virtual ~RpmController(){} ;

     void  SetRPM(float val);
     float GetRPM();

private :
        QObject * PtrObj;
        QObject * Textobj;

        float   rpm_m       = 0;
        float   rpm_desired = 0.0;
        int     rpm_max     = 135;
        int     rpm_min     = 0;

         void DecodeRpm();

};
/**************************************************************************/
/*                       KMH SPEEDOMETER                                 */
/*************************************************************************/
typedef enum{
    PARKING,
    REVERSE,
    NEUTRAL,
    DRIVE
}TransmissionsStates;
typedef enum{
    level1,
    level2,
    level3,
    level4
}FuelState;
class KmhController: public QObject
{
   Q_OBJECT

public:
     KmhController(QObject *obj=nullptr);
     virtual ~KmhController(){} ;

     void  SetKMH(float val);
     void  SetGear(TransmissionsStates ts,int number);
     void  SetFuel(FuelState fs);


     float               GetKMH();
     int                 GetGearNumber();
     TransmissionsStates GetGearState();
     FuelState           GetFuelState();

private :
        QObject * ptrObj;
        QObject * kmhtextobj;

        QObject * ospeedgearnumber;

        QObject * ospeedgearPark;
        QObject * ospeedgearDrive;
        QObject * ospeedgearReverse;
        QObject * ospeedgearNeutral;

        QObject * ff1;QObject * ff2;
        QObject * ff3;QObject * ff4;


       TransmissionsStates TSS = PARKING;
       FuelState           FSS = level4 ;

        float   kmh_m       = 0.0;
        float   kmh_desired = 0.0;
        int     kmh_max     = 180;
        int     kmh_min     = 0;
        int     gearNum     = 0;
         void DecodeKMH();

};
/******************************************************************/
/*                      WHEATHER AND STATUS                      */
/****************************************************************/
typedef enum
{
    READY,
    INITIALIZING,
    ERROR

}StateType;

class WheatheStatus: public QObject
{
   Q_OBJECT

public:
     WheatheStatus(QObject *obj=nullptr);
     virtual ~WheatheStatus(){} ;

     void      SetWheather(int val);
     void      SetStatus(StateType state);
     int       GetWheather();
     StateType GetState();

private :
        QObject * wObj;
        QObject * sobj;


        int           wheather     = 135;
        StateType     status       = INITIALIZING;



};






































#endif // SYSTEMGRAPHICS_H
