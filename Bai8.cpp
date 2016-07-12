#include <stdio.h>
#include <conio.h>
int main(){
	int USCLN,BSCNN,a,b,i,j;
	printf("Nhap gia tri nguyen duong cua a = "); scanf("%d", &a);
    printf("Nhap gia tri nguyen duong cua b = "); scanf("%d", &b);	
    if(a > b){
        for (i = 1; i < b; i++)
            if((a % i == 0) && (b%i == 0))
                USCLN = i;
        j = a;
        while ((j % a == 0) && (j % b == 0))
        {
            BSCNN = j;
            j++;
        }
    }else if(a < b){
            for (i = 1; i < a; i++)
                if((a % i == 0) && (b % i == 0))
                    USCLN = i;
            j = b;
            while ((j % a == 0) && (j % b == 0))
            {
                BSCNN = j;
                j++;
            }
    }else{
        USCLN = a;
        BSCNN = a;
    }
	printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, USCLN);
	printf("Boi chung nho nhat cua %d va %d la: %d\n", a, b, BSCNN);	
}
