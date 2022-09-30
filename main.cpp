#include<QtWidgets>
#include<QString>
#include"counter.h"
int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    QWidget wgt;
    QPushButton cmd("ADD");
    QLabel lbl("Message");
    lbl.resize(200,200);
    QBoxLayout* box = new QBoxLayout(QBoxLayout::LeftToRight);
    box->addWidget(&cmd,3);
    wgt.setLayout(box);
    wgt.setGeometry(1000,100,300,300);
    wgt.show();
    lbl.show();
    Counter counter;
    QObject::connect(&cmd,SIGNAL(clicked()),&counter,SLOT(slotInfo()));//
    QObject::connect(&counter,SIGNAL(changed(QString)),&lbl,SLOT(setText(QString)));
    return a.exec();
}
