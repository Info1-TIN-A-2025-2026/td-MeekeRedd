#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

double kmh_to_ms(double s_kmh);
double reaction_distance(double speed, double reaction_time);
double break_distance(double speed, double deceleration);
double total_stop_distance(double speed, double reaction_time, double deceleration); 
bool stop_before_obstacle(double stop_distance, double obstacle_distance);

int main(int argc, const char *argv[])
{

	double 
	printf("Enter the speed (km/h):");
	scanf("%lf", &)
	Enter the reaction time(s) : 1 Enter the deceleration(m / s / s) : 7.5 Enter the distance to the obstacle(m) : 70 Speed : 90.00 km / h = 25.00 m / s
																																							  Reaction distance : 25.00 m
																																								  Break distance : 41.67 m
																																									  Total stop distance : 66.67 m = > ✅ no collision

																																																	  double speedKm_h = 50.9;
	double speedm_s = kmh_to_ms(speedKm_h);
	double reactionTime = 1.;
	double reactionDistance = reaction_distance(speedm_s, reactionTime);
	double deceleration = 7.5;
	double breakDistance = break_distance(speedm_s, deceleration);

	printf("%lf\n", speedm_s);
	printf("distance: %lf\n", reactionDistance);
	printf("breaking distance: %lf\n", breakDistance);
	return 0;
}

double kmh_to_ms(double s_kmh)
{
	assert(s_kmh >= 0); // if negative stop the program 
	return s_kmh / 3.6;
}

double reaction_distance(double speed, double reaction_time)
{
	assert(speed >= 0);
	assert(reaction_time >= 0);
	return speed * reaction_time;
}

double break_distance(double speed, double deceleration)
{
	// D = speed^2 / 2 deceleration;
	assert(speed >= 0);
	assert(deceleration>=0);
	return (speed * speed) / (2.* deceleration);
}

double total_stop_distance(double speed, double reaction_time, double deceleration)
{
	assert(speed >= 0);
	assert(reaction_time > 0);
	assert(deceleration);

	return reaction_distance(speed, reaction_time) + break_distance(speed, deceleration);
}