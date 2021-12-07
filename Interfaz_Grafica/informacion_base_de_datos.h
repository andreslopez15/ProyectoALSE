#ifndef INFORMACION_BASE_DE_DATOS_H
#define INFORMACION_BASE_DE_DATOS_H

#include <QMainWindow>

namespace Ui {
class Informacion_base_de_datos;
}

class Informacion_base_de_datos : public QMainWindow
{
    Q_OBJECT

public:
    explicit Informacion_base_de_datos(QWidget *parent = nullptr);
    ~Informacion_base_de_datos();

private:
    Ui::Informacion_base_de_datos *ui;
};

#endif // INFORMACION_BASE_DE_DATOS_H
