#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QString>
#include <qrandom.h>
#include "bubblesorter.h"
#include "insertsorter.h"
#include "selectsorter.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    QVector <QPushButton*> arrButtons;
    BubbleSorter* bubble = new BubbleSorter();
    Insertsorter* insert = new Insertsorter();
    Selectsorter* select = new Selectsorter();
    int* arr = new int[10];
    int N = 10;
    ~MainWindow();

private slots:
    void on_bubbleSorterButton_clicked();

    void on_insertSorterButton_clicked();

    void on_selectSorterButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
