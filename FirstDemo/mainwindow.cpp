#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <mmdeviceapi.h>
#include <endpointvolume.h>
#include <audioclient.h>
#include "windows.h"

#if defined(Q_OS_LINUX)
    //linux code
#elif defined(Q_OS_WIN)
    // windows code
#elif defined(Q_OS_MAC)
    // os x code
#else

#endif

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->initTitleName("FaceIPA");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::initTitleName(QString name) {
    this->setWindowTitle(name);
}


void MainWindow::initAudioSetting() {

#ifdef Q_OS_WIN
// Code that will only be compiled under Windows
#endif


#ifdef Q_OS_MACX
// Code that will only be compiled under MAC OS X
#endif

#ifdef LINUX
// Code that will only be compiled under Linux
#endif

}

void MainWindow::initVideoSetting() {

#ifdef Q_OS_WIN
// Code that will only be compiled under Windows
#endif


#ifdef Q_OS_MACX
// Code that will only be compiled under MAC OS
#endif

#ifdef LINUX
// Code that will only be compiled under Linux
#endif

}

#ifdef Q_OS_WIN
bool MainWindow::setVolumeLevel(int level) {
    HRESULT hresult;
    IMMDeviceEnumerator *pDeviceEnumerator = 0;
    IMMDevice *pDevice = 0;
    IAudioEndpointVolume *pAudioEndpointVolume = 0;
    IAudioClient *pAudioClient = 0;
    return false;
}
#endif

#ifdef Q_OS_WIN
void MainWindow::keyPressMuteEnable() {
    // mute enable/disable
    keybd_event(0xAD, 0, 0, 0);
    keybd_event(0xAD, 0, KEYEVENTF_KEYUP, 0);
}
#endif

#ifdef Q_OS_WIN
void MainWindow::keyPressVolumeUp() {
    // volume up
    keybd_event (0xAF, 0, 0, 0);
    keybd_event (0xAF, 0, KEYEVENTF_KEYUP, 0);
}
#endif

#ifdef Q_OS_WIN
void MainWindow::keyPressVolumeDown() {
    // volume down
    keybd_event (0xAE, 0, 0, 0);
    keybd_event (0xAE, 0, KEYEVENTF_KEYUP, 0);
}
#endif

