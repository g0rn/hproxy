#ifndef HSOCKS_H
#define HSOCKS_H

#if defined WIN32
#   if defined(HSOCKS_EXPORT)
#      define HSOCKS_API __declspec(dllexport)
#   else
#      define HSOCKS_API __declspec(dllimport)
#   endif
#else
#   define HSOCKS_API
#endif

#if defined __cplusplus
extern "C" {
#endif

/**
 * Library version information.
 */
struct hsocksVersionInfo
{
    int m_major; /**< Major version part. */
    int m_minor; /**< Minor version part. */
    int m_patch; /**< Patch version part. */
};

/**
 * Get library version.
 * @param o_version_info current library version information.
 * @see hsocksVersionInfo
 */
HSOCKS_API void hsocksGetVersion(struct hsocksVersionInfo* o_version_info);
typedef void(hsocksGetVersionFunction)(struct hsocksVersionInfo*);

#if __cplusplus
}
#endif

#endif