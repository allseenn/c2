# include "00.c"

int main(int argc, char const *argv[])
{
    int i=123; // в целочисленную переменную i записали значение 123
    int* pi; // указательная переменная pi
    pi = &i; // в указательную переменную pi записали адрес переменной i
    printf("Значение i преобразовали в int %i\n", i);
    printf("Значение i без преобразования %p\n", i);
    printf("Адрес i преобразовали в int %i\n", &i);
    printf("Адрес i без преобразования  %p\n", &i);
    printf("\n");
    printf("Значение pi преобразовали в int %i\n", pi);
    printf("Значение pi без преобразования %p\n", pi);
    printf("Адрес pi без преобразования %p\n", &pi);
    // разыменовали указательную переменную pi
    printf("Значение ячейки памяти куда ссылается pi %i\n", *pi); // т.е. взяли из pi адрес, из адреса взяли значение и преобразовали к int

    int **ppi; // указательная переменная на указатель
    ppi = &pi; // адрес указательной переменной pi присвоили другой указательной переменной ppi
    // двойное разыменование указательной переменной ppi ссылающейся на адрес указательной переменной pi
    printf("Из адреса pi хранящей адрес в ppi взяли значение преобразив его в int %i\n",**ppi); // 

    int ar[5] = {1,2,3,4,5};
    int* pa; // указательная переменная
    pa = &ar[0]; // аналогично pa = &ar указатель на начало массива
    printf("Значение ячейки памяти куда ссылается указатель на массив pa %i\n", *pa);


    int str[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    int (*ps)[5];
    ps = str+1;
    printf("Строка № 1 %s\n", ps);
    
    char* string = "Hello World";
    printf("%s\n", string);
    return 0;
}
