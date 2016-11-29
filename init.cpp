#include <Windows.h>

int main() {
	STARTUPINFO info = { sizeof(info) };
	PROCESS_INFORMATION procinfo;
	if(CreateProcess("INIT.BAT", "", NULL, NULL, TRUE, 0, NULL, NULL, &info, &procinfo)) {
		WaitForSingleObject(procinfo.hProcess, INFINITE);
		CloseHandle(procinfo.hProcess);
		CloseHandle(procinfo.hThread);
		return 0;
	}
	return 1;
}