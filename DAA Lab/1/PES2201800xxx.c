int searchFirstOccurrence(int arr[], int n, int key)
{
	int i = 0;
	for (; i < n; i++)
		if (arr[i] == key)
			return i;
	return -1;
}

int searchLastOccurrence(int arr[], int n, int key)
{
	int index = n - 1, i = n - 1;
	for (; i >= 0; i--, index--)
		if (arr[i] == key)
			return index;
	return -1;
}

int numOccurrences(int arr[], int n, int key)
{
	int count = 0, i = 0;
	for (; i < n; i++)
		if (arr[i] == key)
			count++;
	return count;
}
