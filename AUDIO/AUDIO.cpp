#include "audio.h"
#include <windows.h>
#include <mmsystem.h>

#pragma comment (lib, "winmm.lib")

void SCARYAUDIO::SCARYPLAYSOUND(const std::wstring& path) {
    ::PlaySoundW(path.c_str(), NULL, SND_FILENAME | SND_ASYNC);
}