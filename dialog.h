#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMediaPlayer>
#include <QMediaPlaylist>
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

    void on_pushButton_clicked();


    void on_positionChanged(qint64 position);

    void on_durationChanged(qint64 position);


    void on_LoadButton_clicked();

    void on_SliderProgress_sliderReleased();

    void on_NextButton_clicked();

    void on_PreviousButton_clicked();

    void getSelectedIndex();




    void on_SliderVolume_valueChanged(int value);



    void on_listWidget_itemSelectionChanged();




    void on_SliderProgress_valueChanged(int value);

    void on_ShuffleButton_clicked();

    void on_SliderSpeed_sliderReleased();


    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::Dialog *ui;
    QMediaPlayer* player;
    QMediaPlaylist* playlist;
};

#endif // DIALOG_H
