#include <iostream>

using namespace std;

int counter = 0;

void counting_function() {
    counter++;
    cout << "Количество вызовов функции counting_function(): " << counter << endl;;
}


int main(int argc, char** argv)
{
    setlocale(LC_ALL, "RU");

    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
}