
#pragma once

template<typename T>
T Sum(const std::vector<T>& v)
{
    auto val = T();
    for (const auto& x : v)
        val += x;

    return val;
}

template<typename T>
bool Less(T a, T b)
{
    return a < b;
}

template<typename T, typename... Args>
bool Less(T a, T b, Args... args)
{
    return Less(a, b) && Less(b, args...);
}

