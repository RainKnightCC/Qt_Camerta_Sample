#include "NavBarHeader.h"

NavBarHeader::NavBarHeader()
{

}

NavBarHeader::NavBarHeader(QWidget *parent, Qt::WindowFlags flag) : QLabel(parent, flag) {

}

NavBarHeader::NavBarHeader(const QString &test, QWidget *parent, Qt::WindowFlags flag) : QLabel(test, parent, flag) {


}
