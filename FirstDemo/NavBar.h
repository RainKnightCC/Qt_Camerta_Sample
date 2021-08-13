#ifndef NAVBAR_H
#define NAVBAR_H

#include <QToolBar>
#include <QFrame>
#include <QStackedWidget>

#include "NavBarHeader.h"
#include "NavBarSplitter.h"
#include "NavBarPage.h"
#include "NavBarPagelistWidget.h"

class NavBarToolBar : public QToolBar
{
    Q_OBJECT
public:
    explicit NavBarToolBar(QWidget *parent = 0);
    NavBarToolBar();
};

class NavBar : public QFrame
{
    Q_OBJECT
    Q_PROPERTY(int count    READ count)
    Q_PROPERTY(int currentIndex   READ currentIndex   WRITE setCurrentIndex NOTIFY currentChanged)
    Q_PROPERTY(int rowHeight  READ rowHeight    WRITE setRowHeight)
    Q_PROPERTY(bool collapsed   READ isCollapsed    WRITE setCollapsed    NOTIFY collapsedChanged)
    Q_PROPERTY(bool autoPopup   READ autoPopup  WRITE setAutoPopup)
    Q_PROPERTY(bool showCollapseButton   READ showCollapseButton    WRITE setShowCollapseButton)
    Q_PROPERTY(bool showHeader  READ showHeader     WRITE setShowHeader)
    Q_PROPERTY(bool showOptionsMenu     READ showOptionsMenu    WRITE setShowOptionsMenu)
    Q_PROPERTY(int visibleRows   READ visibleRows    WRITE setVisibleRows   NOTIFY visibleRowsChanged)
    Q_PROPERTY(QSize smallIconSize   READ smallIconSize   WRITE setSmallIconSize)
    Q_PROPERTY(QSize largeIconSize   READ largeIconSize   WRITE setLargeIconSize)

public:
    explicit NavBar(QWidget *parent, Qt::WindowFlags f);
    ~NavBar();

    int currentIndex() const;
    int count() const;

    int rowHeight() const;
    bool isCollapsed() const;
    bool autoPopup() const;
    bool showCollapseButton() const;
    bool showHeader() const;
    bool showOptionsMenu() const;
    int visibleRows() const;

    void setSmallIconSize(const QSize &size);
    QSize smallIconSize() const;

    void setLargeIconSize(const QSize &size);
    QSize largeIconSize() const;

signals:
    void currentChanged(int index);
    void visibleRowsChanged(int rows);
    void collapsedChanged(bool collapsed);

public slots:
    void setCurrentIndex(int index);
    void setCurrentWidget(QWidget *widget);
    void setRowHeight(int height);
    void setCollapsed(bool collapse);
    void setAutoPopup(bool enable);
    void setShowCollapseButton(bool show);
    void setShowHeader(bool show);
    void setShowOptionsMenu(bool show);
    void setVisibleRows(int rows);
    int  showOptionsDialog();

protected:
    void resizeEvent(QResizeEvent *event);
    void changeEvent(QEvent *event);

private slots:
    void onClickPageButton(QAction *action);
    void onButtonVisibilityChanged(int visCount);
    void changePageVisibility(QAction *action);
    void showContentsPopup();

private:

    void resizeContent(const QSize &size, int rowheight);
    void reorderStackedWidget();
    void recalcPageList(bool reorder);
    void refillToolBar(int visCount);
    void refillPagesMenu();
    void moveContentsToPopup(bool popup);
    void setHeaderText(const QString &text);

    NavBarHeader *header;
    QStackedWidget *stackedWidget;
    NavBarSplitter *splitter;
    NavBarPageListWidget *pageListWidget;
    NavBarToolBar *actionOptions;
    QList<NavBarPage> pages;
    QStringList pageOrder;

    bool collapsedState;
    bool optMenuVisible;
    bool headerVisible;
    bool autoPopupMode;
    bool proceedCollapse;

    int expandedWidth;
    int headerHeight;
    int collapsedWidth;
    int uniquePageCount;

    QSize pageIconSize;






};

#endif // NAVBAR_H
