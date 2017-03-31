#include"gifka.h"//статическая библиотека
int main()
{
srand(time(NULL));//реализация rand()
vihodMas(sozdanie(reliz()),reliz());//выводим масив через нашу функцию вывода
cout<<"vvedite P: ";cin>>P;
vihodMas(formirovka( P, sozdanie(reliz()), reliz()),podschet(sozdanie(reliz()),reliz(),P));//выводим масив результирующий
vihodMas(summa(sozdanie(reliz()),reliz()));
return 0;
}
