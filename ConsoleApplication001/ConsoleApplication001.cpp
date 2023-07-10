// ConsoleApplication001.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
void testStaticWord()
{
    static int counter = 15;

    printf("counter = %d \n", counter);

    counter++;
}
//void EnableledAllLeds(void)

   // goSwitcht1();
   // EnableSwitcht1();

   // goSwitcht2();
   // EnableSwitcht2();

   // goSwitcht3();
   // EnableSwitcht3();

void main2()
{
    // 1 create variables, learn
    char  var3;  // 8bit signet
    unsigned char var4; // 8bit unsigned

    short var5; // 16bit signet
    unsigned short var6; // 16bit unsigned

    int var;    //32 bitna cila zminna
    unsigned int var2; // 32 bitna bez znakov

    // 2 creatr arrays,
    // array 16 elem each elements is 32bit signet
    int arr2[16];

    // array 24 elem each elements is 32bit signet
    unsigned int arr3[24];

    // unsigned short arr4       zminna
    unsigned short arr4[64];  // masuv

    char arr5[18];

    unsigned char arr6[24];


    // 3 indexing array
    arr3[0] = 1;  // 1
    arr3[1] = 1;  // 2 
    arr3[2] = 1;  // 3 
    arr3[3] = 1;  // 4 
    arr3[4] = 1;  // 5 
    arr3[5] = 0;  // 6

    arr3[6] = 7;

    var = 6;
    arr3[var] = 7;

    arr3 [var] = var + 1;

    // kay words

    const int num = 20;
    
    static  int num2 = 30;

    // functions

    testStaticWord();

    testStaticWord();

    testStaticWord();

    
}

int var01(int val1, int val2)
{
    int val3;

    val3 = val1 + val2;

    return val3;
}

int var02(int val1, int val2)
{
    int val3;

    val3 = val1 - val2;

    return val3;
}

int var03(int val1, int val2,int val3)
{
    int val4;

    val4 = val1 * val2 + val3;
 
    return val4;
}

int div2(int val1, int val2)
{
    int val3;

    val3 = val1 / val2;

    return val3;
}

void main()
{
    // fynkcija sum pruimae 16 bit parametpu i povertaje ix cymy
    // прыймае 2шт 32 битных параметрыб повертае их сумму 32 битне чысло  5 и 10 отрыматы 15
    printf("5+10 = %d \n15-10 = %d \n150*1000+200 = %d \n100/5 = %d \n", var01(5, 10), var02(15, 10), var03(150, 1000, 200), div2(100, 5));

    //printf("15 - 10 = %d \n", var02(15, 10));

    //printf("150 + 1000 = %d \n", var03(150, 1000));


  //if 
  //if else
  
  //if elseif else
    /*
    int doPrint = 0;

    if (doPrint > 0)
    {
        printf(">");
    }
    else if (doPrint < 0)
    {
        printf("<");
    }
    else if (doPrint == 0)
    {
        printf("0");
    }
    else
    {
        printf("false");
    }
    */
    int temp;
    printf("Please enter temperature:");
    int retVal = scanf_s("%d", &temp);        //vvod na koncoli
    if (retVal == 0)
    {
        printf("Error");
    }
    else
    {
        if (temp < -10)              //((temp ) && (temp ))
        {
            printf("Very cold");
        }
        else if ((temp >= -10) && (temp <= 0))
        {
            printf("Cold");
        }
        else if ((temp >= 1) && (temp <= 20))
        {
            printf("Normal");
        }
        else if ((temp > 20) && (temp <= 35))
        {
            printf("Hot");
        }
        else if (temp > 35)
        {
            printf("Very hot");
        }
    }
}



