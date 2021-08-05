#pragma once // evita múltiplas definições

#include <iostream>
#include <sstream> // istringstream
#include <tuple>

// 7.Um número de Fibonacci é dado por f(n) = f(n-1) + f(n-2), onde f(0) = 0 e f(1) =1.
// Faça um programa em C que dadon, calcule o número de Fibonacci den.
int
exercicio7(int n)
{ int i, n, t1 = 0, t2 = 1, next;
	printf("n= ");
  scanf("%i", &n);
  
  for(i = 1; i <= n; i++){             
    next = t1 + t2;
    t1 = t2;
    t2 = next;
      
    }
 
  return 0;
}
