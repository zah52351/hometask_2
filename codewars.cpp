#include <iostream>
#include <bitset>


void revertBits(void* ptrToBuffer, int numOfBitPosition) {
    
    std::bitset<8> v(*(static_cast<unsigned long long*>(ptrToBuffer)));
    std::cout << v << "\n";
    v.flip(numOfBitPosition);
    std::cout << v << "\n";
}

void revertBits(void* ptrToBuffer) {                                    // перегрузка для инвертирования без указания позиции бита

    std::bitset<8> v(*(static_cast<unsigned long long*>(ptrToBuffer)));
    std::cout << v << "\n";
    v.flip();
    std::cout << v << "\n";
}

int main() {
    const int sizeOfBuffer = 40;
    unsigned char buffer[sizeof(char)* sizeOfBuffer];
    unsigned char* ptrToBuffer = buffer;

    revertBits(ptrToBuffer);

}
