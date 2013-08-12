This repository contains the source code of Playing in the Dark Top Speed 3.0.4. 
You need the following to get at least any further.
* Microsoft Visual Studio 2008+: Successfully built with VS 2008 Pro. You might be able to build using an express version
* DirectX SDK august 2007: At least one which contains direct play support. The include and Lib folders need to be in the folder vs_projects/dxsdk
* LibOGG, LibVorbis and LibVorbisStatic libraries available from vorbis.com: I think we used libogg-1.2.0 and libvorbis-1.3.1, not sure whether newer versions work. Both libraries contain include folders, ogg and vorbis respectively. These need to be in the root of vs_projects, f.e. vs_projects/ogg

Steps to build:
1. Make sure you decide between debug or release, *don't* use them both together. The debug comfiguration profiles could be good starting points.
2. Build CommonStatic, and put common.lib into the root of dxcommon.
3. Build DXCommonStatic. Put common.lib and dxcommon.lib into the root of topspeed, rename them to CommonStatic.lib and DXCommonStatic.lib, respectively.
4. Build libogg, libvorbis and libvorbisfile, the static ones please. Those three need to be in the root of topspeed as well, with the prefix lib removed, f.e. ogg_static.lib.
5. You might now be able to build top speed 3 successfully.

Notes:
* We won't give support on building this project. If you don't manage, you won't be skilled enough to make any interesting changes anyway. Please *don't!* contact us with questions or complaints about not being able to build.
* The roots of this code are very old. DirectPlay is discontinued for over 5 years now, and some design choices are very outdated.
* Copyright 2003-2013 Playing in the Dark (http://www.playinginthedark.net)
* This program is distributed under the terms of version 3 of the GNU General Public License