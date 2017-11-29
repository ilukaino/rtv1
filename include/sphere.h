#ifndef RTV1_SPHERE_H
# define RTV1_SPHERE_H

#include "rtv1.h"

typedef struct	s_sphere
{
	t_vec		center;
	double 		radius;
}				t_sphere;

void			initSphere(t_sphere *sphere, t_vec i, double r);
int 			intersectSphere(t_sphere *sphere, t_ray *ray, double *t);
#endif
