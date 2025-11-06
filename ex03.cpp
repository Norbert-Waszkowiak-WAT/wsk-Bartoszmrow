#include <iostream>
using namespace std;

void min_max(int* arr,int size ,int* min,int* max){
    *min = *arr;
    *max = *arr;

    for(int i = 1; i < size ;i++){
        if(*max < *(arr + i)){
            *max = *(arr + i);
        }

        if(*min > *(arr + i)){
            *min = *(arr + i);
        }
    }
}

int main(){
    
    int tab[6] = {52 , 90 , 1 , 52 , 157 , 40};
    int min = 0;
    int max = 0;

    min_max(tab, 6, &min, &max);

    cout << endl << min << "  " << max << endl;
    
    int abb[12]={3,78,61,175,1938,87,9,13,10,0 ,41,943};

    min_max(abb,12,&min,&max);

       cout << endl << min << "  " << max << endl;

    return 0;
}