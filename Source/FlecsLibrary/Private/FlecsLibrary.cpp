// Flecs is copyright (c) 2019 Sander Mertens.
// Unreal wrapper plugin is copyright (c) 2023 Jon Hatton. All Rights Reserved.

#include "FlecsLibrary.h"

IMPLEMENT_MODULE(FFlecsLibraryModule, FlecsLibrary);

DEFINE_LOG_CATEGORY(LogFlecsLibrary);

#define LOCTEXT_NAMESPACE "FFlecsLibraryModule"

void FFlecsLibraryModule::StartupModule()
{
}

void FFlecsLibraryModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
