#include <QCoreApplication>
#include <iostream>

#include <subjectimplementation.h>
#include <observerimplementation.h>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    ObserverImplementation observer1("Sniper");
    ObserverImplementation observer2("Hunter");

    SubjectImplementation subject1("Lazy prey");
    SubjectImplementation subject2("Quick prey");

    subject1.registerObserver(&observer1);
    subject1.registerObserver(&observer2);

    subject2.registerObserver(&observer1);

    subject1.doAction("jump");

    subject2.doAction("dive");

    return a.exec();
}
