#include "../include/rtv1.h"

t_ray			*initRay(t_vec *i, t_vec *j)
{
	t_ray	*ray;

	ray = (t_ray *)malloc(sizeof(t_ray));
	ray->origin = i;
	ray->direction = j;
	return (ray);
}
