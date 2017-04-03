// MESSAGE LASER_DISTANCE support class

#pragma once

namespace mavlink {
namespace common {
namespace msg {

/**
 * @brief LASER_DISTANCE message
 *
 * New test message written by Clarence 
 */
struct LASER_DISTANCE : mavlink::Message {
    static constexpr msgid_t MSG_ID = 213;
    static constexpr size_t LENGTH = 16;
    static constexpr size_t MIN_LENGTH = 16;
    static constexpr uint8_t CRC_EXTRA = 216;
    static constexpr auto NAME = "LASER_DISTANCE";


    float min_distance; /*< minimum distance */
    float angle; /*< angle */
    float laser_x; /*< laser x */
    float laser_y; /*< laser y */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  min_distance: " << min_distance << std::endl;
        ss << "  angle: " << angle << std::endl;
        ss << "  laser_x: " << laser_x << std::endl;
        ss << "  laser_y: " << laser_y << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << min_distance;                  // offset: 0
        map << angle;                         // offset: 4
        map << laser_x;                       // offset: 8
        map << laser_y;                       // offset: 12
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> min_distance;                  // offset: 0
        map >> angle;                         // offset: 4
        map >> laser_x;                       // offset: 8
        map >> laser_y;                       // offset: 12
    }
};

} // namespace msg
} // namespace common
} // namespace mavlink
