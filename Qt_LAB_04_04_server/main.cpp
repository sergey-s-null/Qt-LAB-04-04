#include <QCoreApplication>
#include <Server.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Server server(2323);

    return a.exec();
}
