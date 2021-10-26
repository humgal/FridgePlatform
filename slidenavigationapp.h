#ifndef SLIDENAVIGATIONAPP_H
#define SLIDENAVIGATIONAPP_H

#include <QWidget>

class QStackedWidget;

namespace Ui {
class SlideNavigationApp;
}

class SlideNavigationApp : public QWidget
{
    Q_OBJECT

public:
    explicit SlideNavigationApp(QWidget *parent = 0);
    ~SlideNavigationApp();


private slots:
    void switchPage(int index,QString str);//切换函数

private:
    Ui::SlideNavigationApp *ui;
};

#endif // SLIDENAVIGATIONAPP_H
