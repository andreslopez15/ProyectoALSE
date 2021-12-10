#ifndef INTERFAZ_H
#define INTERFAZ_H
#include "registro.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Interfaz; }
QT_END_NAMESPACE

class Interfaz : public QMainWindow
{
    Q_OBJECT

public:
    Interfaz(QWidget *parent = nullptr);
    ~Interfaz();

private slots:

    void on_RegistrarBtn_clicked();

    void on_IngresarBtn_clicked();

private:
    Ui::Interfaz *ui;
};
#endif // INTERFAZ_H
