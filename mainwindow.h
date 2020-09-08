#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QPainter>

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    const int geshu=20;     //格数
      const int gek=40;   //格子的宽度
      const int x=20,y=20;  //开始坐标
     private slots:

private:
  void paintEvent(QPaintEvent *);//绘图函数声明
  //void mousePressEvent(QMouseEvent *);
  QPainter *paint;
};

#endif // MAINWINDOW_H
