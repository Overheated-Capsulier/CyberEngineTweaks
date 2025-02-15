#pragma once

#include "Type.h"

struct ResourceAsyncReference : ClassType
{
    ResourceAsyncReference(const TiltedPhoques::Locked<sol::state, std::recursive_mutex>& aView, 
                           RED4ext::CBaseRTTIType* apType, RED4ext::ResourceAsyncReference<void>* apReference);

    static uint64_t Hash(const std::string& aPath);

    virtual RED4ext::ScriptInstance GetHandle() const override;
    virtual RED4ext::ScriptInstance GetValuePtr() const override;

    uint64_t GetHash() const;
    sol::object GetLuaHash();

private:
    RED4ext::ResourceAsyncReference<void> m_reference;
};
