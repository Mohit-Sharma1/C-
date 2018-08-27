//how to divide the elements of array in two parts on the basis of even and odd index
#include<iostream>    //Headerfile 
using namespace std;
main()                //program start
    {
 
        long int ARR[10], OAR[10], EAR[10];
        int i, j = 0, k = 0, n;
 
        cout<<"Enter the size of array AR n"<<endl;        //Display the output
        cin>>n;                                            //Getting input from the user
 
        printf("Enter the elements of the array n");       //Display the output
        for (i = 0; i < n; i++)                            //Loop Used
        {
            cin>>ARR[i];                                   //Getting input from the user
            fflush(stdin);                                // used to clear the buffer and accept the next string
        }
 
        /*  Copy odd and even elements into their respective arrays */
 
        for (i = 0; i < n; i++)                          //Loop Used
        {
            if (ARR[i] % 2 == 0)                         //Conditional statement is used
            {
                EAR[j] = ARR[i];
                j++;
            }
            else
            {
                OAR[k] = ARR[i];
                k++;
            }
        }
 
        cout<<"The elements of OAR are n"<<endl;           //Display the ouput
        for (i = 0; i < k; i++)                           //Loop Used
        {
            cout<<OAR[i]<<endl;                           //Display the output
        }
 
        cout<<"The elements of EAR are n"<<endl;          //Display the output
        for (i = 0; i < j; i++)                           //Loop Used
        {
            cout<<EAR[i]<<endl;                         //Display the Output
        }
}
