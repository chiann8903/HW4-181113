#include<stdio.h>
#include<stdlib.h>
main(){
	int b;
	int c=1;
	int point = 0;
	int a[10] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	for (int k = 0; k < 10; k++){
		printf("%d ", a[k]);
	}
	printf("\n\n");
		for (int i=point; i < 10; i++){
			if (c = 0)
				break;
			for (int j=i; j < 10; j++){
				if (a[i] > a[j]){
					b = a[j];
					a[j] = a[i];
					a[i] = b;
					c = 1;
					for (int k = 0; k < 10; k++){
						printf("%d ", a[k]);
					}
					printf("\n");
					if (i > 1)
						point = 2;
				}
				else
					c = 0;
			}
		}
	system("pause");
}