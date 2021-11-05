/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 */
GetDeviceProcAddrFunc								getDeviceProcAddr;
DestroyDeviceFunc									destroyDevice;
GetDeviceQueueFunc									getDeviceQueue;
QueueSubmitFunc										queueSubmit;
QueueWaitIdleFunc									queueWaitIdle;
DeviceWaitIdleFunc									deviceWaitIdle;
AllocateMemoryFunc									allocateMemory;
FreeMemoryFunc										freeMemory;
MapMemoryFunc										mapMemory;
UnmapMemoryFunc										unmapMemory;
FlushMappedMemoryRangesFunc							flushMappedMemoryRanges;
InvalidateMappedMemoryRangesFunc					invalidateMappedMemoryRanges;
GetDeviceMemoryCommitmentFunc						getDeviceMemoryCommitment;
BindBufferMemoryFunc								bindBufferMemory;
BindImageMemoryFunc									bindImageMemory;
GetBufferMemoryRequirementsFunc						getBufferMemoryRequirements;
GetImageMemoryRequirementsFunc						getImageMemoryRequirements;
GetImageSparseMemoryRequirementsFunc				getImageSparseMemoryRequirements;
QueueBindSparseFunc									queueBindSparse;
CreateFenceFunc										createFence;
DestroyFenceFunc									destroyFence;
ResetFencesFunc										resetFences;
GetFenceStatusFunc									getFenceStatus;
WaitForFencesFunc									waitForFences;
CreateSemaphoreFunc									createSemaphore;
DestroySemaphoreFunc								destroySemaphore;
CreateEventFunc										createEvent;
DestroyEventFunc									destroyEvent;
GetEventStatusFunc									getEventStatus;
SetEventFunc										setEvent;
ResetEventFunc										resetEvent;
CreateQueryPoolFunc									createQueryPool;
DestroyQueryPoolFunc								destroyQueryPool;
GetQueryPoolResultsFunc								getQueryPoolResults;
CreateBufferFunc									createBuffer;
DestroyBufferFunc									destroyBuffer;
CreateBufferViewFunc								createBufferView;
DestroyBufferViewFunc								destroyBufferView;
CreateImageFunc										createImage;
DestroyImageFunc									destroyImage;
GetImageSubresourceLayoutFunc						getImageSubresourceLayout;
CreateImageViewFunc									createImageView;
DestroyImageViewFunc								destroyImageView;
CreateShaderModuleFunc								createShaderModule;
DestroyShaderModuleFunc								destroyShaderModule;
CreatePipelineCacheFunc								createPipelineCache;
DestroyPipelineCacheFunc							destroyPipelineCache;
GetPipelineCacheDataFunc							getPipelineCacheData;
MergePipelineCachesFunc								mergePipelineCaches;
CreateGraphicsPipelinesFunc							createGraphicsPipelines;
CreateComputePipelinesFunc							createComputePipelines;
DestroyPipelineFunc									destroyPipeline;
CreatePipelineLayoutFunc							createPipelineLayout;
DestroyPipelineLayoutFunc							destroyPipelineLayout;
CreateSamplerFunc									createSampler;
DestroySamplerFunc									destroySampler;
CreateDescriptorSetLayoutFunc						createDescriptorSetLayout;
DestroyDescriptorSetLayoutFunc						destroyDescriptorSetLayout;
CreateDescriptorPoolFunc							createDescriptorPool;
DestroyDescriptorPoolFunc							destroyDescriptorPool;
ResetDescriptorPoolFunc								resetDescriptorPool;
AllocateDescriptorSetsFunc							allocateDescriptorSets;
FreeDescriptorSetsFunc								freeDescriptorSets;
UpdateDescriptorSetsFunc							updateDescriptorSets;
CreateFramebufferFunc								createFramebuffer;
DestroyFramebufferFunc								destroyFramebuffer;
CreateRenderPassFunc								createRenderPass;
DestroyRenderPassFunc								destroyRenderPass;
GetRenderAreaGranularityFunc						getRenderAreaGranularity;
CreateCommandPoolFunc								createCommandPool;
DestroyCommandPoolFunc								destroyCommandPool;
ResetCommandPoolFunc								resetCommandPool;
AllocateCommandBuffersFunc							allocateCommandBuffers;
FreeCommandBuffersFunc								freeCommandBuffers;
BeginCommandBufferFunc								beginCommandBuffer;
EndCommandBufferFunc								endCommandBuffer;
ResetCommandBufferFunc								resetCommandBuffer;
CmdBindPipelineFunc									cmdBindPipeline;
CmdSetViewportFunc									cmdSetViewport;
CmdSetScissorFunc									cmdSetScissor;
CmdSetLineWidthFunc									cmdSetLineWidth;
CmdSetDepthBiasFunc									cmdSetDepthBias;
CmdSetBlendConstantsFunc							cmdSetBlendConstants;
CmdSetDepthBoundsFunc								cmdSetDepthBounds;
CmdSetStencilCompareMaskFunc						cmdSetStencilCompareMask;
CmdSetStencilWriteMaskFunc							cmdSetStencilWriteMask;
CmdSetStencilReferenceFunc							cmdSetStencilReference;
CmdBindDescriptorSetsFunc							cmdBindDescriptorSets;
CmdBindIndexBufferFunc								cmdBindIndexBuffer;
CmdBindVertexBuffersFunc							cmdBindVertexBuffers;
CmdDrawFunc											cmdDraw;
CmdDrawIndexedFunc									cmdDrawIndexed;
CmdDrawIndirectFunc									cmdDrawIndirect;
CmdDrawIndexedIndirectFunc							cmdDrawIndexedIndirect;
CmdDispatchFunc										cmdDispatch;
CmdDispatchIndirectFunc								cmdDispatchIndirect;
CmdCopyBufferFunc									cmdCopyBuffer;
CmdCopyImageFunc									cmdCopyImage;
CmdBlitImageFunc									cmdBlitImage;
CmdCopyBufferToImageFunc							cmdCopyBufferToImage;
CmdCopyImageToBufferFunc							cmdCopyImageToBuffer;
CmdUpdateBufferFunc									cmdUpdateBuffer;
CmdFillBufferFunc									cmdFillBuffer;
CmdClearColorImageFunc								cmdClearColorImage;
CmdClearDepthStencilImageFunc						cmdClearDepthStencilImage;
CmdClearAttachmentsFunc								cmdClearAttachments;
CmdResolveImageFunc									cmdResolveImage;
CmdSetEventFunc										cmdSetEvent;
CmdResetEventFunc									cmdResetEvent;
CmdWaitEventsFunc									cmdWaitEvents;
CmdPipelineBarrierFunc								cmdPipelineBarrier;
CmdBeginQueryFunc									cmdBeginQuery;
CmdEndQueryFunc										cmdEndQuery;
CmdResetQueryPoolFunc								cmdResetQueryPool;
CmdWriteTimestampFunc								cmdWriteTimestamp;
CmdCopyQueryPoolResultsFunc							cmdCopyQueryPoolResults;
CmdPushConstantsFunc								cmdPushConstants;
CmdBeginRenderPassFunc								cmdBeginRenderPass;
CmdNextSubpassFunc									cmdNextSubpass;
CmdEndRenderPassFunc								cmdEndRenderPass;
CmdExecuteCommandsFunc								cmdExecuteCommands;
BindBufferMemory2Func								bindBufferMemory2;
BindImageMemory2Func								bindImageMemory2;
GetDeviceGroupPeerMemoryFeaturesFunc				getDeviceGroupPeerMemoryFeatures;
CmdSetDeviceMaskFunc								cmdSetDeviceMask;
CmdDispatchBaseFunc									cmdDispatchBase;
GetImageMemoryRequirements2Func						getImageMemoryRequirements2;
GetBufferMemoryRequirements2Func					getBufferMemoryRequirements2;
GetImageSparseMemoryRequirements2Func				getImageSparseMemoryRequirements2;
TrimCommandPoolFunc									trimCommandPool;
GetDeviceQueue2Func									getDeviceQueue2;
CreateSamplerYcbcrConversionFunc					createSamplerYcbcrConversion;
DestroySamplerYcbcrConversionFunc					destroySamplerYcbcrConversion;
CreateDescriptorUpdateTemplateFunc					createDescriptorUpdateTemplate;
DestroyDescriptorUpdateTemplateFunc					destroyDescriptorUpdateTemplate;
UpdateDescriptorSetWithTemplateFunc					updateDescriptorSetWithTemplate;
GetDescriptorSetLayoutSupportFunc					getDescriptorSetLayoutSupport;
CmdDrawIndirectCountFunc							cmdDrawIndirectCount;
CmdDrawIndexedIndirectCountFunc						cmdDrawIndexedIndirectCount;
CreateRenderPass2Func								createRenderPass2;
CmdBeginRenderPass2Func								cmdBeginRenderPass2;
CmdNextSubpass2Func									cmdNextSubpass2;
CmdEndRenderPass2Func								cmdEndRenderPass2;
ResetQueryPoolFunc									resetQueryPool;
GetSemaphoreCounterValueFunc						getSemaphoreCounterValue;
WaitSemaphoresFunc									waitSemaphores;
SignalSemaphoreFunc									signalSemaphore;
GetBufferDeviceAddressFunc							getBufferDeviceAddress;
GetBufferOpaqueCaptureAddressFunc					getBufferOpaqueCaptureAddress;
GetDeviceMemoryOpaqueCaptureAddressFunc				getDeviceMemoryOpaqueCaptureAddress;
CreateSwapchainKHRFunc								createSwapchainKHR;
DestroySwapchainKHRFunc								destroySwapchainKHR;
GetSwapchainImagesKHRFunc							getSwapchainImagesKHR;
AcquireNextImageKHRFunc								acquireNextImageKHR;
QueuePresentKHRFunc									queuePresentKHR;
GetDeviceGroupPresentCapabilitiesKHRFunc			getDeviceGroupPresentCapabilitiesKHR;
GetDeviceGroupSurfacePresentModesKHRFunc			getDeviceGroupSurfacePresentModesKHR;
AcquireNextImage2KHRFunc							acquireNextImage2KHR;
CreateSharedSwapchainsKHRFunc						createSharedSwapchainsKHR;
CmdBeginRenderingKHRFunc							cmdBeginRenderingKHR;
CmdEndRenderingKHRFunc								cmdEndRenderingKHR;
GetMemoryFdKHRFunc									getMemoryFdKHR;
GetMemoryFdPropertiesKHRFunc						getMemoryFdPropertiesKHR;
ImportSemaphoreFdKHRFunc							importSemaphoreFdKHR;
GetSemaphoreFdKHRFunc								getSemaphoreFdKHR;
CmdPushDescriptorSetKHRFunc							cmdPushDescriptorSetKHR;
CmdPushDescriptorSetWithTemplateKHRFunc				cmdPushDescriptorSetWithTemplateKHR;
GetSwapchainStatusKHRFunc							getSwapchainStatusKHR;
ImportFenceFdKHRFunc								importFenceFdKHR;
GetFenceFdKHRFunc									getFenceFdKHR;
AcquireProfilingLockKHRFunc							acquireProfilingLockKHR;
ReleaseProfilingLockKHRFunc							releaseProfilingLockKHR;
CmdSetFragmentShadingRateKHRFunc					cmdSetFragmentShadingRateKHR;
WaitForPresentKHRFunc								waitForPresentKHR;
CreateDeferredOperationKHRFunc						createDeferredOperationKHR;
DestroyDeferredOperationKHRFunc						destroyDeferredOperationKHR;
GetDeferredOperationMaxConcurrencyKHRFunc			getDeferredOperationMaxConcurrencyKHR;
GetDeferredOperationResultKHRFunc					getDeferredOperationResultKHR;
DeferredOperationJoinKHRFunc						deferredOperationJoinKHR;
GetPipelineExecutablePropertiesKHRFunc				getPipelineExecutablePropertiesKHR;
GetPipelineExecutableStatisticsKHRFunc				getPipelineExecutableStatisticsKHR;
GetPipelineExecutableInternalRepresentationsKHRFunc	getPipelineExecutableInternalRepresentationsKHR;
CmdSetEvent2KHRFunc									cmdSetEvent2KHR;
CmdResetEvent2KHRFunc								cmdResetEvent2KHR;
CmdWaitEvents2KHRFunc								cmdWaitEvents2KHR;
CmdPipelineBarrier2KHRFunc							cmdPipelineBarrier2KHR;
CmdWriteTimestamp2KHRFunc							cmdWriteTimestamp2KHR;
QueueSubmit2KHRFunc									queueSubmit2KHR;
CmdWriteBufferMarker2AMDFunc						cmdWriteBufferMarker2AMD;
GetQueueCheckpointData2NVFunc						getQueueCheckpointData2NV;
CmdCopyBuffer2KHRFunc								cmdCopyBuffer2KHR;
CmdCopyImage2KHRFunc								cmdCopyImage2KHR;
CmdCopyBufferToImage2KHRFunc						cmdCopyBufferToImage2KHR;
CmdCopyImageToBuffer2KHRFunc						cmdCopyImageToBuffer2KHR;
CmdBlitImage2KHRFunc								cmdBlitImage2KHR;
CmdResolveImage2KHRFunc								cmdResolveImage2KHR;
GetDeviceBufferMemoryRequirementsKHRFunc			getDeviceBufferMemoryRequirementsKHR;
GetDeviceImageMemoryRequirementsKHRFunc				getDeviceImageMemoryRequirementsKHR;
GetDeviceImageSparseMemoryRequirementsKHRFunc		getDeviceImageSparseMemoryRequirementsKHR;
DebugMarkerSetObjectTagEXTFunc						debugMarkerSetObjectTagEXT;
DebugMarkerSetObjectNameEXTFunc						debugMarkerSetObjectNameEXT;
CmdDebugMarkerBeginEXTFunc							cmdDebugMarkerBeginEXT;
CmdDebugMarkerEndEXTFunc							cmdDebugMarkerEndEXT;
CmdDebugMarkerInsertEXTFunc							cmdDebugMarkerInsertEXT;
CmdBindTransformFeedbackBuffersEXTFunc				cmdBindTransformFeedbackBuffersEXT;
CmdBeginTransformFeedbackEXTFunc					cmdBeginTransformFeedbackEXT;
CmdEndTransformFeedbackEXTFunc						cmdEndTransformFeedbackEXT;
CmdBeginQueryIndexedEXTFunc							cmdBeginQueryIndexedEXT;
CmdEndQueryIndexedEXTFunc							cmdEndQueryIndexedEXT;
CmdDrawIndirectByteCountEXTFunc						cmdDrawIndirectByteCountEXT;
CreateCuModuleNVXFunc								createCuModuleNVX;
CreateCuFunctionNVXFunc								createCuFunctionNVX;
DestroyCuModuleNVXFunc								destroyCuModuleNVX;
DestroyCuFunctionNVXFunc							destroyCuFunctionNVX;
CmdCuLaunchKernelNVXFunc							cmdCuLaunchKernelNVX;
GetImageViewHandleNVXFunc							getImageViewHandleNVX;
GetImageViewAddressNVXFunc							getImageViewAddressNVX;
CmdDrawIndirectCountAMDFunc							cmdDrawIndirectCountAMD;
CmdDrawIndexedIndirectCountAMDFunc					cmdDrawIndexedIndirectCountAMD;
GetShaderInfoAMDFunc								getShaderInfoAMD;
CmdBeginConditionalRenderingEXTFunc					cmdBeginConditionalRenderingEXT;
CmdEndConditionalRenderingEXTFunc					cmdEndConditionalRenderingEXT;
CmdSetViewportWScalingNVFunc						cmdSetViewportWScalingNV;
DisplayPowerControlEXTFunc							displayPowerControlEXT;
RegisterDeviceEventEXTFunc							registerDeviceEventEXT;
RegisterDisplayEventEXTFunc							registerDisplayEventEXT;
GetSwapchainCounterEXTFunc							getSwapchainCounterEXT;
GetRefreshCycleDurationGOOGLEFunc					getRefreshCycleDurationGOOGLE;
GetPastPresentationTimingGOOGLEFunc					getPastPresentationTimingGOOGLE;
CmdSetDiscardRectangleEXTFunc						cmdSetDiscardRectangleEXT;
SetHdrMetadataEXTFunc								setHdrMetadataEXT;
SetDebugUtilsObjectNameEXTFunc						setDebugUtilsObjectNameEXT;
SetDebugUtilsObjectTagEXTFunc						setDebugUtilsObjectTagEXT;
QueueBeginDebugUtilsLabelEXTFunc					queueBeginDebugUtilsLabelEXT;
QueueEndDebugUtilsLabelEXTFunc						queueEndDebugUtilsLabelEXT;
QueueInsertDebugUtilsLabelEXTFunc					queueInsertDebugUtilsLabelEXT;
CmdBeginDebugUtilsLabelEXTFunc						cmdBeginDebugUtilsLabelEXT;
CmdEndDebugUtilsLabelEXTFunc						cmdEndDebugUtilsLabelEXT;
CmdInsertDebugUtilsLabelEXTFunc						cmdInsertDebugUtilsLabelEXT;
CmdSetSampleLocationsEXTFunc						cmdSetSampleLocationsEXT;
GetImageDrmFormatModifierPropertiesEXTFunc			getImageDrmFormatModifierPropertiesEXT;
CreateValidationCacheEXTFunc						createValidationCacheEXT;
DestroyValidationCacheEXTFunc						destroyValidationCacheEXT;
MergeValidationCachesEXTFunc						mergeValidationCachesEXT;
GetValidationCacheDataEXTFunc						getValidationCacheDataEXT;
CmdBindShadingRateImageNVFunc						cmdBindShadingRateImageNV;
CmdSetViewportShadingRatePaletteNVFunc				cmdSetViewportShadingRatePaletteNV;
CmdSetCoarseSampleOrderNVFunc						cmdSetCoarseSampleOrderNV;
CreateAccelerationStructureNVFunc					createAccelerationStructureNV;
DestroyAccelerationStructureNVFunc					destroyAccelerationStructureNV;
GetAccelerationStructureMemoryRequirementsNVFunc	getAccelerationStructureMemoryRequirementsNV;
BindAccelerationStructureMemoryNVFunc				bindAccelerationStructureMemoryNV;
CmdBuildAccelerationStructureNVFunc					cmdBuildAccelerationStructureNV;
CmdCopyAccelerationStructureNVFunc					cmdCopyAccelerationStructureNV;
CmdTraceRaysNVFunc									cmdTraceRaysNV;
CreateRayTracingPipelinesNVFunc						createRayTracingPipelinesNV;
GetRayTracingShaderGroupHandlesKHRFunc				getRayTracingShaderGroupHandlesKHR;
GetRayTracingShaderGroupHandlesNVFunc				getRayTracingShaderGroupHandlesNV;
GetAccelerationStructureHandleNVFunc				getAccelerationStructureHandleNV;
CmdWriteAccelerationStructuresPropertiesNVFunc		cmdWriteAccelerationStructuresPropertiesNV;
CompileDeferredNVFunc								compileDeferredNV;
GetMemoryHostPointerPropertiesEXTFunc				getMemoryHostPointerPropertiesEXT;
CmdWriteBufferMarkerAMDFunc							cmdWriteBufferMarkerAMD;
GetCalibratedTimestampsEXTFunc						getCalibratedTimestampsEXT;
CmdDrawMeshTasksNVFunc								cmdDrawMeshTasksNV;
CmdDrawMeshTasksIndirectNVFunc						cmdDrawMeshTasksIndirectNV;
CmdDrawMeshTasksIndirectCountNVFunc					cmdDrawMeshTasksIndirectCountNV;
CmdSetExclusiveScissorNVFunc						cmdSetExclusiveScissorNV;
CmdSetCheckpointNVFunc								cmdSetCheckpointNV;
GetQueueCheckpointDataNVFunc						getQueueCheckpointDataNV;
InitializePerformanceApiINTELFunc					initializePerformanceApiINTEL;
UninitializePerformanceApiINTELFunc					uninitializePerformanceApiINTEL;
CmdSetPerformanceMarkerINTELFunc					cmdSetPerformanceMarkerINTEL;
CmdSetPerformanceStreamMarkerINTELFunc				cmdSetPerformanceStreamMarkerINTEL;
CmdSetPerformanceOverrideINTELFunc					cmdSetPerformanceOverrideINTEL;
AcquirePerformanceConfigurationINTELFunc			acquirePerformanceConfigurationINTEL;
ReleasePerformanceConfigurationINTELFunc			releasePerformanceConfigurationINTEL;
QueueSetPerformanceConfigurationINTELFunc			queueSetPerformanceConfigurationINTEL;
GetPerformanceParameterINTELFunc					getPerformanceParameterINTEL;
SetLocalDimmingAMDFunc								setLocalDimmingAMD;
GetBufferDeviceAddressEXTFunc						getBufferDeviceAddressEXT;
CmdSetLineStippleEXTFunc							cmdSetLineStippleEXT;
CmdSetCullModeEXTFunc								cmdSetCullModeEXT;
CmdSetFrontFaceEXTFunc								cmdSetFrontFaceEXT;
CmdSetPrimitiveTopologyEXTFunc						cmdSetPrimitiveTopologyEXT;
CmdSetViewportWithCountEXTFunc						cmdSetViewportWithCountEXT;
CmdSetScissorWithCountEXTFunc						cmdSetScissorWithCountEXT;
CmdBindVertexBuffers2EXTFunc						cmdBindVertexBuffers2EXT;
CmdSetDepthTestEnableEXTFunc						cmdSetDepthTestEnableEXT;
CmdSetDepthWriteEnableEXTFunc						cmdSetDepthWriteEnableEXT;
CmdSetDepthCompareOpEXTFunc							cmdSetDepthCompareOpEXT;
CmdSetDepthBoundsTestEnableEXTFunc					cmdSetDepthBoundsTestEnableEXT;
CmdSetStencilTestEnableEXTFunc						cmdSetStencilTestEnableEXT;
CmdSetStencilOpEXTFunc								cmdSetStencilOpEXT;
GetGeneratedCommandsMemoryRequirementsNVFunc		getGeneratedCommandsMemoryRequirementsNV;
CmdPreprocessGeneratedCommandsNVFunc				cmdPreprocessGeneratedCommandsNV;
CmdExecuteGeneratedCommandsNVFunc					cmdExecuteGeneratedCommandsNV;
CmdBindPipelineShaderGroupNVFunc					cmdBindPipelineShaderGroupNV;
CreateIndirectCommandsLayoutNVFunc					createIndirectCommandsLayoutNV;
DestroyIndirectCommandsLayoutNVFunc					destroyIndirectCommandsLayoutNV;
CreatePrivateDataSlotEXTFunc						createPrivateDataSlotEXT;
DestroyPrivateDataSlotEXTFunc						destroyPrivateDataSlotEXT;
SetPrivateDataEXTFunc								setPrivateDataEXT;
GetPrivateDataEXTFunc								getPrivateDataEXT;
CmdSetFragmentShadingRateEnumNVFunc					cmdSetFragmentShadingRateEnumNV;
CmdSetVertexInputEXTFunc							cmdSetVertexInputEXT;
GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEIFunc	getDeviceSubpassShadingMaxWorkgroupSizeHUAWEI;
CmdSubpassShadingHUAWEIFunc							cmdSubpassShadingHUAWEI;
CmdBindInvocationMaskHUAWEIFunc						cmdBindInvocationMaskHUAWEI;
GetMemoryRemoteAddressNVFunc						getMemoryRemoteAddressNV;
CmdSetPatchControlPointsEXTFunc						cmdSetPatchControlPointsEXT;
CmdSetRasterizerDiscardEnableEXTFunc				cmdSetRasterizerDiscardEnableEXT;
CmdSetDepthBiasEnableEXTFunc						cmdSetDepthBiasEnableEXT;
CmdSetLogicOpEXTFunc								cmdSetLogicOpEXT;
CmdSetPrimitiveRestartEnableEXTFunc					cmdSetPrimitiveRestartEnableEXT;
CmdSetColorWriteEnableEXTFunc						cmdSetColorWriteEnableEXT;
CmdDrawMultiEXTFunc									cmdDrawMultiEXT;
CmdDrawMultiIndexedEXTFunc							cmdDrawMultiIndexedEXT;
SetDeviceMemoryPriorityEXTFunc						setDeviceMemoryPriorityEXT;
CreateAccelerationStructureKHRFunc					createAccelerationStructureKHR;
DestroyAccelerationStructureKHRFunc					destroyAccelerationStructureKHR;
CmdBuildAccelerationStructuresKHRFunc				cmdBuildAccelerationStructuresKHR;
CmdBuildAccelerationStructuresIndirectKHRFunc		cmdBuildAccelerationStructuresIndirectKHR;
BuildAccelerationStructuresKHRFunc					buildAccelerationStructuresKHR;
CopyAccelerationStructureKHRFunc					copyAccelerationStructureKHR;
CopyAccelerationStructureToMemoryKHRFunc			copyAccelerationStructureToMemoryKHR;
CopyMemoryToAccelerationStructureKHRFunc			copyMemoryToAccelerationStructureKHR;
WriteAccelerationStructuresPropertiesKHRFunc		writeAccelerationStructuresPropertiesKHR;
CmdCopyAccelerationStructureKHRFunc					cmdCopyAccelerationStructureKHR;
CmdCopyAccelerationStructureToMemoryKHRFunc			cmdCopyAccelerationStructureToMemoryKHR;
CmdCopyMemoryToAccelerationStructureKHRFunc			cmdCopyMemoryToAccelerationStructureKHR;
GetAccelerationStructureDeviceAddressKHRFunc		getAccelerationStructureDeviceAddressKHR;
CmdWriteAccelerationStructuresPropertiesKHRFunc		cmdWriteAccelerationStructuresPropertiesKHR;
GetDeviceAccelerationStructureCompatibilityKHRFunc	getDeviceAccelerationStructureCompatibilityKHR;
GetAccelerationStructureBuildSizesKHRFunc			getAccelerationStructureBuildSizesKHR;
CmdTraceRaysKHRFunc									cmdTraceRaysKHR;
CreateRayTracingPipelinesKHRFunc					createRayTracingPipelinesKHR;
GetRayTracingCaptureReplayShaderGroupHandlesKHRFunc	getRayTracingCaptureReplayShaderGroupHandlesKHR;
CmdTraceRaysIndirectKHRFunc							cmdTraceRaysIndirectKHR;
GetRayTracingShaderGroupStackSizeKHRFunc			getRayTracingShaderGroupStackSizeKHR;
CmdSetRayTracingPipelineStackSizeKHRFunc			cmdSetRayTracingPipelineStackSizeKHR;
GetAndroidHardwareBufferPropertiesANDROIDFunc		getAndroidHardwareBufferPropertiesANDROID;
GetMemoryAndroidHardwareBufferANDROIDFunc			getMemoryAndroidHardwareBufferANDROID;
CreateVideoSessionKHRFunc							createVideoSessionKHR;
DestroyVideoSessionKHRFunc							destroyVideoSessionKHR;
GetVideoSessionMemoryRequirementsKHRFunc			getVideoSessionMemoryRequirementsKHR;
BindVideoSessionMemoryKHRFunc						bindVideoSessionMemoryKHR;
CreateVideoSessionParametersKHRFunc					createVideoSessionParametersKHR;
UpdateVideoSessionParametersKHRFunc					updateVideoSessionParametersKHR;
DestroyVideoSessionParametersKHRFunc				destroyVideoSessionParametersKHR;
CmdBeginVideoCodingKHRFunc							cmdBeginVideoCodingKHR;
CmdEndVideoCodingKHRFunc							cmdEndVideoCodingKHR;
CmdControlVideoCodingKHRFunc						cmdControlVideoCodingKHR;
CmdDecodeVideoKHRFunc								cmdDecodeVideoKHR;
CmdEncodeVideoKHRFunc								cmdEncodeVideoKHR;
GetMemoryZirconHandleFUCHSIAFunc					getMemoryZirconHandleFUCHSIA;
GetMemoryZirconHandlePropertiesFUCHSIAFunc			getMemoryZirconHandlePropertiesFUCHSIA;
ImportSemaphoreZirconHandleFUCHSIAFunc				importSemaphoreZirconHandleFUCHSIA;
GetSemaphoreZirconHandleFUCHSIAFunc					getSemaphoreZirconHandleFUCHSIA;
GetMemoryWin32HandleKHRFunc							getMemoryWin32HandleKHR;
GetMemoryWin32HandlePropertiesKHRFunc				getMemoryWin32HandlePropertiesKHR;
ImportSemaphoreWin32HandleKHRFunc					importSemaphoreWin32HandleKHR;
GetSemaphoreWin32HandleKHRFunc						getSemaphoreWin32HandleKHR;
ImportFenceWin32HandleKHRFunc						importFenceWin32HandleKHR;
GetFenceWin32HandleKHRFunc							getFenceWin32HandleKHR;
GetMemoryWin32HandleNVFunc							getMemoryWin32HandleNV;
AcquireFullScreenExclusiveModeEXTFunc				acquireFullScreenExclusiveModeEXT;
ReleaseFullScreenExclusiveModeEXTFunc				releaseFullScreenExclusiveModeEXT;
GetDeviceGroupSurfacePresentModes2EXTFunc			getDeviceGroupSurfacePresentModes2EXT;
