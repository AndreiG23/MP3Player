/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *ShuffleButton;
    QPushButton *LoadButton;
    QVBoxLayout *verticalLayout_2;
    QSlider *SliderProgress;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QSlider *SliderSpeed;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *PreviousButton;
    QPushButton *pushButton;
    QPushButton *NextButton;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QSlider *SliderVolume;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->setEnabled(true);
        Dialog->resize(631, 360);
        Dialog->setAutoFillBackground(false);
        Dialog->setStyleSheet(QLatin1String("background-color: rgb(42, 42, 42);\n"
""));
        Dialog->setSizeGripEnabled(false);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(13, 14, 611, 341));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(300, 225));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/images/logo white.png);"));

        horizontalLayout_2->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(layoutWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setStyleSheet(QStringLiteral("background-color: rgb(182, 182, 182);"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ShuffleButton = new QPushButton(layoutWidget);
        ShuffleButton->setObjectName(QStringLiteral("ShuffleButton"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        ShuffleButton->setFont(font);
        ShuffleButton->setStyleSheet(QStringLiteral("background-color: rgb(182, 182, 182);"));

        horizontalLayout->addWidget(ShuffleButton);

        LoadButton = new QPushButton(layoutWidget);
        LoadButton->setObjectName(QStringLiteral("LoadButton"));
        LoadButton->setFont(font);
        LoadButton->setStyleSheet(QStringLiteral("background-color: rgb(182, 182, 182);"));

        horizontalLayout->addWidget(LoadButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        SliderProgress = new QSlider(layoutWidget);
        SliderProgress->setObjectName(QStringLiteral("SliderProgress"));
        SliderProgress->setStyleSheet(QLatin1String("QSlider::handle:horizontal\n"
"{\n"
"background-color: rgb(182, 182, 182);\n"
"}"));
        SliderProgress->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(SliderProgress);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        SliderSpeed = new QSlider(layoutWidget);
        SliderSpeed->setObjectName(QStringLiteral("SliderSpeed"));
        SliderSpeed->setStyleSheet(QLatin1String("QSlider::handle:horizontal\n"
"{\n"
"background-color: rgb(182, 182, 182);\n"
"}"));
        SliderSpeed->setMinimum(1);
        SliderSpeed->setMaximum(100);
        SliderSpeed->setPageStep(10);
        SliderSpeed->setValue(50);
        SliderSpeed->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(SliderSpeed);

        horizontalSpacer_3 = new QSpacerItem(118, 38, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        PreviousButton = new QPushButton(layoutWidget);
        PreviousButton->setObjectName(QStringLiteral("PreviousButton"));
        PreviousButton->setMinimumSize(QSize(40, 40));
        PreviousButton->setStyleSheet(QStringLiteral("border-image: url(:/images/Previous Button.png);"));
        PreviousButton->setIconSize(QSize(30, 30));

        horizontalLayout_3->addWidget(PreviousButton);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(40, 40));
        pushButton->setStyleSheet(QLatin1String("border-image: url(:/images/Play Button.png);\n"
""));
        pushButton->setIconSize(QSize(30, 30));

        horizontalLayout_3->addWidget(pushButton);

        NextButton = new QPushButton(layoutWidget);
        NextButton->setObjectName(QStringLiteral("NextButton"));
        NextButton->setMinimumSize(QSize(40, 40));
        NextButton->setStyleSheet(QStringLiteral("border-image: url(:/images/Next Button.png);"));
        NextButton->setIconSize(QSize(30, 30));

        horizontalLayout_3->addWidget(NextButton);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(27, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(30, 30));
        label->setStyleSheet(QStringLiteral("border-image: url(:/images/Sound.png);"));

        horizontalLayout_5->addWidget(label);

        SliderVolume = new QSlider(layoutWidget);
        SliderVolume->setObjectName(QStringLiteral("SliderVolume"));
        SliderVolume->setMinimumSize(QSize(20, 20));
        SliderVolume->setStyleSheet(QLatin1String("QSlider::handle:horizontal\n"
"{\n"
"background-color: rgb(182, 182, 182);\n"
"}"));
        SliderVolume->setValue(99);
        SliderVolume->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(SliderVolume);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "LIRIK Music Player", nullptr));
        label_2->setText(QString());
        ShuffleButton->setText(QApplication::translate("Dialog", "Shuffle", nullptr));
        LoadButton->setText(QApplication::translate("Dialog", "Add", nullptr));
        PreviousButton->setText(QString());
        pushButton->setText(QString());
        NextButton->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
