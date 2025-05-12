#ifndef DO_APP_FUNC
#define DO_APP_FUNC(offset, return_type, name, params)
#endif
#ifndef DO_STATIC_VAR
#define DO_STATIC_VAR(offset, type, name)
#endif
#ifndef DO_STATIC_REF
#define DO_STATIC_REF(offset, type, name)
#endif

DO_APP_FUNC(0x412B60, Il2CppArray*, il2cpp_array_new, (Il2CppClass* elementTypeInfo, il2cpp_array_size_t length));
DO_APP_FUNC(0x483240, void, il2cpp_runtime_class_init, (Il2CppClass* klass));

DO_APP_FUNC(0xFBA6AC0, System_Text_Encoding*, System_Text_Encoding_get_Default, ());
DO_APP_FUNC(0xFBA75D0, Il2CppArray*, System_Text_Encoding_GetBytes, (System_Text_Encoding* __this, Il2CppString* s));

DO_APP_FUNC(0x102D9FD0, UnityEngine_AssetBundle*, UnityEngine_AssetBundle_LoadFromFile, (Il2CppString* path, uint32_t crc, uint64_t offset, UnityEngine_ArchiveFileFormat format));
DO_APP_FUNC(0x102DA200, void, UnityEngine_AssetBundle_Unload, (UnityEngine_AssetBundle* __this, bool unloadAllLoadedObjects));
DO_APP_FUNC(0x1030A640, int, UnityEngine_MiHoYoBinData_BinFileLengthInBundleByHash, (UnityEngine_AssetBundle* bundle, int path));
DO_APP_FUNC(0x1030A650, int, UnityEngine_MiHoYoBinData_ReadBinFileInBundleByHash, (UnityEngine_AssetBundle* bundle, int path, Il2CppArray* datas, int offset));

DO_APP_FUNC(0xFD28490, Il2CppString*, Newtonsoft_Json_JsonConvert_SerializeObject, (Il2CppObject* value, Newtonsoft_Json_Formatting formatting));

DO_STATIC_VAR(0x3F76BC8, Il2CppObject**, s_StaticFieldReferences);
DO_STATIC_VAR(0x445BE50, Il2CppClass*, System_Byte__Class);
DO_STATIC_VAR(0x3FA9E20, Il2CppClass*, MoleMole_VideoVersions__Class);

DO_STATIC_REF(0xD2B8, Il2CppObject*, MoleMole_VideoVersions__tagKeys);
DO_STATIC_REF(0xD2C0, Il2CppString*, MoleMole_VideoVersions_VersionBlkPath);
