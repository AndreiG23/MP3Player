#include "dialog.h"
#include "ui_dialog.h"

//global variables:
QString fileName;
bool ok=false;
bool isPlaying=false;
int loaded=0;

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
    playlist->next();
}

void Dialog::on_PreviousButton_clicked()
{
    playlist->previous();
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



void Dialog::on_ShuffleButton_clicked()
{
    playlist->shuffle();
}
