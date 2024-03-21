/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 01:46:16 by jules             #+#    #+#             */
/*   Updated: 2024/03/21 01:58:38 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <math.h>

t_vec3	rotate_X(t_vec3 v, float angle)
{
	t_vec3	res;

	res.x = v.x;
	res.y = v.y * cosf(angle) - v.z * sinf(angle);
	res.z = v.y * sinf(angle) + v.z * cosf(angle);
	return (res);
}

t_vec3	rotate_Y(t_vec3 v, float angle)
{
	t_vec3	res;

	res.x = v.x * cosf(angle) + v.z * sinf(angle);
	res.y = v.y;
	res.z = -v.x * sinf(angle) + v.z * cosf(angle);
	return (res);
}

t_vec3	rotate_Z(t_vec3 v, float angle)
{
	t_vec3	res;

	res.x = v.x * cosf(angle) - v.y * sinf(angle);
	res.y = v.x * sinf(angle) + v.y * cosf(angle);
	res.z = v.z;
	return (res);
}
