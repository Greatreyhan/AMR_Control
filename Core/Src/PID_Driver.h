/*
 * PID_Driver.h
 *
 *  Created on: Apr 14, 2024
 *      Author: greatreyhan
 */

#ifndef SRC_PID_DRIVER_H_
#define SRC_PID_DRIVER_H_

typedef struct {

	/* Controller gains */
	float Kp;
	float Ki;
	float Kd;

	/* Derivative low-pass filter time constant */
	float tau;

	/* Output limits */
	float limMin;
	float limMax;

	/* Integrator limits */
	float limMinInt;
	float limMaxInt;

	/* Sample time (in seconds) */
	float T_sample;

	/* Controller "memory" */
	float integrator;
	float prevError;			/* Required for integrator */
	float differentiator;
	float prevMeasurement;		/* Required for differentiator */

	/* Controller output */
	float out;

} PIDController;

void  PIDController_Init(PIDController *pid);
float PIDController_Update(PIDController *pid, float setpoint, float measurement);


#endif /* SRC_PID_DRIVER_H_ */
