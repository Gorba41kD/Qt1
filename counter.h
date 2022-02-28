#ifndef COUNTER_H
#define COUNTER_H
#include<QObject>
#include<QString>
#include<QtWidgets>
class Counter : public QObject
{
    Q_OBJECT
private:
    QString value;
    int count = 0;
public slots:
   void slotInfo();
signals:
   void changed(QString);
};

#endif // COUNTER_H
