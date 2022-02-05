#pragma once

/**
 * @brief Low pass filter compensating for delta time
 *
 * @tparam T Any type that can perform addition, multiplication and division, and multiplication with a scalar
 * @param val The current value
 * @param new_val The new sample
 * @param K The filter's constant
 * @param delta Delta time
 * @return T The new value
 */
template<typename T> inline
T low_pass_filter(const T &val, const T &new_val, const float &K, const float &delta)
{
    float k = K * delta;
    return (val + k * new_val) / (1 + k);
}

/**
 * @brief Low pass filter
 *
 * @tparam T Any type that can perform addition, multiplication and division, and multiplication with a scalar
 * @param val The current value
 * @param new_val The new sample
 * @param K The filter's constant
 * @return T The new value
 */
template<typename T> inline
T low_pass_filter(const T &val, const T &new_val, const float &K)
{
    return K * val + (1 - K) * new_val;
}