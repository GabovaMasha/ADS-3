// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int a = 0, b = size - 1;
int count = 0, f;
while (a <= b) {
int mid = a + (b - a) / 2;
if (arr[mid] == value) {
f = mid;
count++;
break;
}
if (arr[mid] > value)
b = mid - 1;
else
a = mid + 1;
}
if (f >= 0) {
for  (int i = 0; i < f; i++) {
if (arr[i] == value)
count++;
}
for (int j = size - 1; j > f; j--) {
if (arr[j] == value)
count++;
}
}
return count;
}
