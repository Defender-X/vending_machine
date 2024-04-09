#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    updateDrinkButtons();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_coin10Button_clicked()
{
    int currentAmount = ui->lcdNumber->intValue();
    ui->lcdNumber->display(currentAmount + 10);
    updateDrinkButtons();
}

void Widget::on_coin50Button_clicked()
{
    int currentAmount = ui->lcdNumber->intValue();
    ui->lcdNumber->display(currentAmount + 50);
    updateDrinkButtons();
}

void Widget::on_coin100Button_clicked()
{
    int currentAmount = ui->lcdNumber->intValue();
    ui->lcdNumber->display(currentAmount + 100);
    updateDrinkButtons();
}

void Widget::on_coin500Button_clicked()
{
    int currentAmount = ui->lcdNumber->intValue();
    ui->lcdNumber->display(currentAmount + 500);
    updateDrinkButtons();
}

void Widget::on_coffeeButton_clicked()
{
    int currentAmount = ui->lcdNumber->intValue();
    if (currentAmount >= 100) {
        ui->lcdNumber->display(currentAmount - 100);
        updateDrinkButtons();
    }
}

void Widget::on_teaButton_clicked()
{
    int currentAmount = ui->lcdNumber->intValue();
    if (currentAmount >= 150) {
        ui->lcdNumber->display(currentAmount - 150);
        updateDrinkButtons();
    }
}

void Widget::on_milkButton_clicked()
{
    int currentAmount = ui->lcdNumber->intValue();
    if (currentAmount >= 200) {
        ui->lcdNumber->display(currentAmount - 200);
        updateDrinkButtons();
    }
}

void Widget::on_resetButton_clicked()
{
    int currentAmount = ui->lcdNumber->intValue();
    ui->lcdNumber->display(0);
    updateDrinkButtons();
}

void Widget::updateDrinkButtons()
{
    int currentAmount = ui->lcdNumber->intValue();
    ui->coffeeButton->setEnabled(currentAmount >= 100);
    ui->teaButton->setEnabled(currentAmount >= 150);
    ui->milkButton->setEnabled(currentAmount >= 200);

}
