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
	class XDF_ThermoLight
	{
		diffuse[]={0.8,0.2,0.2};
		color[]={0.8,0.2,0.2};
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
class XDF_Thermobaric
{
	class Light1
	{
		simulation="light";
		type="XDF_ThermoLight";
		position[]={0,0,0};
		intensity=0.01;
		interval=1;
		lifeTime=1;
	};
};
