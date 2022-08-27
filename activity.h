using namespace std;
// =================================================================
//
// File: activity.h
// Author: Sebastian Flores Lemus | A01709229
// Date: 08/27/2022
// Actividad: 1.1 - Funciones Iterativas, Recursivas y su análisis de Complejidad
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n) - linear complexity
// The complexity is O(n) since we have 1 for loop which ends 
// with the variable n, and we see how i will add itself 'i++'
// if we had another operation with i or multiple for loops then 
// the complexity would increase. A linear complexity means that
// the runtime grows almost linearly with the input size.
// =================================================================
unsigned int sumaIterativa(unsigned int n) {
    int sumaIterativaResultado = 0;

    for(int i=1; i<=n; i++){
        sumaIterativaResultado = sumaIterativaResultado + i;
    }
  
    return sumaIterativaResultado;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n) - linear complexity
// The complexity is O(n) since we are only calling the function
// 'sumaRecursiva' once and the operation is a simple substraction.
// If we call the function more than once or the operation is more 
// complex for example a division, the complexity of the alogorth 
// would be higher. A linear complexity means that
// the runtime grows almost linearly with the input size.
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
    if (n <= 1)
        return n;
    else
        return n + sumaRecursiva(n - 1);
}
// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(1) - constant
// The complexity is O(1) since we have no loops nore we are 
// using recursion to call the function.
// The runtime of this algorithm is constant, which means no matter
// the input size the runtime will be the same.
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
  int resultadoSumaDirecta = 0;
	return resultadoSumaDirecta = (n*(n+1)/2);
}

#endif /* ACTIVITY_H */
