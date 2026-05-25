#include "../public/ReadingArray.h"
#include <cassert>

int main() {

    ReadingArray arr(2);

    assert(arr.getSize() == 2);

    arr[0].setValue(10);

    assert(arr[0].getValue() == 10);

    return 0;
}