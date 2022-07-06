#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QString>
#include <QTimer>
#include <qrandom.h>
#include "sorting_animator.h"
#include "sorter_1_bubble.h"
#include "sorter_2_insert.h"
#include "sorter_3_select.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    QVector <QPushButton*> arrButtons;    
    int* arrToSort = new int[10];
    int N = 10;
    ~MainWindow();
private slots:
    void on_bubbleSorterButton_clicked();
    void on_insertSorterButton_clicked();
    void on_selectSorterButton_clicked();
    void on_simulateButton_clicked();
    void on_remakeButton_clicked();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
