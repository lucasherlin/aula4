/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    int mVE = 0; //variavel para media de VE.
    int VC = 0; //variavel para nota de VC.
    int VE = 0; //variavel auxiliar para calcular media de VE.
    int numVE = 0; // variavel para o numero de VE realizadas.
    int i = 0; // variavel para o loop.
    int VF = 0; // variavel para nota de VF.
    
    printf("calculador de notas de VF\n\nQuantas VEs foram realizadas\n");
    scanf("%d", & numVE); //recepe o numero de VEs realizadas.
    while(i < numVE)
        {
            printf("Quando voce tirou na %d VE\n", (i+1));
            scanf("%d", &VE); // recepe a (i+1)ecima nota de VE
            mVE = mVE + VE;
            i++;
        }
    mVE = mVE/numVE;
    printf("Quanto voce tirou na VC\n");
    scanf("%d", & VC);
    VF = ( 20 - (mVE + VC) )/2; //calcula a media de VF sem levar em conta a nota minima.
    if(VF < 4)
        {
            VF = 4; // aplica a nota minima de 4.
        }
    printf("Voce precisa tirar %d na VF\n", VF);
    return 0;
}
