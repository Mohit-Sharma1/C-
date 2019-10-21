// C++ program to merge two sorted arrays/
#include<iostream>
using namespace std;
 
// Merge arr1[0..n1-1] and arr2[0..n2-1] into
// arr3[0..n1+n2-1]
void mergeArrays(int arr1[], int arr2[], int n1,
                             int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;
 
    // Traverse both array
    while (i<n1 && j <n2)
    {
        // Check if current element of first
        // array is smaller than current element
        // of second array. If yes, store first
        // array element and increment first array
        // index. Otherwise do same with second array
        if (arr1[i] < arr2[j])          //Conditional statement used
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
 
    // Store remaining elements of first array
    while (i < n1)     //Loop
        arr3[k++] = arr1[i++];
 
    // Store remaining elements of second array
    while (j < n2)   //Loop
        arr3[k++] = arr2[j++];
}
 
// Driver code
int main()          //Main function starts
{
    int arr1[] = {1, 2, 3, 5, 6, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
 
    int arr2[] = {4,8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
 
    int arr3[n1+n2];
    mergeArrays(arr1, arr2, n1, n2, arr3);
 
    cout << "Array after merging" <<endl;        //Display the result
    for (int i=0; i < n1+n2; i++)                //Loop
        cout << arr3[i] << " ";                  //Display the result
 
    return 0;
}
# the other way of doing this.
#include <stdio.h>

void merge(int [], int, int [], int, int []);

int main() 
{
    int a[100], b[100], m, n, c, sorted[200];
    
    printf("Input number of elements in first array\n");
    scanf("%d", &m);
    
    printf("Input %d integers\n", m);
    for (c = 0; c < m; c++) {    
    scanf("%d", &a[c]);       
    }
    
    printf("Input number of elements in second array\n");
    scanf("%d", &n);
    
    printf("Input %d integers\n", n);
    for (c = 0; c < n; c++) {    
    scanf("%d", &b[c]);    
    }
    
    merge(a, m, b, n, sorted);
    
    printf("Sorted array:\n");
    
    for (c = 0; c < m + n; c++) {    
    printf("%d\n", sorted[c]);    
    }    
    return 0;
}

void merge(int a[], int m, int b[], int n, int sorted[]) {
    int i, j, k;    
    j = k = 0;
    
    for (i = 0; i < m + n;) {
        if (j < m && k < n) {
        
            if (a[j] < b[k]) {            
                sorted[i] = a[j];
                j++; 
            }
            else {            
                sorted[i] = b[k];
                k++; 
            }
            i++;
        }
        
        else if (j == m) {
            for (; i < m + n;) {            
                sorted[i] = b[k];
                k++;
                i++; 
            }
        }
        
        else {
            for (; i < m + n;) {                
                sorted[i] = a[j];
                j++;
                i++;
            }
        }
    }
}


