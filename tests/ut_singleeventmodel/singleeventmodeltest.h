#ifndef SINGLEEVENTMODELTEST_H
#define SINGLEEVENTMODELTEST_H

#include <QObject>

class SingleEventModelTest : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void getEventById();
    void getEventByTokens();
    void contactMatching_data();
    void contactMatching();
    void updateStatus();
    void cleanupTestCase();
};

#endif
