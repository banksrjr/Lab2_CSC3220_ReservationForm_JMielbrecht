#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_plainTextEdit_textChanged();

    void on_queen_clicked();

    void on_king_clicked();

    void on_standard_clicked();

    void on_atrium_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QString customerName;
    int roomType;
    int numNights;
    bool parkingNeeded;
};
#endif // MAINWINDOW_H
