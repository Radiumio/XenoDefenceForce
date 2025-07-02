class CfgCloudlets
{
	class Default;
	class XDF_Missile3: Default
	{
		interval=0.001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=0.80000001;
		rubbing=0.5;
		size[]={1,2,2.8};
		color[]=
		{
			{0.2,0.8,1.0,0.07},
			{0.3,0.9,1.0,0.02},
			{0.4,0.9,1.0,0.0099999998},
			{0.5,0.8,1.0,0.0049999999},
			{0.6,0.9,1.0,0.003}
		};
		animationSpeed[]={5};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.2;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class XDF_Missile3Med: Default
	{
		interval=0.003;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.80000001;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=0.80000001;
		rubbing=0.5;
		size[]={1,2,2.8};
		color[]=
		{
			{0.5,0.1,0.1,0.07},
			{0.4,0.2,0.3,0.02},
			{0.3,0.3,0.2,0.0099999998},
			{0.2,0.3,0.2,0.0049999999},
			{0.5,0.2,0.3,0.003}
		};
		animationSpeed[]={5};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.2;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};

	class XDF_fae_explosion: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleFSNtieth = 16;
		particleFSIndex = 2;
		particleFSFrameCount = 80;
		particleFSLoop = 0;
		angleVar = 1;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {0,2.5,0};
		rotationVelocity = 0;
		weight = 2;
		volume = 1;
		rubbing = 0.1;
		size[] = {5,8};
		color[] =
		{
				{1,1,1,-20},
				{1,1,1,-15},
				{1,1,1,-10},
				{1,1,1,-6},
				{1,1,1,-2}
		};
		animationSpeed[] = {0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.3;
		positionVar[] = {5,6,5};
		moveVelocityVar[] = {2,2,2};
		rotationVelocityVar = 25;
		sizeVar = 2;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
		coreIntensity = 0;
		coreDistance = 0;
		damageTime = 0;
		damageType = "";
		angle = 0;
		position[] = {0,0,0};
	};

	class XDF_fae_big_explosion: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleFSNtieth = 16;
		particleFSIndex = 2;
		particleFSFrameCount = 80;
		particleFSLoop = 0;
		angleVar = 1;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {0,2.5,0};
		rotationVelocity = 0;
		weight = 2;
		volume = 1;
		rubbing = 0.1;
		size[] = {12,20};
		color[] =
		{
				{1,1,1,-20},
				{1,1,1,-15},
				{1,1,1,-10},
				{1,1,1,-6},
				{1,1,1,-2}
		};
		animationSpeed[] = {0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.3;
		positionVar[] = {5,6,5};
		moveVelocityVar[] = {2,2,2};
		rotationVelocityVar = 25;
		sizeVar = 2;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
		coreIntensity = 0;
		coreDistance = 0;
		damageTime = 0;
		damageType = "";
		angle = 0;
		position[] = {0,0,0};
	};

	class XDF_dirt_eject: Default
	{
		interval = 0.001;
		circleRadius = 20;
		circleVelocity[] = {0.8,0,0.8};
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 0;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 5;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 0;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {6,11};
		color[] =
		{
				{0.4,0.3,0.2,0.1},
				{0.4,0.3,0.2,0.07},
				{0.4,0.3,0.2,0.04},
				{0.4,0.3,0.2,0.02},
				{0.4,0.3,0.2,0.01},
				{0.4,0.3,0.2,0.001}
		};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 1.4;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {10,1,10};
		moveVelocityVar[] = {0.5,0.5,0.5};
		rotationVelocityVar = 20;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		coreIntensity = 0;
		coreDistance = 0;
		damageTime = 0;
		damageType = "";
		angle = 0;
		position[] = {0,0,0};
	};

	class XDF_dirt_big_eject: Default
	{
		interval = 0.001;
		circleRadius = 20;
		circleVelocity[] = {0.8,0,20};
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 0;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 12;
		moveVelocity[] = {0,10,0};
		rotationVelocity = 0;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {100,17};
		color[] =
		{
				{0.4,0.3,0.2,0.1},
				{0.4,0.3,0.2,0.07},
				{0.4,0.3,0.2,0.04},
				{0.4,0.3,0.2,0.02},
				{0.4,0.3,0.2,0.01},
				{0.4,0.3,0.2,0.001}
		};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 1.4;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 8;
		positionVar[] = {10,1,10};
		moveVelocityVar[] = {0.5,0.5,0.5};
		rotationVelocityVar = 20;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		coreIntensity = 0;
		coreDistance = 0;
		damageTime = 0;
		damageType = "";
		angle = 0;
		position[] = {0,0,15};
	};

	class XDF_dirt_eject2: Default
	{
		interval = 0.02;
		circleRadius = 5;
		circleVelocity[] = {1.5,1,3};
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 9;
		particleFSLoop = 0;
		angleVar = 1;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {0,15,0};
		rotationVelocity = 0;
		weight = 150;
		volume = 0.01;
		rubbing = 0;
		size[] = {2,4};
		color[] =
		{
				{0.2,0.2,0.2,1},
				{0.2,0.2,0.2,0}
		};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 8;
		randomDirectionIntensity = 8;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 4;
		positionVar[] = {0.1,0,0.1};
		moveVelocityVar[] = {2,12,2};
		rotationVelocityVar = 5;
		sizeVar = 2;
		colorVar[] = {0.1,0.1,0.1,0.1};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		coreIntensity = 0;
		coreDistance = 0;
		damageTime = 0;
		damageType = "";
		angle = 0;
		position[] = {0,0,0};
	};

	class XDF_dirt_big_eject2: Default
	{
		interval = 0.02;
		circleRadius = 5;
		circleVelocity[] = {1.5,1,3};
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 9;
		particleFSLoop = 0;
		angleVar = 1;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {0,30,0};
		rotationVelocity = 0;
		weight = 150;
		volume = 0.01;
		rubbing = 0;
		size[] = {30};
		color[] =
		{
				{0.2,0.2,0.2,1},
				{0.2,0.2,0.2,0}
		};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 8;
		randomDirectionIntensity = 8;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 4;
		positionVar[] = {0.1,0,0.1};
		moveVelocityVar[] = {2,12,2};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0.1,0.1,0.1,0.1};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		coreIntensity = 0;
		coreDistance = 0;
		damageTime = 0;
		damageType = "";
		angle = 0;
		position[] = {0,0,0};
	};

	class XDF_fae_sparks: Default
	{
		interval = 0.02;
		circleRadius = 10;
		circleVelocity[] = {8,10,5};
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 360;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 3.5;
		moveVelocity[] = {0,25,0};
		rotationVelocity = 1;
		weight = 1.05;
		volume = 1;
		rubbing = 0.17;
		size[] = {1.8,0.1,0.1,0.1,0.1,0.08,0.08,0.08,0.08,0};
		color[] =
		{
				{1,0.3,0.3,-6.5},
				{1,0.3,0.3,-6},
				{1,0.3,0.3,-5.5},
				{1,0.3,0.3,-4.5}
		};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.5;
		randomDirectionIntensity = 2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 15;
		positionVar[] = {0,0.2,0};
		moveVelocityVar[] = {0.2,1,0.2};
		rotationVelocityVar = 2;
		sizeVar = 2.1;
		colorVar[] = {0,0.15,0.15,0};
		randomDirectionPeriodVar = 0.3;
		randomDirectionIntensityVar = 0.15;
		coreIntensity = 0;
		coreDistance = 0;
		damageTime = 0;
		damageType = "";
		angle = 0;
		position[] = {0,0,0};
	};

	class XDF_fae_big_sparks: Default
	{
		interval = 0.02;
		circleRadius = 10;
		circleVelocity[] = {8,10,5};
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 360;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {0,25,0};
		rotationVelocity = 1;
		weight = 1.05;
		volume = 1;
		rubbing = 0.17;
		size[] = {1.8,0.1,0.1,0.1,0.1,0.08,0.08,0.08,0.08,0};
		color[] =
		{
				{1,0.3,0.3,-6.5},
				{1,0.3,0.3,-6},
				{1,0.3,0.3,-5.5},
				{1,0.3,0.3,-4.5}
		};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.5;
		randomDirectionIntensity = 2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 15;
		positionVar[] = {0,0.2,0};
		moveVelocityVar[] = {0.2,1,0.2};
		rotationVelocityVar = 2;
		sizeVar = 2.1;
		colorVar[] = {0,0.15,0.15,0};
		randomDirectionPeriodVar = 0.3;
		randomDirectionIntensityVar = 0.15;
		coreIntensity = 0;
		coreDistance = 0;
		damageTime = 0;
		damageType = "";
		angle = 0;
		position[] = {0,0,0};
	};

	class XDF_fae_sparks2: Default
	{
		interval = 0.01;
		circleRadius = 2;
		circleVelocity[] = {0,30,15};
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 1;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
		particleType = "Billboard";
		timerPeriod = 0.07;
		lifeTime = 8;
		moveVelocity[] = {0,5,0};
		rotationVelocity = 0;
		weight = 15;
		volume = 7.9;
		rubbing = 0.1;
		size[] = {0.5};
		color[] = {{<null><null><null><null><null><null><null>}};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 15;
		positionVar[] = {2,2,2};
		moveVelocityVar[] = {10,5,10};
		rotationVelocityVar = 20;
		sizeVar = 1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		coreIntensity = 0;
		coreDistance = 0;
		damageTime = 0;
		damageType = "";
		angle = 0;
		position[] = {0,0,0};
	};
	class Mantis_Muzzle_Sparks: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 45;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1;
		moveVelocity[] = {"3*directionLocalY","3*directionLocalY","3*directionLocalY"};
		rotationVelocity = 1;
		weight = 0.2;
		volume = 0.005;
		friction = 0.002;
		size[] = {0.06,0.08,0.15};
		color[] =
		{
				{0,0.1,1,-1},
				{0,0.2,1,-1},
				{0,0.3,1,-1},
				{0,0.4,1,-1}
		};
		emissive[] = 
		{
			0,0.4,1,-1
		};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.35;
		randomDirectionIntensity = 2.5;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1.5;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0,0,0};
		moveVelocityVar[] = {0.2,1,0.2};
		rotationVelocityVar = 6;
		sizeVar = 0.08;
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.3;
		angle = 0;
	};
	class MantisRefractUp: Default
	{
		interval = 0.1;
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 90;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {0, 0, "0.6*directionZ"};
		rotationVelocity = 0;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {0.2, 0.8, 2.6};
		sizeCoef = 1;
		color[] = {{0.6, 0.6, 0.6, 0.2}, {0.7, 0.7, 0.7, 0.2}, {0.8, 0.8, 0.8, 0.1}, {1, 1, 1, 0}};
		colorCoef[] = {1, 1, 1, 1};
		animationSpeed[] = {1.5, 0.5};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.4;
		randomDirectionIntensity = 0.09;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		lifeTimeVar = 0.3;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.1, 0.2, 0.1};
		MoveVelocityVar[] = {0.05, 0.5, 0.05};
		rotationVelocityVar = 0;
		sizeVar = 0.3;
		colorVar[] = {0, 0, 0, 0.1};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
	};
	class MantisRefractDown: MantisRefractUp
	{
		moveVelocity[] = {0, 0, "-0.6*directionZ"};
		position[] = {"positionX","positionY","positionZ"};
	};
};

class CfgLights
{
	class XDF_RocketLight
	{
		diffuse[]={0.2,0.8,1.0};
		color[]={0.2,0.8,1.0};
		ambient[]={0,0,0};
		brightness="18 * fireIntensity";
		size=1;
		intensity=25000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=1;
			hardLimitStart=100;
			hardLimitEnd=200;
		};
	};

	class XDF_Fae_Light
	{
		color[] = {1,0.357803,0.297369};
		ambient[] = {1,0.357803,0.297369};
		intensity = 150000;
		useflare = 1;
		flaresize = 500;
		flaremaxdist = 1000;
		daylight = 1;
		class Attenuation
		{
			start = 50;
			constant = 3;
			linear = 0.01;
			quadratic = 0.05;
			hardlimitStart = 1000;
			hardlimitEnd = 2000;
		};
		brightness = 100;
	};
	
	class XDF_Fae_Big_Light
	{
		color[] = {1,0.357803,0.297369};
		ambient[] = {1,0.357803,0.297369};
		intensity = 150000;
		useflare = 1;
		flaresize = 1200;
		flaremaxdist = 2000;
		daylight = 1;
		class Attenuation
		{
			start = 300;
			constant = 3;
			linear = 0.01;
			quadratic = 0.002;
			hardlimitStart = 1000;
			hardlimitEnd = 3000;
		};
		brightness = 300;
	};
};

class XDF_Missile3
{
	class Light1
	{
		simulation="light";
		type="XDF_RocketLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class Missile3
	{
		simulation="particles";
		type="XDF_Missile3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class Missile3Med
	{
		simulation="particles";
		type="XDF_Missile3Med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
};

class XDF_ThermobaricHit
{
	class XDF_Fae_Light
	{
		simulation="light";
		type="XDF_Fae_Light";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	}
	class thermohit
	{
		simulation="particles";
		type="XDF_fae_explosion";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class thermo_dust
	{
		simulation="particles";
		type="XDF_dirt_eject";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
		qualityLevel=2;
	};
	class thermo_dust2
	{
		simulation="particles";
		type="XDF_dirt_eject2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
		qualityLevel=2;
	};
	class thermo_sparks
	{
		simulation="particles";
		type="XDF_fae_sparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
		qualityLevel=2;
	};
};
class XDF_ThermobaricBigHit
{
	class XDF_Fae_Light
	{
		simulation="light";
		type="XDF_Fae_Big_Light";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	}
	class thermohit
	{
		simulation="particles";
		type="XDF_fae_big_explosion";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class thermo_dust
	{
		simulation="particles";
		type="XDF_dirt_big_eject";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
		qualityLevel=2;
	};
	class thermo_dust2
	{
		simulation="particles";
		type="XDF_dirt_big_eject2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
		qualityLevel=2;
	};
	class thermo_sparks
	{
		simulation="particles";
		type="XDF_fae_big_sparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
		qualityLevel=2;
	};
};

class XDF_Mantis_Muzzle_Sparks
{
	class MuzzleSparks1
	{
		simulation="particles";
		type="Mantis_Muzzle_Sparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=2;
	};
};

class XDF_Mantis_Shroud_Heat_Down
{
	class ShroudHeat1
	{
		simulation="particles";
		type="MantisRefractDown";
		position[]={0,0,0};
		intensity=0.2;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
};
class XDF_Mantis_Shroud_Heat_Up
{
	class ShroudHeat2
	{
		simulation="particles";
		type="MantisRefractUp";
		position[]={0,0,0};
		intensity=0.2;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
};