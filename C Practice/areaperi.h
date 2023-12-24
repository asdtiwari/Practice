/*periarea.h*/
#include<math.h>
#define PI (22/7.0)
#define perisquare(e) (4*e)
#define peritriangle(a,b,c) (a+b+c)
#define circumference(r) (2*PI*r)
#define semi(a,b,c) (peritriangle(a,b,c)/2.0)
#define areasquare(e) (e*e)
#define areatriangle(a,b,c) (sqrt(semi(a,b,c)*(semi(a,b,c)-a)*(semi(a,b,c)-b)*(semi(a,b,c)-c)))
#define areacircle(r) (PI*r*r)
