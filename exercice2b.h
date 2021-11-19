#ifndef EXERCICE2B_H_INCLUDED
#define EXERCICE2B_H_INCLUDED


void exercice2b()
{
int j;
for (j=1;j<=6;j++)
{
if (j%3==0) continue;
 else
    printf ("%d:",j);
    printf("itération %d\n",j);
}
system("pause");
}
#endif // EXERCICE2B_H_INCLUDED
