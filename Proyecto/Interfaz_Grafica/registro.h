#ifndef REGISTRO_H
#define REGISTRO_H
#include <QMessageBox>
#include <QMainWindow>
#include "db_local.h"

namespace Ui {
class Registro;
}

class Registro : public QMainWindow
{
    Q_OBJECT

public:
    explicit Registro(QWidget *parent = nullptr);
    ~Registro();

private slots:

    void on_RegistrarBtn_clicked();

private:
    Ui::Registro *ui;
};

#endif // REGISTRO_H
