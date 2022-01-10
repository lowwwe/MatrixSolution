#include "Vector3.h"

/// <summary>
/// set x,yz equal to zero
/// </summary>
Vector3::Vector3()
{
	x = 0.0;
	y = 0.0;
	z = 0.0;
}

/// <summary>
/// set x,y,z equal to parameters
/// </summary>
/// <param name="t_x"></param>
/// <param name="t_y"></param>
/// <param name="t_z"></param>
Vector3::Vector3(double t_x, double t_y, double t_z)
{
	x = t_x;
	y = t_y;
	z = t_z;
}
