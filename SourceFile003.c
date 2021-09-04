task main()
{
	int FW = 30;
	int BW = 10;
	int ST = 0;

	while (1) {
		if (getColorReflected(S2) > 30) {
			if (getColorReflected(S3) > 30) {
				setMotorSpeed(motorB, FW);
				setMotorSpeed(motorC, FW);
			} else {
				setMotorSpeed(motorB, FW);
				setMotorSpeed(motorC, BW);
			}
		}
		else {
				if (getColorReflected(S3) > 30) {
					setMotorSpeed(motorB, BW);
					setMotorSpeed(motorC, FW);
				} else {
					setMotorSpeed(motorB, ST);
					setMotorSpeed(motorC, ST);
				}
			}
		}
	}
