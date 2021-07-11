// cpp practice 10.5.13.c
// cpp practice 10.5.14.c
#include <stdio.h>

void input_array(int rows, int cols, double arr[rows][cols]);
double col_average(int cols, const double arr[cols]);
double array_average(int rows, int cols, const double arr[rows][cols]);
double array_max_number(int rows, int cols, const double arr[rows][cols]);
void show_result(int rows, int cols, const double arr[rows][cols]);

int main(void){
	int rows = 3;
	int cols = 5;
	double array[rows][cols];
	
	input_array(rows, cols, array);
	show_result(rows, cols, array); 
	
	return 0;
}
void input_array(int rows, int cols, double arr[rows][cols]){
	printf("Enter the array number: \n");
	for(int i = 0; i < rows; i++)
	{
		printf("Enter five double number seperate by enter: \n");
		for(int j = 0; j < cols; j++)
			scanf("%lf", &arr[i][j]);
	}
}
double col_average(int cols, const double arr[cols]){
	double col_sum = 0;
	for(int j = 0; j < cols; j++)
		col_sum += arr[j];
	return col_sum/cols;
}
double array_average(int rows, int cols, const double arr[rows][cols]){
	double sum = 0;
	for(int i = 0; i < rows; i++)
		sum += col_average(cols, arr[i]);
	return sum/rows;
}
double array_max_number(int rows, int cols, const double arr[rows][cols]){
	double max = arr[0][0];
	int index_row = 0;
	int index_col = 0;
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
			if(max < arr[i][j])
			{
				max = arr[i][j];
				index_row = i;
				index_col = j;
			}		
	} 
	return max;
}
void show_result(int rows, int cols, const double arr[rows][cols]){
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
			printf("%5g", arr[i][j]);
		printf("\n"); 
	} 
	printf("The Average of every column is: \n");
	for(int i = 0; i < rows; i++)
		printf("The %d column's average is %g.\n", i, col_average(cols, arr[i]));
	
	printf("The array's average is %g.\n", array_average(rows, cols, arr));
	printf("The max datum in the array is %g.", array_max_number(rows, cols, arr));
}
