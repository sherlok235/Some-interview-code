#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QScopedPointer>
#include <QMainWindow>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QTextEdit>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void SetOutputText(QString);
private:
    Ui::MainWindow *ui;
    QScopedPointer<QLineEdit> m_input;
    QScopedPointer<QTextEdit> m_output;
    QScopedPointer<QVBoxLayout> m_mainLayout;
signals:
    void PrepareData(QString);
private slots:
    void EmitPrepareData(QString);
};
#endif // MAINWINDOW_H
