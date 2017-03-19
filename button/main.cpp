/************before Windows.h and Windows.cpp create *********/
//#include <QApplication>
//#include <QPushButton>

//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//   // MainWindow w;
//    //w.show();
//    //QPushButton push ("push me", &button);
//    QWidget window;
//    window.setFixedSize(300,200);

//    QPushButton button("Hello world!", &window);
//    QFont font ("Courier");
//    QIcon icon ("/home/cs/Documents/Qt/Helloworld/qtdesigner.png");

//    button.setToolTip("This is a button for helloworld!");
//    button.setFont(font);
//    button.setIcon(icon);

//    button.setGeometry(10,10,200,30);
//    window.show();
//    //button.show();


//    return a.exec();
//}
/************after Windows.h and Windows.cpp create *********/
#include <QApplication>
#include "window.h"

int main(int argc, char *argv[])
{
    QApplication app (argc,argv);
    Window window;
    window.show();

    return app.exec();

}
