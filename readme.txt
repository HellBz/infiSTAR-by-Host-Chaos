                                          |
-----Latest Release of 12/13/15-----------
=====Release by Host Chaos================|
__________________________________________|
It is very important that you read through the "infiSTAR_config.sqf".
Most people want to run this on AltisLife and forget to change the settings for AltisLife in the "infiSTAR_config.sqf".

Most checks should be set to true instead of false (in the infiSTAR_config.sqf) these are just diabled because
most users did not read the infiSTAR_config.sqf and then came to be aka "My ATM Menu is closing infiSTAR is broken"
and I had to copy paste what I have written in the infiSTAR_config.sqf EVERYTIME.

So please take your time and READ THAT FILE.

If you encounter problems, look into the infiSTAR Logs (written by the infiSTAR DLL FILES) and the server RPT log.
You may want to remove my UID from the _devs array.
Make sure to disabled and/or remove the mods default antihack if you AltisLife / Wasteland or Epoch
_______________________________________________________________________________________
IMPORTANT - DLLs:
===================
The .dll files are not essential and not part of the purchase.

You probably NEED "Visual C++ Redistributable Packages for Visual Studio 2013 - 32 Bit version"

ARMA_LOG.dll
is creating (All Logs can be found in the server .rpt file as well, if you do not want to use this dll that is fine):
A3_HACKLOG_DATE.txt
A3_SURVEILLANCELOG_DATE.txt
+[...],

ARMA_LOAD.dll
Used to check for existing updates and resolving steam names of players.
(more comming soon / so actually needed now for some of the functions)
_______________________________________________________________________________________
Installation-Guide (How to install):
=========================================================
SERVER:
01. Open the .zip file you have gotten from the store and go to "infiSTAR.de_A3\SERVER_ARMA3_FOLDER\@infiSTAR_A3\addons\a3_infiSTAR"
02. Open the "infiSTAR_config.sqf" and add your AdminUID(s), then check if the different settings are fine for you :) - do not edit the other files.
	It is the most important thing that you read carefully through the "infiSTAR_config.sqf" and set all settings correctly for your server.
	You need to set the serverCommandPassword to the serverCommandPassword you have in your servers Config.cfg
	if there is no serverCommandPassword in your Config.cfg yet, set it like:
	serverCommandPassword = "passwordhere";

03. Go one folder back to "infiSTAR.de_A3\SERVER_ARMA3_FOLDER\@infiSTAR_A3\addons" and make the folder "a3_infiSTAR" to a pbo ("a3_infiSTAR.pbo")
04. Now Move the "@infiSTAR_A3" folder on your gameserver into your "Arma3Server" folder.
05. Now go back to your "infiSTAR.de_A3\SERVER_ARMA3_FOLDER" folder (in the unpacked zip you got from me) and move the dll files you can find there into your Servers Arma3 main folder.

06. The HPP "infiSTAR_AdminMenu.hpp" and "call.fsm" you got in the zip from me "infiSTAR.de_A3\MPMission" need to be copied into your mpmission "Arma3Server\MPMissions\missionname"
07. Open the description.ext in your MPmission to add the following:
	#include "infiSTAR_AdminMenu.hpp"

08. Copy the BattleyeFilters from "infiSTAR.de_A3\YOURMOD_BattleEye_Filters" over into your Battleye folder on the Server. Be sure to copy them into the correct folder.
	If there is no fitting filters for your mod, you will have to make the mods default filters working along with infiSTAR yourself.
	I am not affiliated with Battleye in any way. Guides & help regarding BE Filters can be found here:
		Battleye Filter TXT GUIDE:
		http://www.exilemod.com/topic/74-how-to-battleye-filters-do-it-yourself/?do=findComment&comment=1077
		or https://pastebin.com/9FBdjS1u if forum thread is gone
		
		Battleye Filter Tools:
		1. BattlEye Filters are time consuming and are different if you are running a modifed version.
			Check out http://www.exilemod.com/topic/9708-battleye-filter-editor/
		2. http://bfe.marma.io/
	
09. That is it, very easy and fast done - Start up your server! :) - Default Open Menu Key is F1


Running AltisLife?
You have to to remove 

CONST(W_O_O_K_I_E_ANTI_ANTI_HAX,"false");
CONST(W_O_O_K_I_E_FUD_ANTI_ANTI_HAX,"false");
CONST(E_X_T_A_S_Y_ANTI_ANTI_HAX,"false");
CONST(E_X_T_A_S_Y_Pro_RE,"false");
CONST(E_X_T_A_S_Y_Car_RE,"false");
CONST(DO_NUKE,"false");
CONST(JxMxE_spunkveh,"false");
CONST(JxMxE_spunkveh2,"false");
CONST(JxMxE_spunkair,"false");
CONST(JJJJ_MMMM___EEEEEEE_LLYYSSTTIICCC_SHIT_RE,"false");
CONST(JJJJ_MMMM___EEEEEEE_LLYYSSTTIICCC_SHIT_RE_OLD,"false");
CONST(JJJJ_MMMM___EEEEEEE_SPAWN_VEH,"false");
CONST(JJJJ_MMMM___EEEEEEE_SPAWN_WEAPON,"false");

and these 3 lines
[] execVM "SpyGlass\fn_cmdMenuCheck.sqf";
[] execVM "SpyGlass\fn_variableCheck.sqf";
[] execVM "SpyGlass\fn_menuCheck.sqf";
from your
Arma3server\MPMissions\Altis_Life.Altis\SpyGlass\fn_initSpy.sqf
file.

In theory you could (and maybe should) completely remove spyglass, but it works just fine if those checks are removed.
infiSTAR does similar things anyways!

Running Arma 3 Epoch?
Need more help because above did not work out for you?
Here another try:
	01. Open the .zip file you have gotten from the store and go into the subfolder "SERVER_ARMA3_FOLDER"
	02. Copy & Paste the folder "@infiSTAR_A3" (and all the DLL files) into your Arma3 server folder (not in any sub folder of the Arma3 server folder)
	03. Go into "SERVER_ARMA3_FOLDER\@infiSTAR_A3\addons\a3_infiSTAR" and modify the "infiSTAR_config.sqf" to your needs.
	04. Once you are done, make a PBO file out of the "a3_infiSTAR" folder (You can use PBO Manager or similar tools) and remove the Folder after doing that (so only the pbo is left here: "@infiSTAR_A3\addons")
	05. Modify your start .bat file or server init line so it has this "-servermod=@infiSTAR_A3;"
		Example from my test-server:
		-enableHT -autoinit "-servermod=@EpochHive;@infiSTAR_A3" "-mod=@Epoch"
	06. Open the "infiSTAR_config.sqf" and add your AdminUID(s), then check if the different settings are fine for you :) - do not edit the other files.
		It is the most important thing that you read carefully through the "infiSTAR_config.sqf" and set all settings correctly for your server.
	07. Go into "@epochhive" and open "epochah.hpp"
	08. Make sure to have these settings:
		antihack_Enabled = false;
		antihack_cfgPatchesCheck = false;
	09. MPMission - the hpp file (infiSTAR_AdminMenu):
		To use the infiSTAR_AdminMenu Dialog you will need to edit your current MPMission.
		Go into your servers MPMissions folder and unpack the mission pbo file you want to run.
		Now open the "description.ext" and add (just at the very bottom should work fine) this:
		#include "infiSTAR_AdminMenu.hpp"
		Now you need to copy the "infiSTAR_AdminMenu.hpp" (and the "call.fsm") from "MPMission Addition(s)" into the MPMission (so it is right next to your "description.ext").
		Repack the mission to a pbo again.
		You have to do this, or you will not be able to open the AdminMenu..!
	10. Default Open Menu Key is F1





Good to know - Keybinds:
1. You can spectate by double clicking the name of a player in the admin menu.
2. Keybinds:
	F1 - Default AdminMenu Key
	F6 - Heal Yourself
	F7 - Heal & Repair withing 15m
	F8 - Flip CursorTarget Vehicle
	F10 - Stop Spectating
	F11 - Add Ammo for current weapon
	5 - Teleport in looking direction
	6 - Eject CursorTarget
	7 - Unlock/Lock targeted Vehicle
	7 - Opens/Closes targeted Door/Hatch/Gate
	8 - Upgrade building (Epoch).
	SHIFT & F2 - Adminconsole
	SHIFT & 4 - Fly Up
	SHIFT & TAB - Open Map
	SHIFT & I - Show Info about CursorTarget
	DELETE - Delete CursorTarget
3. If the map is opened and you hold LEFT-ALT key, you can click on the map and teleport there!
4. If you are added in the run.sqf as an admin, you are able to change from admin to a normal player and back by typing !admin in the chat.