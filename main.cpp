#include "SecureCompressedFile.h"

int main() {
    const int N = 2;

    File* items[N];

    items[0] = new SecureCompressedFile("file1.txt", 1000, "Hello World", 0.5, 123);
    items[1] = new SecureCompressedFile("file2.txt", 2000, "Test Data", 0.3, 456);

    for (int i = 0; i < N; i++) {
        items[i]->process();
    }

    for (int i = 0; i < N; i++) {
        delete items[i];
    }

    return 0;
}