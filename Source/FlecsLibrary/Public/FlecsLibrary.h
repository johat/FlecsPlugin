// Flecs is copyright (c) 2019 Sander Mertens.
// Unreal wrapper plugin is copyright (c) 2023 Jon Hatton. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Modules/ModuleInterface.h"

FLECSLIBRARY_API DECLARE_LOG_CATEGORY_EXTERN(LogFlecsLibrary, Log, All);

/**
 * This module is nothing more than a "host" for flecs within Unreal's build system
 * To use flecs, simply:
 * - Add FlecsPlugin as a plugin dependency (in uproject or uplugin file)
 * - Add FlecsLibrary as a module dependency in any modules that will use flecs directly
 * - Include flecs.h in any file that wants to use it and just use flecs as normal
 */
class FLECSLIBRARY_API FFlecsLibraryModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
