/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Principal
{
public:
    QWidget *centralWidget;
    QTableView *tableView;
    QComboBox *comboBox;
    QPushButton *start;
    QLabel *label_log_nome;
    QWidget *widget;
    QLabel *label_0;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *Title;
    QTextEdit *text_log;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName(QStringLiteral("Principal"));
        Principal->resize(590, 445);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Principal->sizePolicy().hasHeightForWidth());
        Principal->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(Principal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 591, 411));
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        tableView->setAutoFillBackground(true);
        tableView->setStyleSheet(QStringLiteral("backgroud-color:rgb(234,234,234);"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(300, 150, 171, 26));
        comboBox->setAutoFillBackground(false);
        comboBox->setStyleSheet(QStringLiteral("font: 14pt \"DIN Light\";"));
        start = new QPushButton(centralWidget);
        start->setObjectName(QStringLiteral("start"));
        start->setEnabled(true);
        start->setGeometry(QRect(480, 150, 91, 32));
        start->setStyleSheet(QStringLiteral("font: 14pt \"DIN Light\";"));
        label_log_nome = new QLabel(centralWidget);
        label_log_nome->setObjectName(QStringLiteral("label_log_nome"));
        label_log_nome->setGeometry(QRect(300, 190, 111, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_log_nome->sizePolicy().hasHeightForWidth());
        label_log_nome->setSizePolicy(sizePolicy1);
        label_log_nome->setStyleSheet(QStringLiteral("font: 14pt \"DIN Light\";"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setEnabled(true);
        widget->setGeometry(QRect(20, 130, 261, 261));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setAutoFillBackground(false);
        widget->setStyleSheet(QLatin1String("background-color: rgb(99,104,175);\n"
""));
        label_0 = new QLabel(widget);
        label_0->setObjectName(QStringLiteral("label_0"));
        label_0->setGeometry(QRect(10, 10, 81, 81));
        label_0->setFocusPolicy(Qt::StrongFocus);
        label_0->setAutoFillBackground(false);
        label_0->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 64pt \"DIN Light\";"));
        label_0->setAlignment(Qt::AlignCenter);
        label_1 = new QLabel(widget);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(90, 10, 81, 81));
        label_1->setFocusPolicy(Qt::StrongFocus);
        label_1->setAutoFillBackground(false);
        label_1->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 64pt \"DIN Light\";"));
        label_1->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 10, 81, 81));
        label_2->setFocusPolicy(Qt::StrongFocus);
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 64pt \"DIN Light\";"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 90, 81, 81));
        label_3->setFocusPolicy(Qt::StrongFocus);
        label_3->setAutoFillBackground(false);
        label_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 64pt \"DIN Light\";"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 90, 81, 81));
        label_4->setFocusPolicy(Qt::StrongFocus);
        label_4->setAutoFillBackground(false);
        label_4->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 64pt \"DIN Light\";"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 90, 81, 81));
        label_5->setFocusPolicy(Qt::StrongFocus);
        label_5->setAutoFillBackground(false);
        label_5->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 64pt \"DIN Light\";"));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 170, 81, 81));
        label_6->setFocusPolicy(Qt::StrongFocus);
        label_6->setAutoFillBackground(false);
        label_6->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 64pt \"DIN Light\";"));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(90, 170, 81, 81));
        label_7->setFocusPolicy(Qt::StrongFocus);
        label_7->setAutoFillBackground(false);
        label_7->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 64pt \"DIN Light\";"));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(170, 170, 81, 81));
        label_8->setCursor(QCursor(Qt::PointingHandCursor));
        label_8->setFocusPolicy(Qt::StrongFocus);
        label_8->setAutoFillBackground(false);
        label_8->setStyleSheet(QLatin1String("background-color: rgb(99,104,175);\n"
"font: 64pt \"DIN Light\";"));
        label_8->setAlignment(Qt::AlignCenter);
        label_0->raise();
        label_1->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        Title = new QLabel(centralWidget);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(20, 20, 541, 111));
        Title->setStyleSheet(QStringLiteral("font: 68pt \"DIN Light\";"));
        Title->setAlignment(Qt::AlignCenter);
        text_log = new QTextEdit(centralWidget);
        text_log->setObjectName(QStringLiteral("text_log"));
        text_log->setGeometry(QRect(310, 230, 271, 171));
        Principal->setCentralWidget(centralWidget);
        tableView->raise();
        comboBox->raise();
        start->raise();
        label_log_nome->raise();
        Title->raise();
        widget->raise();
        text_log->raise();
        mainToolBar = new QToolBar(Principal);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Principal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Principal);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Principal->setStatusBar(statusBar);

        retranslateUi(Principal);

        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Principal)
    {
        Principal->setWindowTitle(QApplication::translate("Principal", "Principal", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Principal", "Escolha", 0)
         << QApplication::translate("Principal", "Largura", 0)
         << QApplication::translate("Principal", "Profundidade", 0)
        );
        start->setText(QApplication::translate("Principal", "Iniciar", 0));
        label_log_nome->setText(QApplication::translate("Principal", "Logs", 0));
        label_0->setText(QApplication::translate("Principal", "1", 0));
        label_1->setText(QApplication::translate("Principal", "2", 0));
        label_2->setText(QApplication::translate("Principal", "3", 0));
        label_3->setText(QApplication::translate("Principal", "4", 0));
        label_4->setText(QApplication::translate("Principal", "5", 0));
        label_5->setText(QApplication::translate("Principal", "6", 0));
        label_6->setText(QApplication::translate("Principal", "7", 0));
        label_7->setText(QApplication::translate("Principal", "8", 0));
        label_8->setText(QString());
        Title->setText(QApplication::translate("Principal", "8-Puzzle", 0));
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
