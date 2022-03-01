/**
 * @file HotelBilling_operations.h
 * @author Jeeva
 * @brief Header file for HotelBilling application with Arithmetic operations
 *
 */

#ifndef __HotelBilling_OPERATIONS_H__
#define __HotelBilling_OPERATIONS_H__
#include<stdio.h>
#include<conio.h>
#include"func.h"
int menu(){
    int ans;
    printf("\nEnter your choice \n 1.Menu \n 2.Billing");
    scanf("%d",&ans);
    switch (ans)
    {
    case 1:
        avalaibility();
        break;
    case 2:
        bill();
        break;
    
    default:
        break;
    }
    return 0;
}
void avalaibility(){
     printf("\nDOSA                     =20");
     printf("\nROAST                    =35");
     printf("\nPONGAL                   =5");
     printf("\nVADA                     =50");
     printf("\nNODDLES                  =15");
     printf("\nSAMBAR VADA              =15");  
     printf("\nTHAIR VADA               =15");
     printf("\nVEG FIRED RICE           =50");
     printf("\nNON-VEG FIRED RICE       =75");
     printf("\nIDLY                     =8");
    menu();
}
void bill(){
     printf("NO.OF.DOSA                     =");
     scanf("%d",&d1);
     printf("NO.OF.ROAST                    =");
     scanf("%d",&r1);
     printf("NO.OF.PONGAL                   =");
     scanf("%d",&p1);
     printf("NO.OF.VADA                     =");
     scanf("%d",&v1);
     printf("NO.OF.NODDLES                  =");
     scanf("%d",&n1);
     printf("NO.OF.SAMBAR VADA              =");
     scanf("%d",&sv1);  
     printf("NO.OF.THAIR VADA               =");
     scanf("%d",&tv1);
     printf("NO.OF.VEG FIRED RICE           =");
     scanf("%d",&vfr1);
     printf("NO.OF.NON-VEG FIRED RICE       =");
     scanf("%d",&nfr1);
     printf("NO.OF.IDLY                     =");
     scanf("%d",&i1);
     int total=d1*d+r1*r+p1*p+v1*v+n1*n+sv1*sv+tv1*tv+vfr1*vfr+nfr1*nfr+i1*i;
     printf("\nDOSA                     =Rs.20*%d",d1);
     printf("\nROAST                    =Rs.35*%d",r1);
     printf("\nPONGAL                   =Rs.5*%d",p1);
     printf("\nVADA                     =Rs.50*%d",v1);
     printf("\nNODDLES                  =Rs.15*%d",n1);
     printf("\nSAMBAR VADA              =Rs.15*%d",sv1);  
     printf("\nTHAIR VADA               =Rs.15*%d",tv1);
     printf("\nVEG FIRED RICE           =Rs.50*%d",vfr1);
     printf("\nNON-VEG FIRED RICE       =Rs.75*%d",nfr1);
     printf("\nIDLY                     =Rs.8*%d",i1);
     printf("\nTotal Amount...............= %d",total);
     printf("\n*********Thanks for visiting***********");
     menu();
}