#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
181,
186,
187,
188,
189,
190,
191,
192,
194,
195,
231,
232,
234,
262,
263,
264,
284,
285,
286,
287,
385,
386,
387,
390,
421,
422,
424,
426,
428,
430,
435,
443,
444,
445,
446,
447,
448,
449,
450,
451,
569,
572,
574,
579,
580,
582,
583,
587,
588,
590,
591,
594,
595,
596,
599,
601,
604,
606,
608,
670,
672,
674,
683,
684,
685,
687,
693,
694,
695,
696,
697,
705,
706,
707,
711,
712,
714,
716,
879,
1017,
1018,
5053,
5054,
5056,
5057,
5058,
5059,
5060,
5062,
5064,
5066,
5067,
5074,
5076,
5079,
5080,
5082,
5084,
5095,
5104,
5105,
5107,
5108,
5109,
5110,
5111,
5113,
5115,
5774,
5776,
5778,
5779,
5893,
5894,
5895,
5896,
5915,
5916,
5917,
5952,
6009,
6021,
6022,
6023,
6024,
6297,
6300,
6322,
6342,
6347,
6354,
6364,
6367,
6435,
6444,
6446,
6453,
6466,
6485,
6486,
6494,
6496,
6502,
6503,
6506,
6511,
6519,
6520,
6527,
6529,
6539,
6542,
6544,
6545,
6546,
6556,
6564,
6570,
6571,
6572,
6574,
6575,
6594,
6596,
6610,
6629,
6644,
6672,
6673,
7038,
7039,
7418,
8486,
8507,
8514,
8516,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodBodyInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_AssemblyExtensions_ApplyUpdateEnabled (int);
int ves_icall_AssemblyExtensions_GetApplyUpdateCapabilities_raw (int);
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 181,
ves_icall_System_Array_InternalCreate,
// token 186,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 187,
ves_icall_System_Array_CanChangePrimitive,
// token 188,
ves_icall_System_Array_FastCopy_raw,
// token 189,
ves_icall_System_Array_GetLength_raw,
// token 190,
ves_icall_System_Array_GetLowerBound_raw,
// token 191,
ves_icall_System_Array_GetGenericValue_icall,
// token 192,
ves_icall_System_Array_GetValueImpl_raw,
// token 194,
ves_icall_System_Array_SetValueImpl_raw,
// token 195,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 231,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 232,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 234,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 262,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 263,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 264,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 284,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 285,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 286,
ves_icall_System_Enum_InternalGetCorElementType,
// token 287,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 385,
ves_icall_System_Environment_get_ProcessorCount,
// token 386,
ves_icall_System_Environment_get_TickCount,
// token 387,
ves_icall_System_Environment_get_TickCount64,
// token 390,
ves_icall_System_Environment_FailFast_raw,
// token 421,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 422,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 424,
ves_icall_System_GC_SuppressFinalize_raw,
// token 426,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 428,
ves_icall_System_GC_GetGCMemoryInfo,
// token 430,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 435,
ves_icall_System_Object_MemberwiseClone_raw,
// token 443,
ves_icall_System_Math_Ceiling,
// token 444,
ves_icall_System_Math_Cos,
// token 445,
ves_icall_System_Math_Floor,
// token 446,
ves_icall_System_Math_Log10,
// token 447,
ves_icall_System_Math_Pow,
// token 448,
ves_icall_System_Math_Sin,
// token 449,
ves_icall_System_Math_Sqrt,
// token 450,
ves_icall_System_Math_Tan,
// token 451,
ves_icall_System_Math_ModF,
// token 569,
ves_icall_RuntimeType_make_array_type_raw,
// token 572,
ves_icall_RuntimeType_make_byref_type_raw,
// token 574,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 579,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 580,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 582,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 583,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 587,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 588,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 590,
ves_icall_System_RuntimeType_getFullName_raw,
// token 591,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 594,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 595,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 596,
ves_icall_RuntimeType_GetFields_native_raw,
// token 599,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 601,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 604,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 606,
ves_icall_RuntimeType_GetName_raw,
// token 608,
ves_icall_RuntimeType_GetNamespace_raw,
// token 670,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 672,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 674,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 683,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 684,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 685,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 687,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 693,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 694,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 695,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 696,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 697,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 705,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 706,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 707,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 711,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 712,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 714,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 716,
ves_icall_System_String_FastAllocateString_raw,
// token 879,
ves_icall_System_Type_internal_from_handle_raw,
// token 1017,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1018,
ves_icall_System_ValueType_Equals_raw,
// token 5053,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5054,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5056,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5057,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5058,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5059,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5060,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5062,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5064,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5066,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 5067,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5074,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5076,
mono_monitor_exit_icall_raw,
// token 5079,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5080,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5082,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5084,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5095,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5104,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5105,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5107,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5108,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5109,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5110,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5111,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5113,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5115,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 5774,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 5776,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 5778,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 5779,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 5893,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 5894,
ves_icall_System_GCHandle_InternalFree_raw,
// token 5895,
ves_icall_System_GCHandle_InternalGet_raw,
// token 5896,
ves_icall_System_GCHandle_InternalSet_raw,
// token 5915,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 5916,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 5917,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 5952,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6009,
mono_object_hash_icall_raw,
// token 6021,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6022,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6023,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 6024,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6297,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6300,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6322,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6342,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 6347,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 6354,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 6364,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 6367,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 6435,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 6444,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 6446,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 6453,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 6466,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 6485,
ves_icall_reflection_get_token_raw,
// token 6486,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 6494,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 6496,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 6502,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 6503,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 6506,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 6511,
ves_icall_reflection_get_token_raw,
// token 6519,
ves_icall_get_method_info_raw,
// token 6520,
ves_icall_get_method_attributes,
// token 6527,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 6529,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 6539,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodBodyInternal_raw,
// token 6542,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 6544,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 6545,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 6546,
ves_icall_reflection_get_token_raw,
// token 6556,
ves_icall_InternalInvoke_raw,
// token 6564,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 6570,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 6571,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 6572,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 6574,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 6575,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 6594,
ves_icall_InvokeClassConstructor_raw,
// token 6596,
ves_icall_InternalInvoke_raw,
// token 6610,
ves_icall_reflection_get_token_raw,
// token 6629,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 6644,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 6672,
ves_icall_reflection_get_token_raw,
// token 6673,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 7038,
ves_icall_AssemblyExtensions_ApplyUpdateEnabled,
// token 7039,
ves_icall_AssemblyExtensions_GetApplyUpdateCapabilities_raw,
// token 7418,
ves_icall_System_Diagnostics_Debugger_Log,
// token 8486,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 8507,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 8514,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 8516,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
0,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
0,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
0,
0,
0,
0,
0,
};
