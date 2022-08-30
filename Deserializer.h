// Deserializer.h - Contains declarations of deserializer functions
#pragma once

#ifdef DESERIALIZER_EXPORTS
#define DESERIALIZER_API __declspec(dllexport)
#else
#define DESERIALIZER_API __declspec(dllimport)
#endif

extern "C" DESERIALIZER_API bool deserialize()
