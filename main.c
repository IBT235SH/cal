#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B ;
    char op ;
    printf("veuillez saisir la valeur de A:\n");
    scanf("%d",&A);
    printf("veuillez saisir la valeur de B:\n");
    scanf("%d",&B);
     printf("veuillez saisire un operateur\n ");
    scanf(" %c",&op);
    switch(op){
        case '+': printf("A+B=%d",A+B);
               break;
        case'-' :printf("A-B=%d",A-B);
               break;
        case '*' :printf("A*B=%d",A*B);
                break;
        case'/' :if(B!=0)
            printf("A/B=%d",A/B);
              else
            printf("la divisions par 0 est inpossible\n ");
            break;
          case 'q':printf("l'utillisateur a quitter le programme");
           }
    return 0;&
}
