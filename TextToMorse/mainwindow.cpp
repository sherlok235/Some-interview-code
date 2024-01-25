#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    m_input.reset(new QLineEdit);
    m_output.reset(new QTextEdit);

    m_mainLayout.reset(new QVBoxLayout);
    m_mainLayout->addWidget(m_input.data());
    m_mainLayout->addWidget(m_output.data());

    ui->setupUi(this);
    ui->centralwidget->setLayout(m_mainLayout.data());

    connect(m_input.data(),SIGNAL(textEdited(QString)),this,SLOT(EmitPrepareData(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::EmitPrepareData(QString text)
{
    emit PrepareData(text);
}

void MainWindow::SetOutputText(QString morseCode)
{
    m_output.data()->setText(morseCode);
}

