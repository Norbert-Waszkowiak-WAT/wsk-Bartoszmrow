#include <iostream>
#include <iomanip>

using namespace std;

int sum_array(int* a, int size){
    int suma = 0;
    for (int i = 0; i < size; i++){
        suma += *(a + 1);
    }
    return suma;
}

int main()
{
    int tab[5] = {8,9,3,5,1};

    cout << sum_array(&tab[0],5) << endl;

    

    return 0;
}