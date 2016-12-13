
class CfgPatches
{
	class a3_infiSTAR
	{
		requiredVersion = 0.2088;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		author[]= {"Host Chaos"};
		website[]= {"https://hostchaos.co"};
		contact[]= {"support@hostchaos.co"};
		version = 'v0245a';
		licensed = "support@hostchaos.co";
	};
};
class CfgFunctions
{
	class a3_infiSTAR
	{
		class main
		{
			file = "a3_infiSTAR";
			class preInit { preInit = 1; };
		};
	};
};