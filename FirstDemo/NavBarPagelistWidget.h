#ifndef NAVBARPAGELISTWIDGET_H
#define NAVBARPAGELISTWIDGET_H

#include <QWidget>

class NavBarPageListWidget : public QWidget
{
    Q_OBJECT
public:
    explicit NavBarPageListWidget(QWidget *parent = nullptr);

    int rowHeight() const;

signals:


protected:
    int pageButtonHeight;

};

#endif // NAVBARPAGELISTWIDGET_H
