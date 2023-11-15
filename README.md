# Unreal Engine wrapper plugin for flecs

This is a simple wrapper plugin for the [flecs entity component system](https://www.flecs.dev), in order to use the library within the [Unreal Engine](https://www.unrealengine.com) ecosystem.

Currently only tested in editor with Unreal Engine 5.3, but it should work with other versions and in builds.

Current version of flecs used is v3.2.9 (commit id [ff72706](https://github.com/SanderMertens/flecs/commit/ff72706446d9865e6563a1dc505f4f352f72be4a)).

Flecs (located in `Source/FlecsLibrary/ThirdParty/flecs`) and its logo (used in `Resources/Icon128.png`) are copyright (c) 2019 by Sander Mertens under MIT License (located at `Source/FlecsLibrary/ThirdParty/flecs/LICENSE`).

Unreal Engine is copyright (c) Epic Games, Inc. All Rights Reserved. Use of Unreal Engine is subject to the [End User License Agreement](https://www.unrealengine.com/eula).

## How to use

1. Add the plugin to your `Plugins` folder, as with any other Unreal plugin (typically, in your project folder, but you could also add to the engine itself).

1. Add the plugin as a dependency to the uproject / any uplugins that will be using flecs.

    i.e. in the `Plugins` section of your `.uproject` or `.uplugin file:`
    ```ini
    ...
    "Plugins": [
        {
            "Name": "FlecsPlugin",
            "Enabled": true
        }
    ]
    ...
    ```

1. Add the `FlecsLibrary` module as either a public or private dependency to any modules that will be using flecs.

    e.g. in the module's `.Build.cs` file:
    ```csharp
    PublicDependencyModuleNames.Add("FlecsLibrary");

    // or
    PublicDependencyModuleNames.AddRange
    (
        new string[]
        {
            "Core",
            "CoreUObject",
            "FlecsLibrary",
            // etc.
        }
    );
    ```

1. Then simply `#include "flecs.h"` wherever you wish to use flecs. From there, simply use flecs as [normal](https://www.flecs.dev/flecs/md_docs_Docs.html).