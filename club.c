void motors(int B, int C)
{
	setMotorSpeed(motorB,B);
	setMotorSpeed(motorC,C);
}
void degree(int B, int C, int D1,int D2)
{
	resetMotorEncoder(motorB);
	resetMotorEncoder(motorC);
	setMotorTarget(motorB,D1,B);
	setMotorTarget(motorC,D2,C);
	waitUntilMotorStop(motorB);
	waitUntilMotorStop(motorC);
}

task main()
{
	int L = 0;
	int R = 0;
	while(1)
	{
		if( getColorReflected(S2) > 30 )
		{
			if( getColorReflected(S3) > 30 )
			{
				motors(35, 35);
			}
			else
			{
				motors(35,-25);
			}
		}
		else
		{
			if( getColorReflected(S3) > 30 )
			{
				motors(-25,35);
			}
			else
			{
				motors(0, 0);
				motors(-25, -25);
				while(1) {
					if (L == 1) {
						motors(35, -35);
						continue;
					} else if (R == 1) {
						motors(-35, 35);
						continue;
					} else {
					if (getColorReflected(S2) > 30) {
						L = 1;
				} else if (getColorReflected(S3) > 30) {
					R = 1;
			}
		}
	}
		}
	}
}
}
