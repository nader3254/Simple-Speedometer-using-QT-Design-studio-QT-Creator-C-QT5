#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <qthread.h>
#include <qtimer.h>
#include <QQuickItem>
#include <qdebug.h>
#include "SystemGraphics.h"


int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

      QQmlApplicationEngine engine;
      const QUrl url(QStringLiteral("qrc:/main.qml"));
      QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                       &app, [url](QObject *obj, const QUrl &objUrl) {
          if (!obj && url == objUrl)
              QCoreApplication::exit(-1);
      }, Qt::QueuedConnection);
      engine.load(url);
      QObject *obj = engine.rootObjects().first();
    /******************************************************************************/
    /*                      start any shit from here                             */
    /****************************************************************************/



    // QObject *keyfrm = obj->findChild<QObject*>("keyframe");
    // QObject *keyfrm2 = obj->findChild<QObject*>("left_ptr");
   //  bootscreen = obj->findChild<QObject*>("SplashScreen");




     // SplashUI *ss=new SplashUI();
     // ss->strt( engine.rootObjects().first());
/********************************************************************/
/************************** splash screen ***************************/
/********************************************************************/

     SplashUI *ss=new SplashUI(obj);
     QTimer t1; bool x=true;
    QObject::connect(&t1,&QTimer::timeout,[&]()
    {
       if(x==true)
       {
           QThread::currentThread()->msleep(2000);
            x=false;
       }
       else
       {
           ss->gradient();
       }


    });
    t1.start(140);
/****************************************************************/
/*                     RPM SPEEDOMETER                          */
/****************************************************************/
        QTimer t2; float y=0;bool direction=true;
               RpmController *rpm=new RpmController(obj);
               QObject::connect(&t2,&QTimer::timeout,[&]()
               {
                   // rpm->SetRPM(4.5);


                   if(direction)
                   {
                       rpm->SetRPM(y);
                        if(y>=8)direction=false;
                       y=y+0.1;

                   }
                   else
                   {
                       y=y-0.1;
                       rpm->SetRPM(y);
                       if(y<=0.0)direction=true;
                   }
                 //  qDebug()<<y;
               });
               t2.start(20);

/**************************************************************************/
/*                       KMH SPEEDOMETER                                 */
/*************************************************************************/

               QTimer t3; float sss=0;bool direction2=true;
                      KmhController *kmh=new KmhController(obj);
                       kmh->SetGear(DRIVE,2);
                       kmh->SetFuel(level4);
                      QObject::connect(&t3,&QTimer::timeout,[&]()
                      {



                          if(direction2)
                          {
                              kmh->SetKMH(sss);
                              sss=sss+0.1;
                              if(sss>=200)
                              {

                                  kmh->SetGear(NEUTRAL,4);
                                  kmh->SetFuel(level2);
                                  direction2=false;

                              }
                          }
                          else
                          {
                              sss=sss-0.1;
                              kmh->SetKMH(sss);
                              if(sss<=0.0)
                              {
                                  kmh->SetGear(PARKING,1);
                                  kmh->SetFuel(level1);
                                  direction2=true;
                              }

                          }

                      });
                      t3.start(5);
/******************************************************************/
/*                      WHEATHER AND STATUS                      */
/****************************************************************/
     QTimer t4;int i=0;
     StateType st = INITIALIZING;
     WheatheStatus *ws =new WheatheStatus(obj);
     ws->SetStatus(st);
     QObject::connect(&t4,&QTimer::timeout,[&]()
     {
         ws->SetWheather(i);
         i++;
         if(i%2==0)
         {
             ws->SetStatus(READY);
         }
         else
         {
             ws->SetStatus(ERROR);
         }



     });
     t4.start(1500);




    return app.exec();
}
































/*

                 if(i%2==1)
                 {

                  graph->setProperty("color","red");
                 }
                 else
                 {
                   graph->setProperty("color","black");
                   }
                  i++;
                  //QThread::currentThread()->msleep(4000);



*/
