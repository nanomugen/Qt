#include <QApplication>
#include <QPushButton>
#include <QCheckBox>
#include <QFrame>
#include <QWidget>
#define SIZEH 500
#define SIZEV 500
int main(int argc, char **argv){
    QApplication app (argc, argv);
    QPushButton *button;
    QCheckBox *check;
    QWidget window;
    window.setFixedSize(SIZEH,SIZEV);
    button = new QPushButton("", &window);
    button->setText("teste de texto");
    button->setToolTip("só a dica do botão");
    button->setFont(QFont("Monospace"));
    //button.setIcon(QIcon("/home/nanomugen/Code/unGamed/qt_project/resources/icon.png"));
    button->setIcon(QIcon::fromTheme("face-smile"));
    button->setGeometry((SIZEH/2)-60,35,120,30);
    check = new QCheckBox("",&window);
    check->setGeometry(5,5,80,30);
    check->setText("CheckBox maroto");
    check->setChecked(true);
    window.show();
    return app.exec();
}
