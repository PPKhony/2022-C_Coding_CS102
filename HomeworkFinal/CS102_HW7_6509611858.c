#include <stdio.h>

struct myGoodsRec
{
    int ID;
    char name[20];
    char type;
    float cost;
    float tax;
    float netPrice;
};
typedef struct myGoodsRec Goods;
Goods myGoods[100];

float findTax(char type, float price)
{
    float tax;
    switch (type)
    {
    case 'A':
        tax = price * 0.10;
        break;
    case 'B':
        tax = price * 0.15;
        break;
    case 'C':
        tax = price * 0.20;
        break;
    case 'D':
        tax = price * 0.40;
        break;
    default:
    {
        printf("Error file format ");
        break;
    }
    }
    return tax;
}

int main()
{
    FILE *Goods;
    Goods = fopen("Goods.txt", "r");

    FILE *Report;
    Report = fopen("Report6509611858.txt", "w");

    fprintf(Report, "ID\t\t Name\t\t\t Type\t\t Cost\t\t Tax\t NetPrice\t \n");
    int i = 0;
    while (fscanf (Goods, "%i %s %c %f", &(myGoods[i].ID), (myGoods[i].name), &(myGoods[i].type), &(myGoods[i].cost)) == 4)
    {
        fprintf(Report, "%i\t %s\t\t\t %c\t\t %.02f\t\t %.02f\t %.02f\t \n", (myGoods[i].ID), (myGoods[i].name), (myGoods[i].type), (myGoods[i].cost),
            findTax(myGoods[i].type, myGoods[i].cost), 
            findTax(myGoods[i].type, myGoods[i].cost)+(myGoods[i].cost));
        i++;
    }

    return 0;
}
