#ifndef FLOAT_H
#define FLOAT_H

int cut(int a,int left,int right);
int ftobit(float a);
float bittof(int a);

// a op b
float fadd(float a, float b);
float fsub(float a, float b);
float fmul(float a, float b);
float fdiv(float a, float b);

int feq(float a, float b);
int flt(float a, float b);
int fle(float a, float b);

float fsqrt(float f);
float fneg(float f);
float itof(int i);
int ftoi(float f);


#endif
