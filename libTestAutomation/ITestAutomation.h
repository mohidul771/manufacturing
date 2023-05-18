#ifndef LIBTESTAUTOMATION_API
#ifdef _WIN32
#ifdef LIBTESTAUTOMATION_EXPORTS
#define LIBTESTAUTOMATION_API __declspec(dllexport)
#else
#define LIBTESTAUTOMATION_API __declspec(dllimport)
#endif
#else
#define LIBTESTAUTOMATION_API
#endif
#endif
