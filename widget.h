#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:

    void on_coin10Button_clicked();
    void on_coin50Button_clicked();
    void on_coin100Button_clicked();
    void on_coin500Button_clicked();

    void on_coffeeButton_clicked();
    void on_teaButton_clicked();
    void on_milkButton_clicked();


    void on_resetButton_clicked();

private:
    Ui::Widget *ui;
    void updateDrinkButtons();
};

#endif
