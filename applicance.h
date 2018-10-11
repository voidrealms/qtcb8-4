#ifndef APPLICANCE_H
#define APPLICANCE_H

#include <QObject>

#include "freezer.h"
#include "microwave.h"
#include "toaster.h"

class applicance : public QObject, public freezer, public toaster, public microwave
{
    Q_OBJECT
public:
    explicit applicance(QObject *parent = nullptr);

signals:

public slots:

    // microwave interface
public:
    bool cook();

    // toaster interface
public:
    bool grill();

    // freezer interface
public:
    bool freeze();
};

#endif // APPLICANCE_H
