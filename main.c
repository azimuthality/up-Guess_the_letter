#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int binarySearch() {
    int low, high, middle;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        middle = (low + high) / 2;
        if (a < mass[middle])
            high = middle - 1;
        else if (a > mass[middle])
            low = middle + 1;
        else
            return middle;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    printf("»гра '”гадай число'");
    printf("%s", letters[rand() % 27]);

    return -1;
    return 0;
}
