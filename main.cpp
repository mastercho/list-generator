#include <stdio.h>
#include <string.h>

using namespace std;


void convert(char &x,char *pointer,int pozitie)
{

    switch(x)
    {
    case 'z'+1:
        x = 'A';
        break;
    case 'Z'+1:
        x = '1';
        break;
    case '9'+1:
        x = 'a';
        (*(pointer+pozitie-1))++;
        convert(*(pointer+pozitie-1),pointer,pozitie-1);
        break;
    }
}

char combination[100];
char r = 'n';
int x = 0;
bool stop = false;
void Algorithm()
{
    while(true)
    {
        combination[x-1]++;
        convert(combination[x-1],combination,x-1);

       
        if(r == 'y')
        printf("%s \n",combination);


        stop = true;
        for(int i=0;i<x;i++)
            if(combination[i] != '9')
            stop = false;

        if(stop)
        break;
    }

}


int main()
{

    printf("BG \n");
    printf("************************************************* \n");
    printf("Проект - MaStErChO \n");
    printf("Създател - MaStErChO \n");
    printf("Описание: Алгоритан  с който можете да генерирате всички възможни алгоритми със зададена x буква + цифри. \n");
    printf("************************************************* \n");

    printf("EN \n");
    printf("************************************************* \n");
    printf("Project - MaStErChO \n");
    printf("Creator - MaStErChO \n");
    printf("Description: Simple algorithm who generate all posible combination with x letter lower and upper case + number. \n");
    printf("************************************************* \n");
    
    
    printf("BG \n");
    printf("Да покажа ли всички възможни алгоритми?\n");
    printf("(д/н) \n");
    
    printf("EN \n");
    printf("Do you want to display all posible combination? \n");
    printf("(y/n) \n");
    
    
    scanf("%BG",&r);
    printf("RO \n");
	printf("До колко знака? \n");
    
    printf("EN \n");
    printf("How many character? Example: if you want all combination between aaa and 999 type 3 \n");

    scanf("%d",&x);


    for(int i=0;i<x;i++)
        combination[i] = 'a';


    Algorithm();

    printf("\n DONE! \n",x);


    return 0;
}
