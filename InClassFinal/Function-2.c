#include<stdio.h>
#include<math.h> //อย่าลืมบรรทัดนี้
int print (const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfprintf( stdout, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

int main() {
    double x, y, z;
    double s;

    print("Enter 2 Intergers: ");
    scanf("%lf %lf", &x, &y);

    z = pow(x , y);
    s = sqrt(x);

    print("%.0f powered by %.0f is %.0f \n", x, y, z);
    print("sqrt of %.0f is %.5f", x, s);
    return 0;
}