#ifndef NAVBARHEADER_H
#define NAVBARHEADER_H

#include <QLabel>
#include <QToolButton>

class NavBarHeader : public QLabel
{
public:
    explicit NavBarHeader(QWidget *parent, Qt::WindowFlags flag);
    explicit NavBarHeader(const QString &test, QWidget *parent, Qt::WindowFlags flag);
    NavBarHeader();

    QToolButton *button;
};

#endif // NAVBARHEADER_H
