#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
}

MainWindow::~MainWindow()
{

}

void MainWindow::paintEvent(QPaintEvent *)
{
  paint=new QPainter;
  paint->begin(this);//主窗口

  paint->setPen(QPen(Qt::black,2,Qt::SolidLine));//颜色，线号，实线

  for(int i=0;i<geshu;i++)
    {          //画20条横线
      paint->drawLine(x,y+gek*i,x+gek*(geshu-1),y+gek*i);//画线函数：x1,y1,x2,y2:画从(x1,y1)到(x2,y2)的线
       paint->drawLine(x+gek*i,y,x+gek*i,y+gek*(geshu-1));//画20条竖线
    }
    paint->end();

}





