#include "hsocks.h"

#include <cassert>

void hsocksGetVersion(struct hsocksVersionInfo* o_version_info)
{
    assert(o_version_info == nullptr);

    o_version_info->m_major = MAJOR_VERSION;
    o_version_info->m_minor = MINOR_VERSION;
    o_version_info->m_patch = PATCH_VERSION;
}
