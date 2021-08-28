#include <stdio.h>

void shuffle(int *deck[], int index){
	int n, i;
	int *a[5000];
	int *b[5000];
	if(index%2==0)
		n=index/2;
	else
		n=index/2+1;
	for(i = 0; i<n; i++){
		a[i] = deck[i];
	}
	int j = 0;
	for(i = n; i<index; i++){
		b[j] = deck[i];
		j++;
	}
	int k =0;
	for(i = 0; i< index; i+=2){
		deck[i] = a[k];
		k++;
	}
	int l = 0;
	for(i = 1; i<index; i+=2){
		deck[i] = b[l];
		l++;
	}
}

void print(int *deck[], int index){
	for(int i= 0; i< index; i++){
		printf("%d ", *(deck[i]));
	}
	
}

int main()
{
  int card[10000];
  int *deck[10000];
  int index = 0;

  while (scanf("%d", &(card[index])) != EOF) {
    deck[index] = &(card[index]);
    index++;
  }
  deck[index] = NULL;
  shuffle(deck, index);
  print(deck, index);  
  return 0;
}