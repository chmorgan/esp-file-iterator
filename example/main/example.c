#include <stdio.h>
#include "file_iterator.h"

void app_main(void)
{
    file_iterator_instance_t* pIterator = file_iterator_new("./");
    assert(pIterator);
}
