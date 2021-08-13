#include "NavBarPagelistWidget.h"

NavBarPageListWidget::NavBarPageListWidget(QWidget *parent) : QWidget(parent)
{

}

int NavBarPageListWidget::rowHeight() const {
    return pageButtonHeight;
}
