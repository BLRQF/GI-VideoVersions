#pragma once
#include <Windows.h>

extern "C" __declspec(dllexport)
inline const char* GetGenshinProcName()
{
	return "YuanShen.exe";
}

extern "C" __declspec(dllexport)
inline const char* GetGenshinVersion()
{
	return "CNRel_5.8.0";
}

extern "C" __declspec(dllexport)
inline const char* GetGenshinHash()
{
	return "7bcd828767067ffb1a964b9b728323ce";
}

extern "C" __declspec(dllexport)
inline const char* GetPipeName()
{
	return "GenshinVideoVersions";
}
