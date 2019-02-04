#ifndef video_YOUTUBE_H
#define video_YOUTUBE_H

#include "video.h"
#include "QtWebKit"
#include <QtGui>
#include "ui_youtube_password.h"

#include "QFile"

struct fmtQuality
{
    QString quality;
    QString video;
    QString audio;

    fmtQuality(QString quality, QString video, QString audio="")
    {
        this->quality = quality;
        this->video = video;
        if (!audio.isEmpty())
        {
            this->audio = audio;
        }
    }
};

class video_youtube : public video
{
    Q_OBJECT

    private:
        QString _maxfmt;

        QString parseSignature(QString s);
        QString getFmtLink(QStringList, QString fmt);
        QString getUrlFromFmtLink(QString link);
        void parseJS(QString js);
        void parseLoginForm(QString html);
        void parseLoginFormResponse(QString html);
        QString loginFormError;
        QString html;
        QString js;
        QString downloading;

    public:
        virtual bool setUrl(QString);
        video_youtube();
        video* createNewInstance();
        virtual void parseVideo(QString);
};

#endif // video_YOUTUBE_H
