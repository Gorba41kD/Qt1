#include "counter.h"
void Counter::slotInfo()
{
    ++count;
    if(count % 2 != 0)
    {
        value = "Hello world";
        emit changed(value);
    }
    else
    {
        value = "Message";
        emit changed(value);
    }

}
