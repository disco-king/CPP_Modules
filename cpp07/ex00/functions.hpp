#pragma once

template <typename T>
void swap(T &left, T &right)
{
	T buff = left;
	left = right;
	right = buff;
}

template <typename T>
T const &min(T const &left, T const &right)
{
	return right <= left ? right : left;
}

template <typename T>
T const &max(T const &left, T const &right)
{
	return right >= left ? right : left;
}
