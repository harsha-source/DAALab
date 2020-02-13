int isSorted(int *a, int n){
	int i;
	for(i=0;i<n-1;i++){
		if(a[i] > a[i+1]) return 0;
	}
	return 1;
}


void bubblePass(int *a, int n){
	int i,temp;
	for(i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			temp = a[i+1];
			a[i+1] = a[i];
			a[i] = temp;		
		}
	}
}


void bubbleSort(int *a, int n){
	int i;
	for(i=0;i<n;i++){
		bubblePass(a,n);	
	}
}


int numBubblePasses(int *a, int n){
	int i,count=0;
	for(i=0;i<n;i++){
		if(isSorted(a,n)) return count;
		bubblePass(a,n);	
		count++;
	}
	return count;
}

//Find the offset (that is, index) of the maximum element in an array.
//In case of multiple occurrences of the maximum element,
// return the largest offset (that is, rightmost index).
int maxIndex(int *a, int n){
	int i,max=-1,maxIdx=0;
	for(i=0;i<n;i++){
		if(a[i]>=max){
			max = a[i];
			maxIdx = i;			
		}
	}
	return maxIdx;
}

//Consider an array a[0] to a[n-1].
//Let i be the largest offset of the maximum element in the array.
//Swap a[i] with a[n-1] only if i < n-1.
//Use maxIndex() declared above.
void swapWithMax(int *a, int n){
	int temp,i;
	i = maxIndex(a,n);
	if(i<n-1){
		temp = a[i];
		a[i] = a[n-1];
		a[n-1] = temp;	
	}
}

//Implement Selection sort using maxIndex() and swapWithMax() declared above.
void selectionSort(int *a, int n){
	int i;
	for(i=n;i>0;i--){
		swapWithMax(a,i);
	}
}

//Find the number of swaps in selectionSort() declared above.
int numSwaps(int *a, int n){
	int i,count = 0,x;
	for(i=n;i>0;i--){
		if( isSorted(a,n) ) return count;

		x = maxIndex(a,i);

		if(x<i-1){
			swapWithMax(a,i);
			count++;	
		}

	}
	return count;
}
