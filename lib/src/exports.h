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
	return "CNRel_5.6.0";
}

extern "C" __declspec(dllexport)
inline const char* GetGenshinHash()
{
	return "5b53653dc81d796517ff070899b47639";
}

extern "C" __declspec(dllexport)
inline const char* GetPipeName()
{
	return "GenshinVideoVersions";
}
