#include "dialog.h"
#include "ui_dialog.h"

QString fileName;
bool ok=false;
bool isPlaying=false;
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    player =new QMediaPlayer(this);


    connect(player, &QMediaPlayer::positionChanged,this,&Dialog::on_positionChanged);
    connect(player, &QMediaPlayer::durationChanged,this,&Dialog::on_durationChanged);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_SliderVolume_sliderMoved(int position)
{
player->setVolume(position);
}

void Dialog::on_SliderProgress_sliderMoved(int position)
{
player->setPosition(position);
}

void Dialog::on_pushButton_clicked()
{

    if(ok==false)
    {
        QMessageBox msgBox;
        msgBox.setText("You need to load a file first");
        msgBox.exec();
    }
    else
    {
        //load the file
        if(isPlaying==true)
        {
            player->pause();
            isPlaying=false;
            ui->pushButton->setText("Play");

        }
        else
        {
            isPlaying=true;
            ui->pushButton->setText("Pause");
            player->play();
        }



qDebug()<<player->errorString();
    }
}

void Dialog::on_pushButton_2_clicked()
{
player->stop();
isPlaying=false;
ui->pushButton->setText("Play");
}

void Dialog::on_positionChanged(qint64 position)
{
ui->SliderProgress->setValue(position);
}

void Dialog::on_durationChanged(qint64 position)
{
ui->SliderProgress->setMaximum(position);
}

void Dialog::on_LoadButton_clicked()
{
   fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"/path/to/file/",tr("Mp3 Files (*.mp3)"));
   ok=true;
   player->setMedia(QUrl::fromLocalFile(fileName));
}

void Dialog::on_SliderProgress_sliderReleased()
{
//do nothing
}
