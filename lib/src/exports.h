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
	return "CNRel_5.7.0";
}

extern "C" __declspec(dllexport)
inline const char* GetGenshinHash()
{
	return "185577735e1f96dc2fd37cbadaaa40bb";
}

extern "C" __declspec(dllexport)
inline const char* GetPipeName()
{
	return "GenshinVideoVersions";
}
