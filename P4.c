/*


this programm is for testing four kind of sorting algorithm (shell,heap,insertion and merge)
the programm will ask the user to choose one of three types of arrays upon its elements (sorted ascending , sorted descending and random variables)
then it will do for the array selected from user by default theintialization of the arrays 
and it will sort them by these 4 methods 
it will print the consumed time on screen and it will printed on the file when user enter 0 and exit*/


// sort after random

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <unistd.h>

    int a,m,b,pick;

    int key ,j;
    double c1 =0.0; //this variable for time consuming measurment
double c2 =0.0;
double c3 =0.0;
double c4 =0.0;
double c5 =0.0;
double c12 =0.0;
double c13 =0.0;
double c14 =0.0;
double c15 =0.0;
double c11 =0.0;
double c6 = 0;
double c7 = 0;
double c8 = 0;
double c9 = 0;
double c10 = 0;
double c16 =0.0;
 double c17 =0.0;
  double c18 =0.0;
 double c19 =0.0;
 double c20 =0.0;

 double c21 =0.0; //this variable for time consuming measurment
double c22 =0.0;
double c23 =0.0;
double c24 =0.0;
double c25 =0.0;
double c26 =0.0;
double c27 =0.0;
double c28 =0.0;
double c29 =0.0;
double c30 =0.0;
double c31 = 0;
double c32 = 0;
double c33 = 0;
double c34 = 0;
double c35 = 0;
double c36 =0.0;
 double c37 =0.0;
  double c38 =0.0;
 double c39 =0.0;
 double c40 =0.0;




//sorting the Reversed order Array
//the t variables are for the time consumed for each sorting
double t1=0.0;
double t2=0.0;
double t3 =0.0;
double t4 =0.0;
double t5 =0.0;
double t6 =0.0;
double t7=0.0;
double t8=0.0;
double t9=0.0;
double t10=0.0;
double t11=0.0;
double t12=0.0;
double t13=0.0;
double t14=0.0;
double t15=0.0;
double t16=0.0;
double t17=0.0;
double t18=0.0;
double t19=0.0;
double t20=0.0;

int ret;
//n holds the size of the arrays
int n1 = 1000;
int n2 = 10000;
int n3 = 100000;
int n4 = 1000000;
int n5 = 5000000;
double frandom()//generation for random arrays
{

printf("RANDOM\n");
// allocation of arrays in the memory deoending in it is size
int* r1 = (int*)malloc(n1*sizeof(int));
r1[n1];
//if allocation goes wrong
if (r1 == NULL)
{
    printf("Memory not allocated for first random array\n");
    exit(0);
}
else{
    //when memory allocation successfully done
    for (a=0;a<n1;a++)
    {
        r1[a] = rand() %1000;
    }/*//this loop to print the elements generated
    for (a=0;a<n1;a++){
       printf("arr[%d] = %d \t",a,r1[a]);
    }
*/
}






int* r2 = (int*)malloc(n2*sizeof(int));
r2[n2];

if (r2 == NULL)
{
    printf("Memory not allocated for second random array\n");
    exit(0);
}
else{
    //when memory allocation successfully done
    for (a=0;a<n2;a++)
    {
        r2[a] = rand() %10000;
    }
  /*  for (a=0;a<n2;a++){
        printf("arr[%d] = %d \t",a,r2[a]);

    }*/

}


int* r3 = (int*)malloc(n3*sizeof(int));
r3[n3];

if (r3 == NULL)
{
    printf("Memory not allocated for third random array\n");
    exit(0);
}
else{
    //when memory allocation successfully done
    for (a=0;a<n3;a++)
    {
        r3[a] = rand() %100000;
    }
   /* for (a=0;a<n3;a++){
        printf("arr[%d] = %d \t",a,r3[a]);
    }*/
}


int* r4 = (int*)malloc(n4*sizeof(int));
r4[n4];

if (r4 == NULL)
{
    printf("Memory not allocated for fourth random array\n");
    exit(0);
}
else{
    //when memory allocation successfully done
    for (a=0;a<n4;a++)
    {
        r4[a] = rand() %1000000;
    }
 /*   for (a=0;a<n4;a++){
        printf("arr[%d] = %d \t",a,r4[a]);
    }*/
}


int* r5 = (int*)malloc(n5*sizeof(int));
r5[n5];

if (r5 == NULL)
{
    printf("Memory not allocated for fifth random array\n");
    exit(0);
}
else{
    //when memory allocation successfully done
    for (a=0;a<n5;a++)
    {
        r5[a] = rand() %5000000;
    }
  /*  for (a=0;a<n5;a++){
        printf("arr[%d] = %d \t",a,r5[a]);
*/


}






//**********************************//
//SHELL SORT BEGIN //



/*to calculate the time consumed in sorting the array
first we let begin equals the clock
then after finising we let end varialbe = clock
then we take the difference between them
this defferenc (c or t variable) = the timeconsumed by the sorting method in sorting the elements
*/
clock_t begin6 = clock();
shellSort(r1,n1);
clock_t end6 =clock();
c6 += (double)(end6 - begin6 ) / CLOCKS_PER_SEC;
printf("\nthe time is for shell one  %f" ,c6);


clock_t begin7 = clock();
shellSort(r2,n2);
clock_t end7 =clock();
c7 += (double)(end7 - begin7 ) / CLOCKS_PER_SEC;
printf("\nthe time is for shell 2  %f" ,c7);




clock_t begin8 = clock();
shellSort(r3,n3);
clock_t end8 =clock();
c8 += (double)(end8 - begin8 ) / CLOCKS_PER_SEC;
printf("\nthe time is for shell 3  %f" ,c8);


clock_t begin9 = clock();
shellSort(r4,n4);
clock_t end9 =clock();
c9 += (double)(end9 - begin9 ) / CLOCKS_PER_SEC;
printf("\nthe time is for shell 4th  %f" ,c9);




clock_t begin10 = clock();
shellSort(r5,n5);
clock_t end10 =clock();
c10 += (double)(end10 - begin10 ) / CLOCKS_PER_SEC;
printf("\nthe time is for shell 5th  %f" ,c10);



/*/SHELL SORT END*/




//***************************************////*/*
/* HEAP SORT Begin*/
int n = n1 / sizeof(r1[0]);

    heapSort(r1, n);
clock_t begin1 = clock();
    heapSort(r1, n);
clock_t end1 =clock();
c1 += (double)(end1 - begin1 ) / CLOCKS_PER_SEC;
printf("\n\n\nthe time is for HEAP one  %f" ,c1);



n=0;
 n = n2 / sizeof(r2[0]);

    heapSort(r2, n);
clock_t begin2 = clock();
    heapSort(r2, n);
clock_t end2 =clock();
c2 += (double)(end2 - begin2 ) / CLOCKS_PER_SEC;
printf("\nthe time is for HEAP 2  %f" ,c2);


n=0;
 n = n3/ sizeof(r3[0]);

    heapSort(r3, n);
clock_t begin3 = clock();
    heapSort(r3, n);
clock_t end3 =clock();
c3 += (double)(end3 - begin3 ) / CLOCKS_PER_SEC;
printf("\nthe time is for HEAP 3  %f" ,c3);






n=0;
 n = n4/ sizeof(r4[0]);

    heapSort(r4, n);
clock_t begin4 = clock();
    heapSort(r4, n);
clock_t end4 =clock();
c4 += (double)(end4 - begin4 ) / CLOCKS_PER_SEC;
printf("\nthe time is for HEAP 4  %f" ,c4);








n=0;
 n = n5/ sizeof(r5[0]);

    heapSort(r5, n);
clock_t begin5 = clock();
    heapSort(r5, n);
clock_t end5 =clock();
c5 += (double)(end5 - begin5 ) / CLOCKS_PER_SEC;
printf("\nthe time is for HEAP 5  %f" ,c5);






//*************************//
//HEAP SORT END



//*********************************************
//INSERTION SORT BEGIN
clock_t begin11 = clock();
insertionsort(r1,n1);
clock_t end11 =clock();
c11 += (double)(end11 - begin11 ) / CLOCKS_PER_SEC;
printf("\nthe time is for insertion one  %f" ,c11);




clock_t begin12 = clock();
insertionsort(r2,n2);
clock_t end12 =clock();
c12 += (double)(end12 - begin12 ) / CLOCKS_PER_SEC;
printf("\nthe time is for insertion 2  %f" ,c12);





clock_t begin13 = clock();
insertionsort(r3,n3);
clock_t end13 =clock();
c13 += (double)(end13 - begin13 ) / CLOCKS_PER_SEC;
printf("\nthe time is for insertion 3  %f" ,c13);



clock_t begin14 = clock();
insertionsort(r4,n4);
clock_t end14 =clock();
c14 += (double)(end14 - begin14 ) / CLOCKS_PER_SEC;
printf("\nthe time is for insertion 4  %f" ,c14);


clock_t begin15 = clock();
insertionsort(r5,n5);
clock_t end15 =clock();
c15 += (double)(end15 - begin15 ) / CLOCKS_PER_SEC;
printf("\nthe time is for insertion 5  %f" ,c15);

//*******************
//INSERTION SORT END


//*****************************************
//MERGE SORT BEGIN


clock_t begin16 = clock();
mergesort(r1,0,n1);
clock_t end16 =clock();
c16 += (double)(end16 - begin16 ) / CLOCKS_PER_SEC;
printf("\nthe time is for merge 1  %f" ,c16);




clock_t begin17 = clock();
mergesort(r2,0,n2);
clock_t end17 =clock();
c17 += (double)(end17 - begin17 ) / CLOCKS_PER_SEC;
printf("\nthe time is for merge 2  %f" ,c17);



clock_t begin18 = clock();
mergesort(r3,0,n3);
clock_t end18 =clock();
c18 += (double)(end18 - begin18 ) / CLOCKS_PER_SEC;
printf("\nthe time is for merge 3  %f" ,c18);




clock_t begin19 = clock();
mergesort(r4,0,n4);
clock_t end19 =clock();
c19 += (double)(end19 - begin19 ) / CLOCKS_PER_SEC;
printf("\nthe time is for merge 4  %f" ,c19);



clock_t begin20 = clock();
mergesort(r5,0,n5);
clock_t end20 =clock();
c20 += (double)(end20 - begin20 ) / CLOCKS_PER_SEC;
printf("\nthe time is for merge5  %f" ,c20);



}


double sorted()//generation for sorted arrays
{
int z=0;


int* r6 = (int*)malloc(n1*sizeof(int));
r6[n1];

if (r6 == NULL)
{
    printf("Memory not allocated for first random ascending order array\n");
    exit(0);
}
else{
    //when memory allocation successfully done

    //or we can use this method to intialize the array with random elements but in ascending order
    //but this method take more time in sorting it in ascending order
    //i keep it , if it is better we can just erase /* and */ and it works succesfully i tested it


    for (a=0;a<n1;a++)
{
    r6[a]=z;
    z++;
}

    /*for (a=0;a<n1;a++)
    {
        r6[a] = rand() %1000;
    }
    for (int i = 0; i < n1; i++)                     //Loop for ascending ordering
	{
		for (int j = 0; j < n1; j++)
		{
			if (r6[j] > r6[i])
			{
				int tmp = r6[i];
				r6[i] = r6[j];
				r6[j] = tmp;
			}
		}
	}

    /*for (a=0;a<n1;a++){
        printf("arr[%d] = %d \t",a,r6[a]);
    }*/
//printf("intialized one \n");
}


//for 2nd sorted





int* r7 = (int*)malloc(n2*sizeof(int));
r7[n2];

if (r7 == NULL)
{
    printf("Memory not allocated for second random ascending order array\n");
    exit(0);
}
else{
    //when memory allocation successfully done

    z=0;
    for (a=0;a<n2;a++)
{
    r7[a]=z;
    z++;
}

    /*for (a=0;a<n2;a++)
    {
        r7[a] = rand() %10000;
    }
    for (int v = 0; v < n2; v++)                     //Loop for ascending ordering
	{
		for (int u = 0; u < n2; u++)
		{
			if (r7[j] > r7[v])
			{
				int tmp = r7[v];
				r7[v] = r7[u];
				r7[u] = tmp;
			}
		}
	}

   /* for (a=0;a<n2;a++){
        printf("arr[%d] = %d \t",a,r7[a]);
    }*/
    //printf("intialized 2\n");
}













//for 3rd ascending




int* r8 = (int*)malloc(n3*sizeof(int));
r8[n3];

if (r8 == NULL)
{
    printf("Memory not allocated for third random ascending order array\n");
    exit(0);
}
else{



    //when memory allocation successfully done


     z=0;
    for (a=0;a<n3;a++)
{
    r8[a]=z;
    z++;
}

    /*
    for (a=0;a<n3;a++)
    {
        r8[a] = rand() %100000;
    }
    for (int q = 0; q < n3; q++)                     //Loop for ascending ordering
	{
		for (int w = 0; w < n3; w++)
		{
			if (r8[w] > r8[q])
			{
				int zx = r8[q];
				r8[w] = r8[w];
				r8[w] = zx;
			}
		}
	}

   /* for (a=0;a<n3;a++){
        printf("arr[%d] = %d \t",a,r8[a]);
    }*/
    //printf("intialize 3\n");
}

// for 4th



int* r9 = (int*)malloc(n4*sizeof(int));
r9[n4];

if (r9 == NULL)
{
    printf("Memory not allocated for third random ascending order array\n");
    exit(0);
}
else{
    //when memory allocation successfully done

     z=0;
    for (a=0;a<n4;a++)
{
    r9[a]=z;
    z++;
}





    /*for (a=0;a<n4;a++)
    {
        r9[a] = rand() %1000000;
    }
    for (int q = 0; q < n4; q++)                     // ascending ordering
	{
		for (int w = 0; w < n4; w++)             //
		{
			if (r9[w] > r9[q])                //
			{
				int zx = r9[q];         /
				r9[q] = r9[w];            /
				r9[w] = zx;             //
			}
		}
	}

    /*for (a=0;a<n4;a++){
        printf("arr[%d] = %d \t",a,r9[a]);
    }*/
        //printf("intialize 4\n");

}


// for fifth



int* r10 = (int*)malloc(n5*sizeof(int));
r10[n5];

if (r10 == NULL)
{
    printf("Memory not allocated for fifth random ascending order array\n");
    exit(0);
}
else{
    //when memory allocation successfully done


     z=0;
    for (a=0;a<n5;a++)
{
    r10[a]=z;
    z++;
}






    /*for (a=0;a<n5;a++)
    {
        r10[a] = rand() %5000000;
    }
    for (int q = 0; q < n5; q++)                     //ascending ordering
	{
		for (int w = 0; w < n5; w++)
		{
			if (r10[w] > r10[q])
			{
				int zx = r10[q];
				r10[q] = r10[w];
				r10[w] = zx;
			}
		}
	}
printf("\nintialized 5\n");
   /* for (a=0;a<n5;a++){
        printf("arr[%d] = %d \t",a,r10[a]);
    }*/
}



//**********************************//
//SHELL SORT BEGIN //




clock_t begin21 = clock();
shellSort(r6,n1);
clock_t end21 =clock();
c21 += (double)(end21 - begin21 ) / CLOCKS_PER_SEC;
printf("\nthe time is for shell one  %f" ,c21);


clock_t begin22 = clock();
shellSort(r7,n2);
clock_t end22 =clock();
c22 += (double)(end22 - begin22 ) / CLOCKS_PER_SEC;
printf("\nthe time is for shell 2  %f" ,c22);




clock_t begin23 = clock();
shellSort(r8,n3);
clock_t end23 =clock();
c23 += (double)(end23 - begin23 ) / CLOCKS_PER_SEC;
printf("\nthe time is for shell 3  %f" ,c23);


clock_t begin24 = clock();
shellSort(r9,n4);
clock_t end24 =clock();
c24 += (double)(end24 - begin24 ) / CLOCKS_PER_SEC;
printf("\nthe time is for shell 4th  %f" ,c24);




clock_t begin25 = clock();
shellSort(r10,n5);
clock_t end25 =clock();
c25 += (double)(end25 - begin25 ) / CLOCKS_PER_SEC;
printf("\nthe time is for shell 5th  %f" ,c25);



/*/SHELL SORT END*/



//***************************************////*/*
/* HEAP SORT*/



int n=0;
 n = n1/ sizeof(r6[0]);

    heapSort(r6, n);
clock_t begin60 = clock();
    heapSort(r6, n);
clock_t end60 =clock();
c35 += (double)(end60 - begin60 ) / CLOCKS_PER_SEC;
printf("\n the time is for HEAP 1  %f" ,c35);




 n=0;
 n = n2/ sizeof(r7[0]);

    heapSort(r7, n);
clock_t begin61 = clock();
    heapSort(r7, n);
clock_t end61 =clock();
c36 += (double)(end61 - begin61 ) / CLOCKS_PER_SEC;
printf("\n the time is for HEAP 2  %f" ,c36);



 n=0;
 n = n3/ sizeof(r8[0]);

    heapSort(r8, n);
clock_t begin62 = clock();
    heapSort(r8, n);
clock_t end62 =clock();
c37 += (double)(end62 - begin62 ) / CLOCKS_PER_SEC;
printf("\n the time is for HEAP 3  %f" ,c37);




 n=0;
 n = n4/ sizeof(r9[0]);

    heapSort(r9, n);
clock_t begin63 = clock();
    heapSort(r9, n);
clock_t end63 =clock();
c38 += (double)(end63 - begin63 ) / CLOCKS_PER_SEC;
printf("\n the time is for HEAP 4  %f" ,c38);






n=0;
 n = n5/ sizeof(r10[0]);

    heapSort(r10, n);
clock_t begin64 = clock();
    heapSort(r10, n);
clock_t end64 =clock();
c39 += (double)(end64 - begin64 ) / CLOCKS_PER_SEC;
printf("\n the time is for HEAP 5  %f" ,c39);





//*************************//
//HEAP SORT END



//*********************************************
//INSERTION SORT BEGIN
clock_t begin26 = clock();
insertionsort(r6,n1);
clock_t end26 =clock();
c26 += (double)(end26 - begin26 ) / CLOCKS_PER_SEC;
printf("\nthe time is for insertion one  %f" ,c26);




clock_t begin27 = clock();
insertionsort(r7,n2);
clock_t end27 =clock();
c27 += (double)(end27 - begin27 ) / CLOCKS_PER_SEC;
printf("\nthe time is for insertion 2  %f" ,c27);





clock_t begin28 = clock();
insertionsort(r8,n3);
clock_t end28 =clock();
c28 += (double)(end28- begin28 ) / CLOCKS_PER_SEC;
printf("\nthe time is for insertion 3  %f" ,c28);



clock_t begin29 = clock();
insertionsort(r9,n4);
clock_t end29 =clock();
c29 += (double)(end29 - begin29 ) / CLOCKS_PER_SEC;
printf("\nthe time is for insertion 4  %f" ,c29);


clock_t begin30 = clock();
insertionsort(r10,n5);
clock_t end30 =clock();
c30 += (double)(end30 - begin30 ) / CLOCKS_PER_SEC;
printf("\nthe time is for insertion 5  %f" ,c30);

//*******************
//INSERTION SORT END


//*****************************************
//MERGE SORT BEGIN


clock_t begin31 = clock();
mergesort(r6,0,n1);
clock_t end31 =clock();
c30 += (double)(end31 - begin31 ) / CLOCKS_PER_SEC;
printf("\nthe time is for merge 1  %f" ,c30);




clock_t begin32 = clock();
mergesort(r7,0,n2);
clock_t end32 =clock();
c31 += (double)(end32 - begin32 ) / CLOCKS_PER_SEC;
printf("\nthe time is for merge 2  %f" ,c31);



clock_t begin33 = clock();
mergesort(r8,0,n3);
clock_t end33 =clock();
c32 += (double)(end33 - begin33 ) / CLOCKS_PER_SEC;
printf("\nthe time is for merge 3  %f" ,c32);




clock_t begin34 = clock();
mergesort(r9,0,n4);
clock_t end34 =clock();
c33 += (double)(end34 - begin34 ) / CLOCKS_PER_SEC;
printf("\nthe time is for merge 4  %f" ,c33);



clock_t begin35 = clock();
mergesort(r10,0,n5);
clock_t end35 =clock();
c34 += (double)(end35 - begin35 ) / CLOCKS_PER_SEC;
printf("\nthe time is for merge 5  %f" ,c34);
//**************
//MERGE SORT END



}


double reverseoreder(){//generation for reversed order arrays

int z=0;

int* r11 = (int*)malloc(n1*sizeof(int));
r11[n1];

if (r11 == NULL)
{
    printf("Memory not allocated for first random descending order array\n");
    exit(0);
}
else{
    //when memory allocation successfully done



     z=n1-1;
    for (a=0;a<n1;a++)
{
    r11[a]=z;
    z--;
}


    /*for (a=0;a<n1;a++)
    {
        r11[a] = rand() %10000;
    }
	for (int q = 0; q < n1; q++)                     //Loop for descending ordering
	{
		for (int w = 0; w < n1; w++)
		{
			if (r11[w] < r11[q])
			{
				int zx = r11[q];
				r11[q] = r11[w];
				r11[w] = zx;
			}
		}
	}

 /*for (a=0;a<n1;a++){
        printf("arr[%d] = %d \t",a,r11[a]);
    }
*/
}



int* r12 = (int*)malloc(n2*sizeof(int));
r12[n2];


if (r12 == NULL)
{
    printf("Memory not allocated for second random descending order array\n");
    exit(0);
}
else{
    //when memory allocation successfully done

     z=n2-1;
    for (a=0;a<n2;a++)
{
    r12[a]=z;
    z--;
}



    /*for (a=0;a<n2;a++)
    {
        r12[a] = rand() %1000;
    }
	for (int q = 0; q < n2; q++)                     //Loop for descending ordering
	{
		for (int w = 0; w < n2; w++)
		{
			if (r12[w] < r12[q])
			{
				int zx = r12[q];
				r12[q] = r12[w];
				r12[w] = zx;
			}
		}
	}


}

*/
}
//3rd


int* r13 = (int*)malloc(n3*sizeof(int));
r13[n3];

if (r13 == NULL)
{
    printf("Memory not allocated for third random descending order array\n");
    exit(0);
}
else{
    //when memory allocation successfully done
      z=n3-1;
    for (a=0;a<n3;a++)
{
    r13[a]=z;
    z--;
}



    /*for (a=0;a<n3;a++)
    {
        r13[a] = rand() %100000;
    }
	for (int q = 0; q < n3; q++)                     //Loop for descending ordering
	{
		for (int w = 0; w < n3; w++)
		{
			if (r13[w] < r13[q])
			{
				int zx = r13[q];
				r13[q] = r13[w];
				r13[w] = zx;
			}
		}
	}

*/
}

//4th

int* r14 = (int*)malloc(n4*sizeof(int));
r14[n4];

if (r14 == NULL)
{
    printf("Memory not allocated for fourth random descending order array\n");
    exit(0);
}
else{
    //when memory allocation successfully done

          z=n4-1;
    for (a=0;a<n4;a++)
{
    r14[a]=z;
    z--;
}


    /*for (a=0;a<n4;a++)
    {
        r14[a] = rand() %1000000;
    }
	for (int q = 0; q < n4; q++)
	{
		for (int w = 0;w < n4; w++)
		{
			if (r14[w] < r14[q])
			{
				int zx = r14[q];
				r14[q] = r14[w];
				r14[w] = zx;
			}
		}
	}

**/
}


//5th

int* r15 = (int*)malloc(n5*sizeof(int));
r15[n5];

if (r15 == NULL)
{
    printf("Memory not allocated for fifth random descending order array\n");
    exit(0);
}
else{
    //when memory allocation successfully done

          z=n5-1;
    for (a=0;a<n5;a++)
{
    r15[a]=z;
    z--;
}

    /*for (a=0;a<n5;a++)
    {
        r15[a] = rand() %5000000;
    }
	for (int q = 0; q < n5; q++)
	{
		for (int w = 0; w < n5; w++)
		{
			if (r15[w] < r15[q])
			{
				int zx = r15[q];
				r15[q] = r15[w];
				r15[w] = zx;
			}
		}
	}

*/
}
//sorting the Reversed order Array

//************************************************************
//*********************
//SHELL  SORT BEGIN
clock_t begin37 = clock();
shellSort(r11,n1);
clock_t end37 =clock();
t1 += (double)(end37 - begin37 ) / CLOCKS_PER_SEC;
printf("reversed order the time is for shell one  %f\n" ,t1);


clock_t begin38 = clock();
shellSort(r12,n2);
clock_t end38 =clock();
t2 += (double)(end38 - begin38 ) / CLOCKS_PER_SEC;
printf("\nreversed the time is for shell 2  %f\n" ,t2);




clock_t begin39 = clock();
shellSort(r13,n3);
clock_t end39 =clock();
t3 += (double)(end39 - begin39 ) / CLOCKS_PER_SEC;
printf("\nreversed the time is for shell 3  %f\n" ,t3);


clock_t begin40 = clock();
shellSort(r14,n4);
clock_t end40 =clock();
t4 += (double)(end40 - begin40 ) / CLOCKS_PER_SEC;
printf("\n reversed the time is for shell 4th  %f" ,t4);




clock_t begin41 = clock();
shellSort(r15,n5);
clock_t end41 =clock();
t5 += (double)(end41 - begin41 ) / CLOCKS_PER_SEC;
printf("\n reversed the time is for shell 5th  %f" ,t5);



/*/SHELL SORT END*/




//*********************************************
//INSERTION SORT BEGIN
clock_t begin42 = clock();
insertionsort(r11,n1);
clock_t end42 =clock();
t6 += (double)(end42 - begin42 ) / CLOCKS_PER_SEC;
printf("\n reversed the time is for insertion one  %f" ,t6);




clock_t begin43 = clock();
insertionsort(r12,n2);
clock_t end43 =clock();
t7 += (double)(end43 - begin43 ) / CLOCKS_PER_SEC;
printf("\n reversed the time is for insertion 2  %f" ,t7);





clock_t begin44 = clock();
insertionsort(r13,n3);
clock_t end44 =clock();
t8 += (double)(end44- begin44 ) / CLOCKS_PER_SEC;
printf("\n reversed the time is for insertion 3  %f" ,t8);



clock_t begin45 = clock();
insertionsort(r14,n4);
clock_t end45 =clock();
t9 += (double)(end45 - begin45 ) / CLOCKS_PER_SEC;
printf("\n reversed the time is for insertion 4  %f" ,t9);


clock_t begin46 = clock();
insertionsort(r15,n5);
clock_t end46 =clock();
t10 += (double)(end46 - begin46 ) / CLOCKS_PER_SEC;
printf("\n reversed the time is for insertion 5  %f" ,t10);

//*******************
//INSERTION SORT END


//*****************************************
//MERGE SORT BEGIN


clock_t begin47 = clock();
mergesort(r11,0,n1);
clock_t end47 =clock();
t11 += (double)(end47 - begin47 ) / CLOCKS_PER_SEC;
printf("\n reversed the time is for merge 1  %f" ,t11);




clock_t begin48 = clock();
mergesort(r12,0,n2);
clock_t end48 =clock();
t12 += (double)(end48 - begin48 ) / CLOCKS_PER_SEC;
printf("\n reversed the time is for merge 2  %f" ,t12);



clock_t begin49 = clock();
mergesort(r13,0,n3);
clock_t end49 =clock();
t13 += (double)(end49 - begin49 ) / CLOCKS_PER_SEC;
printf("\n reversed the time is for merge 3  %f" ,t13);




clock_t begin50 = clock();
mergesort(r14,0,n4);
clock_t end50 =clock();
t14 += (double)(end50 - begin50 ) / CLOCKS_PER_SEC;
printf("\n reversed the time is for merge 4  %f" ,t14);



clock_t begin51 = clock();
mergesort(r15,0,n5);
clock_t end51 =clock();
t15 += (double)(end51 - begin51 ) / CLOCKS_PER_SEC;
printf("\n reversed the time is for merge5  %f" ,t15);






//***************************************////*/*
/* HEAP SORT BEGIN*/

int n=0;
 n = n1/ sizeof(r11[0]);

clock_t begin65 = clock();
    heapSort(r11, n);
clock_t end65 =clock();
t16 += (double)(end65 - begin65 ) / CLOCKS_PER_SEC;
printf("\n the time is for HEAP 1  %f" ,t16);


double t50 =0.0;
n=0;
 n = n2/ sizeof(r12[0]);

clock_t begin80 = clock();
    heapSort(r12, n);
clock_t end80 =clock();
t17 += (double)(end80 - begin80 ) / CLOCKS_PER_SEC;
printf("\n the time is for HEAP 2  %f" ,t17);





n=0;
 n = n3/ sizeof(r13[0]);

clock_t begin67 = clock();
    heapSort(r13, n);
clock_t end67 =clock();
t18 += (double)(end67 - begin67 ) / CLOCKS_PER_SEC;
printf("\n the time is for HEAP 3  %f" ,t18);





n=0;
 n = n4/ sizeof(r14[0]);

clock_t begin68 = clock();
    heapSort(r14, n);
clock_t end68 =clock();
t19 += (double)(end68 - begin68 ) / CLOCKS_PER_SEC;
printf("\n the time is for HEAP 4  %f" ,t19);

//fprintf(result ,"\n the time is for HEAP 4  %f" ,t18);



n=0;
 n = n5/ sizeof(r15[0]);

clock_t begin69 = clock();
    heapSort(r15, n);
clock_t end69 =clock();
t20 += (double)(end69 - begin69 ) / CLOCKS_PER_SEC;
printf("\n the time is for HEAP 5  %f" ,t20);


//*************************//
//HEAP SORT END

}


void shellSort(int elements[], int m) {
int addition, ml, k, sa;
for(addition = m/2; addition>0; addition /= 2){
for(ml=addition; ml<m; ml++){
for(k=ml-addition; k>=0; k-=addition){
if(elements[k+addition] >= elements[k])
break;
else{
sa = elements[k];
elements[k] = elements[k + addition];
elements[k + addition] = sa ;
}
}
}
}
/*for (a=0;a<n1;a++){
        printf("shell[%d] = %d \t",a,arr[a]);
    }
*/}

void insertionsort( int elements[], int n) {
int sa, key, sd;
for( sa=1; sa<n; sa++){
key = elements[sa];
sd = sa-1;
while( sd>=0 && elements[sd] > key){ //shift elements
elements[sd+1] = elements[sd];
sd = sd-1;
}
elements[sd+1] = key;
}
/*

for (a=0;a<n;a++){
        printf("insertion[%d] = %d \t\t",a,elements[a]);
    }*/
}





//now merge the two
void merge(int elements[], int p, int q, int r) {

  // Create L ← A[p..q] and M ← A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;

  int *L = (int*)malloc(n1*sizeof(int));
  int *M = (int*)malloc(n2*sizeof(int));

  for (int s = 0; s < n1; s++)
    L[s] = elements[p + s];
  for (int d = 0; d < n2; d++)
    M[d] = elements[q + 1 + d];

  int s,d , k;
  s = 0;
  d = 0;
  k = p;
//loop when reach l or m will choose bigger element
//then it will rearrange them to put them in the suitable place

  while (s < n1 && d < n2) {
    if (L[s] <= M[j]) {
      elements[k] = L[s];
      s++;
    } else {
      elements[k] = M[d];
      d++;
    }
    k++;
  }


  while (s < n1) {
   elements[k] = L[s];
    s++;
    k++;
  }

  while (d < n2) {
   elements[k] = M[d];
    d++;
    k++;
  }
}

// division and merging
void mergesort(int elements[], int l, int r) {
  if (l < r) {

// the two subarrays cut in m
    int m = l + (r - l) / 2;

    mergesort(elements, l, m);
    mergesort(elements, m + 1, r);

//send the two subarrays to merge function to merge them
    merge(elements, l, m, r);
  }
}




//***-*--------------***-------------**
//HEAP SORT CODE





  //exchange the 2 elements
  void exchange(int *a, int *b) {
    int space = *a;
    *a = *b;
    *b = space;
  }

  void heapify(int elements[], int n, int s) {

    //finding biggest (root,left child,right child)


    int biggest = s;
    int leftside = 2 * s + 1;
    int rightside = 2 * s + 2;

    if (leftside < n && elements[leftside] > elements[biggest])
      biggest = leftside;

    if (rightside < n && elements[rightside] > elements[biggest])
      biggest = rightside;

    // exchange the elements and continue sorting
        if (biggest != s) {
      exchange(&elements[s], &elements[biggest]);
      heapify(elements, n, biggest);
    }
  }

  //heap sort main funcciton
  void heapSort(int elements[], int n) {
    // for intialize the max heap
    for (int s = n / 2 - 1; s >= 0; s--)
      heapify(elements, n, s);

    // Heap sort
    for (int s = n - 1; s >= 0; s--) {
            exchange(&elements[0], &elements[s]);

      heapify(elements, s, 0);
    }
    /*for (a=0;a<n1;a++){
        printf("heap[%d] = %d \t",a,elements[a]);
    }*/
  }









int menu(){//includes explain and the options for the user to choose one
    int f=0;
 printf("\n welcome \n");
printf("please choose one of the following options for initializing an array \n");
printf(" After choosing please wait the results\n");
printf("1 *** for random array \n");
printf("2 *** for sorted array\n");
printf("3 *** for reversed order array\n");
scanf("%d",&f);

return f;
}



int main()
{
//file to save results in it
FILE *result;
result = fopen("result.txt" , "w");//intialize the file to print the results on
if (result == NULL)
{
    printf("Error in file\n");

}
pick = menu();
printf("\n\tRESULTS WILL BE PRINTED ON CMD SCREEN AND ON FILE ALSO\n");
printf("========================================================================\n");
    while (pick !=0){//entering 0 will break out and end the programm

   switch (pick) {

case 1:
   frandom();//call the function frandom to intialize random filled arrays
   //the sizes of the arrays are 1,000 ,, 10,000 ,, 100,000 ,, 1,000,000 ,, 5,000,000

    //print the result to the output file
    fprintf(result,"\n\t\t\t\t\tRANDOM ARRAY\n ");
    fprintf(result,"\n\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d",n1,n2,n3,n4,n5);
    fprintf(result,"\n\nshell\t\t%f\t%f\t%f\t%f\t%f",c6,c7,c8,c9,c10);
    fprintf(result,"\n\ninsertion\t%f\t%f\t%f\t%f\t%f",c11,c12,c13,c14,c15);
    fprintf(result,"\n\nmerge\t\t%f\t%f\t%f\t%f\t%f",c16,c17,c18,c19,c20);
    fprintf(result,"\n\nheap\t\t%f\t%f\t%f\t%f\t%f",c1,c2,c3,c4,c5);
    break;
case 2:
    sorted();
    //printf("\t\t\tSORTED\n");
    fprintf(result,"\n\t\t\t\t\tSORTED ARRAY\n ");
    fprintf(result,"\n\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d",n1,n2,n3,n4,n5);
    fprintf(result,"\n\nShell\t\t%f\t%f\t%f\t%f\t%f",c21,c22,c23,c24,c25);
    fprintf(result,"\n\nInsertion\t%f\t%f\t%f\t%f\t%f",c26,c27,c28,c29,c30);
    fprintf(result,"\n\nMerge\t\t%f\t%f\t%f\t%f\t%f",c30,c31,c32,c33,c34);
    fprintf(result,"\n\nHeap\t\t%f\t%f\t%f\t%f\t%f",c35,c36,c37,c38,c39);
    break;
case 3:
    //printf("\t\t\tREVERSED\n");
    reverseoreder();
    fprintf(result,"\n\t\t\t\t\tREVERSED ARRAY\n ");
    fprintf(result,"\n\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d",n1,n2,n3,n4,n5);
    fprintf(result,"\n\nShell\t\t%f\t%f\t%f\t%f\t%f",t1,t2,t3,t4,t5);
    fprintf(result,"\n\nInsertion\t%f\t%f\t%f\t%f\t%f",t6,t7,t8,t9,t10);
    fprintf(result,"\n\nMerge\t\t%f\t%f\t%f\t%f\t%f",t11,t12,t13,t14,t15);
    fprintf(result,"\n\nHeap\t\t%f\t%f\t%f\t%f\t%f",t16,t17,t18,t19,t20);
    break;
default :
    //if the user enters any value that is not in the options [0,3]

    printf("Sorry , the choice you entered is not correct\n");






}
   pick =menu(); }
   printf("thx\n");//end programm
   fclose(result);//close the file we opened to save results on
    return 0;
    }
