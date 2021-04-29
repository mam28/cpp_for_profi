// Пример использования POD-типа Book для чтения и записи членов

#include <cstdio>

struct Book {
    char name[256];
    int year;
    int pages;
    bool hardcover;
};

int main()
{
    Book neuromancer;
    neuromancer.pages = 271;
    printf("Neuromancer has %d pages.\n", neuromancer.pages);
    
    return 0;
}