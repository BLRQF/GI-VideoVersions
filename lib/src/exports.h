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
	return "CNRel_5.5.0";
}

extern "C" __declspec(dllexport)
inline const char* GetGenshinHash()
{
	return "75a76be547545544b57228f4296a8b1f";
}

extern "C" __declspec(dllexport)
inline const char* GetPipeName()
{
	return "GenshinVideoVersions";
}
