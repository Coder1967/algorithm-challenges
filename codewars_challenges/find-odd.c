#include <stddef.h>
#include <stdio.h>
int odd_finder(size_t length, const int *arr, int i);
/**
 * find_odd - function to find number that appears a odd amount of times
 * in an array of integers
 * @length: number of elements in the array
 * @array: the array of integers
 * Return: the odd number
 */
int find_odd(size_t length, const int array[])
{
	int i = 0;
	return (odd_finder(length, array, i));
}
/**
 * odd_finder - recursive function to find the number
 * appearing a odd number of times
 * @length: size of the array
 * @arr: the passed aray
 * @i: an iterator
 * Return: number appearing aodd number of times to the caller
 */
int odd_finder(size_t length, const int *arr, int i)
{
	int j, count = 0;

	if (length == 1)
	{
		return (arr[i]);
	}
	for (j = 0; j < (int)length; j++)
	{
		if (arr[i] == arr[j])
		{
			count++;
		}
	}
	if (count % 2 != 0)
	{
		return (arr[i]);
	}
	return (odd_finder(length, arr, i + 1));
}
