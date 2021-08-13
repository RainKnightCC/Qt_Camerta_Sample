#include <QWidget>
#include "NavBar.h"

NavBarToolBar::NavBarToolBar()
{

}

NavBar::NavBar(QWidget *parent, Qt::WindowFlags f) : QFrame(parent, f) {

}

NavBar::~NavBar()
{

}

int NavBar::count() const {
    return stackedWidget->count();
}

int NavBar::currentIndex() const {
    return stackedWidget->currentIndex();
}

int NavBar::rowHeight() const {
    return pageListWidget->rowHeight();
}


bool NavBar::isCollapsed() const {

}

bool NavBar::autoPopup() const {

}

bool NavBar::showCollapseButton() const {

}

bool NavBar::showHeader() const {

}

bool NavBar::showOptionsMenu() const {

}

int NavBar::visibleRows() const {
    return pageListWidget->height() / rowHeight();
}

void NavBar::setSmallIconSize(const QSize &size) {

}

QSize NavBar::smallIconSize() const {

}

void NavBar::setLargeIconSize(const QSize &size) {

}

QSize NavBar::largeIconSize() const {

}

// public slots
void NavBar::setCurrentIndex(int index) {

}

void NavBar::setCurrentWidget(QWidget *widget) {

}

void NavBar::setRowHeight(int height) {

}

void NavBar::setCollapsed(bool collapse) {

}

void NavBar::setAutoPopup(bool enable) {

}

void NavBar::setShowCollapseButton(bool show) {

}

void NavBar::setShowHeader(bool show) {

}

void NavBar::setShowOptionsMenu(bool show) {

}

void NavBar::setVisibleRows(int rows) {

}

int NavBar::showOptionsDialog() {

}

// private slots
void NavBar::onClickPageButton(QAction *action) {

}

void NavBar::onButtonVisibilityChanged(int visCount) {

}

void NavBar::changePageVisibility(QAction *action) {

}

void NavBar::showContentsPopup() {

}

// protected
void NavBar::resizeEvent(QResizeEvent *event) {

}

void NavBar::changeEvent(QEvent *event) {

}
