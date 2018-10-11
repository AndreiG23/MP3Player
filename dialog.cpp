#include "dialog.h"
#include "ui_dialog.h"

//global variables:
QString fileName;
bool ok=false;
bool isPlaying=false;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{




    ui->setupUi(this);
    player =new QMediaPlayer(this);
    playlist =new QMediaPlaylist(player);
    player->setPlaylist(playlist);


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
   //fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"/path/to/file/",tr("Mp3 Files (*.mp3)"));
   ok=true;
   //player->setMedia(QUrl::fromLocalFile(fileName));
   QString directory=QFileDialog::getExistingDirectory(this,tr("Select the directory with music files"));
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
//do nothing yet
}

void Dialog::on_NextButton_clicked()
{
    playlist->next();
    player->stop();

    if(isPlaying==true)
    {
        player->pause();
        isPlaying=false;
        ui->pushButton->setText("Play");

    }
}

void Dialog::on_PreviousButton_clicked()
{
    playlist->previous();
    player->stop();

    if(isPlaying==true)
    {
        player->pause();
        isPlaying=false;
        ui->pushButton->setText("Play");

    }
}


