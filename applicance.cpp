#include "applicance.h"

applicance::applicance(QObject *parent) : QObject(parent)
{

}


bool applicance::cook()
{
    return true;
}

bool applicance::grill()
{
    return true;
}

bool applicance::freeze()
{
    return true;
}
