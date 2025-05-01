#define MAX 50
#include<stdio.h>

struct Array
{
    int capacity;
    int lastIndex;
    int arr[MAX];//macros
};

//Initialising Array
void init(struct Array *a,int capacity)
{
    (a->lastIndex)=-1;
    (a->capacity)=capacity;
    
}


//Checking whether array is full or not
int isFull(struct Array a)
{
    if((a.lastIndex)==(a.capacity-1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


//adding single element
int add(struct Array *a,int element)
{
    if(isFull(*a))//checking before adding whether the array is full 
    {
        printf("Array Index out of Bounds");
        return -1;
    }
    else
    {
        (a->lastIndex)++;
        (a->arr[a->lastIndex])=element;
        return 1;

    }
}

//printing array
void print(struct Array a)
{
    for(int i=0;i<=a.lastIndex;i++)
    {
        printf("%d\n",a.arr[i]);
    }
}


//getting input from user 
int getInput(char str[])
{
    printf("%s",str);
    int n;
    scanf("%d",&n);

    return n;

}
//creatig array using entered inputs
void create(struct Array *arr)
{
    int elem;
    for(int i=0;i<(arr->capacity);i++)

    {
        elem=getInput("Enter number or 999 to stop");
        if(elem==999)
        {
            break;
        }
        if(add(arr,elem)==-1)
        {
            break;
        }

    }
}

//inserting element into array with desired location
int insert(struct Array *a,int element,int index)
{
    if(isFull(*a))
    {
        return -1;
    }
    else
    {   
        if(a->lastIndex <index || index<0)
        {
                return -1;
        }
        else
        {
            for(int i=a->lastIndex+1;i>index;i--)
            {
                    a->arr[i]=a->arr[i-1];

            }

            a->arr[index]=element;
            (a->lastIndex)++;
            return 1;
        }
    }
}


//Deleting element from array
int delete(struct Array *x,int indexno)
{
	int i;
	if(indexno<0 || indexno>x->lastIndex)
	{
		return -1;
	}
	else
	{
		for(i=indexno;i<=x->lastIndex-1;i++)
		{
			x->arr[i]=x->arr[i+1];
		}
		x->lastIndex--;
		return 1;
	}
}

//Copying one array into array
void copy(struct Array *a1,struct Array a2)
{
    a1->lastIndex=a2.lastIndex;
    a1->capacity=a2.capacity;
    for(int i=0;i<=(a1->lastIndex);i++)
    {
        a1->arr[i]=a2.arr[i];
    }

    printf("Copied successfully");
}

//sorting the given array 
void sort(struct Array *a)
{
    int i,j;
    int temp;
    for(i=0;i<(a->lastIndex)-1;i++)
    {
        for(j=0;j<(a->lastIndex)-i-1;j++)
        {
            if(a->arr[j+1]<a->arr[j])
            {
                temp=a->arr[j];
                a->arr[j]=a->arr[j+1];
                a->arr[j+1]=temp;
            }
        }
    }
}

//searching element into array
int linsearch(struct Array a,int element)
{
    for(int i=0;i<=(a.lastIndex);i++)
    {
        if(a.arr[i]==element)
        {
            return i;
        }
    }
}



//binary searching 

int binsearch(struct Array x,int key)
{
    int l=0,u=x.lastIndex,mid,flag=0;
    
    void sort(struct Array*);
    sort(&x);

    while(l<=u)
    {
        mid=(l+u)/2;
            if(x.arr[mid]==key)
            {       
                   return mid;
            }
            else if(key>x.arr[mid])
            {
                    l=mid+1;
            }
            else if(key<x.arr[mid])
            {
                    u=mid-1;
            }
    }
    return -1;




}

//merging two sorted arrays into third array in sorted fashion

void merge(struct Array a1,struct Array a2,struct Array *a3)
{

         sort(&a1);
         sort(&a2);
        int i=0;
        int j=0;
        int k=0;
        a3->capacity=a1.capacity+a2.capacity;
        a3->lastIndex=a1.lastIndex+a2.lastIndex+1;

        while(i<=a1.lastIndex  && j<=a2.lastIndex)
        {
            if(a1.arr[i]<=a2.arr[j])
            {
                a3->arr[k]=a1.arr[i];
                i++;
                k++;
            }
            else
            {
                a3->arr[k]=a2.arr[j];
                j++;
                k++;
            }
        }

       while(i<=a1.lastIndex)
        {
               a3->arr[k]=a1.arr[i];
                i++;
                k++;
        }
        while(j<=a2.lastIndex)
        {
             a3->arr[k]=a2.arr[j];
                j++;
                k++;
        }
}
