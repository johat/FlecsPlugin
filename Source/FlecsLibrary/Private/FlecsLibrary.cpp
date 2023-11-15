// Flecs is copyright (c) 2019 Sander Mertens, under MIT license
// Unreal wrapper plugin by Jon Hatton

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
