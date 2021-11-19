#ifndef EXERCICE3_H_INCLUDED
#define EXERCICE3_H_INCLUDED

void exercice3()
{
    int A;
    int B;
    int C;
    printf("Veuillez entrer A : \n");
    scanf("%d", &A);

    printf("Veuillez entrer B : \n");
    scanf("%d", &B);

    C= abs(A*B);
    printf ("C=%d",C);
    return 0;
}

#endif // EXERCICE3_H_INCLUDED
