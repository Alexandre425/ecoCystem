

template<typename T> inline
T low_pass_filter(const T &val, const T &new_val, const float &K, const float &delta)
{
    float k = K * delta;
    return (val + k * new_val) / (1 + k);
}

template<typename T> inline
T low_pass_filter(const T &val, const T &new_val, const float &K)
{
    return K * val + (1 - K) * new_val;
}