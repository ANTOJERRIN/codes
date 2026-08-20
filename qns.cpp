#include <iostream>
#include <cstdlib>
using namespace std;

// int findMax(int a[], int size);   // <-- prototype declaration

// int main()
// {
//     int a[10] = {2,3,4,-1,7,8,1,5,0,7};
//     cout << "the largest number is " << findMax(a, 10);
//     return 0;
// }

// int findMax(int a[], int size)
// {
//     int i = 0, m = 0;
//     for (; i < size; i++)
//     {
//         if (a[i] > m)
//             m = a[i];
//     }
//     return m;
// }

//pointers qn
// int countEvens(int *arr,int size);
// int main()
// {
//     int arr[10]={2,3,4,5,6,8,10,12,34,23};
//     cout<<"the  number of even integers from the array"<<countEvens(arr,10);
//     return 0;

// }
// int countEvens(int *arr,int size)
// {
//     int c=0;
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]%2==0)
//         {
//             c++;
//         }
//     }
//     return c;
// }

// the dma qn
// int* allocateArray(int n);
// void freeArray(int* arr);

// int* allocateArray(int n)
// {
//     int *arr=(int*)malloc(n*sizeof(int));
//     return arr;
// }
// void freeArray(int* arr)
// {
//     free(arr);
// }
// int main()
// {
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     int* arr=allocateArray(n);
//     if(arr==NULL)
//     {
//         cout<<"failed"<<endl;
//         return 1;
//     }
//     cout<<"enter the integers"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];

//         /* code */
//     }
//     cout<<"you entered"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//         /* code */
//     }
//     freeArray(arr);
//     return 0;
    
    
// }

// struct:

// struct Student
// {
//     int roll_no;
//     float marks;
// };

// float calculateAverage(struct Student s[], int count);

// int main()
// {
//     struct Student a[3] = {{1, 34}, {2, 67}, {3, 78}};

//     float avg = calculateAverage(a, 3);
//     cout << "the average marks of all students is " << avg << endl;
//     return 0;
// }

// float calculateAverage(struct Student s[], int count)
// {
//     float sum = 0;
//     for (int i = 0; i < count; i++)
//     {
//         sum += s[i].marks;
//     }
//     return sum / count;
// }

// book qn:
struct Book{
    int book_id;
    float price;

};

void printBooks(struct Book *books,int n);
int main()
{
    int n;
    cout<<"enter the number of books :"<<endl;
    cin>>n;
    struct Book* books=(struct Book*)malloc(n*sizeof(struct Book));
    if(books==NULL)
    {
        cout<<"memory allocation failed"<<endl;
        return 1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"enter the book_id and price for the book"<<i+1<<" ";
        cin>>books[i].book_id>>books[i].price;
    }
    printBooks(books,n);
    free(books);
    return 0;
}
void printBooks(struct Book *books,int n)
{
    cout << "\nBook details is "<<endl;
    for (int  i = 0; i < n; i++)
    {
        cout <<"books_id is"<< books[i].book_id<<endl<<"books price is "<<books[i].price<<endl;
        /* code */
    }
}

