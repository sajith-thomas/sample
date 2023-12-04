#include<stdio.h>
#include<stdlib.h>
int Set[20],SetSize=0,set1[20],set1Size=0,set2[20],set2Size=0,bitString1[20],bitString2[20],bitStringUnion[20],bitStringIntersection[20],bitStringDifference[20];
int isBitStringReady=0;
void getSet(int arr[],int setSize);
void processChoice(int choice);
void printAllSets();
void printSet(int arr[],int size);
void generateAndPrintBitStrings();
void generateBitString(int arr[],int size,int bitString1rray[]);
int search(int arr[],int arrSize,int elem);
int checkBitStringStatus();
void setUnion(int arr1[],int arr2[]);
void setIntersection(int arr1[],int arr2[]);
void setDifference(int arr1[],int arr2[]);
void printSetOperationResult(int arr[]);
void printbitString1sSet(int arr[]);
int checkBitStringStatus();
int main(){    
    int choice=0;
    do{
        printf("1.Enter Universal Set\n");
        printf("2.Enter Set 1\n");
        printf("3.Enter Set 2\n");
        printf("4.Generate Bit Strings\n");
        printf("5.Union\n");
        printf("6.Intersection\n");
        printf("7.Difference\n");
        printf("8.Print Sets\n");
        printf("9.Exit\n");
        printf("Enter Choice:");
        scanf("%d",&choice);
        processChoice(choice);
    }while(choice!=9);
    return 0;
}

void processChoice(int choice){
    switch(choice){
        case 1:
            printf("Enter  Set Size:");
            scanf("%d",&SetSize);
            getSet(Set,SetSize);
            break;
        case 2:
            printf("Enter Set 1 Size:");
            scanf("%d",&set1Size);
            getSet(set1,set1Size);
            break;
        case 3:
            printf("Enter Set 2 Size:");
            scanf("%d",&set2Size);
            getSet(set2,set2Size);
             break;
        case 4:
            printf("Generating bit strings\n");
            generateAndPrintBitStrings();
             break;
        case 5:
            printf("Set union\n");
            if(checkBitStringStatus()==1)
            {
                setUnion(bitString1,bitString2);
                printSetOperationResult(bitStringUnion);
            }
             break;
        case 6:
            printf("Set Intersection\n");
            if(checkBitStringStatus()==1)
            {
                setIntersection(bitString1,bitString2);
                printSetOperationResult(bitStringIntersection);
            }
             break;
        case 7:
            printf("Set Difference\n");
            if(checkBitStringStatus()==1)
            {
                setDifference(bitString1,bitString2);
                printSetOperationResult(bitStringDifference);
            }
             break;
        case 8:
            printAllSets();
             break;
    }
}
void printSetOperationResult(int arr[]){    
    printf("\nUnion Operation (bit string):");
    printSet(arr,SetSize);
    printf("\nOperation Result:");
    printbitString1sSet(arr);
}
void printbitString1sSet(int arr[]){
    int isFirstOutputDoneFlag=0;
    int i=0;
    printf("{");
    for( i=0;i<SetSize;i++){
        if(arr[i]==1){
            if(i!=0 && isFirstOutputDoneFlag==1){
                printf(",");
            }
            printf("%d",Set[i]);
            isFirstOutputDoneFlag=1;
        }       
    }
    printf("}");
}
void setUnion(int arr1[],int arr2[]){
	int i;
    for(i=0;i<SetSize;i++){        
        bitStringUnion[i]=arr1[i]|arr2[i];
    }
}
void setIntersection(int arr1[],int arr2[]){
	int i;
    for(i=0;i<SetSize;i++){        
        bitStringIntersection[i]=arr1[i]&arr2[i];
    }
}
void setDifference(int arr1[],int arr2[]){
	int i;
    for(i=0;i<SetSize;i++){ 
        printf("%d",!arr2[i]) ;     
        bitStringDifference[i]=arr1[i]&(!arr2[i]);
    }
}
int checkBitStringStatus(){
    if(isBitStringReady==0){
        printf("\n Generate Bit String first!");
        return 0;
    }
    return 1;
}
void getSet(int arr[],int setSize){
	int i;
    printf("\nEnter set\n");
    for(i=0;i<setSize;i++){
        scanf("%d",&arr[i]);
    }
}
void printAllSets(){   

    printf("\n Set:");
    printSet(Set,SetSize);
    printf("Set 1:");
    printSet(set1,set1Size);
    printf("Set 2:");
    printSet(set2,set2Size);
}
void printSet(int arr[],int size){
	int i;
    printf("{");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
        if(i!=size-1){
            printf(",");
        }
    }
    printf("}\n");
}
void generateAndPrintBitStrings(){
	int i;
    for(i=0;i<SetSize;i++){
        bitString1[i]=0;
        bitString2[i]=0;
        bitStringUnion[i]=0;
        bitStringIntersection[i]=0;
        bitStringDifference[i]=0;
    }
    generateBitString(set1,set1Size,bitString1);
    generateBitString(set2,set2Size,bitString2);
    printf("\nSet A Bit String representation : ");
    printSet(bitString1,SetSize);
    printf("\nSet B Bit String representation : ");
    printSet(bitString2,SetSize);
    isBitStringReady=1;
}
void generateBitString(int arr[],int size,int bitString1rray[]){
	int i;
    for(i=0;i<size;i++){
        int pos=search(Set,SetSize,arr[i]);
        if(pos>=0){
            bitString1rray[pos]=1;
        }        
    }
}
int search(int arr[],int arrSize,int elem)
	{
	int i;
    	for(i=0;i<arrSize;i++){
        	if(arr[i]==elem)
            		return i;
    }
    return -1;
}
