#pragma once

#if defined(_WIN32)
#define LSP_EXPORT LSP_EXPORT
#define LSP_IMPORT __declspec(dllimport)
#elif defined(__linux)
#define LSP_EXPORT __attribute__((visibility("default")))
#define LSP_IMPORT __attribute__((visibility("hidden")))
#endif