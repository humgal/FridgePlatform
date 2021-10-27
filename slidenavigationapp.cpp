#pragma execution_character_set("utf-8")
#include "slidenavigationapp.h"
#include "ui_slidenavigationapp.h"
#include <QPushButton>


SlideNavigationApp::SlideNavigationApp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SlideNavigationApp)
{
    ui->setupUi(this);

    ui->widget->setFixed(true);
    ui->widget->setOrientation(Qt::Vertical);
    ui->widget->addItem("设备总览");
    ui->widget->addItem("设备运行");
    ui->widget->addItem("设备调试");
    ui->widget->addItem("耗材库");
    ui->widget->addItem("方案库");

    ui->widget->addItem("系统设置");
    ui->widget->addItem("关于");


    connect(ui->widget, SIGNAL(itemClicked(int,QString)), this, SLOT(switchPage(int,QString)));

    for(int i=0;i<6;i++){
        QPushButton *button1 = new QPushButton("button"+ QString::number(i));
        QVBoxLayout *layout = new QVBoxLayout;
        layout->addWidget(button1);
        ui->stackedWidget->widget(i)->setLayout(layout);
    }
}

SlideNavigationApp::~SlideNavigationApp()
{
    delete ui;
}

//void SlideNavigationApp::updateLabel(int index, QString str)
//{
//    Q_UNUSED(index);
//    ui->label->setText(QString("%1").arg(str));
//}

void SlideNavigationApp::switchPage(int index,QString str){

        ui->stackedWidget->setCurrentIndex(index);//根据按下的button按索引显示相应的页面
        qDebug("%d",ui->stackedWidget->currentIndex());

}
