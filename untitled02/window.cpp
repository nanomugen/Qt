#include "window.h"

Window::Window(QWidget *parent):QWidget(parent){
    setFixedSize(500,500);

    m_button = new QPushButton("Button",this);
    m_button->setGeometry(190,10,120,30);

}
