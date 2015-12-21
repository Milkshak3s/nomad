// Nomad.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

int displayBanner()
{
	cout << "                                   ||`-.___\n";
	cout << "                                   ||    _.>\n";
	cout << "                                   ||_.-'\n";
	cout << "               ==========================================\n";
	cout << "                `.:::::::.       `:::::::.       `:::::::.\n";
	cout << "                  \\:::::::.        :::::::.        :::::::\\ \n";
	cout << "                   L:::::::         :::::::         :::::::L\n";
	cout << "                   J::::::::        ::::::::        :::::::J\n";
	cout << "                    F:::::::        ::::::::        ::::::::L\n";
	cout << "                    |:::::::        ::::::::        ::::::::|\n";
	cout << "                    |:::::::        ::::::::        ::::::::|     .---.\n";
	cout << "                    |:::::::        ::::::::        ::::::::|    /(@  o`.\n";
	cout << "                    |:::::::       << Nomad >>      ::::::::|   |    /^^^\n";
	cout << "     __             |:::::::                        ::::::::|    \\ . \\vvv\n";
	cout << "   .'_ \\            |::::::: Portable security      ::::::::|     \\ `--'\n";
	cout << "   (( ) |           |:::::::    toolkit for mobile  ::::::::|      \\ `. \n";
	cout << "    `/ /            |:::::::       blue teams.      ::::::::|       L  \\ \n";
	cout << "    / /             |:::::::                        ::::::::|       |   \\ \n";
	cout << "   J J              |:::::::      --2600 Club--     ::::::::|       |    L\n";
	cout << "   | |              |:::::::      --   5KB   --     ::::::::|       |    |\n";
	cout << "   | |              |:::::::        ::::::::        ::::::::|       F    |\n";
	cout << "   | J\\             F:::::::        ::::::::        ::::::::F      /     |\n";
	cout << "   |  L\\           J::::::::       .::::::::       .:::::::J      /      F\n";
	cout << "   J  J `.     .   F:::::::        ::::::::        ::::::::F    .'      J\n";
	cout << "    L  \\  `.  //  /:::::::'      .::::::::'      .::::::::/   .'        F\n";
	cout << "    J   `.  `//_..---.   .---.   .---.   .---.   .---.   <---<         J\n";
	cout << "     L    `-//_=/  _  \\=/  _  \\=/  _  \\=/  _  \\=/  _  \\=/  _  \\       /\n";
	cout << "     J     /|  |  (_)  |  (_)  |  (_)  |  (_)  |  (_)  |  (_)  |     /\n";
	cout << "      \\   / |   \\     //\\     //\\     //\\     //\\     //\\     /    .'\n";
	cout << "       \\ / /     `---//  `---//  `---//  `---//  `---//  `---'   .'\n";
	cout << "________/_/_________//______//______//______//______//_________.'_________\n";
	cout << "##VHS##MT#################################################################\n\n\n";
	return 0;
}

int fixLSP()
{
	//generate current configuration via SECEDIT
	system("SECEDIT /EXPORT /CFG C:\\sec.cfg");

	//update newsec keys via Windows .ini modifiers
	LPCWSTR iniSection = L"Privilege Rights";
	LPCWSTR iniKey;
	LPWSTR iniBuffer;
	LPCWSTR iniDefault = L"Not Found";
	DWORD iniLength = 1000;
	LPCWSTR iniFile = L"C:\\sec.cfg";

	iniSection = L"System Access";
	iniKey = L"MinimumPasswordAge";
	iniBuffer = L"10";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MaximumPasswordAge";
	iniBuffer = L"90";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MinimumPasswordLength";
	iniBuffer = L"8";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"PasswordComplexity";
	iniBuffer = L"1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"PasswordHistorySize";
	iniBuffer = L"5";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"LockoutBadCount";
	iniBuffer = L"10";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"ResetLockoutCount";
	iniBuffer = L"30";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"LockoutDuration";
	iniBuffer = L"30";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"RequireLogonToChangePassword";
	iniBuffer = L"0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"ForceLogoffWhenHourExpire";
	iniBuffer = L"1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"NewAdministratorName";
	iniBuffer = L"batman";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"NewGuestName";
	iniBuffer = L"robin";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"ClearTextPasswordn";
	iniBuffer = L"0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"LSAAnonymousNameLookup";
	iniBuffer = L"0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"EnableAdminAccount";
	iniBuffer = L"0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"EnableGuestAccount";
	iniBuffer = L"0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);

	iniSection = L"Event Audit";
	iniKey = L"AuditSystemEvents";
	iniBuffer = L"3";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"AuditLogonEvents";
	iniBuffer = L"3";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"AuditObjectAccess";
	iniBuffer = L"3";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"AuditPrivilegeUse";
	iniBuffer = L"3";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"AuditPolicyChange";
	iniBuffer = L"3";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"AuditAccountManage";
	iniBuffer = L"3";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"AuditProcessTracking";
	iniBuffer = L"3";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"AuditDSAccess";
	iniBuffer = L"3";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"AuditAccountLogon";
	iniBuffer = L"3";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);

	iniSection = L"Registry Values";
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Setup\\RecoveryConsole\\SecurityLevel";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Setup\\RecoveryConsole\\SetCommand";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon\\AllocateCDRoms";
	iniBuffer = L"1,\"1\"";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon\\AllocateFloppies";
	iniBuffer = L"1,\"1\"";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon\\CachedLogonsCount";
	iniBuffer = L"1,\"10\"";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon\\ForceUnlockLogon";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon\\PasswordExpiryWarning";
	iniBuffer = L"4,5";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon\\ScRemoveOption";
	iniBuffer = L"1,\"0\"";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\ConsentPromptBehaviorAdmin";
	iniBuffer = L"4,5";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\ConsentPromptBehaviorUser";
	iniBuffer = L"4,3";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\DontDisplayLastUserName";
	iniBuffer = L"4,1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\EnableInstallerDetection";
	iniBuffer = L"4,1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\EnableLUA";
	iniBuffer = L"4,1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\EnableSecureUIAPaths";
	iniBuffer = L"4,1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\EnableUIADesktopToggle";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\EnableVirtualization";
	iniBuffer = L"4,1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\FilterAdministratorToken";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\LegalNoticeCaption";
	iniBuffer = L"1,\"\"";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\LegalNoticeText";
	iniBuffer = L"7,";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\PromptOnSecureDesktop";
	iniBuffer = L"4,1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\ScForceOption";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\ShutdownWithoutLogon";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\UndockWithoutLogon";
	iniBuffer = L"4,1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\ValidateAdminCodeSignatures";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers\\AuthenticodeEnabled";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Control\\Lsa\\AuditBaseObjects";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Control\\Lsa\\CrashOnAuditFail";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Control\\Lsa\\DisableDomainCreds";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Control\\Lsa\\EveryoneIncludesAnonymous";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Control\\Lsa\\FIPSAlgorithmPolicy\\Enabled";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Control\\Lsa\\ForceGuest";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Control\\Lsa\\FullPrivilegeAuditing";
	iniBuffer = L"3,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Control\\Lsa\\LimitBlankPasswordUse";
	iniBuffer = L"4,1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Control\\Lsa\\MSV1_0\\NTLMMinClientSec";
	iniBuffer = L"4,536870912";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Control\\Lsa\\MSV1_0\\NTLMMinServerSec";
	iniBuffer = L"4,536870912";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Control\\Lsa\\NoLMHash";
	iniBuffer = L"4,1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Control\\Lsa\\RestrictAnonymous";
	iniBuffer = L"4,1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Control\\Lsa\\RestrictAnonymousSAM";
	iniBuffer = L"4,1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Control\\Print\\Providers\\LanMan Print Services\\Servers\\AddPrinterDrivers";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Control\\Session Manager\\Kernel\\ObCaseInsensitive";
	iniBuffer = L"4,1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\ClearPageFileAtShutdown";
	iniBuffer = L"4,1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\ClearPageFileAtShutdown";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Control\\Session Manager\\ProtectionMode";
	iniBuffer = L"4,1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Control\\Session Manager\\SubSystems\\optional";
	iniBuffer = L"7,";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Services\\LanManServer\\Parameters\\AutoDisconnect";
	iniBuffer = L"4,15";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Services\\LanManServer\\Parameters\\EnableForcedLogOff";
	iniBuffer = L"4,1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Services\\LanManServer\\Parameters\\EnableSecuritySignature";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Services\\LanManServer\\Parameters\\NullSessionPipes";
	iniBuffer = L"7,";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Services\\LanManServer\\Parameters\\RequireSecuritySignature";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Services\\LanManServer\\Parameters\\RestrictNullSessAccess";
	iniBuffer = L"4,1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Services\\LanmanWorkstation\\Parameters\\EnablePlainTextPassword";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Services\\LanmanWorkstation\\Parameters\\EnableSecuritySignature";
	iniBuffer = L"4,1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Services\\LanmanWorkstation\\Parameters\\RequireSecuritySignature";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Services\\LDAP\\LDAPClientIntegrity";
	iniBuffer = L"4,1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Services\\Netlogon\\Parameters\\DisablePasswordChange";
	iniBuffer = L"4,0";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Services\\Netlogon\\Parameters\\MaximumPasswordAge";
	iniBuffer = L"4,30";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Services\\Netlogon\\Parameters\\RequireSignOrSeal";
	iniBuffer = L"4,1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Services\\Netlogon\\Parameters\\RequireStrongKey";
	iniBuffer = L"4,1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Services\\Netlogon\\Parameters\\SealSecureChannel";
	iniBuffer = L"4,1";
	WritePrivateProfileString(iniSection, iniKey, iniBuffer, iniFile);
	iniKey = L"MACHINE\\System\\CurrentControlSet\\Services\\Netlogon\\Parameters\\SignSecureChannel";
	iniBuffer = L"4,1";

	//apply updated configuration via SECEDIT, remove config file
	system("SECEDIT /CONFIGURE /DB C:\\Windows\\security\\newsec.sdb /CFG C:\\sec.cfg /AREAS SECURITYPOLICY");
	system("del C:\\sec.cfg");

	cout << "\nLSP values updated.\n";
	system("pause");
	
	return 0;
}

int testFunc()
{
	return 0;
}

int menu()
{
	displayBanner();

	int menSelect;
	cout << "1. Fix LSP\n";
	cout << "2. Test Function\n";
	cout << "3. Menu\n";
	cout << "4. Exit\n\n";
	cout << "viking# ";
	cin >> menSelect;

	if (menSelect == 1) {
		fixLSP();
		menu();
	}
	else if (menSelect == 2) {
		testFunc();
		menu();
	}
	else if (menSelect == 3) {
		menu();
	}

	return 0;
}


int main()
{
	menu();
    return 0;
}

