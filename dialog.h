#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMediaPlayer>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_SliderVolume_sliderMoved(int position);

    void on_SliderProgress_sliderMoved(int position);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_positionChanged(qint64 position);

    void on_durationChanged(qint64 position);


    void on_LoadButton_clicked();

    void on_SliderProgress_sliderReleased();

private:
    Ui::Dialog *ui;
    QMediaPlayer* player;
};

#endif // DIALOG_H
