#ifndef PAYLOAD_INFO_H
#define PAYLOAD_INFO_H

#include <stdint.h>
#include <string>
#include <map>
#include "nlohmann/json.hpp"

/** @brief 通用消息结构体 */
struct PayloadInfo
{
    nlohmann::json value;     /*! 数值 */
    bool valid;               /*! 是否有效 */
    std::string unit;         /*! 单位 */
    bool relative;            /*! false: 绝对值 true: 相对值 */
    long long time;           /*! unix 时间戳 精度ms */
    nlohmann::json extension; /*! 扩展数据 */

    PayloadInfo(nlohmann::json _value = 0,
                bool _valid = true,
                std::string _uinit = "",
                bool _relative = false,
                long long _time = 0,
                nlohmann::json _extension = nullptr)
    {
        value = _value;
        valid = _valid;
        unit = _uinit;
        relative = _relative;
        time = _time;
        extension = _extension;
    }

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(PayloadInfo, value, valid, unit, relative, time, extension);
};

#endif // !PAYLOAD_INFO_H
