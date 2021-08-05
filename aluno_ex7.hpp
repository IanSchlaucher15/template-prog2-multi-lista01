#pragma once // evita múltiplas definições

#include <iostream>
#include <sstream> // istringstream
#include <tuple>

// 7.Um número de Fibonacci é dado por f(n) = f(n-1) + f(n-2), onde f(0) = 0 e f(1) =1.
// Faça um programa em C que dadon, calcule o número de Fibonacci den.
int
exercicio7(int n)
{
  int x, y, i, j;
  x = 0;
  y = 1;

  if (n == 0 || n == 1)
	  return n;

  for(j = 2; j <= n, j++){
	  i = x + y;
	  x = y;
	  y = j;
	  }
  return j;
  }
