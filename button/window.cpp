#include "window.h"
#include <QPushButton>
#include <QApplication>

Window::Window(QWidget *parent) : QWidget(parent)
{
    QIcon icon ("/home/cs/Documents/Qt/Helloworld/qtdesigner.png");
    //Set size fo the window
    setFixedSize(300, 100);

    //Create and position the button
    m_button =  new QPushButton("Close Windows", this);
    m_button->setIcon(icon);
    m_button->setGeometry(10,10,200,30);

    //Do the connection
    connect(m_button, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));

}
