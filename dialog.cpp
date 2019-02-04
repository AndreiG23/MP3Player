#include "dialog.h"
#include "ui_dialog.h"
#include <QRandomGenerator>
#include <QTime>




//global variables:
QString fileName;
bool ok=false;
bool isPlaying=false;
bool shuffle=false;
int loaded=0;
int nr,prev;
float speed=1.0;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{




    ui->setupUi(this);
    player =new QMediaPlayer(this);
    playlist =new QMediaPlaylist(player);
    player->setPlaylist(playlist);
    player->setVolume(50);
    ui->SliderVolume->setValue(50);
    ui->SliderSpeed->setValue(50);



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
            ui->pushButton->setStyleSheet("border-image: url(:/images/Play Button.png)");

        }
        else
        {
            isPlaying=true;
            ui->pushButton->setStyleSheet("border-image: url(:/images/Pause Button.png)");
            player->play();
        }



qDebug()<<player->errorString();
    }
}


void Dialog::getSelectedIndex()
{
    if(ui->listWidget->count()==0)
        return ;
    QModelIndexList index=this->ui->listWidget->selectionModel()->selectedIndexes();
    if(index.size()==0)
    {
        return ;
    }
    int idx=index.at(0).row();
    playlist->setCurrentIndex(idx);
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

   ok=true;

   QString directory=QFileDialog::getExistingDirectory(this,tr("Add music directory folder"));
   if (directory.isEmpty())
       return;
   QDir dir(directory);
   QStringList files=dir.entryList(QStringList()<<"*.mp3",QDir::Files);
   QList<QMediaContent> content;
   for(const QString& f:files)
   {
       content.push_back(QUrl::fromLocalFile(dir.path()+"/"+f));
       QFileInfo fi(f);
       ui->listWidget->addItem(fi.fileName());
   }
   playlist->addMedia(content);
   ui->listWidget->setCurrentRow(playlist->currentIndex() != -1? playlist->currentIndex():0);

}

void Dialog::on_SliderProgress_sliderReleased()
{
 player->setPosition(ui->SliderProgress->sliderPosition());
}

void Dialog::on_NextButton_clicked()
{
    if(!shuffle)
    {
        playlist->next();
        ui->listWidget->setCurrentRow(playlist->currentIndex());
    }
    else
    {
        QTime time=QTime::currentTime();

        qsrand((int)time.msec());
        prev=nr;
        nr=qrand()%ui->listWidget->count();

        playlist->setCurrentIndex(nr);
        ui->listWidget->setCurrentRow(nr);


    }
}


void Dialog::on_PreviousButton_clicked()
{
    if(!shuffle)
    {
        playlist->previous();
        ui->listWidget->setCurrentRow(playlist->currentIndex());
    }
    else
    {
        playlist->setCurrentIndex(prev);
        ui->listWidget->setCurrentRow(prev);
    }
}


void Dialog::on_SliderVolume_valueChanged(int value)
{
    player->setVolume(value);
}



void Dialog::on_listWidget_itemSelectionChanged()
{if(loaded!=0)
    {
        this->getSelectedIndex();
    if(isPlaying==false)
    {
        isPlaying=true;
        ui->pushButton->setStyleSheet("border-image: url(:/images/Pause Button.png)");
        player->play();}

    }
    loaded++;
}





void Dialog::on_SliderProgress_valueChanged(int value)
{
    if(value==ui->SliderProgress->maximum())ui->listWidget->setCurrentRow(playlist->currentIndex()+1);


}

void Dialog::on_ShuffleButton_clicked()
{
    if(!shuffle){
        shuffle=true;
        ui->ShuffleButton->setFlat(true);
    }
    else
    {
        shuffle=false;
        ui->ShuffleButton->setFlat(false);
    }


}

void Dialog::on_SliderSpeed_sliderReleased()
{

    player->setPlaybackRate(qreal(ui->SliderSpeed->sliderPosition())/50.0);

}
