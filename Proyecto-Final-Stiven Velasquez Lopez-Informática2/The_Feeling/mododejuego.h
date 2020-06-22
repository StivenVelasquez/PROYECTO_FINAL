#ifndef MODODEJUEGO_H
#define MODODEJUEGO_H

#include <QWidget>

namespace Ui {
class ModoDeJuego;
}

class ModoDeJuego : public QWidget
{
    Q_OBJECT

public:
    explicit ModoDeJuego(QWidget *parent = nullptr);
    ~ModoDeJuego();

private:
    Ui::ModoDeJuego *ui;
};

#endif // MODODEJUEGO_H
