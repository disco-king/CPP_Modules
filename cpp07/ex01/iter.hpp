#pragma once

template <typename T, typename F>
void iter(T *arr, int len, F func)
{
	for (int i = 0; i < len; i++)
	{
		func(arr[i]);
	}
}

// template <typename T, typename F>
// void iter(T *arr, int len, void(*func)(F))
// {
// 	for (int i = 0; i < len; i++)
// 	{
// 		func(arr[i]);
// 	}
// }

// template <typename T>
// void iter(T *arr, int len, void(*func)(int &num))
// {
// 	for (int i = 0; i < len; i++)
// 	{
// 		func(arr[i]);
// 	}
// }

template <typename T>
void doubled(T &item)
{
	item += item;
}